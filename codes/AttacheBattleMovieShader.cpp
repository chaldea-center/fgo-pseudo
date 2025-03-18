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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C24276 & 1) == 0 )
  {
    sub_1C3B764(&Method_AttacheBattleMovieShader_ShaderDispatch__, method);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_CriManaMovieController___, v3);
    sub_1C3B764(&CriMana_Player_ShaderDispatchCallback_TypeInfo, v4);
    byte_4C24276 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_CriManaMovieController___);
  if ( !Component_object
    || (monitor = (char *)Component_object[3].monitor,
        v8 = (CriMana_Player_ShaderDispatchCallback_o *)sub_1C3B9B0(CriMana_Player_ShaderDispatchCallback_TypeInfo),
        CriMana_Player_ShaderDispatchCallback___ctor(v8, 0LL, Method_AttacheBattleMovieShader_ShaderDispatch__, 0LL),
        !monitor) )
  {
    sub_1C3B9C0(Component_object, v6);
  }
  *((_QWORD *)monitor + 13) = v8;
  sub_1C3B708((PartyOrganizationUtility_o *)(monitor + 104), (int64_t)v8, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4C24277 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, additiveMode);
    sub_1C3B764(&StringLiteral_5038/*"DataSetNamespace"*/, v3);
    sub_1C3B764(&StringLiteral_5003/*"Data type not defined."*/, v4);
    byte_4C24277 = 1;
  }
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5038/*"DataSetNamespace"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
    return UnityEngine_Shader__Find((System_String_o *)StringLiteral_5003/*"Data type not defined."*/, 0LL);
  else
    return v5;
}