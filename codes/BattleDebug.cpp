void __fastcall BattleDebug___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F8C6A & 1) == 0 )
  {
    sub_B16FFC(&BattleDebug_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_string___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_Queue_string__TypeInfo, v6);
    byte_40F8C6A = 1;
  }
  v7 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B170CC(
                                                                       System_Collections_Generic_Queue_string__TypeInfo,
                                                                       v1,
                                                                       v2,
                                                                       v3,
                                                                       v4);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v7,
    (const MethodInfo_2B15EA4 *)Method_System_Collections_Generic_Queue_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)BattleDebug_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall BattleDebug__CheckNull(System_String_o *errorText, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Exception_o *v9; // x0
  __int64 v10; // x1

  if ( !obj )
  {
    v4 = sub_B17000(&System_Exception_TypeInfo, 0LL);
    v9 = (System_Exception_o *)sub_B170CC(v4, v5, v6, v7, v8);
    System_Exception___ctor_15880420(v9, errorText, 0LL);
    sub_B17000(&Method_BattleDebug_CheckNull__, v10);
    sub_B170A0();
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


void __fastcall BattleDebug__Log_22991324(
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
  __int64 v19; // x4
  System_Exception_o *v20; // x0
  __int64 v21; // x1

  if ( exception )
  {
    v7 = (Il2CppObject *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer, const MethodInfo *))exception->klass->vtable._5_get_Message.method)(
                           exception,
                           exception->klass->vtable._6_get_Data.methodPtr,
                           method);
    v8 = (Il2CppObject *)((__int64 (__fastcall *)(System_Exception_o *, Il2CppMethodPointer))exception->klass->vtable._9_get_StackTrace.method)(
                           exception,
                           exception->klass->vtable._10_get_Source.methodPtr);
    v10 = (System_String_o *)sub_B17000(&StringLiteral_9029/*"Message:\n{0}\nStackTrace:\n{1}\n"*/, v9);
    v4 = System_String__Format_43739268(v10, v7, v8, 0LL);
  }
  else
  {
    v4 = (System_String_o *)sub_B17000(&StringLiteral_1/*""*/, 0LL);
  }
  v11 = v4;
  v12 = (System_String_o *)sub_B17000(&StringLiteral_26/*"\n"*/, v5);
  v13 = System_String__Concat_43746016(errorText, v12, v11, 0LL);
  v15 = sub_B17000(&System_Exception_TypeInfo, v14);
  v20 = (System_Exception_o *)sub_B170CC(v15, v16, v17, v18, v19);
  System_Exception___ctor_15880420(v20, v13, 0LL);
  sub_B17000(&Method_BattleDebug_OutputError__, v21);
  sub_B170A0();
}


void __fastcall BattleDebug__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleDebug_c *v3; // x0
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *logQueue; // x0

  if ( (byte_40F8C68 & 1) == 0 )
  {
    sub_B16FFC(&BattleDebug_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_string__Clear__, v2);
    byte_40F8C68 = 1;
  }
  v3 = BattleDebug_TypeInfo;
  if ( (BYTE3(BattleDebug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v3 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v3->static_fields->logQueue;
  if ( !logQueue )
    sub_B170D4();
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    logQueue,
    (const MethodInfo_2B16138 *)Method_System_Collections_Generic_Queue_string__Clear__);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleDebug_c *v23; // x0
  System_Collections_Generic_Queue_string__o *logQueue; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BattleBuffData_BuffData_array *All_BattleBuffData_BuffData; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x21
  System_Array_o *v32; // x0
  System_String_array *v33; // x20

  if ( (byte_40F8C69 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_string___, *(_QWORD *)&tag);
    sub_B16FFC(&BattleDebug_TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_string___ctor__, v9);
    sub_B16FFC(&System_Predicate_string__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_string__ToArray__, v11);
    sub_B16FFC(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__, v12);
    sub_B16FFC(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__, v13);
    sub_B16FFC(&BattleDebug___c__DisplayClass7_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40F8C69 = 1;
  }
  v16 = sub_B170CC(BattleDebug___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&tag, reverseFlg, method, v4);
  BattleDebug___c__DisplayClass7_0___ctor((BattleDebug___c__DisplayClass7_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_14;
  *(_QWORD *)(v16 + 24) = serchText;
  *(_DWORD *)(v16 + 16) = tag;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)serchText, v17, v18, v19, v20, v21, v22);
  v23 = BattleDebug_TypeInfo;
  if ( (BYTE3(BattleDebug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v23 = BattleDebug_TypeInfo;
  }
  logQueue = v23->static_fields->logQueue;
  if ( !logQueue )
    goto LABEL_14;
  All_BattleBuffData_BuffData = (BattleBuffData_BuffData_array *)System_Collections_Generic_Queue_string___ToArray(
                                                                   logQueue,
                                                                   (const MethodInfo_2B16894 *)Method_System_Collections_Generic_Queue_string__ToArray__);
  if ( *(_DWORD *)(v16 + 16) )
  {
    v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_string__TypeInfo,
                                                                     v25,
                                                                     v26,
                                                                     v27,
                                                                     v28);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v30,
      (Il2CppObject *)v16,
      Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_string___ctor__);
    All_BattleBuffData_BuffData = System_Array__FindAll_BattleBuffData_BuffData_(
                                    All_BattleBuffData_BuffData,
                                    (System_Predicate_T__o *)v30,
                                    (const MethodInfo_2044520 *)Method_System_Array_FindAll_string___);
  }
  if ( !*(_QWORD *)(v16 + 24) )
LABEL_14:
    sub_B170D4();
  v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_string__TypeInfo,
                                                                   v25,
                                                                   v26,
                                                                   v27,
                                                                   v28);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v31,
    (Il2CppObject *)v16,
    Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_string___ctor__);
  v32 = (System_Array_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                            All_BattleBuffData_BuffData,
                            (System_Predicate_T__o *)v31,
                            (const MethodInfo_2044520 *)Method_System_Array_FindAll_string___);
  v33 = (System_String_array *)v32;
  if ( reverseFlg )
    System_Array__Reverse(v32, 0LL);
  return v33;
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
  __int64 v7; // x0
  __int64 v8; // x21
  Il2CppObject *v9; // x22
  System_String_o *v10; // x0

  if ( (byte_40F84FE & 1) == 0 )
  {
    sub_B16FFC(&BattleDebug_TAG_TypeInfo, s);
    sub_B16FFC(&StringLiteral_1502/*"<{0}>"*/, v5);
    byte_40F84FE = 1;
  }
  p_fields = &this->fields;
  v7 = j_il2cpp_value_box_0(BattleDebug_TAG_TypeInfo, p_fields);
  if ( !v7
    || (v8 = v7,
        v9 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 360LL))(
                               v7,
                               *(_QWORD *)(*(_QWORD *)v7 + 368LL)),
        p_fields->tag = *(_DWORD *)j_il2cpp_object_unbox_0(v8),
        v10 = System_String__Format((System_String_o *)StringLiteral_1502/*"<{0}>"*/, v9, 0LL),
        !s) )
  {
    sub_B170D4();
  }
  return System_String__IndexOf_43816080(s, v10, 0LL) >= 0;
}


bool __fastcall BattleDebug___c__DisplayClass7_0___getLoglist_b__1(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_40F84FF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23445/*"{0}"*/, s);
    byte_40F84FF = 1;
  }
  v5 = System_String__Format((System_String_o *)StringLiteral_23445/*"{0}"*/, (Il2CppObject *)this->fields.serchText, 0LL);
  if ( !s )
    sub_B170D4();
  return System_String__IndexOf_43816080(s, v5, 0LL) >= 0;
}