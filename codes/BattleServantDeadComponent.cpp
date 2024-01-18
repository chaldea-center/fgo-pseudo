void __fastcall BattleServantDeadComponent___ctor(BattleServantDeadComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_418A510 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo, v3);
    byte_418A510 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.replaceShaders,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceChocoShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.replaceChocoShaders,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Shader_o *__fastcall BattleServantDeadComponent__getReplaceChocoShader(
        BattleServantDeadComponent_o *this,
        UnityEngine_Shader_o *shader,
        UnityEngine_Shader_o *defaultChocoShader,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *replaceChocoShaders; // x0
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x21
  UnityEngine_Object_o *monitor; // x21
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x0
  System_String_o *name; // x0
  __int64 v18; // x1
  System_String_o *v19; // x21
  System_String_o *v20; // x1
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x1
  int v25; // w21
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-50h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_418A50F & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      shader);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418A50F = 1;
  }
  memset(&v28, 0, sizeof(v28));
  replaceChocoShaders = this->fields.replaceChocoShaders;
  if ( !replaceChocoShaders )
    sub_B2C434(0LL, shader);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceChocoShaders,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = 0LL;
      v25 = 3;
      goto LABEL_23;
    }
    current = v28.fields.current;
    if ( v28.fields.current )
    {
      klass = v28.fields.current[1].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v16 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v16 )
            sub_B2C434(0LL, v15);
          name = UnityEngine_Object__get_name(v16, 0LL);
          if ( !v5 )
            sub_B2C434(name, v18);
          v19 = name;
          v20 = UnityEngine_Object__get_name(v5, 0LL);
          if ( System_String__op_Equality(v19, v20, 0LL) )
            break;
        }
      }
    }
  }
  v22 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v22 )
    sub_B2C434(0LL, v21);
  v23 = UnityEngine_Object__get_name(v22, 0LL);
  v24 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v23, v24, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
  v25 = 5;
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  if ( v25 == 5 )
    return (UnityEngine_Shader_o *)v5;
  return defaultChocoShader;
}


UnityEngine_Shader_o *__fastcall BattleServantDeadComponent__getReplaceDeadShader(
        BattleServantDeadComponent_o *this,
        UnityEngine_Shader_o *shader,
        UnityEngine_Shader_o *defaultDeadShader,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *replaceShaders; // x0
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x21
  UnityEngine_Object_o *monitor; // x21
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x0
  System_String_o *name; // x0
  __int64 v18; // x1
  System_String_o *v19; // x21
  System_String_o *v20; // x1
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x1
  int v25; // w21
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-50h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_418A50E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      shader);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418A50E = 1;
  }
  memset(&v28, 0, sizeof(v28));
  replaceShaders = this->fields.replaceShaders;
  if ( !replaceShaders )
    sub_B2C434(0LL, shader);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaders,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = 0LL;
      v25 = 3;
      goto LABEL_23;
    }
    current = v28.fields.current;
    if ( v28.fields.current )
    {
      klass = v28.fields.current[1].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v16 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v16 )
            sub_B2C434(0LL, v15);
          name = UnityEngine_Object__get_name(v16, 0LL);
          if ( !v5 )
            sub_B2C434(name, v18);
          v19 = name;
          v20 = UnityEngine_Object__get_name(v5, 0LL);
          if ( System_String__op_Equality(v19, v20, 0LL) )
            break;
        }
      }
    }
  }
  v22 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v22 )
    sub_B2C434(0LL, v21);
  v23 = UnityEngine_Object__get_name(v22, 0LL);
  v24 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v23, v24, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
  v25 = 5;
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  if ( v25 == 5 )
    return (UnityEngine_Shader_o *)v5;
  return defaultDeadShader;
}


void __fastcall BattleServantDeadComponent_ReplaceShader___ctor(
        BattleServantDeadComponent_ReplaceShader_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}