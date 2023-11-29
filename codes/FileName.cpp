void __fastcall FileName___cctor(const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v14; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v26; // x19
  struct FileName_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct FileName_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct FileName_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_40F8E8E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo, v6);
    sub_B16FFC(&FileName_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_18124, v8);
    sub_B16FFC(&StringLiteral_18108, v9);
    sub_B16FFC(&StringLiteral_19303, v10);
    sub_B16FFC(&StringLiteral_18123, v11);
    sub_B16FFC(&StringLiteral_19267, v12);
    sub_B16FFC(&StringLiteral_18125, v13);
    byte_40F8E8E = 1;
  }
  v14 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo,
                                                                           v1,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v14,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v14 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v14,
    0,
    0LL,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v14,
    1,
    (System_String_o *)StringLiteral_18124,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v14,
    2,
    (System_String_o *)StringLiteral_18125,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v14,
    3,
    (System_String_o *)StringLiteral_18123,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  static_fields = (BattleServantConfConponent_o *)FileName_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v14;
  sub_B16F98(static_fields, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
  v26 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__TypeInfo,
                                                                           v22,
                                                                           v23,
                                                                           v24,
                                                                           v25);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v26,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string___ctor__);
  if ( !v26 )
LABEL_6:
    sub_B170D4();
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v26,
    0,
    0LL,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v26,
    1,
    (System_String_o *)StringLiteral_18108,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v26,
    2,
    (System_String_o *)StringLiteral_18108,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v26,
    3,
    (System_String_o *)StringLiteral_18108,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__Add__);
  v27 = FileName_TypeInfo->static_fields;
  v27->criticaleffectlist = (struct System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__o *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v27->criticaleffectlist,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = FileName_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_19303;
  v34->friendIconName = (struct System_String_o *)StringLiteral_19303;
  sub_B16F98((BattleServantConfConponent_o *)&v34->friendIconName, v35, v36, v37, v38, v39, v40, v41);
  v42 = FileName_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_19267;
  v42->eventJoinIconName = (struct System_String_o *)StringLiteral_19267;
  sub_B16F98((BattleServantConfConponent_o *)&v42->eventJoinIconName, v43, v44, v45, v46, v47, v48, v49);
}


void __fastcall FileName___ctor(FileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall FileName__getCriticalEffectName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FileName_c *v5; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *criticaleffectlist; // x0
  FileName_c *v7; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v8; // x0

  if ( (byte_40F8E8D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_B16FFC(&FileName_TypeInfo, v4);
    byte_40F8E8D = 1;
  }
  v5 = FileName_TypeInfo;
  if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v5 = FileName_TypeInfo;
  }
  criticaleffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->criticaleffectlist;
  if ( !criticaleffectlist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         criticaleffectlist,
         type,
         (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v7 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v7 = FileName_TypeInfo;
    }
    v8 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v7->static_fields->criticaleffectlist;
    if ( v8 )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               v8,
               type,
               (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_14:
    sub_B170D4();
  }
  return 0LL;
}


System_String_o *__fastcall FileName__getEffectName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FileName_c *v5; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *hiteffectlist; // x0
  FileName_c *v7; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v8; // x0

  if ( (byte_40F8E8C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__, v3);
    sub_B16FFC(&FileName_TypeInfo, v4);
    byte_40F8E8C = 1;
  }
  v5 = FileName_TypeInfo;
  if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    v5 = FileName_TypeInfo;
  }
  hiteffectlist = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->hiteffectlist;
  if ( !hiteffectlist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         hiteffectlist,
         type,
         (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__ContainsKey__) )
  {
    v7 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      v7 = FileName_TypeInfo;
    }
    v8 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v7->static_fields->hiteffectlist;
    if ( v8 )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               v8,
               type,
               (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_FileName_HIT_EFFECT__string__get_Item__);
LABEL_14:
    sub_B170D4();
  }
  return 0LL;
}