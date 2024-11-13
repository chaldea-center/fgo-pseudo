void __fastcall BattleServantDeadComponent___ctor(BattleServantDeadComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B1929F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo, v5, v6);
    byte_4B1929F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.replaceShaders, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceChocoShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.replaceChocoShaders,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *replaceChocoShaders; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x21
  __int64 v19; // x1
  UnityEngine_Object_o *monitor; // x21
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x0
  System_String_o *name; // x0
  __int64 v24; // x1
  System_String_o *v25; // x21
  System_String_o *v26; // x1
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x0
  System_String_o *v29; // x21
  System_String_o *v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_4B1929E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      shader,
      defaultChocoShader);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B1929E = 1;
  }
  memset(&v33, 0, sizeof(v33));
  replaceChocoShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceChocoShaders;
  if ( !replaceChocoShaders )
    sub_1BCAA3C(0LL, shader);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    replaceChocoShaders,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = (UnityEngine_Object_o *)defaultChocoShader;
      goto LABEL_20;
    }
    current = v33.fields._current;
    if ( v33.fields._current )
    {
      klass = v33.fields._current[1].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v22 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v22 )
            sub_1BCAA3C(0LL, v21);
          name = UnityEngine_Object__get_name(v22, 0LL);
          if ( !v5 )
            sub_1BCAA3C(name, v24);
          v25 = name;
          v26 = UnityEngine_Object__get_name(v5, 0LL);
          if ( System_String__op_Equality(v25, v26, 0LL) )
            break;
        }
      }
    }
  }
  v28 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v28 )
    sub_1BCAA3C(0LL, v27);
  v29 = UnityEngine_Object__get_name(v28, 0LL);
  v30 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v29, v30, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *replaceShaders; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x21
  __int64 v19; // x1
  UnityEngine_Object_o *monitor; // x21
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x0
  System_String_o *name; // x0
  __int64 v24; // x1
  System_String_o *v25; // x21
  System_String_o *v26; // x1
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x0
  System_String_o *v29; // x21
  System_String_o *v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_4B1929D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__,
      shader,
      defaultDeadShader);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B1929D = 1;
  }
  memset(&v33, 0, sizeof(v33));
  replaceShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceShaders;
  if ( !replaceShaders )
    sub_1BCAA3C(0LL, shader);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    replaceShaders,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = (UnityEngine_Object_o *)defaultDeadShader;
      goto LABEL_20;
    }
    current = v33.fields._current;
    if ( v33.fields._current )
    {
      klass = v33.fields._current[1].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
        {
          v22 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v22 )
            sub_1BCAA3C(0LL, v21);
          name = UnityEngine_Object__get_name(v22, 0LL);
          if ( !v5 )
            sub_1BCAA3C(name, v24);
          v25 = name;
          v26 = UnityEngine_Object__get_name(v5, 0LL);
          if ( System_String__op_Equality(v25, v26, 0LL) )
            break;
        }
      }
    }
  }
  v28 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v28 )
    sub_1BCAA3C(0LL, v27);
  v29 = UnityEngine_Object__get_name(v28, 0LL);
  v30 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v29, v30, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  return (UnityEngine_Shader_o *)v5;
}


void __fastcall BattleServantDeadComponent_ReplaceShader___ctor(
        BattleServantDeadComponent_ReplaceShader_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}