void __fastcall BattleEffectReplaceShaderTexture___ctor(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  __int64 v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42134F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Material___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_List_Material__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_7178/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, v10);
    sub_B0D8A4(&StringLiteral_7181/*"Hidden/Particle/distortion-GrabPass"*/, v11);
    sub_B0D8A4(&StringLiteral_6356/*"FGO_Battle/Ken/Base"*/, v12);
    sub_B0D8A4(&StringLiteral_7182/*"Hidden/Particle/distortion-Stencil"*/, v13);
    sub_B0D8A4(&StringLiteral_7180/*"Hidden/Particle/distortion"*/, v14);
    sub_B0D8A4(&StringLiteral_6357/*"FGO_Battle/Particle/Base"*/, v15);
    sub_B0D8A4(&StringLiteral_7177/*"Hidden/Particle/MultiplyAdd1Pass"*/, v16);
    sub_B0D8A4(&StringLiteral_7171/*"Hidden/Ken/Distortion"*/, v17);
    sub_B0D8A4(&StringLiteral_7179/*"Hidden/Particle/dissolve"*/, v18);
    sub_B0D8A4(&StringLiteral_7173/*"Hidden/Ken/MultiplyAdd"*/, v19);
    sub_B0D8A4(&StringLiteral_7174/*"Hidden/Particle/Base-Stencil"*/, v20);
    sub_B0D8A4(&StringLiteral_7175/*"Hidden/Particle/MultiplyAdd"*/, v21);
    sub_B0D8A4(&StringLiteral_7176/*"Hidden/Particle/MultiplyAdd-Stencil"*/, v22);
    sub_B0D8A4(&StringLiteral_7172/*"Hidden/Ken/GradationMap"*/, v23);
    byte_42134F3 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
  this->fields.replaceObjects = (struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *)v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.replaceObjects,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v33 )
    sub_B0D97C(v34);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6357/*"FGO_Battle/Particle/Base"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7175/*"Hidden/Particle/MultiplyAdd"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7177/*"Hidden/Particle/MultiplyAdd1Pass"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7180/*"Hidden/Particle/distortion"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7174/*"Hidden/Particle/Base-Stencil"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7176/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7178/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7182/*"Hidden/Particle/distortion-Stencil"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7181/*"Hidden/Particle/distortion-GrabPass"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7179/*"Hidden/Particle/dissolve"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6356/*"FGO_Battle/Ken/Base"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7173/*"Hidden/Ken/MultiplyAdd"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7171/*"Hidden/Ken/Distortion"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v33,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7172/*"Hidden/Ken/GradationMap"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.autoReplaceShaderNames = (struct System_Collections_Generic_List_string__o *)v33;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.autoReplaceShaderNames,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Material__TypeInfo,
                                                                                                  v41,
                                                                                                  v42);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.replaceMaterials = (struct System_Collections_Generic_List_Material__o *)v43;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.replaceMaterials,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEffectReplaceShaderTexture__Execute(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleEffectReplaceShaderTexture_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *replaceObjects; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v39; // x20
  UnityEngine_Object_o *v40; // x22
  _BOOL8 v41; // x0
  const MethodInfo *v42; // x4
  Il2CppObject *current; // x20
  System_Collections_Generic_List_BattleActorControl__o *TargetActors; // x0
  _BOOL8 v45; // x0
  Il2CppObject *v46; // x21
  _BOOL8 isShadowServant; // x0
  const MethodInfo *v48; // x3
  bool v49; // w23
  UnityEngine_Object_o *ActorTexture; // x24
  ServantAssetLoadManager_o *Instance; // x0
  UnityEngine_GameObject_o *ShadowEffect; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_Transform_o *v56; // x0
  UnityEngine_Transform_o *v57; // x21
  __int64 v58; // x0
  int v59; // s0
  UnityEngine_Transform_o *v62; // x21
  __int64 v63; // x0
  int v64; // s0
  UnityEngine_Object_o *klass; // x21
  UnityEngine_Object_o *v68; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v69; // x0
  System_Collections_Generic_List_Target_PlayerTypeFlag__o *monitor; // x0
  Il2CppObject *v71; // x21
  const MethodInfo *v72; // x5
  UnityEngine_Renderer_array *TargetRenderers; // x0
  UnityEngine_Renderer_array *v74; // x27
  __int64 v75; // x8
  unsigned __int64 v76; // x9
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v77; // x0
  WarBoardManager_TaskList_o *v78; // x21
  const MethodInfo *v79; // x4
  System_Collections_Generic_List_Material__o *TargetMaterials; // x0
  Il2CppObject *v81; // x28
  _BOOL8 v82; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *autoReplaceShaderNames; // x21
  UnityEngine_Object_o *shader; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v86; // x0
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  const MethodInfo *v89; // x3
  UnityEngine_Object_o *ReplaceChocoShader; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  _BOOL8 v93; // x0
  UnityEngine_Shader_o *v94; // x0
  _BOOL8 v95; // x0
  const MethodInfo *v96; // x3
  UIAtlas_o *UIAtlas; // x0
  const MethodInfo *v98; // x4
  UnityEngine_Texture2D_o *v99; // x3
  BattleEffectReplaceShaderTexture_o *v100; // x0
  const MethodInfo *v101; // x5
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v102; // x21
  UnityEngine_Object_o *v103; // x0
  System_String_o *v104; // x0
  UnityEngine_Object_o *v105; // x0
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  const MethodInfo *v108; // x3
  UnityEngine_Object_o *v109; // x21
  _BOOL8 v110; // x0
  const MethodInfo *v111; // x3
  BattleEffectReplaceShaderTexture_o *v112; // x0
  const MethodInfo *v113; // x5
  System_Collections_Generic_List_WarBoardManager_TaskList__o *replaceMaterials; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v115; // x0
  __int64 v116; // x0
  System_String_o *targetShaderName; // [xsp+8h] [xbp-158h]
  Il2CppObject *v118; // [xsp+10h] [xbp-150h]
  unsigned __int64 v119; // [xsp+18h] [xbp-148h]
  UnityEngine_Component_o *v120; // [xsp+20h] [xbp-140h]
  bool isChocoServant; // [xsp+2Ch] [xbp-134h]
  _BYTE v122[44]; // [xsp+30h] [xbp-130h] BYREF
  int v123; // [xsp+5Ch] [xbp-104h]
  System_Collections_Generic_List_Enumerator_T__o v124; // [xsp+60h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v125; // [xsp+80h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v126; // [xsp+A0h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v127; // [xsp+C0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v128; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_string__Shader__o *shaderCaches[2]; // [xsp+100h] [xbp-60h] BYREF

  v3 = this;
  if ( (byte_42134E7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Shader___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__Shader__TypeInfo, v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__,
      v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__,
      v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__,
      v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__get_Current__,
      v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v18);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__get_Current__,
      v19);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Material__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Material__Contains__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__Contains__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v25);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__,
      v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v27);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__,
      v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__get_Count__, v30);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v31);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_Texture2D___, v32);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v33);
    sub_B0D8A4(&StringLiteral_15985/*"_Choco"*/, v34);
    sub_B0D8A4(&StringLiteral_16107/*"_Shadow"*/, v35);
    sub_B0D8A4(&StringLiteral_12873/*"Shaders/ChocoMap"*/, v36);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B0D8A4(&StringLiteral_4533/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v37);
    byte_42134E7 = 1;
  }
  shaderCaches[0] = 0LL;
  memset(&v128, 0, sizeof(v128));
  memset(&v127, 0, sizeof(v127));
  memset(&v126, 0, sizeof(v126));
  memset(&v125, 0, sizeof(v125));
  memset(&v124, 0, sizeof(v124));
  v123 = 0;
  replaceObjects = v3->fields.replaceObjects;
  if ( !replaceObjects )
    goto LABEL_159;
  if ( replaceObjects->fields._size < 1 )
    return;
  v39 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__Shader__TypeInfo,
                                                                                        method,
                                                                                        v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v39,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
  shaderCaches[0] = (System_Collections_Generic_Dictionary_string__Shader__o *)v39;
  this = (BattleEffectReplaceShaderTexture_o *)v3->fields.replaceObjects;
  if ( !this )
