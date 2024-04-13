void __fastcall BattleEffectReplaceShaderTexture___ctor(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x20
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x20
  __int64 v73; // x0
  __int64 v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7

  if ( (byte_42E784E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Material___ctor__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_Material__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_7240/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_7243/*"Hidden/Particle/distortion-GrabPass"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_6418/*"FGO_Battle/Ken/Base"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_7244/*"Hidden/Particle/distortion-Stencil"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_7242/*"Hidden/Particle/distortion"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_6419/*"FGO_Battle/Particle/Base"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_7239/*"Hidden/Particle/MultiplyAdd1Pass"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_7233/*"Hidden/Ken/Distortion"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_7241/*"Hidden/Particle/dissolve"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_7235/*"Hidden/Ken/MultiplyAdd"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_7236/*"Hidden/Particle/Base-Stencil"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_7237/*"Hidden/Particle/MultiplyAdd"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_7238/*"Hidden/Particle/MultiplyAdd-Stencil"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_7234/*"Hidden/Ken/GradationMap"*/, v62, v63, v64);
    byte_42E784E = 1;
  }
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
  this->fields.replaceObjects = (struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *)v65;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.replaceObjects,
    (System_Int32_array **)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v72,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v72 )
    sub_B5D69C(v73, v74);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6419/*"FGO_Battle/Particle/Base"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7237/*"Hidden/Particle/MultiplyAdd"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7239/*"Hidden/Particle/MultiplyAdd1Pass"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7242/*"Hidden/Particle/distortion"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7236/*"Hidden/Particle/Base-Stencil"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7238/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7240/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7244/*"Hidden/Particle/distortion-Stencil"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7243/*"Hidden/Particle/distortion-GrabPass"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7241/*"Hidden/Particle/dissolve"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6418/*"FGO_Battle/Ken/Base"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7235/*"Hidden/Ken/MultiplyAdd"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7233/*"Hidden/Ken/Distortion"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v72,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7234/*"Hidden/Ken/GradationMap"*/,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.autoReplaceShaderNames = (struct System_Collections_Generic_List_string__o *)v72;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.autoReplaceShaderNames,
    (System_Int32_array **)v72,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v81 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v81,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.replaceMaterials = (struct System_Collections_Generic_List_Material__o *)v81;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.replaceMaterials,
    (System_Int32_array **)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEffectReplaceShaderTexture__Execute(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleEffectReplaceShaderTexture_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *replaceObjects; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v108; // x20
  UnityEngine_Object_o *v109; // x22
  _BOOL8 v110; // x0
  __int64 v111; // x1
  const MethodInfo *v112; // x4
  Il2CppObject *current; // x20
  System_Collections_Generic_List_BattleActorControl__o *TargetActors; // x0
  __int64 v115; // x1
  _BOOL8 v116; // x0
  __int64 v117; // x1
  Il2CppObject *v118; // x21
  _BOOL8 isShadowServant; // x0
  const MethodInfo *v120; // x3
  bool v121; // w23
  UnityEngine_Object_o *ActorTexture; // x24
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v124; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  UnityEngine_Transform_o *v128; // x0
  __int64 v129; // x1
  UnityEngine_Transform_o *v130; // x0
  __int64 v131; // x1
  UnityEngine_Transform_o *v132; // x21
  __int64 v133; // x0
  __int64 v134; // x1
  int v135; // s0
  UnityEngine_Transform_o *v138; // x21
  __int64 v139; // x0
  __int64 v140; // x1
  int v141; // s0
  UnityEngine_Object_o *klass; // x21
  __int64 v145; // x1
  UnityEngine_Object_o *v146; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v147; // x0
  __int64 v148; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *monitor; // x0
  Il2CppObject *v150; // x21
  const MethodInfo *v151; // x5
  UnityEngine_Renderer_array *TargetRenderers; // x0
  __int64 v153; // x1
  UnityEngine_Renderer_array *v154; // x27
  __int64 v155; // x8
  unsigned __int64 v156; // x9
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v157; // x0
  WarBoardManager_TaskList_o *v158; // x21
  const MethodInfo *v159; // x4
  System_Collections_Generic_List_Material__o *TargetMaterials; // x0
  __int64 v161; // x1
  Il2CppObject *v162; // x28
  _BOOL8 v163; // x0
  __int64 v164; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *autoReplaceShaderNames; // x21
  UnityEngine_Object_o *shader; // x0
  __int64 v167; // x1
  System_String_o *name; // x0
  UnityEngine_Object_o *v169; // x0
  __int64 v170; // x1
  System_String_o *v171; // x0
  System_String_o *v172; // x0
  const MethodInfo *v173; // x3
  UnityEngine_Object_o *ReplaceChocoShader; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v176; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  _BOOL8 v178; // x0
  __int64 v179; // x1
  UnityEngine_Shader_o *v180; // x0
  _BOOL8 v181; // x0
  const MethodInfo *v182; // x3
  UIAtlas_o *UIAtlas; // x0
  const MethodInfo *v184; // x4
  UnityEngine_Texture2D_o *v185; // x3
  BattleEffectReplaceShaderTexture_o *v186; // x0
  const MethodInfo *v187; // x5
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v188; // x21
  UnityEngine_Object_o *v189; // x0
  __int64 v190; // x1
  System_String_o *v191; // x0
  UnityEngine_Object_o *v192; // x0
  __int64 v193; // x1
  System_String_o *v194; // x0
  System_String_o *v195; // x0
  const MethodInfo *v196; // x3
  UnityEngine_Object_o *v197; // x21
  _BOOL8 v198; // x0
  const MethodInfo *v199; // x3
  BattleEffectReplaceShaderTexture_o *v200; // x0
  const MethodInfo *v201; // x5
  System_Collections_Generic_List_WarBoardManager_TaskList__o *replaceMaterials; // x0
  __int64 v203; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v204; // x0
  __int64 v205; // x0
  System_String_o *targetShaderName; // [xsp+8h] [xbp-158h]
  Il2CppObject *v207; // [xsp+10h] [xbp-150h]
  unsigned __int64 v208; // [xsp+18h] [xbp-148h]
  UnityEngine_Component_o *v209; // [xsp+20h] [xbp-140h]
  bool isChocoServant; // [xsp+2Ch] [xbp-134h]
  _BYTE v211[44]; // [xsp+30h] [xbp-130h] BYREF
  int v212; // [xsp+5Ch] [xbp-104h]
  System_Collections_Generic_List_Enumerator_T__o v213; // [xsp+60h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v214; // [xsp+80h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v215; // [xsp+A0h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v216; // [xsp+C0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v217; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_string__Shader__o *shaderCaches[2]; // [xsp+100h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_42E7842 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__Shader___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__Shader__TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v26, v27, v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__,
      v32,
      v33,
      v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v38, v39, v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__get_Current__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v47, v48, v49);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__get_Current__,
      v50,
      v51,
      v52);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Material__Add__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Material__Contains__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__Contains__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v68, v69, v70);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__,
      v71,
      v72,
      v73);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v74, v75, v76);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__,
      v77,
      v78,
      v79);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v80, v81, v82);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__get_Count__,
      v83,
      v84,
      v85);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v86, v87, v88);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v89, v90, v91);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_16129/*"_Choco"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_16251/*"_Shadow"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v101, v102, v103);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B5D5C4(&StringLiteral_4589/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v104, v105, v106);
    byte_42E7842 = 1;
  }
  shaderCaches[0] = 0LL;
  memset(&v217, 0, sizeof(v217));
  memset(&v216, 0, sizeof(v216));
  memset(&v215, 0, sizeof(v215));
  memset(&v214, 0, sizeof(v214));
  memset(&v213, 0, sizeof(v213));
  v212 = 0;
  replaceObjects = v4->fields.replaceObjects;
  if ( !replaceObjects )
    goto LABEL_159;
  if ( replaceObjects->fields._size < 1 )
    return;
  v108 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v108,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
  shaderCaches[0] = (System_Collections_Generic_Dictionary_string__Shader__o *)v108;
  this = (BattleEffectReplaceShaderTexture_o *)v4->fields.replaceObjects;
  if ( !this )
LABEL_159:
    sub_B5D69C(this, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v211,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
  v109 = 0LL;
  v217 = *(System_Collections_Generic_List_Enumerator_T__o *)v211;
  while ( 1 )
  {
    v110 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v217,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__);
    if ( !v110 )
      break;
    current = v217.fields.current;
    if ( !v217.fields.current )
      sub_B5D69C(v110, v111);
    TargetActors = BattleEffectReplaceShaderTexture__GetTargetActors(
                     v4,
                     (System_Int32_array *)v217.fields.current[1].monitor,
                     (bool)v217.fields.current[2].klass,
                     (bool)v217.fields.current[1].klass,
                     v112);
    if ( !TargetActors )
      sub_B5D69C(0LL, v115);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v211,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TargetActors,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    v216 = *(System_Collections_Generic_List_Enumerator_T__o *)v211;
    while ( 1 )
    {
      v116 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v216,
               (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
      if ( !v116 )
        break;
      v118 = v216.fields.current;
      if ( !v216.fields.current )
        sub_B5D69C(v116, v117);
      isChocoServant = BattleActorControl__isChocoServant((BattleActorControl_o *)v216.fields.current, 0LL);
      isShadowServant = BattleActorControl__isShadowServant((BattleActorControl_o *)v118, 0LL);
      v121 = isShadowServant;
      v209 = (UnityEngine_Component_o *)v118;
      if ( LOBYTE(current[11].monitor) )
        ActorTexture = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getActorTexture(
                                                 (BattleEffectReplaceShaderTexture_o *)isShadowServant,
                                                 (BattleActorControl_o *)v118,
                                                 (System_String_o *)current[2].monitor,
                                                 v120);
      else
        ActorTexture = 0LL;
      if ( v121 && LOBYTE(current[3].klass) != 0 )
      {
        Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !Instance )
          sub_B5D69C(0LL, v124);
        ShadowEffect = ServantAssetLoadManager__createShadowEffect(Instance, 0, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v118, 0LL);
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
        v128 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)v128 & 1) != 0 )
        {
          v128 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
          NodeFromName = (UnityEngine_Object_o *)v128;
        }
        if ( !ShadowEffect )
          sub_B5D69C(v128, v129);
        v130 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !v130 )
          sub_B5D69C(0LL, v131);
        UnityEngine_Transform__SetParent(v130, (UnityEngine_Transform_o *)NodeFromName, 0LL);
        v132 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        *(UnityEngine_Vector3_o *)&v135 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v132 )
          sub_B5D69C(v133, v134);
        UnityEngine_Transform__set_localPosition(v132, *(UnityEngine_Vector3_o *)&v135, 0LL);
        v138 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        *(UnityEngine_Vector3_o *)&v141 = UnityEngine_Vector3__get_one(0LL);
        if ( !v138 )
          sub_B5D69C(v139, v140);
        UnityEngine_Transform__set_localScale(v138, *(UnityEngine_Vector3_o *)&v141, 0LL);
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
        v146 = (UnityEngine_Object_o *)current[7].klass;
        if ( !v146 )
          sub_B5D69C(0LL, v145);
        targetShaderName = UnityEngine_Object__get_name(v146, 0LL);
      }
      v147 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current[4].klass;
      if ( !v147 )
        sub_B5D69C(0LL, v145);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v211,
        v147,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v215 = *(System_Collections_Generic_List_Enumerator_T__o *)v211;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v215,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        monitor = (System_Collections_Generic_List_Voice_BATTLE__o *)current[5].monitor;
        if ( !monitor )
          sub_B5D69C(0LL, v148);
        v150 = v215.fields.current;
        System_Collections_Generic_List_Voice_BATTLE___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v211,
          monitor,
          (const MethodInfo_30455F4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
        v214 = *(System_Collections_Generic_List_Enumerator_T__o *)v211;
        while ( System_Collections_Generic_List_Enumerator_Voice_BATTLE___MoveNext(
                  &v214,
                  (const MethodInfo_201D330 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__) )
        {
          TargetRenderers = BattleEffectReplaceShaderTexture__getTargetRenderers(
                              v4,
                              (UnityEngine_GameObject_o *)v150,
                              (int32_t)v214.fields.current,
                              (bool)current[5].klass,
                              BYTE1(current[5].klass),
                              v151);
          v154 = TargetRenderers;
          if ( TargetRenderers )
          {
            v155 = *(_QWORD *)&TargetRenderers->max_length;
            if ( (int)v155 >= 1 )
            {
              v156 = 0LL;
              v207 = v150;
              do
              {
                if ( v156 >= (unsigned int)v155 )
                {
                  v205 = sub_B5D6C8(TargetRenderers);
                  sub_B5D668(v205, 0LL);
                }
                v157 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)current[4].monitor;
                if ( !v157 )
                  sub_B5D69C(0LL, v153);
                v208 = v156;
                v158 = (WarBoardManager_TaskList_o *)v154->m_Items[v156];
                TargetRenderers = (UnityEngine_Renderer_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                  v157,
                                                                  v158,
                                                                  (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                if ( ((unsigned __int8)TargetRenderers & 1) != 0 )
                  goto LABEL_115;
                TargetMaterials = BattleEffectReplaceShaderTexture__getTargetMaterials(
                                    (BattleEffectReplaceShaderTexture_o *)TargetRenderers,
                                    (UnityEngine_Renderer_o *)v158,
                                    targetShaderName,
                                    (bool)current[6].klass,
                                    v159);
                if ( !TargetMaterials )
                  sub_B5D69C(0LL, v161);
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)v211,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TargetMaterials,
                  (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
                v213 = *(System_Collections_Generic_List_Enumerator_T__o *)v211;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v213,
                          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
                {
                  v162 = v213.fields.current;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  v163 = UnityEngine_Object__op_Inequality(ActorTexture, 0LL, 0LL);
                  if ( v163 )
                  {
                    if ( !v162 )
                      sub_B5D69C(v163, v164);
                    UnityEngine_Material__set_mainTexture(
                      (UnityEngine_Material_o *)v162,
                      (UnityEngine_Texture_o *)ActorTexture,
                      0LL);
                  }
                  if ( isChocoServant )
                  {
                    if ( !BYTE1(current[11].monitor) )
                      goto LABEL_63;
                    if ( !v162 )
                      sub_B5D69C(v163, v164);
                    autoReplaceShaderNames = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->fields.autoReplaceShaderNames;
                    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v162,
                                                       0LL);
                    if ( !shader )
                      sub_B5D69C(0LL, v167);
                    name = UnityEngine_Object__get_name(shader, 0LL);
                    if ( !autoReplaceShaderNames )
                      sub_B5D69C(name, name);
                    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                           autoReplaceShaderNames,
                           (WarBoardManager_TaskList_o *)name,
                           (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
                    {
                      v169 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v162,
                                                       0LL);
                      if ( !v169 )
                        sub_B5D69C(0LL, v170);
                      v171 = UnityEngine_Object__get_name(v169, 0LL);
                      v172 = System_String__Concat_44577788(v171, (System_String_o *)StringLiteral_16129/*"_Choco"*/, 0LL);
                      ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                     (BattleEffectReplaceShaderTexture_o *)v172,
                                                                     v172,
                                                                     shaderCaches,
                                                                     v173);
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
                      gameObject = UnityEngine_Component__get_gameObject(v209, 0LL);
                      if ( !gameObject )
                        sub_B5D69C(0LL, v176);
                      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          gameObject,
                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      v178 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
                      if ( v178 )
                      {
                        if ( !v162 )
                          sub_B5D69C(v178, v179);
                        v180 = UnityEngine_Material__get_shader((UnityEngine_Material_o *)v162, 0LL);
                        if ( !Component_srcLineSprite )
                          sub_B5D69C(v180, v180);
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleServantDeadComponent__getReplaceChocoShader(
                                                                       (BattleServantDeadComponent_o *)Component_srcLineSprite,
                                                                       v180,
                                                                       0LL,
                                                                       0LL);
                      }
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v181 = UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL);
                    if ( v181 )
                      ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                     (BattleEffectReplaceShaderTexture_o *)v181,
                                                                     (System_String_o *)StringLiteral_4589/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/,
                                                                     shaderCaches,
                                                                     v182);
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UIAtlas = (UIAtlas_o *)UnityEngine_Object__op_Equality(v109, 0LL, 0LL);
                    if ( ((unsigned __int8)UIAtlas & 1) != 0 )
                    {
                      UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                                  (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                  (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
                      v185 = (UnityEngine_Texture2D_o *)UIAtlas;
                    }
                    else
                    {
                      v185 = (UnityEngine_Texture2D_o *)v109;
                    }
                    v109 = (UnityEngine_Object_o *)v185;
                    BattleEffectReplaceShaderTexture__setupChocoShader(
                      (BattleEffectReplaceShaderTexture_o *)UIAtlas,
                      (UnityEngine_Material_o *)v162,
                      (UnityEngine_Shader_o *)ReplaceChocoShader,
                      v185,
                      v184);
                    BattleEffectReplaceShaderTexture__updateShaderValues(
                      v186,
                      (UnityEngine_Material_o *)v162,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[8].klass,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[8].monitor,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[9].klass,
                      v187);
                  }
                  if ( v121 )
                  {
                    if ( !v162 )
                      sub_B5D69C(v163, v164);
                    v188 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->fields.autoReplaceShaderNames;
                    v189 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v162, 0LL);
                    if ( !v189 )
                      sub_B5D69C(0LL, v190);
                    v191 = UnityEngine_Object__get_name(v189, 0LL);
                    if ( !v188 )
                      sub_B5D69C(v191, v191);
                    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                           v188,
                           (WarBoardManager_TaskList_o *)v191,
                           (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
                    {
                      v192 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v162,
                                                       0LL);
                      if ( !v192 )
                        sub_B5D69C(0LL, v193);
                      v194 = UnityEngine_Object__get_name(v192, 0LL);
                      v195 = System_String__Concat_44577788(v194, (System_String_o *)StringLiteral_16251/*"_Shadow"*/, 0LL);
                      v197 = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                       (BattleEffectReplaceShaderTexture_o *)v195,
                                                       v195,
                                                       shaderCaches,
                                                       v196);
                    }
                    else
                    {
                      v197 = 0LL;
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v198 = UnityEngine_Object__op_Equality(v197, 0LL, 0LL);
                    if ( v198 )
                      v197 = (UnityEngine_Object_o *)current[9].monitor;
                    BattleEffectReplaceShaderTexture__setupShadowShader(
                      (BattleEffectReplaceShaderTexture_o *)v198,
                      (UnityEngine_Material_o *)v162,
                      (UnityEngine_Shader_o *)v197,
                      v199);
                    BattleEffectReplaceShaderTexture__updateShaderValues(
                      v200,
                      (UnityEngine_Material_o *)v162,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[10].klass,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[10].monitor,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[11].klass,
                      v201);
                  }
                  replaceMaterials = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->fields.replaceMaterials;
                  if ( !replaceMaterials )
                    sub_B5D69C(0LL, v164);
                  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                          replaceMaterials,
                          (WarBoardManager_TaskList_o *)v162,
                          (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_Material__Contains__) )
                  {
                    v204 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.replaceMaterials;
                    if ( !v204 )
                      sub_B5D69C(0LL, v203);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v204,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v162,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Material__Add__);
                  }
                }
                *(_DWORD *)&v211[4 * v212++ + 24] = 864;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v213,
                  (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
                if ( !v212 )
                {
LABEL_115:
                  v150 = v207;
                }
                else
                {
                  v150 = v207;
                  if ( *(_DWORD *)&v211[4 * v212 + 20] == 864 )
                    --v212;
                }
                LODWORD(v155) = v154->max_length;
                v156 = v208 + 1;
              }
              while ( (__int64)(v208 + 1) < (int)v155 );
            }
          }
        }
        *(_DWORD *)&v211[4 * v212++ + 24] = 909;
        System_Collections_Generic_List_Enumerator_Voice_BATTLE___Dispose(
          &v214,
          (const MethodInfo_201D32C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
        if ( v212 && *(_DWORD *)&v211[4 * v212 + 20] == 909 )
          --v212;
      }
      *(_DWORD *)&v211[4 * v212++ + 24] = 937;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v215,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( v212 && *(_DWORD *)&v211[4 * v212 + 20] == 937 )
        --v212;
    }
    *(_DWORD *)&v211[4 * v212++ + 24] = 965;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v216,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v212 && *(_DWORD *)&v211[4 * v212 + 20] == 965 )
      --v212;
  }
  *(_DWORD *)&v211[4 * v212++ + 24] = 993;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v217,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
  if ( v212 && *(_DWORD *)&v211[4 * v212 + 20] == 993 )
    --v212;
}


