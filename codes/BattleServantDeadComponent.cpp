void __fastcall BattleServantDeadComponent___ctor(BattleServantDeadComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDF6DC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
    byte_4BDF6DC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.replaceShaders, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceChocoShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.replaceChocoShaders,
    (int64_t)v10,
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
  if ( (byte_4BDF6DB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF6DB = 1;
  }
  memset(&v23, 0, sizeof(v23));
  replaceChocoShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceChocoShaders;
  if ( !replaceChocoShaders )
    sub_1C22094(0LL, shader);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    replaceChocoShaders,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
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
            sub_1C22094(0LL, v11);
          name = UnityEngine_Object__get_name(v12, 0LL);
          if ( !v5 )
            sub_1C22094(name, v14);
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
    sub_1C22094(0LL, v17);
  v19 = UnityEngine_Object__get_name(v18, 0LL);
  v20 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v19, v20, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
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
  if ( (byte_4BDF6DA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF6DA = 1;
  }
  memset(&v23, 0, sizeof(v23));
  replaceShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceShaders;
  if ( !replaceShaders )
    sub_1C22094(0LL, shader);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    replaceShaders,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
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
            sub_1C22094(0LL, v11);
          name = UnityEngine_Object__get_name(v12, 0LL);
          if ( !v5 )
            sub_1C22094(name, v14);
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
    sub_1C22094(0LL, v17);
  v19 = UnityEngine_Object__get_name(v18, 0LL);
  v20 = UnityEngine_Object__get_name(v5, 0LL);
  if ( !System_String__op_Equality(v19, v20, 0LL) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  return (UnityEngine_Shader_o *)v5;
}


void __fastcall BattleServantDeadComponent_ReplaceShader___ctor(
        BattleServantDeadComponent_ReplaceShader_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}