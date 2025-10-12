void AttacheBattleMovieShader___ctor(AttacheBattleMovieShader_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AttacheBattleMovieShader__OnEnable(AttacheBattleMovieShader_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  char *monitor; // x19
  CriMana_Player_ShaderDispatchCallback_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C39EB1 & 1) == 0 )
  {
    sub_1C32C20(&Method_AttacheBattleMovieShader_ShaderDispatch__);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
    sub_1C32C20(&CriMana_Player_ShaderDispatchCallback_TypeInfo);
    byte_4C39EB1 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
  if ( !Component_object
    || (monitor = (char *)Component_object[3].monitor,
        v5 = (CriMana_Player_ShaderDispatchCallback_o *)sub_1C32E6C(CriMana_Player_ShaderDispatchCallback_TypeInfo),
        CriMana_Player_ShaderDispatchCallback___ctor(v5, 0, Method_AttacheBattleMovieShader_ShaderDispatch__, 0),
        !monitor) )
  {
    sub_1C32E7C(Component_object);
  }
  *((_QWORD *)monitor + 13) = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)(monitor + 104), (int32_t)v5, v6, v7);
}


UnityEngine_Shader_o *AttacheBattleMovieShader__ShaderDispatch(
        CriMana_MovieInfo_o *movieInfo,
        bool additiveMode,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v3; // x19

  if ( (byte_4C39EB2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_4909/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/);
    sub_1C32C20(&StringLiteral_4877/*"CriMana/SofdecPrimeYuv"*/);
    byte_4C39EB2 = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4909/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v3, 0, 0) )
    return UnityEngine_Shader__Find((System_String_o *)StringLiteral_4877/*"CriMana/SofdecPrimeYuv"*/, 0);
  else
    return v3;
}