BattleActorControl_o *__fastcall BattleEffectReplaceShaderTexture__GetModelBattleActor(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t servantId,
        bool isCheckUniqueId,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v11; // x1
  int max_length; // w8
  System_Object_array *v13; // x22
  unsigned int v14; // w24
  Il2CppClass **v15; // x8
  BattleActorControl_o *v16; // x23
  __int64 v18; // x0

  if ( (byte_42E7844 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, servantId, isCheckUniqueId, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E7844 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_1E6614C *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_17;
  max_length = ObjectsOfType_object->max_length;
  v13 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v18 = sub_B5D6C8(ObjectsOfType_object);
        sub_B5D668(v18, 0LL);
      }
      v15 = &v13->obj.klass + (int)v14;
      v16 = (BattleActorControl_o *)v15[4];
      if ( !v16 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v15[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!isCheckUniqueId || v16->fields.uniqueID == this->fields.targetId) )
      {
        return v16;
      }
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_B5D69C(ObjectsOfType_object, v11);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  void *Instance; // x0
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *v33; // x1
  UnityEngine_Object_o *v34; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x0
  unsigned __int64 v37; // x8
  unsigned __int64 v38; // x9
  __int64 v39; // x8
  unsigned __int64 v40; // x24
  bool v41; // w22
  UnityEngine_Object_o *ModelBattleActor; // x23
  __int64 v44; // x0

  if ( (byte_42E7843 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleActorControl___,
      (_DWORD)servantIds,
      isCheckUniqueId,
      useUniqueId);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl__Contains__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v27, v28, v29);
    byte_42E7843 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  if ( this->fields.isNPEffect )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    v34 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 11);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_46;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)v34,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (void *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v30 )
        {
          v36 = v30;
          v33 = Component_srcLineSprite;
LABEL_43:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v36,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
          return (System_Collections_Generic_List_BattleActorControl__o *)v30;
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
    Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_1E6614C *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( !Instance )
      goto LABEL_46;
    v37 = *((unsigned int *)Instance + 6);
    if ( (__int64)(v37 << 32) >= 1 )
    {
      v38 = 0LL;
      while ( 1 )
      {
        if ( v38 >= v37 )
          goto LABEL_45;
        v33 = (UnityEngine_Object_o *)*((_QWORD *)Instance + v38 + 4);
        if ( !v33 )
          goto LABEL_46;
        if ( v33[18].fields.m_CachedPtr == this->fields.targetId )
          break;
        if ( (__int64)++v38 >= (int)v37 )
          return (System_Collections_Generic_List_BattleActorControl__o *)v30;
      }
      if ( v30 )
      {
        v36 = v30;
        goto LABEL_43;
      }
LABEL_46:
      sub_B5D69C(Instance, v33);
    }
  }
  else if ( servantIds )
  {
    v39 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v39 >= 1 )
    {
      v40 = 0LL;
      v41 = isCheckUniqueId;
      do
      {
        if ( v40 >= (unsigned int)v39 )
        {
LABEL_45:
          v44 = sub_B5D6C8(Instance);
          sub_B5D668(v44, 0LL);
        }
        ModelBattleActor = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__GetModelBattleActor(
                                                     this,
                                                     servantIds->m_Items[v40 + 1],
                                                     v41,
                                                     v32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (void *)UnityEngine_Object__op_Inequality(ModelBattleActor, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v30 )
            goto LABEL_46;
          Instance = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                               (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v30,
                               (WarBoardManager_TaskList_o *)ModelBattleActor,
                               (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_BattleActorControl__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v30,
              (EventMissionProgressRequest_Argument_ProgressData_o *)ModelBattleActor,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
        }
        LODWORD(v39) = servantIds->max_length;
        ++v40;
      }
      while ( (__int64)v40 < (int)v39 );
    }
  }
  return (System_Collections_Generic_List_BattleActorControl__o *)v30;
}


