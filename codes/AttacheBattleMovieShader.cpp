void __fastcall AttacheBattleMovieShader___ctor(AttacheBattleMovieShader_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AttacheBattleMovieShader__OnEnable(AttacheBattleMovieShader_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1
  char *monitor; // x19
  CriMana_Player_ShaderDispatchCallback_o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B1E973 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AttacheBattleMovieShader_ShaderDispatch__, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_CriManaMovieController___, v3);
    sub_1BCAFF8(&CriMana_Player_ShaderDispatchCallback_TypeInfo, v4);
    byte_4B1E973 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
  if ( !Component_object
    || (monitor = (char *)Component_object[3].monitor,
        v8 = (CriMana_Player_ShaderDispatchCallback_o *)sub_1BCB244(CriMana_Player_ShaderDispatchCallback_TypeInfo),
        CriMana_Player_ShaderDispatchCallback___ctor(v8, 0LL, Method_AttacheBattleMovieShader_ShaderDispatch__, 0LL),
        !monitor) )
  {
    sub_1BCB254(Component_object, v6);
  }
  *((_QWORD *)monitor + 13) = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)(monitor + 104), (int32_t)v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Shader_o *__fastcall AttacheBattleMovieShader__ShaderDispatch(
        CriMana_MovieInfo_o *movieInfo,
        bool additiveMode,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Shader_o *v5; // x19

  if ( (byte_4B1E974 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, additiveMode);
    sub_1BCAFF8(&StringLiteral_4870/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/, v3);
    sub_1BCAFF8(&StringLiteral_4839/*"CriMana/SofdecPrimeYuv"*/, v4);
    byte_4B1E974 = 1;
  }
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4870/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
    return UnityEngine_Shader__Find((System_String_o *)StringLiteral_4839/*"CriMana/SofdecPrimeYuv"*/, 0LL);
  else
    return v5;
}