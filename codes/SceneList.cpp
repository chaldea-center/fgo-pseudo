void __fastcall SceneList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v37; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_40FC8FB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo, v6);
    sub_B16FFC(&SceneList_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_2773, v8);
    sub_B16FFC(&StringLiteral_13103, v9);
    sub_B16FFC(&StringLiteral_10561, v10);
    sub_B16FFC(&StringLiteral_3991, v11);
    sub_B16FFC(&StringLiteral_15365, v12);
    sub_B16FFC(&StringLiteral_8940, v13);
    sub_B16FFC(&StringLiteral_3990, v14);
    sub_B16FFC(&StringLiteral_12663, v15);
    sub_B16FFC(&StringLiteral_6706, v16);
    sub_B16FFC(&StringLiteral_13107, v17);
    sub_B16FFC(&StringLiteral_12656, v18);
    sub_B16FFC(&StringLiteral_7589, v19);
    sub_B16FFC(&StringLiteral_6173, v20);
    sub_B16FFC(&StringLiteral_8942, v21);
    sub_B16FFC(&StringLiteral_6779, v22);
    sub_B16FFC(&StringLiteral_6737, v23);
    sub_B16FFC(&StringLiteral_12790, v24);
    sub_B16FFC(&StringLiteral_15360, v25);
    sub_B16FFC(&StringLiteral_2772, v26);
    sub_B16FFC(&StringLiteral_2765, v27);
    sub_B16FFC(&StringLiteral_5176, v28);
    sub_B16FFC(&StringLiteral_13570, v29);
    sub_B16FFC(&StringLiteral_5899, v30);
    sub_B16FFC(&StringLiteral_13113, v31);
    sub_B16FFC(&StringLiteral_4140, v32);
    sub_B16FFC(&StringLiteral_1, v33);
    sub_B16FFC(&StringLiteral_9232, v34);
    sub_B16FFC(&StringLiteral_14418, v35);
    sub_B16FFC(&StringLiteral_4102, v36);
    byte_40FC8FB = 1;
  }
  v37 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo,
                                                                           v1,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v37,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v37 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    -1,
    (System_String_o *)StringLiteral_1,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    0,
    (System_String_o *)StringLiteral_7589,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    4,
    (System_String_o *)StringLiteral_5176,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    9,
    (System_String_o *)StringLiteral_14418,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    10,
    (System_String_o *)StringLiteral_2772,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    20,
    (System_String_o *)StringLiteral_13107,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    22,
    (System_String_o *)StringLiteral_12790,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    23,
    (System_String_o *)StringLiteral_6779,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    30,
    (System_String_o *)StringLiteral_9232,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    32,
    (System_String_o *)StringLiteral_4140,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    34,
    (System_String_o *)StringLiteral_13570,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    35,
    (System_String_o *)StringLiteral_6706,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    38,
    (System_String_o *)StringLiteral_2773,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    39,
    (System_String_o *)StringLiteral_6737,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    40,
    (System_String_o *)StringLiteral_10561,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    41,
    (System_String_o *)StringLiteral_12663,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    42,
    (System_String_o *)StringLiteral_12656,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    44,
    (System_String_o *)StringLiteral_8940,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    50,
    (System_String_o *)StringLiteral_2765,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    60,
    (System_String_o *)StringLiteral_13113,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    71,
    (System_String_o *)StringLiteral_15365,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    72,
    (System_String_o *)StringLiteral_6173,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    1000,
    (System_String_o *)StringLiteral_5899,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    1001,
    (System_String_o *)StringLiteral_13103,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    80,
    (System_String_o *)StringLiteral_15360,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    90,
    (System_String_o *)StringLiteral_4102,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    91,
    (System_String_o *)StringLiteral_3990,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    92,
    (System_String_o *)StringLiteral_3991,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v37,
    100,
    (System_String_o *)StringLiteral_8942,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  static_fields = (BattleServantConfConponent_o *)SceneList_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v37;
  sub_B16F98(static_fields, (System_Int32_array **)v37, v39, v40, v41, v42, v43, v44);
}


void __fastcall SceneList___ctor(SceneList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SceneList__getSceneName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SceneList_c *v5; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *nameList; // x0
  SceneList_c *v7; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v8; // x0

  if ( (byte_40FC8F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__, v3);
    sub_B16FFC(&SceneList_TypeInfo, v4);
    byte_40FC8F9 = 1;
  }
  v5 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v5 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->nameList;
  if ( !nameList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         nameList,
         type,
         (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
  {
    v7 = SceneList_TypeInfo;
    if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      v7 = SceneList_TypeInfo;
    }
    v8 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v7->static_fields->nameList;
    if ( v8 )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               v8,
               type,
               (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_14:
    sub_B170D4();
  }
  return 0LL;
}


int32_t __fastcall SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  SceneList_c *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_KeyValuePair_SceneList_Type__string___bool__o *v25; // x21

  if ( (byte_40FC8FA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____, method);
    sub_B16FFC(&Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__, v6);
    sub_B16FFC(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__, v8);
    sub_B16FFC(&SceneList_TypeInfo, v9);
    sub_B16FFC(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__, v10);
    sub_B16FFC(&SceneList___c__DisplayClass3_0_TypeInfo, v11);
    byte_40FC8FA = 1;
  }
  v12 = sub_B170CC(SceneList___c__DisplayClass3_0_TypeInfo, method, v2, v3, v4);
  SceneList___c__DisplayClass3_0___ctor((SceneList___c__DisplayClass3_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = name;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)name, v13, v14, v15, v16, v17, v18);
  v23 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v23 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v23->static_fields->nameList;
  v25 = (System_Func_KeyValuePair_SceneList_Type__string___bool__o *)sub_B170CC(
                                                                       System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo,
                                                                       v19,
                                                                       v20,
                                                                       v21,
                                                                       v22);
  System_Func_KeyValuePair_SceneList_Type__string___bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    (const MethodInfo_2B5F1BC *)Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_SceneList_Type__string__(
           nameList,
           (System_Func_TSource__bool__o *)v25,
           (const MethodInfo_18D80F4 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
}


void __fastcall SceneList___c__DisplayClass3_0___ctor(SceneList___c__DisplayClass3_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SceneList___c__DisplayClass3_0___getSceneType_b__0(
        SceneList___c__DisplayClass3_0_o *this,
        System_Collections_Generic_KeyValuePair_SceneList_Type__string__o c,
        const MethodInfo *method)
{
  System_String_o *value; // x19

  value = c.fields.value;
  if ( (byte_40F7438 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__,
      *(_QWORD *)&c.fields.key);
    byte_40F7438 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}