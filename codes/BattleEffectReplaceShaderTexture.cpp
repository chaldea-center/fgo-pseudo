void __fastcall BattleEffectReplaceShaderTexture___ctor(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_41868CA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Material___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_List_Material__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_B2C35C(&StringLiteral_7158/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, v9);
    sub_B2C35C(&StringLiteral_7161/*"Hidden/Particle/distortion-GrabPass"*/, v10);
    sub_B2C35C(&StringLiteral_6339/*"FGO_Battle/Ken/Base"*/, v11);
    sub_B2C35C(&StringLiteral_7162/*"Hidden/Particle/distortion-Stencil"*/, v12);
    sub_B2C35C(&StringLiteral_7160/*"Hidden/Particle/distortion"*/, v13);
    sub_B2C35C(&StringLiteral_6340/*"FGO_Battle/Particle/Base"*/, v14);
    sub_B2C35C(&StringLiteral_7157/*"Hidden/Particle/MultiplyAdd1Pass"*/, v15);
    sub_B2C35C(&StringLiteral_7151/*"Hidden/Ken/Distortion"*/, v16);
    sub_B2C35C(&StringLiteral_7159/*"Hidden/Particle/dissolve"*/, v17);
    sub_B2C35C(&StringLiteral_7153/*"Hidden/Ken/MultiplyAdd"*/, v18);
    sub_B2C35C(&StringLiteral_7154/*"Hidden/Particle/Base-Stencil"*/, v19);
    sub_B2C35C(&StringLiteral_7155/*"Hidden/Particle/MultiplyAdd"*/, v20);
    sub_B2C35C(&StringLiteral_7156/*"Hidden/Particle/MultiplyAdd-Stencil"*/, v21);
    sub_B2C35C(&StringLiteral_7152/*"Hidden/Ken/GradationMap"*/, v22);
    byte_41868CA = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
  this->fields.replaceObjects = (struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *)v23;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.replaceObjects,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !v30 )
    sub_B2C434(v31, v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6340/*"FGO_Battle/Particle/Base"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7155/*"Hidden/Particle/MultiplyAdd"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7157/*"Hidden/Particle/MultiplyAdd1Pass"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7160/*"Hidden/Particle/distortion"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7154/*"Hidden/Particle/Base-Stencil"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7156/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7158/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7162/*"Hidden/Particle/distortion-Stencil"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7161/*"Hidden/Particle/distortion-GrabPass"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7159/*"Hidden/Particle/dissolve"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6339/*"FGO_Battle/Ken/Base"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7153/*"Hidden/Ken/MultiplyAdd"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7151/*"Hidden/Ken/Distortion"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7152/*"Hidden/Ken/GradationMap"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.autoReplaceShaderNames = (struct System_Collections_Generic_List_string__o *)v30;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.autoReplaceShaderNames,
    (System_Int32_array **)v30,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.replaceMaterials = (struct System_Collections_Generic_List_Material__o *)v39;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.replaceMaterials,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEffectReplaceShaderTexture__Execute(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  BattleEffectReplaceShaderTexture_o *v2; // x19
  __int64 v3; // x1
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
  struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *replaceObjects; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v38; // x20
  UnityEngine_Object_o *v39; // x22
  _BOOL8 v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x4
  Il2CppObject *current; // x20
  System_Collections_Generic_List_BattleActorControl__o *TargetActors; // x0
  __int64 v45; // x1
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x21
  _BOOL8 isShadowServant; // x0
  const MethodInfo *v50; // x3
  bool v51; // w23
  UnityEngine_Object_o *ActorTexture; // x24
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v54; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  UnityEngine_Transform_o *v58; // x0
  __int64 v59; // x1
  UnityEngine_Transform_o *v60; // x0
  __int64 v61; // x1
  UnityEngine_Transform_o *v62; // x21
  __int64 v63; // x0
  __int64 v64; // x1
  int v65; // s0
  UnityEngine_Transform_o *v68; // x21
  __int64 v69; // x0
  __int64 v70; // x1
  int v71; // s0
  UnityEngine_Object_o *klass; // x21
  __int64 v75; // x1
  UnityEngine_Object_o *v76; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v77; // x0
  __int64 v78; // x1
  System_Collections_Generic_List_Target_PlayerTypeFlag__o *monitor; // x0
  Il2CppObject *v80; // x21
  const MethodInfo *v81; // x5
  UnityEngine_Renderer_array *TargetRenderers; // x0
  __int64 v83; // x1
  UnityEngine_Renderer_array *v84; // x27
  __int64 v85; // x8
  unsigned __int64 v86; // x9
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v87; // x0
  WarBoardManager_TaskList_o *v88; // x21
  const MethodInfo *v89; // x4
  System_Collections_Generic_List_Material__o *TargetMaterials; // x0
  __int64 v91; // x1
  Il2CppObject *v92; // x28
  _BOOL8 v93; // x0
  __int64 v94; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *autoReplaceShaderNames; // x21
  UnityEngine_Object_o *shader; // x0
  __int64 v97; // x1
  System_String_o *name; // x0
  UnityEngine_Object_o *v99; // x0
  __int64 v100; // x1
  System_String_o *v101; // x0
  System_String_o *v102; // x0
  const MethodInfo *v103; // x3
  UnityEngine_Object_o *ReplaceChocoShader; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v106; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  _BOOL8 v108; // x0
  __int64 v109; // x1
  UnityEngine_Shader_o *v110; // x0
  _BOOL8 v111; // x0
  const MethodInfo *v112; // x3
  UIAtlas_o *UIAtlas; // x0
  const MethodInfo *v114; // x4
  UnityEngine_Texture2D_o *v115; // x3
  BattleEffectReplaceShaderTexture_o *v116; // x0
  const MethodInfo *v117; // x5
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v118; // x21
  UnityEngine_Object_o *v119; // x0
  __int64 v120; // x1
  System_String_o *v121; // x0
  UnityEngine_Object_o *v122; // x0
  __int64 v123; // x1
  System_String_o *v124; // x0
  System_String_o *v125; // x0
  const MethodInfo *v126; // x3
  UnityEngine_Object_o *v127; // x21
  _BOOL8 v128; // x0
  const MethodInfo *v129; // x3
  BattleEffectReplaceShaderTexture_o *v130; // x0
  const MethodInfo *v131; // x5
  System_Collections_Generic_List_WarBoardManager_TaskList__o *replaceMaterials; // x0
  __int64 v133; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v134; // x0
  __int64 v135; // x0
  System_String_o *targetShaderName; // [xsp+8h] [xbp-158h]
  Il2CppObject *v137; // [xsp+10h] [xbp-150h]
  unsigned __int64 v138; // [xsp+18h] [xbp-148h]
  UnityEngine_Component_o *v139; // [xsp+20h] [xbp-140h]
  bool isChocoServant; // [xsp+2Ch] [xbp-134h]
  _BYTE v141[44]; // [xsp+30h] [xbp-130h] BYREF
  int v142; // [xsp+5Ch] [xbp-104h]
  System_Collections_Generic_List_Enumerator_T__o v143; // [xsp+60h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v144; // [xsp+80h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v145; // [xsp+A0h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v146; // [xsp+C0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v147; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_string__Shader__o *shaderCaches[2]; // [xsp+100h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_41868BE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Shader___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__Shader__TypeInfo, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__,
      v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__,
      v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__get_Current__,
      v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v17);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__get_Current__,
      v18);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Material__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Material__Contains__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__Contains__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v24);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__,
      v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v26);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__,
      v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__get_Count__, v29);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v30);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v31);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v32);
    sub_B2C35C(&StringLiteral_15937/*"_Choco"*/, v33);
    sub_B2C35C(&StringLiteral_16059/*"_Shadow"*/, v34);
    sub_B2C35C(&StringLiteral_12829/*"Shaders/ChocoMap"*/, v35);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B2C35C(&StringLiteral_4518/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v36);
    byte_41868BE = 1;
  }
  shaderCaches[0] = 0LL;
  memset(&v147, 0, sizeof(v147));
  memset(&v146, 0, sizeof(v146));
  memset(&v145, 0, sizeof(v145));
  memset(&v144, 0, sizeof(v144));
  memset(&v143, 0, sizeof(v143));
  v142 = 0;
  replaceObjects = v2->fields.replaceObjects;
  if ( !replaceObjects )
    goto LABEL_159;
  if ( replaceObjects->fields._size < 1 )
    return;
  v38 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v38,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
  shaderCaches[0] = (System_Collections_Generic_Dictionary_string__Shader__o *)v38;
  this = (BattleEffectReplaceShaderTexture_o *)v2->fields.replaceObjects;
  if ( !this )
