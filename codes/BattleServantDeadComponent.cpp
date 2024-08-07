void __fastcall BattleServantDeadComponent___ctor(BattleServantDeadComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A01AD3 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo, v3);
    byte_4A01AD3 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.replaceShaders, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceChocoShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v7;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.replaceChocoShaders, (int32_t)v7, v8, v9);
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
  System_Collections_Generic_List_object__o *replaceChocoShaders; // x0
  Il2CppObject *current; // x23
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
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_4A01AD2 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      shader);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__, v9);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    byte_4A01AD2 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  replaceChocoShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceChocoShaders;
  if ( !replaceChocoShaders )
    sub_1B64C5C(0LL, shader);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    replaceChocoShaders,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = (UnityEngine_Object_o *)defaultChocoShader;
      goto LABEL_20;
    }
    current = v27.fields._current;
    if ( v27.fields._current )
    {
      klass = v27.fields._current[1].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v16 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v16 )
            sub_1B64C5C(0LL, v15);
          name = UnityEngine_Object__get_name(v16, 0LL);
          if ( !v5 )
            sub_1B64C5C(name, v18);
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
    sub_1B64C5C(0LL, v21);
  v23 = UnityEngine_Object__get_name(v22, 0LL);
  v24 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v23, v24, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  return (UnityEngine_Shader_o *)v5;
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
  System_Collections_Generic_List_object__o *replaceShaders; // x0
  Il2CppObject *current; // x23
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
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_4A01AD1 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      shader);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__, v9);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    byte_4A01AD1 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  replaceShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceShaders;
  if ( !replaceShaders )
    sub_1B64C5C(0LL, shader);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    replaceShaders,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = (UnityEngine_Object_o *)defaultDeadShader;
      goto LABEL_20;
    }
    current = v27.fields._current;
    if ( v27.fields._current )
    {
      klass = v27.fields._current[1].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v16 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v16 )
            sub_1B64C5C(0LL, v15);
          name = UnityEngine_Object__get_name(v16, 0LL);
          if ( !v5 )
            sub_1B64C5C(name, v18);
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
    sub_1B64C5C(0LL, v21);
  v23 = UnityEngine_Object__get_name(v22, 0LL);
  v24 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v23, v24, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  return (UnityEngine_Shader_o *)v5;
}


void __fastcall BattleServantDeadComponent_ReplaceShader___ctor(
        BattleServantDeadComponent_ReplaceShader_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}