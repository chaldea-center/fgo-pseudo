void __fastcall BattleDebug___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E77B0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDebug_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_string___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_Queue_string__TypeInfo, v7, v8, v9);
    byte_42E77B0 = 1;
  }
  v10 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B5D694(System_Collections_Generic_Queue_string__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v10,
    (const MethodInfo_2B9DEAC *)Method_System_Collections_Generic_Queue_string___ctor__);
  static_fields = (BattleServantConfConponent_o *)BattleDebug_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall BattleDebug__CheckNull(System_String_o *errorText, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v4; // x0
  System_Exception_o *v5; // x20
  __int64 v6; // x0

  if ( !obj )
  {
    v4 = sub_B5D5C8(&System_Exception_TypeInfo);
    v5 = (System_Exception_o *)sub_B5D694(v4);
    System_Exception___ctor_16273052(v5, errorText, 0LL);
    v6 = sub_B5D5C8(&Method_BattleDebug_CheckNull__);
    sub_B5D668(v5, v6);
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


void __fastcall BattleDebug__Log_23254992(
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
    v8 = (System_String_o *)sub_B5D5C8(&StringLiteral_9153/*"Message:\n{0}\nStackTrace:\n{1}\n"*/);
    v4 = System_String__Format_44573324(v8, v6, v7, 0LL);
  }
  else
  {
    v4 = (System_String_o *)sub_B5D5C8(&StringLiteral_1/*""*/);
  }
  v9 = v4;
  v10 = (System_String_o *)sub_B5D5C8(&StringLiteral_26/*"\n"*/);
  v11 = System_String__Concat_44580072(errorText, v10, v9, 0LL);
  v12 = sub_B5D5C8(&System_Exception_TypeInfo);
  v13 = (System_Exception_o *)sub_B5D694(v12);
  System_Exception___ctor_16273052(v13, v11, 0LL);
  v14 = sub_B5D5C8(&Method_BattleDebug_OutputError__);
  sub_B5D668(v13, v14);
}


void __fastcall BattleDebug__Reset(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  BattleDebug_c *v7; // x0
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *logQueue; // x0

  if ( (byte_42E77AE & 1) == 0 )
  {
    sub_B5D5C4(&BattleDebug_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_string__Clear__, v4, v5, v6);
    byte_42E77AE = 1;
  }
  v7 = BattleDebug_TypeInfo;
  if ( (BYTE3(BattleDebug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v7 = BattleDebug_TypeInfo;
  }
  logQueue = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v7->static_fields->logQueue;
  if ( !logQueue )
    sub_B5D69C(0LL, v1);
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    logQueue,
    (const MethodInfo_2B9E140 *)Method_System_Collections_Generic_Queue_string__Clear__);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  __int64 v31; // x20
  System_Collections_Generic_Queue_string__o *logQueue; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  BattleDebug_c *v40; // x0
  BattleBuffData_BuffData_array *v41; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v43; // x21
  System_Array_o *All_BattleBuffData_BuffData; // x0
  System_String_array *v45; // x20

  if ( (byte_42E77AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_string___, tag, reverseFlg, method);
    sub_B5D5C4(&BattleDebug_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Predicate_string___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Predicate_string__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_string__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__, v19, v20, v21);
    sub_B5D5C4(&Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__, v22, v23, v24);
    sub_B5D5C4(&BattleDebug___c__DisplayClass7_0_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42E77AF = 1;
  }
  v31 = sub_B5D694(BattleDebug___c__DisplayClass7_0_TypeInfo);
  BattleDebug___c__DisplayClass7_0___ctor((BattleDebug___c__DisplayClass7_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_14;
  *(_QWORD *)(v31 + 24) = serchText;
  *(_DWORD *)(v31 + 16) = tag;
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)serchText, v34, v35, v36, v37, v38, v39);
  v40 = BattleDebug_TypeInfo;
  if ( (BYTE3(BattleDebug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDebug_TypeInfo);
    v40 = BattleDebug_TypeInfo;
  }
  logQueue = v40->static_fields->logQueue;
  if ( !logQueue )
    goto LABEL_14;
  logQueue = (System_Collections_Generic_Queue_string__o *)System_Collections_Generic_Queue_string___ToArray(
                                                             logQueue,
                                                             (const MethodInfo_2B9E89C *)Method_System_Collections_Generic_Queue_string__ToArray__);
  v41 = (BattleBuffData_BuffData_array *)logQueue;
  if ( *(_DWORD *)(v31 + 16) )
  {
    v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_string__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v42,
      (Il2CppObject *)v31,
      Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_string___ctor__);
    logQueue = (System_Collections_Generic_Queue_string__o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                               v41,
                                                               (System_Predicate_T__o *)v42,
                                                               (const MethodInfo_1FC072C *)Method_System_Array_FindAll_string___);
    v41 = (BattleBuffData_BuffData_array *)logQueue;
  }
  if ( !*(_QWORD *)(v31 + 24) )
LABEL_14:
    sub_B5D69C(logQueue, v33);
  v43 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_string__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v43,
    (Il2CppObject *)v31,
    Method_BattleDebug___c__DisplayClass7_0__getLoglist_b__1__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_string___ctor__);
  All_BattleBuffData_BuffData = (System_Array_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                    v41,
                                                    (System_Predicate_T__o *)v43,
                                                    (const MethodInfo_1FC072C *)Method_System_Array_FindAll_string___);
  v45 = (System_String_array *)All_BattleBuffData_BuffData;
  if ( reverseFlg )
    System_Array__Reverse(All_BattleBuffData_BuffData, 0LL);
  return v45;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleDebug___c__DisplayClass7_0_Fields *p_fields; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  Il2CppObject *v13; // x22

  if ( (byte_42E7C18 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDebug_TAG_TypeInfo, (_DWORD)s, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1525/*"<{0}>"*/, v6, v7, v8);
    byte_42E7C18 = 1;
  }
  p_fields = &this->fields;
  v10 = (System_String_o *)j_il2cpp_value_box_0(BattleDebug_TAG_TypeInfo, p_fields);
  if ( !v10
    || (v12 = v10,
        v13 = (Il2CppObject *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                v10,
                                v10->klass->vtable._4_CompareTo.methodPtr),
        p_fields->tag = *(_DWORD *)j_il2cpp_object_unbox_0(v12),
        v10 = System_String__Format((System_String_o *)StringLiteral_1525/*"<{0}>"*/, v13, 0LL),
        !s) )
  {
    sub_B5D69C(v10, v11);
  }
  return System_String__IndexOf_44650136(s, v10, 0LL) >= 0;
}


bool __fastcall BattleDebug___c__DisplayClass7_0___getLoglist_b__1(
        BattleDebug___c__DisplayClass7_0_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_42E7C19 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, (_DWORD)s, (_DWORD)method, v3);
    byte_42E7C19 = 1;
  }
  v6 = System_String__Format((System_String_o *)StringLiteral_23850/*"{0}"*/, (Il2CppObject *)this->fields.serchText, 0LL);
  if ( !s )
    sub_B5D69C(v6, v7);
  return System_String__IndexOf_44650136(s, v6, 0LL) >= 0;
}