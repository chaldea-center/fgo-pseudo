void __fastcall BattleServantDeadComponent___ctor(BattleServantDeadComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E17B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
    byte_4A5E17B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.replaceShaders, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceChocoShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.replaceChocoShaders, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Shader_o *__fastcall BattleServantDeadComponent__getReplaceChocoShader(
        BattleServantDeadComponent_o *this,
        UnityEngine_Shader_o *shader,
        UnityEngine_Shader_o *defaultChocoShader,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  System_Collections_Generic_List_object__o *replaceChocoShaders; // x0
  Il2CppObject *current; // x23
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
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_4A5E17A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E17A = 1;
  }
  memset(&v23, 0, sizeof(v23));
  replaceChocoShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceChocoShaders;
  if ( !replaceChocoShaders )
    sub_1B8880C(0LL, shader);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    replaceChocoShaders,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = (UnityEngine_Object_o *)defaultChocoShader;
      goto LABEL_20;
    }
    current = v23.fields._current;
    if ( v23.fields._current )
    {
      klass = v23.fields._current[1].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v12 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v12 )
            sub_1B8880C(0LL, v11);
          name = UnityEngine_Object__get_name(v12, 0LL);
          if ( !v5 )
            sub_1B8880C(name, v14);
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
    sub_1B8880C(0LL, v17);
  v19 = UnityEngine_Object__get_name(v18, 0LL);
  v20 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v19, v20, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  return (UnityEngine_Shader_o *)v5;
}


UnityEngine_Shader_o *__fastcall BattleServantDeadComponent__getReplaceDeadShader(
        BattleServantDeadComponent_o *this,
        UnityEngine_Shader_o *shader,
        UnityEngine_Shader_o *defaultDeadShader,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  System_Collections_Generic_List_object__o *replaceShaders; // x0
  Il2CppObject *current; // x23
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
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_4A5E179 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E179 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  replaceShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceShaders;
  if ( !replaceShaders )
    sub_1B8880C(0LL, shader);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    replaceShaders,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = (UnityEngine_Object_o *)defaultDeadShader;
      goto LABEL_20;
    }
    current = v23.fields._current;
    if ( v23.fields._current )
    {
      klass = v23.fields._current[1].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v12 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v12 )
            sub_1B8880C(0LL, v11);
          name = UnityEngine_Object__get_name(v12, 0LL);
          if ( !v5 )
            sub_1B8880C(name, v14);
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
    sub_1B8880C(0LL, v17);
  v19 = UnityEngine_Object__get_name(v18, 0LL);
  v20 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v19, v20, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  return (UnityEngine_Shader_o *)v5;
}


void __fastcall BattleServantDeadComponent_ReplaceShader___ctor(
        BattleServantDeadComponent_ReplaceShader_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}