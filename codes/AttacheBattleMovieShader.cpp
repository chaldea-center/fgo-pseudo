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
  const MethodInfo *v8; // x3

  if ( (byte_4CB88D3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AttacheBattleMovieShader_ShaderDispatch__);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
    sub_1C6BA08(&CriMana_Player_ShaderDispatchCallback_TypeInfo);
    byte_4CB88D3 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
  if ( !Component_object
    || (monitor = (char *)Component_object[3].monitor,
        v6 = (CriMana_Player_ShaderDispatchCallback_o *)sub_1C6BC54(CriMana_Player_ShaderDispatchCallback_TypeInfo),
        CriMana_Player_ShaderDispatchCallback___ctor(v6, 0, Method_AttacheBattleMovieShader_ShaderDispatch__, 0),
        !monitor) )
  {
    sub_1C6BC60(Component_object, v4);
  }
  *((_QWORD *)monitor + 13) = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)(monitor + 104), (int32_t)v6, v7, v8);
}


UnityEngine_Shader_o *AttacheBattleMovieShader__ShaderDispatch(
        CriMana_MovieInfo_o *movieInfo,
        bool additiveMode,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v3; // x19

  if ( (byte_4CB88D4 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_4899/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/);
    sub_1C6BA08(&StringLiteral_4867/*"CriMana/SofdecPrimeYuv"*/);
    byte_4CB88D4 = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4899/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v3, 0, 0) )
    return UnityEngine_Shader__Find((System_String_o *)StringLiteral_4867/*"CriMana/SofdecPrimeYuv"*/, 0);
  else
    return v3;
}