void __fastcall BattleEffectReplaceShaderTexture__OnDestroy(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_Material__o *replaceMaterials; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7841 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Material__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E7841 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( this->fields.destroyReplaceShaderMaterials )
  {
    replaceMaterials = this->fields.replaceMaterials;
    if ( !replaceMaterials )
      goto LABEL_18;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceMaterials,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
    {
      current = v22.fields.current;
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
        UnityEngine_Object__DestroyImmediate_35620448((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
  }
  replaceMaterials = this->fields.replaceMaterials;
  if ( !replaceMaterials )
LABEL_18:
    sub_B5D69C(replaceMaterials, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)replaceMaterials,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_Material__Clear__);
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

  if ( (byte_42E7846 & 1) == 0 )
  {
    this = (BattleEffectReplaceShaderTexture_o *)sub_B5D5C4(
                                                   &Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____68825800,
                                                   (_DWORD)actor,
                                                   (_DWORD)searchMeshWord,
                                                   method);
    byte_42E7846 = 1;
  }
  if ( !actor )
    goto LABEL_16;
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                 (UnityEngine_Component_o *)actor,
                                                 1,
                                                 (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____68825800);
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
      v12 = sub_B5D6C8(this);
      sub_B5D668(v12, 0LL);
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
      this = (BattleEffectReplaceShaderTexture_o *)System_String__IndexOf_44650136(
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
    sub_B5D69C(this, actor);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)this, 0LL);
}


UnityEngine_Renderer_o *__fastcall BattleEffectReplaceShaderTexture__getRenderer(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 *v15; // x8
  UnityEngine_Renderer_o *result; // x0

  if ( (byte_42E7848 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, (_DWORD)gameObject, rendererType, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v9, v10, v11);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B5D5C4(
                                                   &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___,
                                                   v12,
                                                   v13,
                                                   v14);
    byte_42E7848 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_15;
      v15 = &Method_UnityEngine_GameObject_GetComponent_Renderer___;
      goto LABEL_12;
    case 1:
      if ( !gameObject )
        goto LABEL_15;
      v15 = &Method_UnityEngine_GameObject_GetComponent_MeshRenderer___;
      goto LABEL_12;
    case 2:
      if ( !gameObject )
        goto LABEL_15;
      v15 = &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___;
      goto LABEL_12;
    case 3:
      if ( !gameObject )
LABEL_15:
        sub_B5D69C(this, gameObject);
      v15 = &Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___;
LABEL_12:
      result = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           gameObject,
                                           (const MethodInfo_1CC439C *)*v15);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getRenderersInChildren(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        bool includeInactive,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 *v17; // x8
  UnityEngine_Renderer_array *result; // x0

  if ( (byte_42E7849 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____68867296,
      (_DWORD)gameObject,
      rendererType,
      includeInactive);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____68867312, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____68867320, v11, v12, v13);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B5D5C4(
                                                   &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____68867336,
                                                   v14,
                                                   v15,
                                                   v16);
    byte_42E7849 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_15;
      v17 = &Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____68867320;
      goto LABEL_12;
    case 1:
      if ( !gameObject )
        goto LABEL_15;
      v17 = &Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____68867296;
      goto LABEL_12;
    case 2:
      if ( !gameObject )
        goto LABEL_15;
      v17 = &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____68867336;
      goto LABEL_12;
    case 3:
      if ( !gameObject )
LABEL_15:
        sub_B5D69C(this, gameObject);
      v17 = &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____68867312;
LABEL_12:
      result = (UnityEngine_Renderer_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                               gameObject,
                                               includeInactive,
                                               (const MethodInfo_1CC47FC *)*v17);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_Material__o *__fastcall BattleEffectReplaceShaderTexture__getTargetMaterials(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Renderer_o *renderer,
        System_String_o *targetShaderName,
        bool targetShaderAll,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  UnityEngine_Object_o *materials; // x0
  __int64 v22; // x1
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v24; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v26; // x23
  UnityEngine_Object_o *shader; // x24
  System_String_o *name; // x0
  __int64 v30; // x0

  if ( (byte_42E784A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Material__Add__,
      (_DWORD)renderer,
      (_DWORD)targetShaderName,
      targetShaderAll);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Material__Contains__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Material___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_Material__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E784A = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !renderer || (materials = (UnityEngine_Object_o *)UnityEngine_Renderer__get_materials(renderer, 0LL)) == 0LL )
LABEL_26:
    sub_B5D69C(materials, v22);
  klass = materials[1].klass;
  v24 = materials;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
      {
        v30 = sub_B5D6C8(materials);
        sub_B5D668(v30, 0LL);
      }
      v26 = (UnityEngine_Object_o *)*((_QWORD *)&v24[1].monitor + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
        goto LABEL_30;
      if ( !v26 )
        goto LABEL_26;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v26, 0LL);
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
        if ( !v26 )
          goto LABEL_26;
        materials = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v26, 0LL);
        if ( !materials )
          goto LABEL_26;
        name = UnityEngine_Object__get_name(materials, 0LL);
        materials = (UnityEngine_Object_o *)System_String__op_Equality(name, targetShaderName, 0LL);
        if ( ((unsigned __int8)materials & 1) != 0 )
        {
LABEL_21:
          if ( !v20 )
            goto LABEL_26;
          materials = (UnityEngine_Object_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v20,
                                                (WarBoardManager_TaskList_o *)v26,
                                                (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_Material__Contains__);
          if ( ((unsigned __int8)materials & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Material__Add__);
        }
      }
      LODWORD(klass) = v24[1].klass;
    }
  }
  return (System_Collections_Generic_List_Material__o *)v20;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Int32_array **Renderer; // x19
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_42E7847 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)targetObject, rendererType, targetsInChildren);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B5D5C4(&UnityEngine_Renderer___TypeInfo, v10, v11, v12);
    byte_42E7847 = 1;
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
  v15 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Renderer, 0LL, 0LL) )
  {
    v16 = sub_B5D5DC(UnityEngine_Renderer___TypeInfo, 1LL);
    if ( !v16 )
      sub_B5D69C(0LL, v17);
    v15 = v16;
    if ( Renderer )
    {
      v16 = sub_B5D684(Renderer, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
      if ( !v16 )
      {
        v25 = sub_B5D6BC();
        sub_B5D668(v25, 0LL);
      }
    }
    if ( !*(_DWORD *)(v15 + 24) )
    {
      v24 = sub_B5D6C8(v16);
      sub_B5D668(v24, 0LL);
    }
    *(_QWORD *)(v15 + 32) = Renderer;
    sub_B5D560((BattleServantConfConponent_o *)(v15 + 32), Renderer, v18, v19, v20, v21, v22, v23);
  }
  return (UnityEngine_Renderer_array *)v15;
}


