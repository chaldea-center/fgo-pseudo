void AttacheBattleMovieShader___ctor(AttacheBattleMovieShader_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AttacheBattleMovieShader__OnEnable(AttacheBattleMovieShader_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1
  char *monitor; // x19
  CriMana_Player_ShaderDispatchCallback_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593AC61 & 1) == 0 )
  {
    sub_21FFC50(&Method_AttacheBattleMovieShader_ShaderDispatch__);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
    sub_21FFC50(&CriMana_Player_ShaderDispatchCallback_TypeInfo);
    byte_593AC61 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
  if ( !Component_object
    || (monitor = (char *)Component_object[3].monitor,
        v6 = (CriMana_Player_ShaderDispatchCallback_o *)sub_21FFEBC(CriMana_Player_ShaderDispatchCallback_TypeInfo),
        CriMana_Player_ShaderDispatchCallback___ctor(v6, 0, Method_AttacheBattleMovieShader_ShaderDispatch__, 0),
        !monitor) )
  {
    sub_21FFECC(Component_object, v4);
  }
  *((_QWORD *)monitor + 13) = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(monitor + 104), (int32_t)v6, v7, v8, v9, v10, v11, v12);
}


UnityEngine_Shader_o *AttacheBattleMovieShader__ShaderDispatch(
        CriMana_MovieInfo_o *movieInfo,
        bool additiveMode,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Shader_o *v4; // x19

  if ( (byte_593AC62 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5084/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/);
    sub_21FFC50(&StringLiteral_5051/*"CriMana/SofdecPrimeYuv"*/);
    byte_593AC62 = 1;
  }
  v4 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5084/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0, 0) )
    return UnityEngine_Shader__Find((System_String_o *)StringLiteral_5051/*"CriMana/SofdecPrimeYuv"*/, 0);
  else
    return v4;
}