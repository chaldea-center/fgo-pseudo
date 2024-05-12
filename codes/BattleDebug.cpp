void __fastcall BattleDebug___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389B4F & 1) == 0 )
  {
    sub_B775C4(&BattleDebug_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_string___ctor__);
    sub_B775C4(&System_Collections_Generic_Queue_string__TypeInfo);
    byte_4389B4F = 1;
  }
  v1 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B77694(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v1,
    (const MethodInfo_2F22A90 *)Method_System_Collections_Generic_Queue_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)BattleDebug_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleDebug__CheckNull(System_String_o *errorText, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v4; // x0
  System_Exception_o *v5; // x20
  __int64 v6; // x0

  if ( !obj )
  {
    v4 = sub_B775C8(&System_Exception_TypeInfo);
    v5 = (System_Exception_o *)sub_B77694(v4);
    System_Exception___ctor_16399912(v5, errorText, 0LL);
    v6 = sub_B775C8(&Method_BattleDebug_CheckNull__);
    sub_B77668(v5, v6);
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


void __fastcall BattleDebug__Log_22872540(
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
    v8 = (System_String_o *)sub_B775C8(&StringLiteral_9226/*"Message:\n{0}\nStackTrace:\n{1}\n"*/);
    v4 = System_String__Format_44897472(v8, v6, v7, 0LL);
  }
  else
  {
    v4 = (System_String_o *)sub_B775C8(&StringLiteral_1/*""*/);
  }
  v9 = v4;
  v10 = (System_String_o *)sub_B775C8(&StringLiteral_26/*"\n"*/);
  v11 = System_String__Concat_44904220(errorText, v10, v9, 0LL);
  v12 = sub_B775C8(&System_Exception_TypeInfo);
  v13 = (System_Exception_o *)sub_B77694(v12);
  System_Exception___ctor_16399912(v13, v11, 0LL);
  v14 = sub_B775C8(&Method_BattleDebug_OutputError__);
  sub_B77668(v13, v14);
}


void __fastcall BattleDebug__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDebug_c *v2; // x0
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *logQueue; // x0

  if ( (byte_4389B4D & 1) == 0 )
  {
    sub_B775C4(&BattleDebug_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_string__Clear__);
    byte_4389B4D = 1;
  }
  v2 = BattleDebug_TypeInfo;
  if ( (BYTE3(BattleDebug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v2 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v2->static_fields->logQueue;
  if ( !logQueue )
    sub_B7769C(0LL, v1);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    logQueue,
    (const MethodInfo_2F22D24 *)Method_System_Collections_Generic_Queue_string__Clear__);
}


void __fastcall BattleDebug__WarningLog(System_String_o *str, const MethodInfo *method)
{
  ;
}


System_String_array *__fastcall BattleDebug__getLoglist(
        System_String_o *serchText,
        int32_t tag,
        bool reverseFlg,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_Queue_string__o *logQueue; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleDebug_c *v16; // x0
  BattleBuffData_BuffData_array *v17; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x21
  System_Array_o *All_BattleBuffData_BuffData; // x0
  System_String_array *v21; // x20

  if ( (byte_4389B4E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_FindAll_string___);
    sub_B775C4(&BattleDebug_TypeInfo);
    sub_B775C4(&Method_System_Predicate_string___ctor__);
    sub_B775C4(&System_Predicate_string__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_string__ToArray__);
    sub_B775C4(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__);
    sub_B775C4(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__);
    sub_B775C4(&BattleDebug___c__DisplayClass7_0_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389B4E = 1;
  }
  v7 = sub_B77694(BattleDebug___c__DisplayClass7_0_TypeInfo);
  BattleDebug___c__DisplayClass7_0___ctor((BattleDebug___c__DisplayClass7_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = serchText;
  *(_DWORD *)(v7 + 16) = tag;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)serchText, v10, v11, v12, v13, v14, v15);
  v16 = BattleDebug_TypeInfo;
  if ( (BYTE3(BattleDebug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v16 = BattleDebug_TypeInfo;
  }
  logQueue = v16->static_fields->logQueue;
  if ( !logQueue )
    goto LABEL_14;
  logQueue = (System_Collections_Generic_Queue_string__o *)System_Collections_Generic_Queue_string___ToArray(
                                                             logQueue,
                                                             (const MethodInfo_2F23480 *)Method_System_Collections_Generic_Queue_string__ToArray__);
  v17 = (BattleBuffData_BuffData_array *)logQueue;
  if ( *(_DWORD *)(v7 + 16) )
  {
    v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_string__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v18,
      (Il2CppObject *)v7,
      Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_string___ctor__);
    logQueue = (System_Collections_Generic_Queue_string__o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                               v17,
                                                               (System_Predicate_T__o *)v18,
                                                               (const MethodInfo_20043F0 *)Method_System_Array_FindAll_string___);
    v17 = (BattleBuffData_BuffData_array *)logQueue;
  }
  if ( !*(_QWORD *)(v7 + 24) )
LABEL_14:
    sub_B7769C(logQueue, v9);
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_string__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v19,
    (Il2CppObject *)v7,
    Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_string___ctor__);
  All_BattleBuffData_BuffData = (System_Array_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                    v17,
                                                    (System_Predicate_T__o *)v19,
                                                    (const MethodInfo_20043F0 *)Method_System_Array_FindAll_string___);
  v21 = (System_String_array *)All_BattleBuffData_BuffData;
  if ( reverseFlg )
    System_Array__Reverse(All_BattleBuffData_BuffData, 0LL);
  return v21;
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
  BattleDebug___c__DisplayClass7_0_Fields *p_fields; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  Il2CppObject *v9; // x22

  if ( (byte_438ABAA & 1) == 0 )
  {
    sub_B775C4(&BattleDebug_TAG_TypeInfo);
    sub_B775C4(&StringLiteral_1532/*"<{0}>"*/);
    byte_438ABAA = 1;
  }
  p_fields = &this->fields;
  v6 = (System_String_o *)j_il2cpp_value_box_0(BattleDebug_TAG_TypeInfo, p_fields, method);
  if ( !v6
    || (v8 = v6,
        v9 = (Il2CppObject *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                               v6,
                               v6->klass->vtable._4_CompareTo.methodPtr),
        p_fields->tag = *(_DWORD *)j_il2cpp_object_unbox_0(v8),
        v6 = System_String__Format((System_String_o *)StringLiteral_1532/*"<{0}>"*/, v9, 0LL),
        !s) )
  {
    sub_B7769C(v6, v7);
  }
  return System_String__IndexOf_44974284(s, v6, 0LL) >= 0;
}


bool __fastcall BattleDebug___c__DisplayClass7_0___getLoglist_b__1(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1

  if ( (byte_438ABAB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    byte_438ABAB = 1;
  }
  v5 = System_String__Format((System_String_o *)StringLiteral_24025/*"{0}"*/, (Il2CppObject *)this->fields.serchText, 0LL);
  if ( !s )
    sub_B7769C(v5, v6);
  return System_String__IndexOf_44974284(s, v5, 0LL) >= 0;
}