void BattleServantDeadComponent___ctor(BattleServantDeadComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593BF91 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
    byte_593BF91 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.replaceShaders, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader___ctor__);
  this->fields.replaceChocoShaders = (struct System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.replaceChocoShaders,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Shader_o *BattleServantDeadComponent__getReplaceChocoShader(
        BattleServantDeadComponent_o *this,
        UnityEngine_Shader_o *shader,
        UnityEngine_Shader_o *defaultChocoShader,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  System_Collections_Generic_List_object__o *replaceChocoShaders; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *monitor; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x0
  System_String_o *name; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  System_String_o *v18; // x1
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_593BF90 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF90 = 1;
  }
  replaceChocoShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceChocoShaders;
  memset(&v25, 0, sizeof(v25));
  if ( !replaceChocoShaders )
    sub_21FFECC(0, shader);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    replaceChocoShaders,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = (UnityEngine_Object_o *)defaultChocoShader;
      goto LABEL_20;
    }
    current = v25.fields._current;
    if ( v25.fields._current )
    {
      klass = v25.fields._current[1].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
        {
          v14 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v14 )
            sub_21FFECC(0, v13);
          name = UnityEngine_Object__get_name(v14, 0);
          if ( !v5 )
            sub_21FFECC(name, v16);
          v17 = name;
          v18 = UnityEngine_Object__get_name(v5, 0);
          if ( System_String__op_Equality(v17, v18, 0) )
            break;
        }
      }
    }
  }
  v20 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v20 )
    sub_21FFECC(0, v19);
  v21 = UnityEngine_Object__get_name(v20, 0);
  v22 = UnityEngine_Object__get_name(v5, 0);
  if ( !System_String__op_Equality(v21, v22, 0) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  return (UnityEngine_Shader_o *)v5;
}


UnityEngine_Shader_o *BattleServantDeadComponent__getReplaceDeadShader(
        BattleServantDeadComponent_o *this,
        UnityEngine_Shader_o *shader,
        UnityEngine_Shader_o *defaultDeadShader,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  System_Collections_Generic_List_object__o *replaceShaders; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *monitor; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x0
  System_String_o *name; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  System_String_o *v18; // x1
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  v5 = (UnityEngine_Object_o *)shader;
  if ( (byte_593BF8F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF8F = 1;
  }
  replaceShaders = (System_Collections_Generic_List_object__o *)this->fields.replaceShaders;
  memset(&v25, 0, sizeof(v25));
  if ( !replaceShaders )
    sub_21FFECC(0, shader);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    replaceShaders,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleServantDeadComponent_ReplaceShader__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__MoveNext__) )
    {
      v5 = (UnityEngine_Object_o *)defaultDeadShader;
      goto LABEL_20;
    }
    current = v25.fields._current;
    if ( v25.fields._current )
    {
      klass = v25.fields._current[1].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        monitor = (UnityEngine_Object_o *)current[1].monitor;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
        {
          v14 = (UnityEngine_Object_o *)current[1].klass;
          if ( !v14 )
            sub_21FFECC(0, v13);
          name = UnityEngine_Object__get_name(v14, 0);
          if ( !v5 )
            sub_21FFECC(name, v16);
          v17 = name;
          v18 = UnityEngine_Object__get_name(v5, 0);
          if ( System_String__op_Equality(v17, v18, 0) )
            break;
        }
      }
    }
  }
  v20 = (UnityEngine_Object_o *)current[1].monitor;
  if ( !v20 )
    sub_21FFECC(0, v19);
  v21 = UnityEngine_Object__get_name(v20, 0);
  v22 = UnityEngine_Object__get_name(v5, 0);
  if ( !System_String__op_Equality(v21, v22, 0) )
    v5 = (UnityEngine_Object_o *)current[1].monitor;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleServantDeadComponent_ReplaceShader__Dispose__);
  return (UnityEngine_Shader_o *)v5;
}


void BattleServantDeadComponent_ReplaceShader___ctor(
        BattleServantDeadComponent_ReplaceShader_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}