LABEL_159:
    sub_B0D97C(this);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v122,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
  v40 = 0LL;
  v128 = *(System_Collections_Generic_List_Enumerator_T__o *)v122;
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v128,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__);
    if ( !v41 )
      break;
    current = v128.fields.current;
    if ( !v128.fields.current )
      sub_B0D97C(v41);
    TargetActors = BattleEffectReplaceShaderTexture__GetTargetActors(
                     v3,
                     (System_Int32_array *)v128.fields.current[1].monitor,
                     (bool)v128.fields.current[2].klass,
                     (bool)v128.fields.current[1].klass,
                     v42);
    if ( !TargetActors )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v122,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TargetActors,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    v127 = *(System_Collections_Generic_List_Enumerator_T__o *)v122;
    while ( 1 )
    {
      v45 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v127,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
      if ( !v45 )
        break;
      v46 = v127.fields.current;
      if ( !v127.fields.current )
        sub_B0D97C(v45);
      isChocoServant = BattleActorControl__isChocoServant((BattleActorControl_o *)v127.fields.current, 0LL);
      isShadowServant = BattleActorControl__isShadowServant((BattleActorControl_o *)v46, 0LL);
      v49 = isShadowServant;
      v120 = (UnityEngine_Component_o *)v46;
      if ( LOBYTE(current[11].monitor) )
        ActorTexture = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getActorTexture(
                                                 (BattleEffectReplaceShaderTexture_o *)isShadowServant,
                                                 (BattleActorControl_o *)v46,
                                                 (System_String_o *)current[2].monitor,
                                                 v48);
      else
        ActorTexture = 0LL;
      if ( v49 && LOBYTE(current[3].klass) != 0 )
      {
        Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !Instance )
          sub_B0D97C(0LL);
        ShadowEffect = ServantAssetLoadManager__createShadowEffect(Instance, 0, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v46, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                 transform,
                                                 (System_String_o *)current[3].monitor,
                                                 0,
                                                 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v55 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)v55 & 1) != 0 )
        {
          v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3, 0LL);
          NodeFromName = (UnityEngine_Object_o *)v55;
        }
        if ( !ShadowEffect )
          sub_B0D97C(v55);
        v56 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !v56 )
          sub_B0D97C(0LL);
        UnityEngine_Transform__SetParent(v56, (UnityEngine_Transform_o *)NodeFromName, 0LL);
        v57 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        *(UnityEngine_Vector3_o *)&v59 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v57 )
          sub_B0D97C(v58);
        UnityEngine_Transform__set_localPosition(v57, *(UnityEngine_Vector3_o *)&v59, 0LL);
        v62 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        *(UnityEngine_Vector3_o *)&v64 = UnityEngine_Vector3__get_one(0LL);
        if ( !v62 )
          sub_B0D97C(v63);
        UnityEngine_Transform__set_localScale(v62, *(UnityEngine_Vector3_o *)&v64, 0LL);
      }
      klass = (UnityEngine_Object_o *)current[7].klass;
      targetShaderName = (System_String_o *)current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        v68 = (UnityEngine_Object_o *)current[7].klass;
        if ( !v68 )
          sub_B0D97C(0LL);
        targetShaderName = UnityEngine_Object__get_name(v68, 0LL);
      }
      v69 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current[4].klass;
      if ( !v69 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v122,
        v69,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v126 = *(System_Collections_Generic_List_Enumerator_T__o *)v122;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v126,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        monitor = (System_Collections_Generic_List_Target_PlayerTypeFlag__o *)current[5].monitor;
        if ( !monitor )
          sub_B0D97C(0LL);
        v71 = v126.fields.current;
        System_Collections_Generic_List_Target_PlayerTypeFlag___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v122,
          monitor,
          (const MethodInfo_2FB3D1C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
        v125 = *(System_Collections_Generic_List_Enumerator_T__o *)v122;
        while ( System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___MoveNext(
                  &v125,
                  (const MethodInfo_21108B0 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__) )
        {
          TargetRenderers = BattleEffectReplaceShaderTexture__getTargetRenderers(
                              v3,
                              (UnityEngine_GameObject_o *)v71,
                              (int32_t)v125.fields.current,
                              (bool)current[5].klass,
                              BYTE1(current[5].klass),
                              v72);
          v74 = TargetRenderers;
          if ( TargetRenderers )
          {
            v75 = *(_QWORD *)&TargetRenderers->max_length;
            if ( (int)v75 >= 1 )
            {
              v76 = 0LL;
              v118 = v71;
              do
              {
                if ( v76 >= (unsigned int)v75 )
                {
                  v116 = sub_B0D9A8(TargetRenderers);
                  sub_B0D948(v116, 0LL);
                }
                v77 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)current[4].monitor;
                if ( !v77 )
                  sub_B0D97C(0LL);
                v119 = v76;
                v78 = (WarBoardManager_TaskList_o *)v74->m_Items[v76];
                TargetRenderers = (UnityEngine_Renderer_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                  v77,
                                                                  v78,
                                                                  (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                if ( ((unsigned __int8)TargetRenderers & 1) != 0 )
                  goto LABEL_115;
                TargetMaterials = BattleEffectReplaceShaderTexture__getTargetMaterials(
                                    (BattleEffectReplaceShaderTexture_o *)TargetRenderers,
                                    (UnityEngine_Renderer_o *)v78,
                                    targetShaderName,
                                    (bool)current[6].klass,
                                    v79);
                if ( !TargetMaterials )
                  sub_B0D97C(0LL);
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)v122,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TargetMaterials,
                  (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
                v124 = *(System_Collections_Generic_List_Enumerator_T__o *)v122;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v124,
                          (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
                {
                  v81 = v124.fields.current;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  v82 = UnityEngine_Object__op_Inequality(ActorTexture, 0LL, 0LL);
                  if ( v82 )
                  {
                    if ( !v81 )
                      sub_B0D97C(v82);
                    UnityEngine_Material__set_mainTexture(
                      (UnityEngine_Material_o *)v81,
                      (UnityEngine_Texture_o *)ActorTexture,
                      0LL);
                  }
                  if ( isChocoServant )
                  {
                    if ( !BYTE1(current[11].monitor) )
                      goto LABEL_63;
                    if ( !v81 )
                      sub_B0D97C(v82);
                    autoReplaceShaderNames = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v3->fields.autoReplaceShaderNames;
                    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v81,
                                                       0LL);
                    if ( !shader )
                      sub_B0D97C(0LL);
                    name = UnityEngine_Object__get_name(shader, 0LL);
                    if ( !autoReplaceShaderNames )
                      sub_B0D97C(name);
                    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                           autoReplaceShaderNames,
                           (WarBoardManager_TaskList_o *)name,
                           (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
                    {
                      v86 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v81, 0LL);
                      if ( !v86 )
                        sub_B0D97C(0LL);
                      v87 = UnityEngine_Object__get_name(v86, 0LL);
                      v88 = System_String__Concat_43849904(v87, (System_String_o *)StringLiteral_15985/*"_Choco"*/, 0LL);
                      ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                     (BattleEffectReplaceShaderTexture_o *)v88,
                                                                     v88,
                                                                     shaderCaches,
                                                                     v89);
                    }
                    else
                    {
LABEL_63:
                      ReplaceChocoShader = 0LL;
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL) )
                      ReplaceChocoShader = (UnityEngine_Object_o *)current[7].monitor;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL) && BYTE2(current[11].monitor) )
                    {
                      gameObject = UnityEngine_Component__get_gameObject(v120, 0LL);
                      if ( !gameObject )
                        sub_B0D97C(0LL);
                      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          gameObject,
                                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      v93 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
                      if ( v93 )
                      {
                        if ( !v81 )
                          sub_B0D97C(v93);
                        v94 = UnityEngine_Material__get_shader((UnityEngine_Material_o *)v81, 0LL);
                        if ( !Component_srcLineSprite )
                          sub_B0D97C(v94);
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleServantDeadComponent__getReplaceChocoShader(
                                                                       (BattleServantDeadComponent_o *)Component_srcLineSprite,
                                                                       v94,
                                                                       0LL,
                                                                       0LL);
                      }
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v95 = UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL);
                    if ( v95 )
                      ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                     (BattleEffectReplaceShaderTexture_o *)v95,
                                                                     (System_String_o *)StringLiteral_4533/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/,
                                                                     shaderCaches,
                                                                     v96);
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UIAtlas = (UIAtlas_o *)UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
                    if ( ((unsigned __int8)UIAtlas & 1) != 0 )
                    {
                      UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                                  (System_String_o *)StringLiteral_12873/*"Shaders/ChocoMap"*/,
                                  (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_Texture2D___);
                      v99 = (UnityEngine_Texture2D_o *)UIAtlas;
                    }
                    else
                    {
                      v99 = (UnityEngine_Texture2D_o *)v40;
                    }
                    v40 = (UnityEngine_Object_o *)v99;
                    BattleEffectReplaceShaderTexture__setupChocoShader(
                      (BattleEffectReplaceShaderTexture_o *)UIAtlas,
                      (UnityEngine_Material_o *)v81,
                      (UnityEngine_Shader_o *)ReplaceChocoShader,
                      v99,
                      v98);
                    BattleEffectReplaceShaderTexture__updateShaderValues(
                      v100,
                      (UnityEngine_Material_o *)v81,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[8].klass,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[8].monitor,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[9].klass,
                      v101);
                  }
                  if ( v49 )
                  {
                    if ( !v81 )
                      sub_B0D97C(v82);
                    v102 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v3->fields.autoReplaceShaderNames;
                    v103 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v81, 0LL);
                    if ( !v103 )
                      sub_B0D97C(0LL);
                    v104 = UnityEngine_Object__get_name(v103, 0LL);
                    if ( !v102 )
                      sub_B0D97C(v104);
                    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                           v102,
                           (WarBoardManager_TaskList_o *)v104,
                           (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
                    {
                      v105 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v81,
                                                       0LL);
                      if ( !v105 )
                        sub_B0D97C(0LL);
                      v106 = UnityEngine_Object__get_name(v105, 0LL);
                      v107 = System_String__Concat_43849904(v106, (System_String_o *)StringLiteral_16107/*"_Shadow"*/, 0LL);
                      v109 = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                       (BattleEffectReplaceShaderTexture_o *)v107,
                                                       v107,
                                                       shaderCaches,
                                                       v108);
                    }
                    else
                    {
                      v109 = 0LL;
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v110 = UnityEngine_Object__op_Equality(v109, 0LL, 0LL);
                    if ( v110 )
                      v109 = (UnityEngine_Object_o *)current[9].monitor;
                    BattleEffectReplaceShaderTexture__setupShadowShader(
                      (BattleEffectReplaceShaderTexture_o *)v110,
                      (UnityEngine_Material_o *)v81,
                      (UnityEngine_Shader_o *)v109,
                      v111);
                    BattleEffectReplaceShaderTexture__updateShaderValues(
                      v112,
                      (UnityEngine_Material_o *)v81,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[10].klass,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[10].monitor,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[11].klass,
                      v113);
                  }
                  replaceMaterials = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v3->fields.replaceMaterials;
                  if ( !replaceMaterials )
                    sub_B0D97C(0LL);
                  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                          replaceMaterials,
                          (WarBoardManager_TaskList_o *)v81,
                          (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_Material__Contains__) )
                  {
                    v115 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v3->fields.replaceMaterials;
                    if ( !v115 )
                      sub_B0D97C(0LL);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v115,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Material__Add__);
                  }
                }
                *(_DWORD *)&v122[4 * v123++ + 24] = 864;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v124,
                  (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
                if ( !v123 )
                {
LABEL_115:
                  v71 = v118;
                }
                else
                {
                  v71 = v118;
                  if ( *(_DWORD *)&v122[4 * v123 + 20] == 864 )
                    --v123;
                }
                LODWORD(v75) = v74->max_length;
                v76 = v119 + 1;
              }
              while ( (__int64)(v119 + 1) < (int)v75 );
            }
          }
        }
        *(_DWORD *)&v122[4 * v123++ + 24] = 909;
        System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___Dispose(
          &v125,
          (const MethodInfo_21108AC *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
        if ( v123 && *(_DWORD *)&v122[4 * v123 + 20] == 909 )
          --v123;
      }
      *(_DWORD *)&v122[4 * v123++ + 24] = 937;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v126,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( v123 && *(_DWORD *)&v122[4 * v123 + 20] == 937 )
        --v123;
    }
    *(_DWORD *)&v122[4 * v123++ + 24] = 965;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v127,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v123 && *(_DWORD *)&v122[4 * v123 + 20] == 965 )
      --v123;
  }
  *(_DWORD *)&v122[4 * v123++ + 24] = 993;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v128,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
  if ( v123 && *(_DWORD *)&v122[4 * v123 + 20] == 993 )
    --v123;
}


