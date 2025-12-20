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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2EDF5 & 1) == 0 )
  {
    sub_1C94098(&Method_AttacheBattleMovieShader_ShaderDispatch__);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
    sub_1C94098(&CriMana_Player_ShaderDispatchCallback_TypeInfo);
    byte_4D2EDF5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
  if ( !Component_object
    || (monitor = (char *)Component_object[3].monitor,
        v6 = (CriMana_Player_ShaderDispatchCallback_o *)sub_1C942E4(CriMana_Player_ShaderDispatchCallback_TypeInfo),
        CriMana_Player_ShaderDispatchCallback___ctor(v6, 0, Method_AttacheBattleMovieShader_ShaderDispatch__, 0),
        !monitor) )
  {
    sub_1C942F0(Component_object, v4);
  }
  *((_QWORD *)monitor + 13) = v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(monitor + 104), (int32_t)v6, v7, v8, v9, v10, v11, v12);
}


UnityEngine_Shader_o *AttacheBattleMovieShader__ShaderDispatch(
        CriMana_MovieInfo_o *movieInfo,
        bool additiveMode,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v3; // x19

  if ( (byte_4D2EDF6 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_4912/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/);
    sub_1C94098(&StringLiteral_4880/*"CriMana/SofdecPrimeYuv"*/);
    byte_4D2EDF6 = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4912/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v3, 0, 0) )
    return UnityEngine_Shader__Find((System_String_o *)StringLiteral_4880/*"CriMana/SofdecPrimeYuv"*/, 0);
  else
    return v3;
}