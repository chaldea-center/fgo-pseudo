void __fastcall BattleServantDeadComponent___ctor(BattleServantDeadComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FCCCC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo, v6);
    byte_40FCCCC = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.replaceShaders,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceChocoShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.replaceChocoShaders,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  UnityEngine_Object_o *v15; // x0
  System_String_o *name; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x1
  UnityEngine_Object_o *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x1
  int v22; // w21
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-50h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_40FCCCB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      shader);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FCCCB = 1;
  }
  memset(&v25, 0, sizeof(v25));
  replaceChocoShaders = this->fields.replaceChocoShaders;
  if ( !replaceChocoShaders )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceChocoShaders,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = 0LL;
      v22 = 3;
      goto LABEL_23;
    }
    current = v25.fields.current;
    if ( v25.fields.current )
    {
      klass = v25.fields.current[1].klass;
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
          v15 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v15 )
            sub_B170D4();
          name = UnityEngine_Object__get_name(v15, 0LL);
          if ( !v5 )
            sub_B170D4();
          v17 = name;
          v18 = UnityEngine_Object__get_name(v5, 0LL);
          if ( System_String__op_Equality(v17, v18, 0LL) )
            break;
        }
      }
    }
  }
  v19 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v19 )
    sub_B170D4();
  v20 = UnityEngine_Object__get_name(v19, 0LL);
  v21 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v20, v21, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
  v22 = 5;
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  if ( v22 == 5 )
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
  UnityEngine_Object_o *v15; // x0
  System_String_o *name; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x1
  UnityEngine_Object_o *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x1
  int v22; // w21
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-50h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_40FCCCA & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      shader);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FCCCA = 1;
  }
  memset(&v25, 0, sizeof(v25));
  replaceShaders = this->fields.replaceShaders;
  if ( !replaceShaders )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaders,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = 0LL;
      v22 = 3;
      goto LABEL_23;
    }
    current = v25.fields.current;
    if ( v25.fields.current )
    {
      klass = v25.fields.current[1].klass;
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
          v15 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v15 )
            sub_B170D4();
          name = UnityEngine_Object__get_name(v15, 0LL);
          if ( !v5 )
            sub_B170D4();
          v17 = name;
          v18 = UnityEngine_Object__get_name(v5, 0LL);
          if ( System_String__op_Equality(v17, v18, 0LL) )
            break;
        }
      }
    }
  }
  v19 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v19 )
    sub_B170D4();
  v20 = UnityEngine_Object__get_name(v19, 0LL);
  v21 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v20, v21, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
  v22 = 5;
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  if ( v22 == 5 )
    return (UnityEngine_Shader_o *)v5;
  return defaultDeadShader;
}


void __fastcall BattleServantDeadComponent_ReplaceShader___ctor(
        BattleServantDeadComponent_ReplaceShader_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}