// local variable allocation has failed, the output may be wrong!
BattleActorControl_o *__fastcall BattleEffectReplaceShaderTexture__GetModelBattleActor(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t servantId,
        bool isCheckUniqueId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Object_array *ObjectsOfType_object; // x0
  int max_length; // w8
  System_Object_array *v10; // x22
  unsigned int v11; // w24
  Il2CppClass **v12; // x8
  BattleActorControl_o *v13; // x23
  __int64 v15; // x0

  if ( (byte_42134E9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_42134E9 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_204A7F8 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_17;
  max_length = ObjectsOfType_object->max_length;
  v10 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v15 = sub_B0D9A8(ObjectsOfType_object);
        sub_B0D948(v15, 0LL);
      }
      v12 = &v10->obj.klass + (int)v11;
      v13 = (BattleActorControl_o *)v12[4];
      if ( !v13 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v12[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!isCheckUniqueId || v13->fields.uniqueID == this->fields.targetId) )
      {
        return v13;
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_B0D97C(ObjectsOfType_object);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleActorControl__o *__fastcall BattleEffectReplaceShaderTexture__GetTargetActors(
        BattleEffectReplaceShaderTexture_o *this,
        System_Int32_array *servantIds,
        bool isCheckUniqueId,
        bool useUniqueId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  void *Instance; // x0
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *v19; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x0
  UnityEngine_Object_o *v22; // x1
  unsigned __int64 v23; // x8
  unsigned __int64 v24; // x9
  __int64 v25; // x8
  unsigned __int64 v26; // x24
  bool v27; // w22
  UnityEngine_Object_o *ModelBattleActor; // x23
  __int64 v30; // x0

  if ( (byte_42134E8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, servantIds);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActorControl__Contains__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v12);
    sub_B0D8A4(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v15);
    byte_42134E8 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleActorControl__TypeInfo,
                                                                                                  servantIds,
                                                                                                  isCheckUniqueId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  if ( this->fields.isNPEffect )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    v19 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 11);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_46;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)v19,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (void *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v16 )
        {
          v21 = v16;
          v22 = Component_srcLineSprite;
LABEL_43:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v21,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
          return (System_Collections_Generic_List_BattleActorControl__o *)v16;
        }
        goto LABEL_46;
      }
    }
  }
  else if ( useUniqueId )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_204A7F8 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( !Instance )
      goto LABEL_46;
    v23 = *((unsigned int *)Instance + 6);
    if ( (__int64)(v23 << 32) >= 1 )
    {
      v24 = 0LL;
      while ( 1 )
      {
        if ( v24 >= v23 )
          goto LABEL_45;
        v22 = (UnityEngine_Object_o *)*((_QWORD *)Instance + v24 + 4);
        if ( !v22 )
          goto LABEL_46;
        if ( v22[18].fields.m_CachedPtr == this->fields.targetId )
          break;
        if ( (__int64)++v24 >= (int)v23 )
          return (System_Collections_Generic_List_BattleActorControl__o *)v16;
      }
      if ( v16 )
      {
        v21 = v16;
        goto LABEL_43;
      }
LABEL_46:
      sub_B0D97C(Instance);
    }
  }
  else if ( servantIds )
  {
    v25 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v25 >= 1 )
    {
      v26 = 0LL;
      v27 = isCheckUniqueId;
      do
      {
        if ( v26 >= (unsigned int)v25 )
        {
LABEL_45:
          v30 = sub_B0D9A8(Instance);
          sub_B0D948(v30, 0LL);
        }
        ModelBattleActor = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__GetModelBattleActor(
                                                     this,
                                                     servantIds->m_Items[v26 + 1],
                                                     v27,
                                                     v18);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (void *)UnityEngine_Object__op_Inequality(ModelBattleActor, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_46;
          Instance = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                               (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v16,
                               (WarBoardManager_TaskList_o *)ModelBattleActor,
                               (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_BattleActorControl__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v16,
              (EventMissionProgressRequest_Argument_ProgressData_o *)ModelBattleActor,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
        }
        LODWORD(v25) = servantIds->max_length;
        ++v26;
      }
      while ( (__int64)v26 < (int)v25 );
    }
  }
  return (System_Collections_Generic_List_BattleActorControl__o *)v16;
}


