void __fastcall BattleDebug___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_421345E & 1) == 0 )
  {
    sub_B0D8A4(&BattleDebug_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_string___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_Queue_string__TypeInfo, v4);
    byte_421345E = 1;
  }
  v5 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B0D974(
                                                                       System_Collections_Generic_Queue_string__TypeInfo,
                                                                       v1,
                                                                       v2);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v5,
    (const MethodInfo_2B02AD0 *)Method_System_Collections_Generic_Queue_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)BattleDebug_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    v4 = sub_B0D8A8(&System_Exception_TypeInfo);
    v7 = (System_Exception_o *)sub_B0D974(v4, v5, v6);
    System_Exception___ctor_15634744(v7, errorText, 0LL);
    v8 = sub_B0D8A8(&Method_BattleDebug_CheckNull__);
    sub_B0D948(v7, v8);
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


void __fastcall BattleDebug__Log_22146552(
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
    v8 = (System_String_o *)sub_B0D8A8(&StringLiteral_9082/*"Message:\n{0}\nStackTrace:\n{1}\n"*/);
    v4 = System_String__Format_43845440(v8, v6, v7, 0LL);
  }
  else
  {
    v4 = (System_String_o *)sub_B0D8A8(&StringLiteral_1/*""*/);
  }
  v9 = v4;
  v10 = (System_String_o *)sub_B0D8A8(&StringLiteral_26/*"\n"*/);
  v11 = System_String__Concat_43852188(errorText, v10, v9, 0LL);
  v12 = sub_B0D8A8(&System_Exception_TypeInfo);
  v15 = (System_Exception_o *)sub_B0D974(v12, v13, v14);
  System_Exception___ctor_15634744(v15, v11, 0LL);
  v16 = sub_B0D8A8(&Method_BattleDebug_OutputError__);
  sub_B0D948(v15, v16);
}


void __fastcall BattleDebug__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleDebug_c *v3; // x0
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *logQueue; // x0

  if ( (byte_421345C & 1) == 0 )
  {
    sub_B0D8A4(&BattleDebug_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_string__Clear__, v2);
    byte_421345C = 1;
  }
  v3 = BattleDebug_TypeInfo;
  if ( (BYTE3(BattleDebug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v3 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v3->static_fields->logQueue;
  if ( !logQueue )
    sub_B0D97C(0LL);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    logQueue,
    (const MethodInfo_2B02D64 *)Method_System_Collections_Generic_Queue_string__Clear__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  System_Collections_Generic_Queue_string__o *logQueue; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleDebug_c *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  BattleBuffData_BuffData_array *v25; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x23

  if ( (byte_421345D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindAll_string___, *(_QWORD *)&tag);
    sub_B0D8A4(&BattleDebug_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Predicate_string___ctor__, v7);
    sub_B0D8A4(&System_Predicate_string__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_string__ToArray__, v9);
    sub_B0D8A4(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__, v10);
    sub_B0D8A4(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__, v11);
    sub_B0D8A4(&BattleDebug___c__DisplayClass7_0_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_421345D = 1;
  }
  v14 = sub_B0D974(BattleDebug___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&tag, reverseFlg);
  BattleDebug___c__DisplayClass7_0___ctor((BattleDebug___c__DisplayClass7_0_o *)v14, 0LL);
  if ( v14 )
  {
    *(_QWORD *)(v14 + 24) = serchText;
    *(_DWORD *)(v14 + 16) = tag;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v14 + 24),
      (System_Int32_array **)serchText,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = BattleDebug_TypeInfo;
    if ( (BYTE3(BattleDebug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleDebug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
      v22 = BattleDebug_TypeInfo;
    }
    logQueue = v22->static_fields->logQueue;
    if ( logQueue )
    {
      logQueue = (System_Collections_Generic_Queue_string__o *)System_Collections_Generic_Queue_string___ToArray(
                                                                 logQueue,
                                                                 (const MethodInfo_2B034C0 *)Method_System_Collections_Generic_Queue_string__ToArray__);
      v25 = (BattleBuffData_BuffData_array *)logQueue;
      if ( *(_DWORD *)(v14 + 16) )
      {
        v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_string__TypeInfo,
                                                                         v23,
                                                                         v24);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v26,
          (Il2CppObject *)v14,
          Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_string___ctor__);
        logQueue = (System_Collections_Generic_Queue_string__o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                                   v25,
                                                                   (System_Predicate_T__o *)v26,
                                                                   (const MethodInfo_1F68AE0 *)Method_System_Array_FindAll_string___);
      }
      if ( *(_QWORD *)(v14 + 24) )
        JUMPOUT(0x1538E08LL);
    }
  }
  sub_B0D97C(logQueue);
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
  BattleDebug___c__DisplayClass7_0_Fields *p_fields; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x21
  Il2CppObject *v9; // x22

  if ( (byte_42138ED & 1) == 0 )
  {
    sub_B0D8A4(&BattleDebug_TAG_TypeInfo, s);
    sub_B0D8A4(&StringLiteral_1512/*"<{0}>"*/, v5);
    byte_42138ED = 1;
  }
  p_fields = &this->fields;
  v7 = (System_String_o *)j_il2cpp_value_box_0(BattleDebug_TAG_TypeInfo, p_fields);
  if ( !v7
    || (v8 = v7,
        v9 = (Il2CppObject *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                               v7,
                               v7->klass->vtable._4_CompareTo.methodPtr),
        p_fields->tag = *(_DWORD *)j_il2cpp_object_unbox_0(v8),
        v7 = System_String__Format((System_String_o *)StringLiteral_1512/*"<{0}>"*/, v9, 0LL),
        !s) )
  {
    sub_B0D97C(v7);
  }
  return System_String__IndexOf_43922252(s, v7, 0LL) >= 0;
}


bool __fastcall BattleDebug___c__DisplayClass7_0___getLoglist_b__1(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_42138EE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, s);
    byte_42138EE = 1;
  }
  v5 = System_String__Format((System_String_o *)StringLiteral_23617/*"{0}"*/, (Il2CppObject *)this->fields.serchText, 0LL);
  if ( !s )
    sub_B0D97C(v5);
  return System_String__IndexOf_43922252(s, v5, 0LL) >= 0;
}