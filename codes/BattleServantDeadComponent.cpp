void __fastcall BattleServantDeadComponent___ctor(BattleServantDeadComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FF3B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo, v4);
    byte_49FF3B4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.replaceShaders, (int32_t)v5, v6, v7);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceChocoShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.replaceChocoShaders, (int32_t)v10, v11, v12);
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
  UnityEngine_Object_o *v15; // x0
  System_String_o *name; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x1
  UnityEngine_Object_o *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_49FF3B3 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      shader);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FF3B3 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  replaceChocoShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceChocoShaders;
  if ( !replaceChocoShaders )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    replaceChocoShaders,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = (UnityEngine_Object_o *)defaultChocoShader;
      goto LABEL_20;
    }
    current = v24.fields._current;
    if ( v24.fields._current )
    {
      klass = v24.fields._current[1].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v15 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v15 )
            sub_1B64324(0LL);
          name = UnityEngine_Object__get_name(v15, 0LL);
          if ( !v5 )
            sub_1B64324(name);
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
    sub_1B64324(0LL);
  v20 = UnityEngine_Object__get_name(v19, 0LL);
  v21 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v20, v21, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
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
  UnityEngine_Object_o *v15; // x0
  System_String_o *name; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x1
  UnityEngine_Object_o *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_49FF3B2 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      shader);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FF3B2 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  replaceShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceShaders;
  if ( !replaceShaders )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    replaceShaders,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = (UnityEngine_Object_o *)defaultDeadShader;
      goto LABEL_20;
    }
    current = v24.fields._current;
    if ( v24.fields._current )
    {
      klass = v24.fields._current[1].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v15 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v15 )
            sub_1B64324(0LL);
          name = UnityEngine_Object__get_name(v15, 0LL);
          if ( !v5 )
            sub_1B64324(name);
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
    sub_1B64324(0LL);
  v20 = UnityEngine_Object__get_name(v19, 0LL);
  v21 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v20, v21, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  return (UnityEngine_Shader_o *)v5;
}


void __fastcall BattleServantDeadComponent_ReplaceShader___ctor(
        BattleServantDeadComponent_ReplaceShader_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}