LABEL_159:
    sub_B2C434(this, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v141,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
  v39 = 0LL;
  v147 = *(System_Collections_Generic_List_Enumerator_T__o *)v141;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v147,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__);
    if ( !v40 )
      break;
    current = v147.fields.current;
    if ( !v147.fields.current )
      sub_B2C434(v40, v41);
    TargetActors = BattleEffectReplaceShaderTexture__GetTargetActors(
                     v2,
                     (System_Int32_array *)v147.fields.current[1].monitor,
                     (bool)v147.fields.current[2].klass,
                     (bool)v147.fields.current[1].klass,
                     v42);
    if ( !TargetActors )
      sub_B2C434(0LL, v45);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v141,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TargetActors,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    v146 = *(System_Collections_Generic_List_Enumerator_T__o *)v141;
    while ( 1 )
    {
      v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v146,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
      if ( !v46 )
        break;
      v48 = v146.fields.current;
      if ( !v146.fields.current )
        sub_B2C434(v46, v47);
      isChocoServant = BattleActorControl__isChocoServant((BattleActorControl_o *)v146.fields.current, 0LL);
      isShadowServant = BattleActorControl__isShadowServant((BattleActorControl_o *)v48, 0LL);
      v51 = isShadowServant;
      v139 = (UnityEngine_Component_o *)v48;
      if ( LOBYTE(current[11].monitor) )
        ActorTexture = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getActorTexture(
                                                 (BattleEffectReplaceShaderTexture_o *)isShadowServant,
                                                 (BattleActorControl_o *)v48,
                                                 (System_String_o *)current[2].monitor,
                                                 v50);
      else
        ActorTexture = 0LL;
      if ( v51 && LOBYTE(current[3].klass) != 0 )
      {
        Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !Instance )
          sub_B2C434(0LL, v54);
        ShadowEffect = ServantAssetLoadManager__createShadowEffect(Instance, 0, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v48, 0LL);
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
        v58 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)v58 & 1) != 0 )
        {
          v58 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
          NodeFromName = (UnityEngine_Object_o *)v58;
        }
        if ( !ShadowEffect )
          sub_B2C434(v58, v59);
        v60 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !v60 )
          sub_B2C434(0LL, v61);
        UnityEngine_Transform__SetParent(v60, (UnityEngine_Transform_o *)NodeFromName, 0LL);
        v62 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        *(UnityEngine_Vector3_o *)&v65 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v62 )
          sub_B2C434(v63, v64);
        UnityEngine_Transform__set_localPosition(v62, *(UnityEngine_Vector3_o *)&v65, 0LL);
        v68 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        *(UnityEngine_Vector3_o *)&v71 = UnityEngine_Vector3__get_one(0LL);
        if ( !v68 )
          sub_B2C434(v69, v70);
        UnityEngine_Transform__set_localScale(v68, *(UnityEngine_Vector3_o *)&v71, 0LL);
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
        v76 = (UnityEngine_Object_o *)current[7].klass;
        if ( !v76 )
          sub_B2C434(0LL, v75);
        targetShaderName = UnityEngine_Object__get_name(v76, 0LL);
      }
      v77 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current[4].klass;
      if ( !v77 )
        sub_B2C434(0LL, v75);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v141,
        v77,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v145 = *(System_Collections_Generic_List_Enumerator_T__o *)v141;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v145,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        monitor = (System_Collections_Generic_List_Target_PlayerTypeFlag__o *)current[5].monitor;
        if ( !monitor )
          sub_B2C434(0LL, v78);
        v80 = v145.fields.current;
        System_Collections_Generic_List_Target_PlayerTypeFlag___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v141,
          monitor,
          (const MethodInfo_2F6AE14 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
        v144 = *(System_Collections_Generic_List_Enumerator_T__o *)v141;
        while ( System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___MoveNext(
                  &v144,
                  (const MethodInfo_20E878C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__) )
        {
          TargetRenderers = BattleEffectReplaceShaderTexture__getTargetRenderers(
                              v2,
                              (UnityEngine_GameObject_o *)v80,
                              (int32_t)v144.fields.current,
                              (bool)current[5].klass,
                              BYTE1(current[5].klass),
                              v81);
          v84 = TargetRenderers;
          if ( TargetRenderers )
          {
            v85 = *(_QWORD *)&TargetRenderers->max_length;
            if ( (int)v85 >= 1 )
            {
              v86 = 0LL;
              v137 = v80;
              do
              {
                if ( v86 >= (unsigned int)v85 )
                {
                  v135 = sub_B2C460(TargetRenderers);
                  sub_B2C400(v135, 0LL);
                }
                v87 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)current[4].monitor;
                if ( !v87 )
                  sub_B2C434(0LL, v83);
                v138 = v86;
                v88 = (WarBoardManager_TaskList_o *)v84->m_Items[v86];
                TargetRenderers = (UnityEngine_Renderer_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                  v87,
                                                                  v88,
                                                                  (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                if ( ((unsigned __int8)TargetRenderers & 1) != 0 )
                  goto LABEL_115;
                TargetMaterials = BattleEffectReplaceShaderTexture__getTargetMaterials(
                                    (BattleEffectReplaceShaderTexture_o *)TargetRenderers,
                                    (UnityEngine_Renderer_o *)v88,
                                    targetShaderName,
                                    (bool)current[6].klass,
                                    v89);
                if ( !TargetMaterials )
                  sub_B2C434(0LL, v91);
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)v141,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TargetMaterials,
                  (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
                v143 = *(System_Collections_Generic_List_Enumerator_T__o *)v141;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v143,
                          (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
                {
                  v92 = v143.fields.current;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  v93 = UnityEngine_Object__op_Inequality(ActorTexture, 0LL, 0LL);
                  if ( v93 )
                  {
                    if ( !v92 )
                      sub_B2C434(v93, v94);
                    UnityEngine_Material__set_mainTexture(
                      (UnityEngine_Material_o *)v92,
                      (UnityEngine_Texture_o *)ActorTexture,
                      0LL);
                  }
                  if ( isChocoServant )
                  {
                    if ( !BYTE1(current[11].monitor) )
                      goto LABEL_63;
                    if ( !v92 )
                      sub_B2C434(v93, v94);
                    autoReplaceShaderNames = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v2->fields.autoReplaceShaderNames;
                    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v92,
                                                       0LL);
                    if ( !shader )
                      sub_B2C434(0LL, v97);
                    name = UnityEngine_Object__get_name(shader, 0LL);
                    if ( !autoReplaceShaderNames )
                      sub_B2C434(name, name);
                    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                           autoReplaceShaderNames,
                           (WarBoardManager_TaskList_o *)name,
                           (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
                    {
                      v99 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v92, 0LL);
                      if ( !v99 )
                        sub_B2C434(0LL, v100);
                      v101 = UnityEngine_Object__get_name(v99, 0LL);
                      v102 = System_String__Concat_44305532(v101, (System_String_o *)StringLiteral_15937/*"_Choco"*/, 0LL);
                      ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                     (BattleEffectReplaceShaderTexture_o *)v102,
                                                                     v102,
                                                                     shaderCaches,
                                                                     v103);
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
                      gameObject = UnityEngine_Component__get_gameObject(v139, 0LL);
                      if ( !gameObject )
                        sub_B2C434(0LL, v106);
                      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          gameObject,
                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      v108 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
                      if ( v108 )
                      {
                        if ( !v92 )
                          sub_B2C434(v108, v109);
                        v110 = UnityEngine_Material__get_shader((UnityEngine_Material_o *)v92, 0LL);
                        if ( !Component_srcLineSprite )
                          sub_B2C434(v110, v110);
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleServantDeadComponent__getReplaceChocoShader(
                                                                       (BattleServantDeadComponent_o *)Component_srcLineSprite,
                                                                       v110,
                                                                       0LL,
                                                                       0LL);
                      }
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v111 = UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL);
                    if ( v111 )
                      ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                     (BattleEffectReplaceShaderTexture_o *)v111,
                                                                     (System_String_o *)StringLiteral_4518/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/,
                                                                     shaderCaches,
                                                                     v112);
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UIAtlas = (UIAtlas_o *)UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
                    if ( ((unsigned __int8)UIAtlas & 1) != 0 )
                    {
                      UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                                  (System_String_o *)StringLiteral_12829/*"Shaders/ChocoMap"*/,
                                  (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
                      v115 = (UnityEngine_Texture2D_o *)UIAtlas;
                    }
                    else
                    {
                      v115 = (UnityEngine_Texture2D_o *)v39;
                    }
                    v39 = (UnityEngine_Object_o *)v115;
                    BattleEffectReplaceShaderTexture__setupChocoShader(
                      (BattleEffectReplaceShaderTexture_o *)UIAtlas,
                      (UnityEngine_Material_o *)v92,
                      (UnityEngine_Shader_o *)ReplaceChocoShader,
                      v115,
                      v114);
                    BattleEffectReplaceShaderTexture__updateShaderValues(
                      v116,
                      (UnityEngine_Material_o *)v92,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[8].klass,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[8].monitor,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[9].klass,
                      v117);
                  }
                  if ( v51 )
                  {
                    if ( !v92 )
                      sub_B2C434(v93, v94);
                    v118 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v2->fields.autoReplaceShaderNames;
                    v119 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v92, 0LL);
                    if ( !v119 )
                      sub_B2C434(0LL, v120);
                    v121 = UnityEngine_Object__get_name(v119, 0LL);
                    if ( !v118 )
                      sub_B2C434(v121, v121);
                    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                           v118,
                           (WarBoardManager_TaskList_o *)v121,
                           (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
                    {
                      v122 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v92,
                                                       0LL);
                      if ( !v122 )
                        sub_B2C434(0LL, v123);
                      v124 = UnityEngine_Object__get_name(v122, 0LL);
                      v125 = System_String__Concat_44305532(v124, (System_String_o *)StringLiteral_16059/*"_Shadow"*/, 0LL);
                      v127 = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                       (BattleEffectReplaceShaderTexture_o *)v125,
                                                       v125,
                                                       shaderCaches,
                                                       v126);
                    }
                    else
                    {
                      v127 = 0LL;
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v128 = UnityEngine_Object__op_Equality(v127, 0LL, 0LL);
                    if ( v128 )
                      v127 = (UnityEngine_Object_o *)current[9].monitor;
                    BattleEffectReplaceShaderTexture__setupShadowShader(
                      (BattleEffectReplaceShaderTexture_o *)v128,
                      (UnityEngine_Material_o *)v92,
                      (UnityEngine_Shader_o *)v127,
                      v129);
                    BattleEffectReplaceShaderTexture__updateShaderValues(
                      v130,
                      (UnityEngine_Material_o *)v92,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[10].klass,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[10].monitor,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[11].klass,
                      v131);
                  }
                  replaceMaterials = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v2->fields.replaceMaterials;
                  if ( !replaceMaterials )
                    sub_B2C434(0LL, v94);
                  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                          replaceMaterials,
                          (WarBoardManager_TaskList_o *)v92,
                          (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_Material__Contains__) )
                  {
                    v134 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields.replaceMaterials;
                    if ( !v134 )
                      sub_B2C434(0LL, v133);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v134,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Material__Add__);
                  }
                }
                *(_DWORD *)&v141[4 * v142++ + 24] = 864;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v143,
                  (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
                if ( !v142 )
                {
LABEL_115:
                  v80 = v137;
                }
                else
                {
                  v80 = v137;
                  if ( *(_DWORD *)&v141[4 * v142 + 20] == 864 )
                    --v142;
                }
                LODWORD(v85) = v84->max_length;
                v86 = v138 + 1;
              }
              while ( (__int64)(v138 + 1) < (int)v85 );
            }
          }
        }
        *(_DWORD *)&v141[4 * v142++ + 24] = 909;
        System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___Dispose(
          &v144,
          (const MethodInfo_20E8788 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
        if ( v142 && *(_DWORD *)&v141[4 * v142 + 20] == 909 )
          --v142;
      }
      *(_DWORD *)&v141[4 * v142++ + 24] = 937;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v145,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( v142 && *(_DWORD *)&v141[4 * v142 + 20] == 937 )
        --v142;
    }
    *(_DWORD *)&v141[4 * v142++ + 24] = 965;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v146,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v142 && *(_DWORD *)&v141[4 * v142 + 20] == 965 )
      --v142;
  }
  *(_DWORD *)&v141[4 * v142++ + 24] = 993;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v147,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
  if ( v142 && *(_DWORD *)&v141[4 * v142 + 20] == 993 )
    --v142;
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
  __int64 v9; // x1
  int max_length; // w8
  System_Object_array *v11; // x22
  unsigned int v12; // w24
  Il2CppClass **v13; // x8
  BattleActorControl_o *v14; // x23
  __int64 v16; // x0

  if ( (byte_41868C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_41868C0 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2095CAC *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_17;
  max_length = ObjectsOfType_object->max_length;
  v11 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v16 = sub_B2C460(ObjectsOfType_object);
        sub_B2C400(v16, 0LL);
      }
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleActorControl_o *)v13[4];
      if ( !v14 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v13[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!isCheckUniqueId || v14->fields.uniqueID == this->fields.targetId) )
      {
        return v14;
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_B2C434(ObjectsOfType_object, v9);
  }
  return 0LL;
}


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
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x1
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x0
  unsigned __int64 v23; // x8
  unsigned __int64 v24; // x9
  __int64 v25; // x8
  unsigned __int64 v26; // x24
  bool v27; // w22
  UnityEngine_Object_o *ModelBattleActor; // x23
  __int64 v30; // x0

  if ( (byte_41868BF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, servantIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleActorControl__Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v15);
    byte_41868BF = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  if ( this->fields.isNPEffect )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    v20 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 11);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_46;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)v20,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
          v22 = v16;
          v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