void __fastcall BattleEffectReplaceShaderTexture__OnDestroy(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_Material__o *replaceMaterials; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42134E6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Material__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_42134E6 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( this->fields.destroyReplaceShaderMaterials )
  {
    replaceMaterials = this->fields.replaceMaterials;
    if ( !replaceMaterials )
      goto LABEL_18;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceMaterials,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
    {
      current = v10.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__DestroyImmediate_34935488((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
  }
  replaceMaterials = this->fields.replaceMaterials;
  if ( !replaceMaterials )
LABEL_18:
    sub_B0D97C(replaceMaterials);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)replaceMaterials,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_Material__Clear__);
}


void __fastcall BattleEffectReplaceShaderTexture__SetTargetId(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleEffectReplaceShaderTexture__Start(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isNPEffect )
    BattleEffectReplaceShaderTexture__Execute(this, method);
}


UnityEngine_Texture_o *__fastcall BattleEffectReplaceShaderTexture__getActorTexture(
        BattleEffectReplaceShaderTexture_o *this,
        BattleActorControl_o *actor,
        System_String_o *searchMeshWord,
        const MethodInfo *method)
{
  int replaceObjects; // w8
  BattleEffectReplaceShaderTexture_o *v7; // x20
  unsigned int v8; // w22
  BattleEffectReplaceShaderTexture_c **v9; // x8
  UnityEngine_Object_o *v10; // x21
  __int64 v12; // x0

  if ( (byte_42134EB & 1) == 0 )
  {
    this = (BattleEffectReplaceShaderTexture_o *)sub_B0D8A4(
                                                   &Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____67969328,
                                                   actor);
    byte_42134EB = 1;
  }
  if ( !actor )
    goto LABEL_16;
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                 (UnityEngine_Component_o *)actor,
                                                 1,
                                                 (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____67969328);
  if ( !this )
    goto LABEL_16;
  replaceObjects = (int)this->fields.replaceObjects;
  v7 = this;
  if ( replaceObjects < 1 )
    return 0LL;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= replaceObjects )
    {
      v12 = sub_B0D9A8(this);
      sub_B0D948(v12, 0LL);
    }
    v9 = &v7->klass + (int)v8;
    v10 = (UnityEngine_Object_o *)v9[4];
    if ( !v10 )
      goto LABEL_16;
    this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v9[4], 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Object__get_name(v10, 0LL);
      if ( !this )
        goto LABEL_16;
      this = (BattleEffectReplaceShaderTexture_o *)System_String__IndexOf_43922252(
                                                     (System_String_o *)this,
                                                     searchMeshWord,
                                                     0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
        break;
    }
    replaceObjects = (int)v7->fields.replaceObjects;
    if ( (int)++v8 >= replaceObjects )
      return 0LL;
  }
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v10, 0LL);
  if ( !this )