UnityEngine_Shader_o *__fastcall BattleEffectReplaceShaderTexture__loadShader(
        BattleEffectReplaceShaderTexture_o *this,
        System_String_o *shaderName,
        System_Collections_Generic_Dictionary_string__Shader__o **shaderCaches,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_Dictionary_string__Shader__o *v15; // x0
  UnityEngine_Shader_o *result; // x0
  UnityEngine_Object_o *v17; // x21
  bool v18; // w8

  if ( (byte_42E7845 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__,
      (_DWORD)shaderName,
      (_DWORD)shaderCaches,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E7845 = 1;
  }
  v15 = *shaderCaches;
  if ( !*shaderCaches )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15,
         (System_Xml_XmlQualifiedName_o *)shaderName,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__) )
  {
    v15 = *shaderCaches;
    if ( *shaderCaches )
      return (UnityEngine_Shader_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                       (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
                                       (System_Type_o *)shaderName,
                                       (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
LABEL_14:
    sub_B5D69C(v15, shaderName);
  }
  v17 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(shaderName, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  result = 0LL;
  if ( v18 )
  {
    v15 = *shaderCaches;
    if ( !*shaderCaches )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15,
      (System_Xml_XmlQualifiedName_o *)shaderName,
      (System_Xml_Schema_XmlSchemaObject_o *)v17,
      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    return (UnityEngine_Shader_o *)v17;
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  __int64 v28; // x0
  __int64 v29; // x1
  MethodInfo v30; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E784B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)material, (_DWORD)chocoShader, chocoTexture);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16287/*"_Use_alphawidth"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16107/*"_AddColor"*/, v17, v18, v19);
    byte_42E784B = 1;
  }
  v30.methodPointer = 0LL;
  v30.invoker_method = 0LL;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v24, v25, v26, v27, &v30);
  if ( !material )
    sub_B5D69C(v28, v29);
  if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, 0LL) )
  {
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, 0LL) )
  {
    v33 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, 0LL);
    v30.methodPointer = *(Il2CppMethodPointer *)&v33.fields.r;
    v30.invoker_method = *(void **)&v33.fields.b;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)chocoShader, 0LL, 0LL) )
    UnityEngine_Material__set_shader(material, chocoShader, 0LL);
  v34.fields.r = r;
  v34.fields.g = g;
  v34.fields.b = b;
  v34.fields.a = a;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, v34, 0LL);
  *(_QWORD *)&v35.fields.r = v30.methodPointer;
  *(_QWORD *)&v35.fields.b = v30.invoker_method;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, v35, 0LL);
  UnityEngine_Material__SetTexture(
    material,
    (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/,
    (UnityEngine_Texture_o *)chocoTexture,
    0LL);
  if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)StringLiteral_16287/*"_Use_alphawidth"*/, 0LL) )
    UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16287/*"_Use_alphawidth"*/, 1.0, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E784C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)material, (_DWORD)shadowShader, method);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v10, v11, v12);
    byte_42E784C = 1;
  }
  v16.fields.r = 0.05;
  v16.fields.a = 1.0;
  v16.fields.g = 0.05;
  v16.fields.b = 0.05;
  *(_QWORD *)&v15.fields.r = 0LL;
  *(_QWORD *)&v15.fields.b = 0LL;
  UnityEngine_Color___ctor(v16, v4, v5, v6, v7, (const MethodInfo *)&v15);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)shadowShader, 0LL, 0LL);
  if ( !v13 )
  {
    if ( material )
      goto LABEL_10;
LABEL_11:
    sub_B5D69C(v13, v14);
  }
  if ( !material )
    goto LABEL_11;
  UnityEngine_Material__set_shader(material, shadowShader, 0LL);