LABEL_43:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            v19,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
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
    Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2095CAC *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)Instance + v24 + 4);
        if ( !v19 )
          goto LABEL_46;
        if ( v19[10].fields.addCount == this->fields.targetId )
          break;
        if ( (__int64)++v24 >= (int)v23 )
          return (System_Collections_Generic_List_BattleActorControl__o *)v16;
      }
      if ( v16 )
      {
        v22 = v16;
        goto LABEL_43;
      }
LABEL_46:
      sub_B2C434(Instance, v19);
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
          v30 = sub_B2C460(Instance);
          sub_B2C400(v30, 0LL);
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
                               (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_BattleActorControl__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v16,
              (EventMissionProgressRequest_Argument_ProgressData_o *)ModelBattleActor,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
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

  if ( (byte_41868BD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Material__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_41868BD = 1;
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
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
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
        UnityEngine_Object__DestroyImmediate_35315108((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
  }
  replaceMaterials = this->fields.replaceMaterials;
  if ( !replaceMaterials )
LABEL_18:
    sub_B2C434(replaceMaterials, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)replaceMaterials,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_Material__Clear__);
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

  if ( (byte_41868C2 & 1) == 0 )
  {
    this = (BattleEffectReplaceShaderTexture_o *)sub_B2C35C(
                                                   &Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____67394992,
                                                   actor);
    byte_41868C2 = 1;
  }
  if ( !actor )
    goto LABEL_16;
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                 (UnityEngine_Component_o *)actor,
                                                 1,
                                                 (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____67394992);
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
      v12 = sub_B2C460(this);
      sub_B2C400(v12, 0LL);
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
      this = (BattleEffectReplaceShaderTexture_o *)System_String__IndexOf_44377880(
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
    sub_B2C434(this, actor);
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

  if ( (byte_41868C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, gameObject);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v7);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B2C35C(
                                                   &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___,
                                                   v8);
    byte_41868C4 = 1;
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
        sub_B2C434(this, gameObject);
      v9 = &Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___;
LABEL_12:
      result = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           gameObject,
                                           (const MethodInfo_1AA78DC *)*v9);
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

  if ( (byte_41868C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____67435264, gameObject);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____67435280, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____67435288, v9);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B2C35C(
                                                   &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____67435304,
                                                   v10);
    byte_41868C5 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_15;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____67435288;
      goto LABEL_12;
    case 1:
      if ( !gameObject )
        goto LABEL_15;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____67435264;
      goto LABEL_12;
    case 2:
      if ( !gameObject )
        goto LABEL_15;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____67435304;
      goto LABEL_12;
    case 3:
      if ( !gameObject )
LABEL_15:
        sub_B2C434(this, gameObject);
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____67435280;
LABEL_12:
      result = (UnityEngine_Renderer_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                               gameObject,
                                               includeInactive,
                                               (const MethodInfo_1AA7D3C *)*v11);
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
  __int64 v14; // x1
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v16; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v18; // x23
  UnityEngine_Object_o *shader; // x24
  System_String_o *name; // x0
  __int64 v22; // x0

  if ( (byte_41868C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Material__Add__, renderer);
    sub_B2C35C(&Method_System_Collections_Generic_List_Material__Contains__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Material___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_Material__TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_41868C6 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !renderer || (materials = (UnityEngine_Object_o *)UnityEngine_Renderer__get_materials(renderer, 0LL)) == 0LL )
LABEL_26:
    sub_B2C434(materials, v14);
  klass = materials[1].klass;
  v16 = materials;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
      {
        v22 = sub_B2C460(materials);
        sub_B2C400(v22, 0LL);
      }
      v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
        goto LABEL_30;
      if ( !v18 )
        goto LABEL_26;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v18, 0LL);
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
        if ( !v18 )
          goto LABEL_26;
        materials = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v18, 0LL);
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
                                                (WarBoardManager_TaskList_o *)v18,
                                                (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_Material__Contains__);
          if ( ((unsigned __int8)materials & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Material__Add__);
        }
      }
      LODWORD(klass) = v16[1].klass;
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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0
  __int64 v23; // x0

  if ( (byte_41868C3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, targetObject);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B2C35C(&UnityEngine_Renderer___TypeInfo, v10);
    byte_41868C3 = 1;
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
    v14 = sub_B2C374(UnityEngine_Renderer___TypeInfo, 1LL);
    if ( !v14 )
      sub_B2C434(0LL, v15);
    v13 = v14;
    if ( Renderer )
    {
      v14 = sub_B2C41C(Renderer, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v14 )
      {
        v23 = sub_B2C454();
        sub_B2C400(v23, 0LL);
      }
    }
    if ( !*(_DWORD *)(v13 + 24) )
    {
      v22 = sub_B2C460(v14);
      sub_B2C400(v22, 0LL);
    }
    *(_QWORD *)(v13 + 32) = Renderer;
    sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), Renderer, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_41868C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__, shaderName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41868C1 = 1;
  }
  v9 = *shaderCaches;
  if ( !*shaderCaches )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v9,
         (System_Xml_XmlQualifiedName_o *)shaderName,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__) )
  {
    v9 = *shaderCaches;
    if ( *shaderCaches )
      return (UnityEngine_Shader_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                       (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                                       (System_Type_o *)shaderName,
                                       (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
LABEL_14:
    sub_B2C434(v9, shaderName);
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
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
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
  __int64 v21; // x1
  MethodInfo v22; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41868C7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, material);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v8);
    sub_B2C35C(&StringLiteral_15938/*"_ChocoTex"*/, v9);
    sub_B2C35C(&StringLiteral_16095/*"_Use_alphawidth"*/, v10);
    sub_B2C35C(&StringLiteral_15916/*"_AddColor"*/, v11);
    byte_41868C7 = 1;
  }
  v22.methodPointer = 0LL;
  v22.invoker_method = 0LL;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v16, v17, v18, v19, &v22);
  if ( !material )
    sub_B2C434(v20, v21);
  if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, 0LL) )
  {
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, 0LL) )
  {
    v25 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, 0LL);
    v22.methodPointer = *(Il2CppMethodPointer *)&v25.fields.r;
    v22.invoker_method = *(void **)&v25.fields.b;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)chocoShader, 0LL, 0LL) )
    UnityEngine_Material__set_shader(material, chocoShader, 0LL);
  v26.fields.r = r;
  v26.fields.g = g;
  v26.fields.b = b;
  v26.fields.a = a;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, v26, 0LL);
  *(_QWORD *)&v27.fields.r = v22.methodPointer;
  *(_QWORD *)&v27.fields.b = v22.invoker_method;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, v27, 0LL);
  UnityEngine_Material__SetTexture(
    material,
    (System_String_o *)StringLiteral_15938/*"_ChocoTex"*/,
    (UnityEngine_Texture_o *)chocoTexture,
    0LL);
  if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)StringLiteral_16095/*"_Use_alphawidth"*/, 0LL) )
    UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16095/*"_Use_alphawidth"*/, 1.0, 0LL);
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
  __int64 v12; // x1
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41868C8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, material);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v10);
    byte_41868C8 = 1;
  }
  v14.fields.r = 0.05;
  v14.fields.a = 1.0;
  v14.fields.g = 0.05;
  v14.fields.b = 0.05;
  *(_QWORD *)&v13.fields.r = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
  UnityEngine_Color___ctor(v14, v4, v5, v6, v7, (const MethodInfo *)&v13);
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
    sub_B2C434(v11, v12);
  }
  if ( !material )
    goto LABEL_11;
  UnityEngine_Material__set_shader(material, shadowShader, 0LL);
