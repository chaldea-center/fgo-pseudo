void __fastcall BattleDebug___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418683B & 1) == 0 )
  {
    sub_B2C35C(&BattleDebug_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_string___ctor__, v2);
    sub_B2C35C(&System_Collections_Generic_Queue_string__TypeInfo, v3);
    byte_418683B = 1;
  }
  v4 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B2C42C(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v4,
    (const MethodInfo_295D884 *)Method_System_Collections_Generic_Queue_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)BattleDebug_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall BattleDebug__CheckNull(System_String_o *errorText, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v4; // x0
  System_Exception_o *v5; // x20
  __int64 v6; // x0

  if ( !obj )
  {
    v4 = sub_B2C360(&System_Exception_TypeInfo);
    v5 = (System_Exception_o *)sub_B2C42C(v4);
    System_Exception___ctor_15978392(v5, errorText, 0LL);
    v6 = sub_B2C360(&Method_BattleDebug_CheckNull__);
    sub_B2C400(v5, v6);
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


void __fastcall BattleDebug__Log_22982784(
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
    v8 = (System_String_o *)sub_B2C360(&StringLiteral_9059/*"Message:\n{0}\nStackTrace:\n{1}\n"*/);
    v4 = System_String__Format_44301068(v8, v6, v7, 0LL);
  }
  else
  {
    v4 = (System_String_o *)sub_B2C360(&StringLiteral_1/*""*/);
  }
  v9 = v4;
  v10 = (System_String_o *)sub_B2C360(&StringLiteral_26/*"\n"*/);
  v11 = System_String__Concat_44307816(errorText, v10, v9, 0LL);
  v12 = sub_B2C360(&System_Exception_TypeInfo);
  v13 = (System_Exception_o *)sub_B2C42C(v12);
  System_Exception___ctor_15978392(v13, v11, 0LL);
  v14 = sub_B2C360(&Method_BattleDebug_OutputError__);
  sub_B2C400(v13, v14);
}


void __fastcall BattleDebug__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleDebug_c *v3; // x0
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *logQueue; // x0

  if ( (byte_4186839 & 1) == 0 )
  {
    sub_B2C35C(&BattleDebug_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_string__Clear__, v2);
    byte_4186839 = 1;
  }
  v3 = BattleDebug_TypeInfo;
  if ( (BYTE3(BattleDebug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v3 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v3->static_fields->logQueue;
  if ( !logQueue )
    sub_B2C434(0LL, v1);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    logQueue,
    (const MethodInfo_295DB18 *)Method_System_Collections_Generic_Queue_string__Clear__);
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
  System_Collections_Generic_Queue_string__o *logQueue; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleDebug_c *v24; // x0
  BattleBuffData_BuffData_array *v25; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x21
  System_Array_o *All_BattleBuffData_BuffData; // x0
  System_String_array *v29; // x20

  if ( (byte_418683A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindAll_string___, *(_QWORD *)&tag);
    sub_B2C35C(&BattleDebug_TypeInfo, v7);
    sub_B2C35C(&Method_System_Predicate_string___ctor__, v8);
    sub_B2C35C(&System_Predicate_string__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_string__ToArray__, v10);
    sub_B2C35C(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__, v11);
    sub_B2C35C(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__, v12);
    sub_B2C35C(&BattleDebug___c__DisplayClass7_0_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_418683A = 1;
  }
  v15 = sub_B2C42C(BattleDebug___c__DisplayClass7_0_TypeInfo);
  BattleDebug___c__DisplayClass7_0___ctor((BattleDebug___c__DisplayClass7_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_14;
  *(_QWORD *)(v15 + 24) = serchText;
  *(_DWORD *)(v15 + 16) = tag;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)serchText, v18, v19, v20, v21, v22, v23);
  v24 = BattleDebug_TypeInfo;
  if ( (BYTE3(BattleDebug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v24 = BattleDebug_TypeInfo;
  }
  logQueue = v24->static_fields->logQueue;
  if ( !logQueue )
    goto LABEL_14;
  logQueue = (System_Collections_Generic_Queue_string__o *)System_Collections_Generic_Queue_string___ToArray(
                                                             logQueue,
                                                             (const MethodInfo_295E274 *)Method_System_Collections_Generic_Queue_string__ToArray__);
  v25 = (BattleBuffData_BuffData_array *)logQueue;
  if ( *(_DWORD *)(v15 + 16) )
  {
    v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_string__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v26,
      (Il2CppObject *)v15,
      Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_string___ctor__);
    logQueue = (System_Collections_Generic_Queue_string__o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                               v25,
                                                               (System_Predicate_T__o *)v26,
                                                               (const MethodInfo_1FFC4EC *)Method_System_Array_FindAll_string___);
    v25 = (BattleBuffData_BuffData_array *)logQueue;
  }
  if ( !*(_QWORD *)(v15 + 24) )
LABEL_14:
    sub_B2C434(logQueue, v17);
  v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_string__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v27,
    (Il2CppObject *)v15,
    Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_string___ctor__);
  All_BattleBuffData_BuffData = (System_Array_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                    v25,
                                                    (System_Predicate_T__o *)v27,
                                                    (const MethodInfo_1FFC4EC *)Method_System_Array_FindAll_string___);
  v29 = (System_String_array *)All_BattleBuffData_BuffData;
  if ( reverseFlg )
    System_Array__Reverse(All_BattleBuffData_BuffData, 0LL);
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
  BattleDebug___c__DisplayClass7_0_Fields *p_fields; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  Il2CppObject *v10; // x22

  if ( (byte_4186A60 & 1) == 0 )
  {
    sub_B2C35C(&BattleDebug_TAG_TypeInfo, s);
    sub_B2C35C(&StringLiteral_1504/*"<{0}>"*/, v5);
    byte_4186A60 = 1;
  }
  p_fields = &this->fields;
  v7 = (System_String_o *)j_il2cpp_value_box_0(BattleDebug_TAG_TypeInfo, p_fields);
  if ( !v7
    || (v9 = v7,
        v10 = (Il2CppObject *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v7->klass->vtable._3_ToString.method)(
                                v7,
                                v7->klass->vtable._4_CompareTo.methodPtr),
        p_fields->tag = *(_DWORD *)j_il2cpp_object_unbox_0(v9),
        v7 = System_String__Format((System_String_o *)StringLiteral_1504/*"<{0}>"*/, v10, 0LL),
        !s) )
  {
    sub_B2C434(v7, v8);
  }
  return System_String__IndexOf_44377880(s, v7, 0LL) >= 0;
}


bool __fastcall BattleDebug___c__DisplayClass7_0___getLoglist_b__1(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_4186A61 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, s);
    byte_4186A61 = 1;
  }
  v5 = System_String__Format((System_String_o *)StringLiteral_23539/*"{0}"*/, (Il2CppObject *)this->fields.serchText, 0LL);
  if ( !s )
    sub_B2C434(v5, v6);
  return System_String__IndexOf_44377880(s, v5, 0LL) >= 0;
}