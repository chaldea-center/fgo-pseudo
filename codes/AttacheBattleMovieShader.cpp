void __fastcall AttacheBattleMovieShader___ctor(AttacheBattleMovieShader_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AttacheBattleMovieShader__OnEnable(AttacheBattleMovieShader_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  char *monitor; // x19
  CriMana_Player_ShaderDispatchCallback_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B183EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AttacheBattleMovieShader_ShaderDispatch__, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CriManaMovieController___, v4, v5);
    sub_1BCA7E0(&CriMana_Player_ShaderDispatchCallback_TypeInfo, v6, v7);
    byte_4B183EF = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
  if ( !Component_object
    || (monitor = (char *)Component_object[3].monitor,
        v13 = (CriMana_Player_ShaderDispatchCallback_o *)sub_1BCAA2C(
                                                           CriMana_Player_ShaderDispatchCallback_TypeInfo,
                                                           v9,
                                                           v10,
                                                           v11),
        CriMana_Player_ShaderDispatchCallback___ctor(v13, 0LL, Method_AttacheBattleMovieShader_ShaderDispatch__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(Component_object, v9);
  }
  *((_QWORD *)monitor + 13) = v13;
  sub_1BCA784((PartyOrganizationUtility_o *)(monitor + 104), (int64_t)v13, v14, v15, v16, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Shader_o *__fastcall AttacheBattleMovieShader__ShaderDispatch(
        CriMana_MovieInfo_o *movieInfo,
        bool additiveMode,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Shader_o *v8; // x19

  if ( (byte_4B183F0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, additiveMode, method);
    sub_1BCA7E0(&StringLiteral_5017/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_4982/*"CriMana/SofdecPrimeYuv"*/, v5, v6);
    byte_4B183F0 = 1;
  }
  v8 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5017/*"Custom/BattleMovieAndroidSofdecPrimeYuvLegacy"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
    return UnityEngine_Shader__Find((System_String_o *)StringLiteral_4982/*"CriMana/SofdecPrimeYuv"*/, 0LL);
  else
    return v8;
}