LABEL_10:
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, v13, 0LL);
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
  __int64 v22; // x1
  Il2CppObject *current; // x23
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x22
  int v27; // w21
  int v28; // w8
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x22
  int v32; // w21
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+0h] [xbp-B0h] BYREF
  int v34[3]; // [xsp+18h] [xbp-98h]
  int v35; // [xsp+24h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_41868C9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__,
      material);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__,
      v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__,
      v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__,
      v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__get_Current__,
      v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__get_Current__,
      v16);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__get_Current__,
      v17);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__,
      v18);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__,
      v19);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B2C35C(
                                                   &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__,
                                                   v20);
    byte_41868C9 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
  memset(&v36, 0, sizeof(v36));
  v35 = 0;
  if ( !replaceShaderFloatValues )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderFloatValues,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
  v38 = v33;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__);
    if ( !v21 )
      break;
    current = v38.fields.current;
    if ( !v38.fields.current )
      sub_B2C434(v21, v22);
    if ( !material )
      sub_B2C434(v21, v22);
    if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)v38.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetFloat(material, (System_String_o *)current[1].klass, *(float *)&current[1].monitor, 0LL);
  }
  v34[0] = 74;
  v35 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
  v35 = 0;
  if ( !replaceShaderColorValues )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderColorValues,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
  v37 = v33;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__);
    if ( !v24 )
      break;
    v26 = v37.fields.current;
    if ( !v37.fields.current )
      sub_B2C434(v24, v25);
    if ( !material )
      sub_B2C434(v24, v25);
    if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)v37.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)v26[1].klass,
        *(UnityEngine_Color_o *)&v26[1].monitor,
        0LL);
  }
  v34[0] = 148;
  v27 = ++v35;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
  if ( v27 )
  {
    v28 = v27 - 1;
    if ( v34[v27 - 1] == 148 )
    {
      --v27;
      v35 = v28;
    }
  }
  if ( !replaceShaderTextureValues )
LABEL_37:
    sub_B2C434(this, material);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderTextureValues,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__);
    if ( !v29 )
      break;
    v31 = v36.fields.current;
    if ( !v36.fields.current )
      sub_B2C434(v29, v30);
    if ( !material )
      sub_B2C434(v29, v30);
    if ( UnityEngine_Material__HasProperty_40688736(material, (System_String_o *)v36.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetTexture(
        material,
        (System_String_o *)v31[1].klass,
        (UnityEngine_Texture_o *)v31[1].monitor,
        0LL);
  }
  v34[v27] = 228;
  v32 = ++v35;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
  if ( v32 && v34[v32 - 1] == 228 )
    v35 = v32 - 1;
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

  if ( (byte_4186A6D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16880/*"body_level"*/, method);
    byte_4186A6D = 1;
  }
  this->fields.useUniqueId = 1;
  this->fields.isCheckUniqueId = 1;
  v9 = (System_Int32_array **)StringLiteral_16880/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_16880/*"body_level"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.searchMeshWord, v9, v2, v3, v4, v5, v6, v7);
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