LABEL_16:
    sub_B0D97C(this);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)this, 0LL);
}


UnityEngine_Renderer_o *__fastcall BattleEffectReplaceShaderTexture__getRenderer(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *v9; // x8
  UnityEngine_Renderer_o *result; // x0

  if ( (byte_42134ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, gameObject);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v7);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B0D8A4(
                                                   &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___,
                                                   v8);
    byte_42134ED = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_15;
      v9 = &Method_UnityEngine_GameObject_GetComponent_Renderer___;
      goto LABEL_12;
    case 1:
      if ( !gameObject )
        goto LABEL_15;
      v9 = &Method_UnityEngine_GameObject_GetComponent_MeshRenderer___;
      goto LABEL_12;
    case 2:
      if ( !gameObject )
        goto LABEL_15;
      v9 = &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___;
      goto LABEL_12;
    case 3:
      if ( !gameObject )
LABEL_15:
        sub_B0D97C(this);
      v9 = &Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___;
LABEL_12:
      result = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           gameObject,
                                           (const MethodInfo_1B62BA8 *)*v9);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getRenderersInChildren(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  UnityEngine_Renderer_array *result; // x0

  if ( (byte_42134EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____68010000, gameObject);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____68010016, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____68010024, v9);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B0D8A4(
                                                   &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____68010040,
                                                   v10);
    byte_42134EE = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_15;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____68010024;
      goto LABEL_12;
    case 1:
      if ( !gameObject )
        goto LABEL_15;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____68010000;
      goto LABEL_12;
    case 2:
      if ( !gameObject )
        goto LABEL_15;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____68010040;
      goto LABEL_12;
    case 3:
      if ( !gameObject )
LABEL_15:
        sub_B0D97C(this);
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____68010016;
LABEL_12:
      result = (UnityEngine_Renderer_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                               gameObject,
                                               includeInactive,
                                               (const MethodInfo_1B63008 *)*v11);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


System_Collections_Generic_List_Material__o *__fastcall BattleEffectReplaceShaderTexture__getTargetMaterials(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Renderer_o *renderer,
        System_String_o *targetShaderName,
        bool targetShaderAll,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  UnityEngine_Object_o *materials; // x0
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v15; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v17; // x23
  UnityEngine_Object_o *shader; // x24
  System_String_o *name; // x0
  __int64 v21; // x0

  if ( (byte_42134EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Material__Add__, renderer);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Material__Contains__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Material___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_Material__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_42134EF = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Material__TypeInfo,
                                                                                                  renderer,
                                                                                                  targetShaderName);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !renderer || (materials = (UnityEngine_Object_o *)UnityEngine_Renderer__get_materials(renderer, 0LL)) == 0LL )
LABEL_26:
    sub_B0D97C(materials);
  klass = materials[1].klass;
  v15 = materials;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
      {
        v21 = sub_B0D9A8(materials);
        sub_B0D948(v21, 0LL);
      }
      v17 = (UnityEngine_Object_o *)*((_QWORD *)&v15[1].monitor + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
        goto LABEL_30;
      if ( !v17 )
        goto LABEL_26;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v17, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(shader, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
      {
LABEL_30:
        if ( targetShaderAll )
          goto LABEL_21;
        if ( !v17 )
          goto LABEL_26;
        materials = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v17, 0LL);
        if ( !materials )
          goto LABEL_26;
        name = UnityEngine_Object__get_name(materials, 0LL);
        materials = (UnityEngine_Object_o *)System_String__op_Equality(name, targetShaderName, 0LL);
        if ( ((unsigned __int8)materials & 1) != 0 )
        {
LABEL_21:
          if ( !v12 )
            goto LABEL_26;
          materials = (UnityEngine_Object_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12,
                                                (WarBoardManager_TaskList_o *)v17,
                                                (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_Material__Contains__);
          if ( ((unsigned __int8)materials & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Material__Add__);
        }
      }
      LODWORD(klass) = v15[1].klass;
    }
  }
  return (System_Collections_Generic_List_Material__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getTargetRenderers(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *targetObject,
        int32_t rendererType,
        bool targetsInChildren,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v10; // x1
  System_Int32_array **Renderer; // x19
  __int64 v13; // x20
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_42134EC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, targetObject);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B0D8A4(&UnityEngine_Renderer___TypeInfo, v10);
    byte_42134EC = 1;
  }
  if ( targetsInChildren )
    return BattleEffectReplaceShaderTexture__getRenderersInChildren(
             this,
             targetObject,
             rendererType,
             includeInactive,
             (const MethodInfo *)includeInactive);
  Renderer = (System_Int32_array **)BattleEffectReplaceShaderTexture__getRenderer(
                                      this,
                                      targetObject,
                                      rendererType,
                                      (const MethodInfo *)targetsInChildren);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Renderer, 0LL, 0LL) )
  {
    v14 = sub_B0D8BC(UnityEngine_Renderer___TypeInfo, 1LL);
    if ( !v14 )
      sub_B0D97C(0LL);
    v13 = v14;
    if ( Renderer )
    {
      v14 = sub_B0D964(Renderer, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v14 )
      {
        v22 = sub_B0D99C();
        sub_B0D948(v22, 0LL);
      }
    }
    if ( !*(_DWORD *)(v13 + 24) )
    {
      v21 = sub_B0D9A8(v14);
      sub_B0D948(v21, 0LL);
    }
    *(_QWORD *)(v13 + 32) = Renderer;
    sub_B0D840((BattleServantConfConponent_o *)(v13 + 32), Renderer, v15, v16, v17, v18, v19, v20);
  }
  return (UnityEngine_Renderer_array *)v13;
}


