void __fastcall BattleServantDeadComponent___ctor(BattleServantDeadComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42EB236 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo, v5, v6, v7);
    byte_42EB236 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.replaceShaders,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceChocoShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.replaceChocoShaders,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Shader_o *__fastcall BattleServantDeadComponent__getReplaceChocoShader(
        BattleServantDeadComponent_o *this,
        UnityEngine_Shader_o *shader,
        UnityEngine_Shader_o *defaultChocoShader,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v4; // x19
  UnityEngine_Object_o *v5; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *replaceChocoShaders; // x0
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x21
  UnityEngine_Object_o *monitor; // x21
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x0
  System_String_o *name; // x0
  __int64 v26; // x1
  System_String_o *v27; // x21
  System_String_o *v28; // x1
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x0
  System_String_o *v31; // x21
  System_String_o *v32; // x1
  int v33; // w21
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-50h] BYREF

  v4 = defaultChocoShader;
  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_42EB235 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      (_DWORD)shader,
      (_DWORD)defaultChocoShader,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    byte_42EB235 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  replaceChocoShaders = this->fields.replaceChocoShaders;
  if ( !replaceChocoShaders )
    sub_B5D69C(0LL, shader);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceChocoShaders,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = 0LL;
      v33 = 3;
      goto LABEL_23;
    }
    current = v36.fields.current;
    if ( v36.fields.current )
    {
      klass = v36.fields.current[1].klass;
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
          v24 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v24 )
            sub_B5D69C(0LL, v23);
          name = UnityEngine_Object__get_name(v24, 0LL);
          if ( !v5 )
            sub_B5D69C(name, v26);
          v27 = name;
          v28 = UnityEngine_Object__get_name(v5, 0LL);
          if ( System_String__op_Equality(v27, v28, 0LL) )
            break;
        }
      }
    }
  }
  v30 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v30 )
    sub_B5D69C(0LL, v29);
  v31 = UnityEngine_Object__get_name(v30, 0LL);
  v32 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v31, v32, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
  v33 = 5;
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  if ( v33 == 5 )
    return (UnityEngine_Shader_o *)v5;
  return v4;
}


UnityEngine_Shader_o *__fastcall BattleServantDeadComponent__getReplaceDeadShader(
        BattleServantDeadComponent_o *this,
        UnityEngine_Shader_o *shader,
        UnityEngine_Shader_o *defaultDeadShader,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v4; // x19
  UnityEngine_Object_o *v5; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *replaceShaders; // x0
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x21
  UnityEngine_Object_o *monitor; // x21
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x0
  System_String_o *name; // x0
  __int64 v26; // x1
  System_String_o *v27; // x21
  System_String_o *v28; // x1
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x0
  System_String_o *v31; // x21
  System_String_o *v32; // x1
  int v33; // w21
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-50h] BYREF

  v4 = defaultDeadShader;
  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_42EB234 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      (_DWORD)shader,
      (_DWORD)defaultDeadShader,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    byte_42EB234 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  replaceShaders = this->fields.replaceShaders;
  if ( !replaceShaders )
    sub_B5D69C(0LL, shader);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaders,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = 0LL;
      v33 = 3;
      goto LABEL_23;
    }
    current = v36.fields.current;
    if ( v36.fields.current )
    {
      klass = v36.fields.current[1].klass;
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
          v24 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v24 )
            sub_B5D69C(0LL, v23);
          name = UnityEngine_Object__get_name(v24, 0LL);
          if ( !v5 )
            sub_B5D69C(name, v26);
          v27 = name;
          v28 = UnityEngine_Object__get_name(v5, 0LL);
          if ( System_String__op_Equality(v27, v28, 0LL) )
            break;
        }
      }
    }
  }
  v30 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v30 )
    sub_B5D69C(0LL, v29);
  v31 = UnityEngine_Object__get_name(v30, 0LL);
  v32 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v31, v32, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
  v33 = 5;
LABEL_23:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  if ( v33 == 5 )
    return (UnityEngine_Shader_o *)v5;
  return v4;
}


void __fastcall BattleServantDeadComponent_ReplaceShader___ctor(
        BattleServantDeadComponent_ReplaceShader_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}