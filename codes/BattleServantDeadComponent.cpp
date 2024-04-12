void __fastcall BattleServantDeadComponent___ctor(BattleServantDeadComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B2A15 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
    byte_42B2A15 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.replaceShaders,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceChocoShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.replaceChocoShaders,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Shader_o *__fastcall BattleServantDeadComponent__getReplaceChocoShader(
        BattleServantDeadComponent_o *this,
        UnityEngine_Shader_o *shader,
        UnityEngine_Shader_o *defaultChocoShader,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *replaceChocoShaders; // x0
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x21
  UnityEngine_Object_o *monitor; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x0
  System_String_o *name; // x0
  __int64 v14; // x1
  System_String_o *v15; // x21
  System_String_o *v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x1
  int v21; // w21
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-50h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_42B2A14 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2A14 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  replaceChocoShaders = this->fields.replaceChocoShaders;
  if ( !replaceChocoShaders )
    sub_B52A5C(0LL, shader);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceChocoShaders,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = 0LL;
      v21 = 3;
      goto LABEL_23;
    }
    current = v24.fields.current;
    if ( v24.fields.current )
    {
      klass = v24.fields.current[1].klass;
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
          v12 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v12 )
            sub_B52A5C(0LL, v11);
          name = UnityEngine_Object__get_name(v12, 0LL);
          if ( !v5 )
            sub_B52A5C(name, v14);
          v15 = name;
          v16 = UnityEngine_Object__get_name(v5, 0LL);
          if ( System_String__op_Equality(v15, v16, 0LL) )
            break;
        }
      }
    }
  }
  v18 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v18 )
    sub_B52A5C(0LL, v17);
  v19 = UnityEngine_Object__get_name(v18, 0LL);
  v20 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v19, v20, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
  v21 = 5;
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  if ( v21 == 5 )
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
  struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *replaceShaders; // x0
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x21
  UnityEngine_Object_o *monitor; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x0
  System_String_o *name; // x0
  __int64 v14; // x1
  System_String_o *v15; // x21
  System_String_o *v16; // x1
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x1
  int v21; // w21
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-50h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_42B2A13 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2A13 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  replaceShaders = this->fields.replaceShaders;
  if ( !replaceShaders )
    sub_B52A5C(0LL, shader);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaders,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = 0LL;
      v21 = 3;
      goto LABEL_23;
    }
    current = v24.fields.current;
    if ( v24.fields.current )
    {
      klass = v24.fields.current[1].klass;
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
          v12 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v12 )
            sub_B52A5C(0LL, v11);
          name = UnityEngine_Object__get_name(v12, 0LL);
          if ( !v5 )
            sub_B52A5C(name, v14);
          v15 = name;
          v16 = UnityEngine_Object__get_name(v5, 0LL);
          if ( System_String__op_Equality(v15, v16, 0LL) )
            break;
        }
      }
    }
  }
  v18 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v18 )
    sub_B52A5C(0LL, v17);
  v19 = UnityEngine_Object__get_name(v18, 0LL);
  v20 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v19, v20, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
  v21 = 5;
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  if ( v21 == 5 )
    return (UnityEngine_Shader_o *)v5;
  return defaultDeadShader;
}


void __fastcall BattleServantDeadComponent_ReplaceShader___ctor(
        BattleServantDeadComponent_ReplaceShader_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}