UnityEngine_Shader_o *__fastcall BattleEffectReplaceShaderTexture__loadShader(
        BattleEffectReplaceShaderTexture_o *this,
        System_String_o *shaderName,
        System_Collections_Generic_Dictionary_string__Shader__o **shaderCaches,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_string__Shader__o *v9; // x0
  UnityEngine_Shader_o *result; // x0
  UnityEngine_Object_o *v11; // x21
  bool v12; // w8

  if ( (byte_42134EA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__, shaderName);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_42134EA = 1;
  }
  v9 = *shaderCaches;
  if ( !*shaderCaches )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v9,
         (System_Xml_XmlQualifiedName_o *)shaderName,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__) )
  {
    v9 = *shaderCaches;
    if ( *shaderCaches )
      return (UnityEngine_Shader_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                       (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                                       (System_Type_o *)shaderName,
                                       (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
LABEL_14:
    sub_B0D97C(v9);
  }
  v11 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(shaderName, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  result = 0LL;
  if ( v12 )
  {
    v9 = *shaderCaches;
    if ( !*shaderCaches )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v9,
      (System_Xml_XmlQualifiedName_o *)shaderName,
      (System_Xml_Schema_XmlSchemaObject_o *)v11,
      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    return (UnityEngine_Shader_o *)v11;
  }
  return result;
}


void __fastcall BattleEffectReplaceShaderTexture__setupChocoShader(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        UnityEngine_Shader_o *chocoShader,
        UnityEngine_Texture2D_o *chocoTexture,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s7
  __int64 v20; // x0
  MethodInfo v21; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42134F0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, material);
    sub_B0D8A4(&StringLiteral_16002/*"_Color"*/, v8);
    sub_B0D8A4(&StringLiteral_15986/*"_ChocoTex"*/, v9);
    sub_B0D8A4(&StringLiteral_16143/*"_Use_alphawidth"*/, v10);
    sub_B0D8A4(&StringLiteral_15963/*"_AddColor"*/, v11);
    byte_42134F0 = 1;
  }
  v21.methodPointer = 0LL;
  v21.invoker_method = 0LL;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v16, v17, v18, v19, &v21);
  if ( !material )
    sub_B0D97C(v20);
  if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)StringLiteral_16002/*"_Color"*/, 0LL) )
  {
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16002/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, 0LL) )
  {
    v24 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, 0LL);
    v21.methodPointer = *(Il2CppMethodPointer *)&v24.fields.r;
    v21.invoker_method = *(void **)&v24.fields.b;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)chocoShader, 0LL, 0LL) )
    UnityEngine_Material__set_shader(material, chocoShader, 0LL);
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = a;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16002/*"_Color"*/, v25, 0LL);
  *(_QWORD *)&v26.fields.r = v21.methodPointer;
  *(_QWORD *)&v26.fields.b = v21.invoker_method;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, v26, 0LL);
  UnityEngine_Material__SetTexture(
    material,
    (System_String_o *)StringLiteral_15986/*"_ChocoTex"*/,
    (UnityEngine_Texture_o *)chocoTexture,
    0LL);
  if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)StringLiteral_16143/*"_Use_alphawidth"*/, 0LL) )
    UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16143/*"_Use_alphawidth"*/, 1.0, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__setupShadowShader(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        UnityEngine_Shader_o *shadowShader,
        const MethodInfo *method)
{
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  __int64 v10; // x1
  _BOOL8 v11; // x0
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42134F1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, material);
    sub_B0D8A4(&StringLiteral_16002/*"_Color"*/, v10);
    byte_42134F1 = 1;
  }
  v13.fields.r = 0.05;
  v13.fields.a = 1.0;
  v13.fields.g = 0.05;
  v13.fields.b = 0.05;
  *(_QWORD *)&v12.fields.r = 0LL;
  *(_QWORD *)&v12.fields.b = 0LL;
  UnityEngine_Color___ctor(v13, v4, v5, v6, v7, (const MethodInfo *)&v12);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)shadowShader, 0LL, 0LL);
  if ( !v11 )
  {
    if ( material )
      goto LABEL_10;
LABEL_11:
    sub_B0D97C(v11);
  }
  if ( !material )
    goto LABEL_11;
  UnityEngine_Material__set_shader(material, shadowShader, 0LL);