LABEL_10:
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, v15, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__updateShaderValues(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *replaceShaderFloatValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *replaceShaderColorValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *replaceShaderTextureValues,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x23
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x22
  int v49; // w21
  int v50; // w8
  _BOOL8 v51; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x22
  int v54; // w21
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+0h] [xbp-B0h] BYREF
  int v56[3]; // [xsp+18h] [xbp-98h]
  int v57; // [xsp+24h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_42E784D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__,
      (_DWORD)material,
      (_DWORD)replaceShaderFloatValues,
      replaceShaderColorValues);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__,
      v13,
      v14,
      v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__,
      v16,
      v17,
      v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__,
      v22,
      v23,
      v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__get_Current__,
      v25,
      v26,
      v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__get_Current__,
      v28,
      v29,
      v30);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__get_Current__,
      v31,
      v32,
      v33);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__,
      v34,
      v35,
      v36);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__,
      v37,
      v38,
      v39);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B5D5C4(
                                                   &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__,
                                                   v40,
                                                   v41,
                                                   v42);
    byte_42E784D = 1;
  }
  memset(&v60, 0, sizeof(v60));
  memset(&v59, 0, sizeof(v59));
  memset(&v58, 0, sizeof(v58));
  v57 = 0;
  if ( !replaceShaderFloatValues )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderFloatValues,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
  v60 = v55;
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__);
    if ( !v43 )
      break;
    current = v60.fields.current;
    if ( !v60.fields.current )
      sub_B5D69C(v43, v44);
    if ( !material )
      sub_B5D69C(v43, v44);
    if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)v60.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetFloat(material, (System_String_o *)current[1].klass, *(float *)&current[1].monitor, 0LL);
  }
  v56[0] = 74;
  v57 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
  v57 = 0;
  if ( !replaceShaderColorValues )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderColorValues,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
  v59 = v55;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__);
    if ( !v46 )
      break;
    v48 = v59.fields.current;
    if ( !v59.fields.current )
      sub_B5D69C(v46, v47);
    if ( !material )
      sub_B5D69C(v46, v47);
    if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)v59.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)v48[1].klass,
        *(UnityEngine_Color_o *)&v48[1].monitor,
        0LL);
  }
  v56[0] = 148;
  v49 = ++v57;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
  if ( v49 )
  {
    v50 = v49 - 1;
    if ( v56[v49 - 1] == 148 )
    {
      --v49;
      v57 = v50;
    }
  }
  if ( !replaceShaderTextureValues )
LABEL_37:
    sub_B5D69C(this, material);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v58,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderTextureValues,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v58,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__);
    if ( !v51 )
      break;
    v53 = v58.fields.current;
    if ( !v58.fields.current )
      sub_B5D69C(v51, v52);
    if ( !material )
      sub_B5D69C(v51, v52);
    if ( UnityEngine_Material__HasProperty_41623368(material, (System_String_o *)v58.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetTexture(
        material,
        (System_String_o *)v53[1].klass,
        (UnityEngine_Texture_o *)v53[1].monitor,
        0LL);
  }
  v56[v49] = 228;
  v54 = ++v57;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v58,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
  if ( v54 && v56[v54 - 1] == 228 )
    v57 = v54 - 1;
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

  if ( (byte_42E7C25 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17087/*"body_level"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7C25 = 1;
  }
  this->fields.useUniqueId = 1;
  this->fields.isCheckUniqueId = 1;
  v9 = (System_Int32_array **)StringLiteral_17087/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17087/*"body_level"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.searchMeshWord, v9, v2, v3, v4, v5, v6, v7);
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