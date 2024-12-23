void __fastcall BattleDebug___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B69146 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDebug_TypeInfo, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_Queue_string___ctor__, v2);
    sub_1BE4ACC(&System_Collections_Generic_Queue_string__TypeInfo, v3);
    byte_4B69146 = 1;
  }
  v4 = (System_Collections_Generic_Queue_T__o *)sub_1BE4D18(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v4,
    (const MethodInfo_375E55C *)Method_System_Collections_Generic_Queue_string___ctor__);
  BattleDebug_TypeInfo->static_fields->logQueue = (struct System_Collections_Generic_Queue_string__o *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)BattleDebug_TypeInfo->static_fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleDebug__CheckNull(System_String_o *errorText, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v4; // x0
  System_Exception_o *v5; // x20
  __int64 v6; // x0

  if ( !obj )
  {
    v4 = sub_1BE4AE0(&System_Exception_TypeInfo);
    v5 = (System_Exception_o *)sub_1BE4D18(v4);
    System_Exception___ctor_63740084(v5, errorText, 0LL);
    v6 = sub_1BE4AE0(&Method_BattleDebug_CheckNull__);
    sub_1BE4BF4(v5, v6);
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


void __fastcall BattleDebug__Log_43677988(
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
  System_Exception_o *v13; // x20
  __int64 v14; // x0

  if ( exception )
  {
    v6 = (Il2CppObject *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))exception->klass->vtable._5_get_Message.method)(
                           exception,
                           exception->klass->vtable._6_get_Data.methodPtr,
                           method);
    v7 = (Il2CppObject *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))exception->klass->vtable._9_get_StackTrace.method)(
                           exception,
                           exception->klass->vtable._10_get_Source.methodPtr);
    v8 = (System_String_o *)sub_1BE4AE0(&StringLiteral_9150/*"Message:\n{0}\nStackTrace:\n{1}\n"*/);
    v4 = System_String__Format_62713180(v8, v6, v7, 0LL);
  }
  else
  {
    v4 = (System_String_o *)sub_1BE4AE0(&StringLiteral_1/*""*/);
  }
  v9 = v4;
  v10 = (System_String_o *)sub_1BE4AE0(&StringLiteral_43/*"\n"*/);
  v11 = System_String__Concat_62710068(errorText, v10, v9, 0LL);
  v12 = sub_1BE4AE0(&System_Exception_TypeInfo);
  v13 = (System_Exception_o *)sub_1BE4D18(v12);
  System_Exception___ctor_63740084(v13, v11, 0LL);
  v14 = sub_1BE4AE0(&Method_BattleDebug_OutputError__);
  sub_1BE4BF4(v13, v14);
}


void __fastcall BattleDebug__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleDebug_c *v3; // x0
  System_Collections_Generic_Queue_T__o *logQueue; // x0

  if ( (byte_4B69144 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDebug_TypeInfo, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_Queue_string__Clear__, v2);
    byte_4B69144 = 1;
  }
  v3 = BattleDebug_TypeInfo;
  if ( !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v3 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_T__o *)v3->static_fields->logQueue;
  if ( !logQueue )
    sub_1BE4D28(0LL, v1);
  System_Collections_Generic_Queue_object___Clear(
    logQueue,
    (const MethodInfo_375E7E4 *)Method_System_Collections_Generic_Queue_string__Clear__);
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
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  BattleDebug_c *v24; // x0
  System_Object_array *v25; // x21
  System_Predicate_object__o *v26; // x23
  System_Predicate_object__o *v27; // x22
  System_Object_array *All_object; // x0
  System_String_array *v29; // x20

  if ( (byte_4B69145 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_FindAll_string___, *(_QWORD *)&tag);
    sub_1BE4ACC(&Method_System_Array_Reverse_string___, v7);
    sub_1BE4ACC(&BattleDebug_TypeInfo, v8);
    sub_1BE4ACC(&System_Predicate_string__TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Queue_string__ToArray__, v10);
    sub_1BE4ACC(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__, v11);
    sub_1BE4ACC(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__, v12);
    sub_1BE4ACC(&BattleDebug___c__DisplayClass7_0_TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v14);
    byte_4B69145 = 1;
  }
  v15 = sub_1BE4D18(BattleDebug___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  *(_QWORD *)(v15 + 24) = serchText;
  *(_DWORD *)(v15 + 16) = tag;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)serchText, v18, v19, v20, v21, v22, v23);
  v24 = BattleDebug_TypeInfo;
  if ( !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v24 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_T__o *)v24->static_fields->logQueue;
  if ( !logQueue )
    goto LABEL_13;
  logQueue = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___ToArray(
                                                        logQueue,
                                                        (const MethodInfo_375EE44 *)Method_System_Collections_Generic_Queue_string__ToArray__);
  v25 = (System_Object_array *)logQueue;
  if ( *(_DWORD *)(v15 + 16) )
  {
    v26 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_string__TypeInfo);
    System_Predicate_object____ctor(
      v26,
      (Il2CppObject *)v15,
      Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__,
      0LL);
    logQueue = (System_Collections_Generic_Queue_T__o *)System_Array__FindAll_object_(
                                                          v25,
                                                          (System_Predicate_T__o *)v26,
                                                          (const MethodInfo_305438C *)Method_System_Array_FindAll_string___);
    v25 = (System_Object_array *)logQueue;
  }
  if ( !*(_QWORD *)(v15 + 24) )
LABEL_13:
    sub_1BE4D28(logQueue, v17);
  v27 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_string__TypeInfo);
  System_Predicate_object____ctor(
    v27,
    (Il2CppObject *)v15,
    Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__,
    0LL);
  All_object = System_Array__FindAll_object_(
                 v25,
                 (System_Predicate_T__o *)v27,
                 (const MethodInfo_305438C *)Method_System_Array_FindAll_string___);
  v29 = (System_String_array *)All_object;
  if ( reverseFlg )
    System_Array__Reverse_object_(All_object, (const MethodInfo_2F1A8A4 *)Method_System_Array_Reverse_string___);
  return v29;
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
  __int64 v8; // x1
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t tag; // [xsp+18h] [xbp-38h]

  if ( (byte_4B69147 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDebug_TAG_TypeInfo, s);
    sub_1BE4ACC(&StringLiteral_1857/*"<{0}>"*/, v5);
    byte_4B69147 = 1;
  }
  v10.klass = (System_Enum_c *)BattleDebug_TAG_TypeInfo;
  v10.monitor = (void *)-1LL;
  tag = this->fields.tag;
  v6 = (Il2CppObject *)System_Enum__ToString(&v10, 0LL);
  v7 = System_String__Format((System_String_o *)StringLiteral_1857/*"<{0}>"*/, v6, 0LL);
  if ( !s )
    sub_1BE4D28(v7, v8);
  return System_String__IndexOf_62730384(s, v7, 0LL) >= 0;
}


bool __fastcall BattleDebug___c__DisplayClass7_0___getLoglist_b__1(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4B69148 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_25327/*"{0}"*/, s);
    byte_4B69148 = 1;
  }
  v5 = System_String__Format((System_String_o *)StringLiteral_25327/*"{0}"*/, (Il2CppObject *)this->fields.serchText, 0LL);
  if ( !s )
    sub_1BE4D28(v5, v6);
  return System_String__IndexOf_62730384(s, v5, 0LL) >= 0;
}