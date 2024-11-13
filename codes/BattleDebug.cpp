void __fastcall BattleDebug___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Queue_T__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B18706 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDebug_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Queue_string__TypeInfo, v6, v7);
    byte_4B18706 = 1;
  }
  v8 = (System_Collections_Generic_Queue_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_Queue_string__TypeInfo,
                                                  v1,
                                                  v2,
                                                  v3);
  System_Collections_Generic_Queue_object____ctor(
    v8,
    (const MethodInfo_3713DF0 *)Method_System_Collections_Generic_Queue_string___ctor__);
  BattleDebug_TypeInfo->static_fields->logQueue = (struct System_Collections_Generic_Queue_string__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleDebug_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall BattleDebug__CheckNull(System_String_o *errorText, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  System_Exception_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x0

  if ( !obj )
  {
    v4 = sub_1BCA7F4(&System_Exception_TypeInfo, 0LL);
    v8 = (System_Exception_o *)sub_1BCAA2C(v4, v5, v6, v7);
    System_Exception___ctor_63442328(v8, errorText, 0LL);
    v10 = sub_1BCA7F4(&Method_BattleDebug_CheckNull__, v9);
    sub_1BCA908(v8, v10);
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


void __fastcall BattleDebug__Log_43422588(
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
  __int64 v5; // x1
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x20
  __int64 v9; // x1
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Exception_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x0

  if ( exception )
  {
    v7 = (Il2CppObject *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))exception->klass->vtable._5_get_Message.method)(
                           exception,
                           exception->klass->vtable._6_get_Data.methodPtr,
                           method);
    v8 = (Il2CppObject *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))exception->klass->vtable._9_get_StackTrace.method)(
                           exception,
                           exception->klass->vtable._10_get_Source.methodPtr);
    v10 = (System_String_o *)sub_1BCA7F4(&StringLiteral_9129/*"Message:\n{0}\nStackTrace:\n{1}\n"*/, v9);
    v4 = System_String__Format_62415592(v10, v7, v8, 0LL);
  }
  else
  {
    v4 = (System_String_o *)sub_1BCA7F4(&StringLiteral_1/*""*/, 0LL);
  }
  v11 = v4;
  v12 = (System_String_o *)sub_1BCA7F4(&StringLiteral_43/*"\n"*/, v5);
  v13 = System_String__Concat_62412480(errorText, v12, v11, 0LL);
  v15 = sub_1BCA7F4(&System_Exception_TypeInfo, v14);
  v19 = (System_Exception_o *)sub_1BCAA2C(v15, v16, v17, v18);
  System_Exception___ctor_63442328(v19, v13, 0LL);
  v21 = sub_1BCA7F4(&Method_BattleDebug_OutputError__, v20);
  sub_1BCA908(v19, v21);
}


void __fastcall BattleDebug__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  BattleDebug_c *v5; // x0
  System_Collections_Generic_Queue_T__o *logQueue; // x0

  if ( (byte_4B18704 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDebug_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_string__Clear__, v3, v4);
    byte_4B18704 = 1;
  }
  v5 = BattleDebug_TypeInfo;
  if ( !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo, v1);
    v5 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_T__o *)v5->static_fields->logQueue;
  if ( !logQueue )
    sub_1BCAA3C(0LL, v1);
  System_Collections_Generic_Queue_object___Clear(
    logQueue,
    (const MethodInfo_3714078 *)Method_System_Collections_Generic_Queue_string__Clear__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x20
  System_Collections_Generic_Queue_T__o *logQueue; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  BattleDebug_c *v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  System_Object_array *v35; // x21
  System_Predicate_object__o *v36; // x23
  System_Predicate_object__o *v37; // x22
  System_Object_array *All_object; // x0
  System_String_array *v39; // x20

  if ( (byte_4B18705 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindAll_string___, *(_QWORD *)&tag, reverseFlg);
    sub_1BCA7E0(&Method_System_Array_Reverse_string___, v7, v8);
    sub_1BCA7E0(&BattleDebug_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Predicate_string__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_string__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__, v15, v16);
    sub_1BCA7E0(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__, v17, v18);
    sub_1BCA7E0(&BattleDebug___c__DisplayClass7_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B18705 = 1;
  }
  v23 = sub_1BCAA2C(BattleDebug___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&tag, reverseFlg, method);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_13;
  *(_QWORD *)(v23 + 24) = serchText;
  *(_DWORD *)(v23 + 16) = tag;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)serchText, v26, v27, v28, v29, v30, v31);
  v32 = BattleDebug_TypeInfo;
  if ( !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo, v25);
    v32 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_T__o *)v32->static_fields->logQueue;
  if ( !logQueue )
    goto LABEL_13;
  logQueue = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___ToArray(
                                                        logQueue,
                                                        (const MethodInfo_37146D8 *)Method_System_Collections_Generic_Queue_string__ToArray__);
  v35 = (System_Object_array *)logQueue;
  if ( *(_DWORD *)(v23 + 16) )
  {
    v36 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_string__TypeInfo, v25, v33, v34);
    System_Predicate_object____ctor(
      v36,
      (Il2CppObject *)v23,
      Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__,
      0LL);
    logQueue = (System_Collections_Generic_Queue_T__o *)System_Array__FindAll_object_(
                                                          v35,
                                                          (System_Predicate_T__o *)v36,
                                                          (const MethodInfo_300CF94 *)Method_System_Array_FindAll_string___);
    v35 = (System_Object_array *)logQueue;
  }
  if ( !*(_QWORD *)(v23 + 24) )
LABEL_13:
    sub_1BCAA3C(logQueue, v25);
  v37 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_string__TypeInfo, v25, v33, v34);
  System_Predicate_object____ctor(
    v37,
    (Il2CppObject *)v23,
    Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__,
    0LL);
  All_object = System_Array__FindAll_object_(
                 v35,
                 (System_Predicate_T__o *)v37,
                 (const MethodInfo_300CF94 *)Method_System_Array_FindAll_string___);
  v39 = (System_String_array *)All_object;
  if ( reverseFlg )
    System_Array__Reverse_object_(All_object, (const MethodInfo_2ED4510 *)Method_System_Array_Reverse_string___);
  return v39;
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
  __int64 v6; // x2
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int32_t tag; // [xsp+18h] [xbp-38h]

  if ( (byte_4B18707 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDebug_TAG_TypeInfo, s, method);
    sub_1BCA7E0(&StringLiteral_1848/*"<{0}>"*/, v5, v6);
    byte_4B18707 = 1;
  }
  v11.klass = (System_Enum_c *)BattleDebug_TAG_TypeInfo;
  v11.monitor = (void *)-1LL;
  tag = this->fields.tag;
  v7 = (Il2CppObject *)System_Enum__ToString(&v11, 0LL);
  v8 = System_String__Format((System_String_o *)StringLiteral_1848/*"<{0}>"*/, v7, 0LL);
  if ( !s )
    sub_1BCAA3C(v8, v9);
  return System_String__IndexOf_62432796(s, v8, 0LL) >= 0;
}


bool __fastcall BattleDebug___c__DisplayClass7_0___getLoglist_b__1(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4B18708 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, s, method);
    byte_4B18708 = 1;
  }
  v5 = System_String__Format((System_String_o *)StringLiteral_25238/*"{0}"*/, (Il2CppObject *)this->fields.serchText, 0LL);
  if ( !s )
    sub_1BCAA3C(v5, v6);
  return System_String__IndexOf_62432796(s, v5, 0LL) >= 0;
}