LABEL_10:
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16002/*"_Color"*/, v12, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__updateShaderValues(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *replaceShaderFloatValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *replaceShaderColorValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *replaceShaderTextureValues,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  _BOOL8 v21; // x0
  Il2CppObject *current; // x23
  _BOOL8 v23; // x0
  Il2CppObject *v24; // x22
  int v25; // w21
  int v26; // w8
  _BOOL8 v27; // x0
  Il2CppObject *v28; // x22
  int v29; // w21
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+0h] [xbp-B0h] BYREF
  int v31[3]; // [xsp+18h] [xbp-98h]
  int v32; // [xsp+24h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_42134F2 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__,
      material);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__,
      v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__,
      v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__,
      v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__,
      v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__get_Current__,
      v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__get_Current__,
      v16);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__get_Current__,
      v17);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__,
      v18);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__,
      v19);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B0D8A4(
                                                   &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__,
                                                   v20);
    byte_42134F2 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  memset(&v34, 0, sizeof(v34));
  memset(&v33, 0, sizeof(v33));
  v32 = 0;
  if ( !replaceShaderFloatValues )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderFloatValues,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
  v35 = v30;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__);
    if ( !v21 )
      break;
    current = v35.fields.current;
    if ( !v35.fields.current )
      sub_B0D97C(v21);
    if ( !material )
      sub_B0D97C(v21);
    if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)v35.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetFloat(material, (System_String_o *)current[1].klass, *(float *)&current[1].monitor, 0LL);
  }
  v31[0] = 74;
  v32 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
  v32 = 0;
  if ( !replaceShaderColorValues )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderColorValues,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
  v34 = v30;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__);
    if ( !v23 )
      break;
    v24 = v34.fields.current;
    if ( !v34.fields.current )
      sub_B0D97C(v23);
    if ( !material )
      sub_B0D97C(v23);
    if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)v34.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)v24[1].klass,
        *(UnityEngine_Color_o *)&v24[1].monitor,
        0LL);
  }
  v31[0] = 148;
  v25 = ++v32;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( v31[v25 - 1] == 148 )
    {
      --v25;
      v32 = v26;
    }
  }
  if ( !replaceShaderTextureValues )
