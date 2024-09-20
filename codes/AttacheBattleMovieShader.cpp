void __fastcall AttacheBattleMovieShader___ctor(AttacheBattleMovieShader_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AttacheBattleMovieShader__OnEnable(AttacheBattleMovieShader_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1
  char *monitor; // x19
  CriMana_Player_ShaderDispatchCallback_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D31A & 1) == 0 )
  {
    sub_1B885B0(&Method_AttacheBattleMovieShader_ShaderDispatch__);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
    sub_1B885B0(&CriMana_Player_ShaderDispatchCallback_TypeInfo);
    byte_4A5D31A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
  if ( !Component_object
    || (monitor = (char *)Component_object[3].monitor,
        v6 = (CriMana_Player_ShaderDispatchCallback_o *)sub_1B887FC(CriMana_Player_ShaderDispatchCallback_TypeInfo),
        CriMana_Player_ShaderDispatchCallback___ctor(v6, 0LL, Method_AttacheBattleMovieShader_ShaderDispatch__, 0LL),
        !monitor) )
  {
    sub_1B8880C(Component_object, v4);
  }
  *((_QWORD *)monitor + 13) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(monitor + 104), (int32_t)v6, v7, v8);
}


UnityEngine_Shader_o *__fastcall AttacheBattleMovieShader__ShaderDispatch(
        CriMana_MovieInfo_o *movieInfo,
        bool additiveMode,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v3; // x19

  if ( (byte_4A5D31B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_4948/*"Custom/BattleMovieAndroidH264Rgb"*/);
    sub_1B885B0(&StringLiteral_4912/*"CriMana/SofdecPrimeYuv"*/);
    byte_4A5D31B = 1;
  }
  v3 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4948/*"Custom/BattleMovieAndroidH264Rgb"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v3, 0LL, 0LL) )
    return UnityEngine_Shader__Find((System_String_o *)StringLiteral_4912/*"CriMana/SofdecPrimeYuv"*/, 0LL);
  else
    return v3;
}