LABEL_37:
    sub_B0D97C(this);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderTextureValues,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__);
    if ( !v27 )
      break;
    v28 = v33.fields.current;
    if ( !v33.fields.current )
      sub_B0D97C(v27);
    if ( !material )
      sub_B0D97C(v27);
    if ( UnityEngine_Material__HasProperty_40813076(material, (System_String_o *)v33.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetTexture(
        material,
        (System_String_o *)v28[1].klass,
        (UnityEngine_Texture_o *)v28[1].monitor,
        0LL);
  }
  v31[v25] = 228;
  v29 = ++v32;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
  if ( v29 && v31[v29 - 1] == 228 )
    v32 = v29 - 1;
}


void __fastcall BattleEffectReplaceShaderTexture_ReplaceObject___ctor(
        BattleEffectReplaceShaderTexture_ReplaceObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42138FA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16930/*"body_level"*/, method);
    byte_42138FA = 1;
  }
  this->fields.useUniqueId = 1;
  this->fields.isCheckUniqueId = 1;
  v9 = (System_Int32_array **)StringLiteral_16930/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_16930/*"body_level"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.searchMeshWord, v9, v2, v3, v4, v5, v6, v7);
  this->fields.targetShaderAll = 1;
  *(_WORD *)&this->fields.targetsInChildren = 257;
  *(_WORD *)&this->fields.useAutoReplaceShader = 257;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderColorValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderColorValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderFloatValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderFloatValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderTextureValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderTextureValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}