void __fastcall BattleEffectReplaceShaderTexture___ctor(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_40F8CF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Material___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_List_Material__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_B16FFC(&StringLiteral_7130, v12);
    sub_B16FFC(&StringLiteral_7133, v13);
    sub_B16FFC(&StringLiteral_6321, v14);
    sub_B16FFC(&StringLiteral_7134, v15);
    sub_B16FFC(&StringLiteral_7132, v16);
    sub_B16FFC(&StringLiteral_6322, v17);
    sub_B16FFC(&StringLiteral_7129, v18);
    sub_B16FFC(&StringLiteral_7123, v19);
    sub_B16FFC(&StringLiteral_7131, v20);
    sub_B16FFC(&StringLiteral_7125, v21);
    sub_B16FFC(&StringLiteral_7126, v22);
    sub_B16FFC(&StringLiteral_7127, v23);
    sub_B16FFC(&StringLiteral_7128, v24);
    sub_B16FFC(&StringLiteral_7124, v25);
    byte_40F8CF8 = 1;
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
  this->fields.replaceObjects = (struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.replaceObjects,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v33,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v37 )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6322,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7127,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7129,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7132,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7126,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7128,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7130,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7134,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7133,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7131,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6321,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7125,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7123,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7124,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.autoReplaceShaderNames = (struct System_Collections_Generic_List_string__o *)v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.autoReplaceShaderNames,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Material__TypeInfo,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46,
                                                                                                  v47);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.replaceMaterials = (struct System_Collections_Generic_List_Material__o *)v48;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.replaceMaterials,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEffectReplaceShaderTexture__Execute(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v38; // x1
  __int64 v39; // x1
  struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *replaceObjects; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v41; // x20
  struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *v42; // x0
  UnityEngine_Object_o *v43; // x22
  const MethodInfo *v44; // x4
  Il2CppObject *current; // x20
  System_Collections_Generic_List_BattleActorControl__o *TargetActors; // x0
  Il2CppObject *v47; // x21
  _BOOL8 isShadowServant; // x0
  const MethodInfo *v49; // x3
  bool v50; // w23
  UnityEngine_Texture_o *ActorTexture; // x24
  ServantAssetLoadManager_o *Instance; // x0
  UnityEngine_GameObject_o *ShadowEffect; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  UnityEngine_Transform_o *v56; // x0
  UnityEngine_Transform_o *v57; // x21
  int v58; // s0
  UnityEngine_Transform_o *v61; // x21
  int v62; // s0
  UnityEngine_Object_o *klass; // x21
  UnityEngine_Object_o *v66; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v67; // x0
  System_Collections_Generic_List_Target_PlayerTypeFlag__o *monitor; // x0
  Il2CppObject *v69; // x21
  const MethodInfo *v70; // x5
  UnityEngine_Renderer_array *TargetRenderers; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  UnityEngine_Renderer_array *v74; // x27
  __int64 v75; // x8
  unsigned __int64 v76; // x9
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v77; // x0
  WarBoardManager_TaskList_o *v78; // x21
  const MethodInfo *v79; // x4
  System_Collections_Generic_List_Material__o *TargetMaterials; // x0
  Il2CppObject *v81; // x28
  System_Collections_Generic_List_WarBoardManager_TaskList__o *autoReplaceShaderNames; // x21
  UnityEngine_Object_o *shader; // x0
  System_String_o *name; // x1
  UnityEngine_Object_o *v85; // x0
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  const MethodInfo *v88; // x3
  UnityEngine_Object_o *ReplaceChocoShader; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  BattleServantDeadComponent_o *Component_srcLineSprite; // x21
  UnityEngine_Shader_o *v92; // x1
  _BOOL8 v93; // x0
  const MethodInfo *v94; // x3
  UIAtlas_o *UIAtlas; // x0
  const MethodInfo *v96; // x4
  UnityEngine_Texture2D_o *v97; // x3
  BattleEffectReplaceShaderTexture_o *v98; // x0
  const MethodInfo *v99; // x5
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v100; // x21
  UnityEngine_Object_o *v101; // x0
  System_String_o *v102; // x1
  UnityEngine_Object_o *v103; // x0
  System_String_o *v104; // x0
  System_String_o *v105; // x0
  const MethodInfo *v106; // x3
  UnityEngine_Object_o *v107; // x21
  _BOOL8 v108; // x0
  const MethodInfo *v109; // x3
  BattleEffectReplaceShaderTexture_o *v110; // x0
  const MethodInfo *v111; // x5
  System_Collections_Generic_List_WarBoardManager_TaskList__o *replaceMaterials; // x0
  struct System_Collections_Generic_List_Material__o *v113; // x0
  System_String_o *targetShaderName; // [xsp+8h] [xbp-158h]
  Il2CppObject *v115; // [xsp+10h] [xbp-150h]
  unsigned __int64 v116; // [xsp+18h] [xbp-148h]
  UnityEngine_Component_o *v117; // [xsp+20h] [xbp-140h]
  bool isChocoServant; // [xsp+2Ch] [xbp-134h]
  _BYTE v119[44]; // [xsp+30h] [xbp-130h] BYREF
  int v120; // [xsp+5Ch] [xbp-104h]
  System_Collections_Generic_List_Enumerator_T__o v121; // [xsp+60h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v122; // [xsp+80h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v123; // [xsp+A0h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v124; // [xsp+C0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v125; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_string__Shader__o *shaderCaches[2]; // [xsp+100h] [xbp-60h] BYREF

  if ( (byte_40F8CEC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Shader___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__Shader__TypeInfo, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__,
      v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v17);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__get_Current__,
      v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v20);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__get_Current__,
      v21);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Material__Add__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_Material__Contains__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__Contains__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v27);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__,
      v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v29);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__,
      v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__get_Count__, v32);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v33);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v34);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v35);
    sub_B16FFC(&StringLiteral_15874, v36);
    sub_B16FFC(&StringLiteral_15996, v37);
    sub_B16FFC(&StringLiteral_12773, v38);
    sub_B16FFC(&StringLiteral_4500, v39);
    byte_40F8CEC = 1;
  }
  shaderCaches[0] = 0LL;
  memset(&v125, 0, sizeof(v125));
  memset(&v124, 0, sizeof(v124));
  memset(&v123, 0, sizeof(v123));
  memset(&v122, 0, sizeof(v122));
  memset(&v121, 0, sizeof(v121));
  v120 = 0;
  replaceObjects = this->fields.replaceObjects;
  if ( !replaceObjects )
    goto LABEL_159;
  if ( replaceObjects->fields._size < 1 )
    return;
  v41 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__Shader__TypeInfo,
                                                                                        method,
                                                                                        v2,
                                                                                        v3,
                                                                                        v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v41,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
  shaderCaches[0] = (System_Collections_Generic_Dictionary_string__Shader__o *)v41;
  v42 = this->fields.replaceObjects;
  if ( !v42 )
LABEL_159:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v119,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v42,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
  v43 = 0LL;
  v125 = *(System_Collections_Generic_List_Enumerator_T__o *)v119;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v125,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__) )
  {
    current = v125.fields.current;
    if ( !v125.fields.current )
      sub_B170D4();
    TargetActors = BattleEffectReplaceShaderTexture__GetTargetActors(
                     this,
                     (System_Int32_array *)v125.fields.current[1].monitor,
                     (bool)v125.fields.current[2].klass,
                     (bool)v125.fields.current[1].klass,
                     v44);
    if ( !TargetActors )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v119,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TargetActors,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    v124 = *(System_Collections_Generic_List_Enumerator_T__o *)v119;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v124,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__) )
    {
      v47 = v124.fields.current;
      if ( !v124.fields.current )
        sub_B170D4();
      isChocoServant = BattleActorControl__isChocoServant((BattleActorControl_o *)v124.fields.current, 0LL);
      isShadowServant = BattleActorControl__isShadowServant((BattleActorControl_o *)v47, 0LL);
      v50 = isShadowServant;
      v117 = (UnityEngine_Component_o *)v47;
      if ( LOBYTE(current[11].monitor) )
        ActorTexture = BattleEffectReplaceShaderTexture__getActorTexture(
                         (BattleEffectReplaceShaderTexture_o *)isShadowServant,
                         (BattleActorControl_o *)v47,
                         (System_String_o *)current[2].monitor,
                         v49);
      else
        ActorTexture = 0LL;
      if ( v50 && LOBYTE(current[3].klass) != 0 )
      {
        Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !Instance )
          sub_B170D4();
        ShadowEffect = ServantAssetLoadManager__createShadowEffect(Instance, 0, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v47, 0LL);
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
        if ( UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL) )
          NodeFromName = (UnityEngine_Object_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( !ShadowEffect )
          sub_B170D4();
        v56 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !v56 )
          sub_B170D4();
        UnityEngine_Transform__SetParent(v56, (UnityEngine_Transform_o *)NodeFromName, 0LL);
        v57 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        *(UnityEngine_Vector3_o *)&v58 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v57 )
          sub_B170D4();
        UnityEngine_Transform__set_localPosition(v57, *(UnityEngine_Vector3_o *)&v58, 0LL);
        v61 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        *(UnityEngine_Vector3_o *)&v62 = UnityEngine_Vector3__get_one(0LL);
        if ( !v61 )
          sub_B170D4();
        UnityEngine_Transform__set_localScale(v61, *(UnityEngine_Vector3_o *)&v62, 0LL);
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
        v66 = (UnityEngine_Object_o *)current[7].klass;
        if ( !v66 )
          sub_B170D4();
        targetShaderName = UnityEngine_Object__get_name(v66, 0LL);
      }
      v67 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current[4].klass;
      if ( !v67 )
        sub_B170D4();
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v119,
        v67,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v123 = *(System_Collections_Generic_List_Enumerator_T__o *)v119;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v123,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        monitor = (System_Collections_Generic_List_Target_PlayerTypeFlag__o *)current[5].monitor;
        if ( !monitor )
          sub_B170D4();
        v69 = v123.fields.current;
        System_Collections_Generic_List_Target_PlayerTypeFlag___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v119,
          monitor,
          (const MethodInfo_2F1430C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
        v122 = *(System_Collections_Generic_List_Enumerator_T__o *)v119;
        while ( System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___MoveNext(
                  &v122,
                  (const MethodInfo_20723B4 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__) )
        {
          TargetRenderers = BattleEffectReplaceShaderTexture__getTargetRenderers(
                              this,
                              (UnityEngine_GameObject_o *)v69,
                              (int32_t)v122.fields.current,
                              (bool)current[5].klass,
                              BYTE1(current[5].klass),
                              v70);
          v74 = TargetRenderers;
          if ( TargetRenderers )
          {
            v75 = *(_QWORD *)&TargetRenderers->max_length;
            if ( (int)v75 >= 1 )
            {
              v76 = 0LL;
              v115 = v69;
              do
              {
                if ( v76 >= (unsigned int)v75 )
                {
                  sub_B17100(TargetRenderers, v72, v73);
                  sub_B170A0();
                }
                v77 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)current[4].monitor;
                if ( !v77 )
                  sub_B170D4();
                v116 = v76;
                v78 = (WarBoardManager_TaskList_o *)v74->m_Items[v76];
                TargetRenderers = (UnityEngine_Renderer_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                  v77,
                                                                  v78,
                                                                  (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                if ( ((unsigned __int8)TargetRenderers & 1) != 0 )
                  goto LABEL_115;
                TargetMaterials = BattleEffectReplaceShaderTexture__getTargetMaterials(
                                    (BattleEffectReplaceShaderTexture_o *)TargetRenderers,
                                    (UnityEngine_Renderer_o *)v78,
                                    targetShaderName,
                                    (bool)current[6].klass,
                                    v79);
                if ( !TargetMaterials )
                  sub_B170D4();
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)v119,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TargetMaterials,
                  (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
                v121 = *(System_Collections_Generic_List_Enumerator_T__o *)v119;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v121,
                          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
                {
                  v81 = v121.fields.current;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ActorTexture, 0LL, 0LL) )
                  {
                    if ( !v81 )
                      sub_B170D4();
                    UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v81, ActorTexture, 0LL);
                  }
                  if ( isChocoServant )
                  {
                    if ( !BYTE1(current[11].monitor) )
                      goto LABEL_63;
                    if ( !v81 )
                      sub_B170D4();
                    autoReplaceShaderNames = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.autoReplaceShaderNames;
                    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v81,
                                                       0LL);
                    if ( !shader )
                      sub_B170D4();
                    name = UnityEngine_Object__get_name(shader, 0LL);
                    if ( !autoReplaceShaderNames )
                      sub_B170D4();
                    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                           autoReplaceShaderNames,
                           (WarBoardManager_TaskList_o *)name,
                           (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
                    {
                      v85 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v81, 0LL);
                      if ( !v85 )
                        sub_B170D4();
                      v86 = UnityEngine_Object__get_name(v85, 0LL);
                      v87 = System_String__Concat_43743732(v86, (System_String_o *)StringLiteral_15874, 0LL);
                      ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                     (BattleEffectReplaceShaderTexture_o *)v87,
                                                                     v87,
                                                                     shaderCaches,
                                                                     v88);
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
                      gameObject = UnityEngine_Component__get_gameObject(v117, 0LL);
                      if ( !gameObject )
                        sub_B170D4();
                      Component_srcLineSprite = (BattleServantDeadComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                  gameObject,
                                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
                      {
                        if ( !v81 )
                          sub_B170D4();
                        v92 = UnityEngine_Material__get_shader((UnityEngine_Material_o *)v81, 0LL);
                        if ( !Component_srcLineSprite )
                          sub_B170D4();
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleServantDeadComponent__getReplaceChocoShader(
                                                                       Component_srcLineSprite,
                                                                       v92,
                                                                       0LL,
                                                                       0LL);
                      }
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v93 = UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL);
                    if ( v93 )
                      ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                     (BattleEffectReplaceShaderTexture_o *)v93,
                                                                     (System_String_o *)StringLiteral_4500,
                                                                     shaderCaches,
                                                                     v94);
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UIAtlas = (UIAtlas_o *)UnityEngine_Object__op_Equality(v43, 0LL, 0LL);
                    if ( ((unsigned __int8)UIAtlas & 1) != 0 )
                    {
                      UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                                  (System_String_o *)StringLiteral_12773,
                                  (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
                      v97 = (UnityEngine_Texture2D_o *)UIAtlas;
                    }
                    else
                    {
                      v97 = (UnityEngine_Texture2D_o *)v43;
                    }
                    v43 = (UnityEngine_Object_o *)v97;
                    BattleEffectReplaceShaderTexture__setupChocoShader(
                      (BattleEffectReplaceShaderTexture_o *)UIAtlas,
                      (UnityEngine_Material_o *)v81,
                      (UnityEngine_Shader_o *)ReplaceChocoShader,
                      v97,
                      v96);
                    BattleEffectReplaceShaderTexture__updateShaderValues(
                      v98,
                      (UnityEngine_Material_o *)v81,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[8].klass,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[8].monitor,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[9].klass,
                      v99);
                  }
                  if ( v50 )
                  {
                    if ( !v81 )
                      sub_B170D4();
                    v100 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.autoReplaceShaderNames;
                    v101 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v81, 0LL);
                    if ( !v101 )
                      sub_B170D4();
                    v102 = UnityEngine_Object__get_name(v101, 0LL);
                    if ( !v100 )
                      sub_B170D4();
                    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                           v100,
                           (WarBoardManager_TaskList_o *)v102,
                           (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
                    {
                      v103 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v81,
                                                       0LL);
                      if ( !v103 )
                        sub_B170D4();
                      v104 = UnityEngine_Object__get_name(v103, 0LL);
                      v105 = System_String__Concat_43743732(v104, (System_String_o *)StringLiteral_15996, 0LL);
                      v107 = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                       (BattleEffectReplaceShaderTexture_o *)v105,
                                                       v105,
                                                       shaderCaches,
                                                       v106);
                    }
                    else
                    {
                      v107 = 0LL;
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v108 = UnityEngine_Object__op_Equality(v107, 0LL, 0LL);
                    if ( v108 )
                      v107 = (UnityEngine_Object_o *)current[9].monitor;
                    BattleEffectReplaceShaderTexture__setupShadowShader(
                      (BattleEffectReplaceShaderTexture_o *)v108,
                      (UnityEngine_Material_o *)v81,
                      (UnityEngine_Shader_o *)v107,
                      v109);
                    BattleEffectReplaceShaderTexture__updateShaderValues(
                      v110,
                      (UnityEngine_Material_o *)v81,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[10].klass,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[10].monitor,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[11].klass,
                      v111);
                  }
                  replaceMaterials = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.replaceMaterials;
                  if ( !replaceMaterials )
                    sub_B170D4();
                  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                          replaceMaterials,
                          (WarBoardManager_TaskList_o *)v81,
                          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_Material__Contains__) )
                  {
                    v113 = this->fields.replaceMaterials;
                    if ( !v113 )
                      sub_B170D4();
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v113,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Material__Add__);
                  }
                }
                *(_DWORD *)&v119[4 * v120++ + 24] = 864;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v121,
                  (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
                if ( !v120 )
                {
LABEL_115:
                  v69 = v115;
                }
                else
                {
                  v69 = v115;
                  if ( *(_DWORD *)&v119[4 * v120 + 20] == 864 )
                    --v120;
                }
                LODWORD(v75) = v74->max_length;
                v76 = v116 + 1;
              }
              while ( (__int64)(v116 + 1) < (int)v75 );
            }
          }
        }
        *(_DWORD *)&v119[4 * v120++ + 24] = 909;
        System_Collections_Generic_List_Enumerator_Target_PlayerTypeFlag___Dispose(
          &v122,
          (const MethodInfo_20723B0 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
        if ( v120 && *(_DWORD *)&v119[4 * v120 + 20] == 909 )
          --v120;
      }
      *(_DWORD *)&v119[4 * v120++ + 24] = 937;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v123,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( v120 && *(_DWORD *)&v119[4 * v120 + 20] == 937 )
        --v120;
    }
    *(_DWORD *)&v119[4 * v120++ + 24] = 965;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v124,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v120 && *(_DWORD *)&v119[4 * v120 + 20] == 965 )
      --v120;
  }
  *(_DWORD *)&v119[4 * v120++ + 24] = 993;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v125,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
  if ( v120 && *(_DWORD *)&v119[4 * v120 + 20] == 993 )
    --v120;
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
  __int64 v10; // x2
  int max_length; // w8
  System_Object_array *v12; // x22
  unsigned int v13; // w24
  Il2CppClass **v14; // x8
  BattleActorControl_o *v15; // x23

  if ( (byte_40F8CEE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F8CEE = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_19DE080 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_17;
  max_length = ObjectsOfType_object->max_length;
  v12 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        sub_B17100(ObjectsOfType_object, v9, v10);
        sub_B170A0();
      }
      v14 = &v12->obj.klass + (int)v13;
      v15 = (BattleActorControl_o *)v14[4];
      if ( !v15 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v14[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!isCheckUniqueId || v15->fields.uniqueID == this->fields.targetId) )
      {
        return v15;
      }
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_B170D4();
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
  System_Object_array *ObjectsOfType_object; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  WebViewManager_o *Instance; // x0
  UnityEngine_GameObject_o *webView; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x0
  unsigned __int64 max_length; // x8
  unsigned __int64 v26; // x9
  __int64 v27; // x8
  unsigned __int64 v28; // x24
  bool v29; // w22
  UnityEngine_Object_o *ModelBattleActor; // x23

  if ( (byte_40F8CED & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, servantIds);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleActorControl__Contains__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v15);
    byte_40F8CED = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleActorControl__TypeInfo,
                                                                                                  servantIds,
                                                                                                  isCheckUniqueId,
                                                                                                  useUniqueId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  if ( this->fields.isNPEffect )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    webView = (UnityEngine_GameObject_o *)Instance->fields.webView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)webView, 0LL, 0LL) )
    {
      if ( !webView )
        goto LABEL_46;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          webView,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( v16 )
        {
          v24 = v16;
          v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
LABEL_43:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            v18,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
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
    ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_19DE080 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( !ObjectsOfType_object )
      goto LABEL_46;
    max_length = ObjectsOfType_object->max_length;
    if ( (__int64)(max_length << 32) >= 1 )
    {
      v26 = 0LL;
      while ( 1 )
      {
        if ( v26 >= max_length )
          goto LABEL_45;
        v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)ObjectsOfType_object->m_Items[v26];
        if ( !v18 )
          goto LABEL_46;
        if ( v18[10].fields.targetId == this->fields.targetId )
          break;
        if ( (__int64)++v26 >= (int)max_length )
          return (System_Collections_Generic_List_BattleActorControl__o *)v16;
      }
      if ( v16 )
      {
        v24 = v16;
        goto LABEL_43;
      }
LABEL_46:
      sub_B170D4();
    }
  }
  else if ( servantIds )
  {
    v27 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v27 >= 1 )
    {
      v28 = 0LL;
      v29 = isCheckUniqueId;
      do
      {
        if ( v28 >= (unsigned int)v27 )
        {
LABEL_45:
          sub_B17100(ObjectsOfType_object, v18, v19);
          sub_B170A0();
        }
        ModelBattleActor = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__GetModelBattleActor(
                                                     this,
                                                     servantIds->m_Items[v28 + 1],
                                                     v29,
                                                     v20);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ObjectsOfType_object = (System_Object_array *)UnityEngine_Object__op_Inequality(ModelBattleActor, 0LL, 0LL);
        if ( ((unsigned __int8)ObjectsOfType_object & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_46;
          ObjectsOfType_object = (System_Object_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v16,
                                                          (WarBoardManager_TaskList_o *)ModelBattleActor,
                                                          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_BattleActorControl__Contains__);
          if ( ((unsigned __int8)ObjectsOfType_object & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v16,
              (EventMissionProgressRequest_Argument_ProgressData_o *)ModelBattleActor,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
        }
        LODWORD(v27) = servantIds->max_length;
        ++v28;
      }
      while ( (__int64)v28 < (int)v27 );
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
  struct System_Collections_Generic_List_Material__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8CEB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Material__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F8CEB = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.destroyReplaceShaderMaterials )
  {
    replaceMaterials = this->fields.replaceMaterials;
    if ( !replaceMaterials )
      goto LABEL_18;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceMaterials,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
    {
      current = v11.fields.current;
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
        UnityEngine_Object__DestroyImmediate_34809676((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
  }
  v10 = this->fields.replaceMaterials;
  if ( !v10 )
LABEL_18:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_Material__Clear__);
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
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v10; // x20
  unsigned int v11; // w22
  Il2CppClass **v12; // x8
  UnityEngine_Object_o *v13; // x21
  System_String_o *name; // x0
  UnityEngine_Material_o *material; // x0

  if ( (byte_40F8CF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____66819888, actor);
    byte_40F8CF0 = 1;
  }
  if ( !actor )
    goto LABEL_16;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)actor,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____66819888);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_16;
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v10 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length < 1 )
    return 0LL;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= max_length )
    {
      sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v7, v8);
      sub_B170A0();
    }
    v12 = &v10->obj.klass + (int)v11;
    v13 = (UnityEngine_Object_o *)v12[4];
    if ( !v13 )
      goto LABEL_16;
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v12[4], 0LL);
    if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
    {
      name = UnityEngine_Object__get_name(v13, 0LL);
      if ( !name )
        goto LABEL_16;
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)System_String__IndexOf_43816080(name, searchMeshWord, 0LL);
      if ( ((unsigned int)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 0x80000000) == 0 )
        break;
    }
    max_length = v10->max_length;
    if ( (int)++v11 >= max_length )
      return 0LL;
  }
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v13, 0LL);
  if ( !material )
LABEL_16:
    sub_B170D4();
  return UnityEngine_Material__get_mainTexture(material, 0LL);
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

  if ( (byte_40F8CF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, gameObject);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___, v8);
    byte_40F8CF2 = 1;
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
        sub_B170D4();
      v9 = &Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___;
LABEL_12:
      result = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           gameObject,
                                           (const MethodInfo_19D14E0 *)*v9);
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

  if ( (byte_40F8CF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____66859672, gameObject);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____66859688, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____66859696, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____66859712, v10);
    byte_40F8CF3 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_15;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____66859696;
      goto LABEL_12;
    case 1:
      if ( !gameObject )
        goto LABEL_15;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____66859672;
      goto LABEL_12;
    case 2:
      if ( !gameObject )
        goto LABEL_15;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____66859712;
      goto LABEL_12;
    case 3:
      if ( !gameObject )
LABEL_15:
        sub_B170D4();
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____66859688;
LABEL_12:
      result = (UnityEngine_Renderer_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                               gameObject,
                                               includeInactive,
                                               (const MethodInfo_19D1940 *)*v11);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  UnityEngine_Material_array *materials; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  UnityEngine_Material_array *v17; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v19; // x23
  UnityEngine_Object_o *shader; // x24
  UnityEngine_Object_o *v21; // x0
  System_String_o *name; // x0

  if ( (byte_40F8CF4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Material__Add__, renderer);
    sub_B16FFC(&Method_System_Collections_Generic_List_Material__Contains__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Material___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_Material__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F8CF4 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Material__TypeInfo,
                                                                                                  renderer,
                                                                                                  targetShaderName,
                                                                                                  targetShaderAll,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !renderer || (materials = UnityEngine_Renderer__get_materials(renderer, 0LL)) == 0LL )
LABEL_26:
    sub_B170D4();
  v16 = *(_QWORD *)&materials->max_length;
  v17 = materials;
  if ( (int)v16 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v16; ++i )
    {
      if ( i >= (unsigned int)v16 )
      {
        sub_B17100(materials, v14, v15);
        sub_B170A0();
      }
      v19 = (UnityEngine_Object_o *)v17->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
        goto LABEL_30;
      if ( !v19 )
        goto LABEL_26;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v19, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(shader, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
      {
LABEL_30:
        if ( targetShaderAll )
          goto LABEL_21;
        if ( !v19 )
          goto LABEL_26;
        v21 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v19, 0LL);
        if ( !v21 )
          goto LABEL_26;
        name = UnityEngine_Object__get_name(v21, 0LL);
        materials = (UnityEngine_Material_array *)System_String__op_Equality(name, targetShaderName, 0LL);
        if ( ((unsigned __int8)materials & 1) != 0 )
        {
LABEL_21:
          if ( !v12 )
            goto LABEL_26;
          materials = (UnityEngine_Material_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                      (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12,
                                                      (WarBoardManager_TaskList_o *)v19,
                                                      (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_Material__Contains__);
          if ( ((unsigned __int8)materials & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Material__Add__);
        }
      }
      LODWORD(v16) = v17->max_length;
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
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F8CF1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, targetObject);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B16FFC(&UnityEngine_Renderer___TypeInfo, v10);
    byte_40F8CF1 = 1;
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
  v14 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Renderer, 0LL, 0LL) )
  {
    v15 = sub_B17014(UnityEngine_Renderer___TypeInfo, 1LL, v13);
    if ( !v15 )
      sub_B170D4();
    v14 = v15;
    if ( Renderer )
    {
      v15 = sub_B170BC(Renderer, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
      if ( !v15 )
      {
        sub_B170F4();
        sub_B170A0();
      }
    }
    if ( !*(_DWORD *)(v14 + 24) )
    {
      sub_B17100(v15, v16, v17);
      sub_B170A0();
    }
    *(_QWORD *)(v14 + 32) = Renderer;
    sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), Renderer, v17, v18, v19, v20, v21, v22);
  }
  return (UnityEngine_Renderer_array *)v14;
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
  UnityEngine_Shader_o *result; // x0
  UnityEngine_Object_o *v10; // x21
  bool v11; // w8

  if ( (byte_40F8CEF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__, shaderName);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F8CEF = 1;
  }
  if ( !*shaderCaches )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*shaderCaches,
         (System_Xml_XmlQualifiedName_o *)shaderName,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__) )
  {
    if ( *shaderCaches )
      return (UnityEngine_Shader_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                       (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)*shaderCaches,
                                       (System_Type_o *)shaderName,
                                       (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
LABEL_14:
    sub_B170D4();
  }
  v10 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(shaderName, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  result = 0LL;
  if ( v11 )
  {
    if ( !*shaderCaches )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*shaderCaches,
      (System_Xml_XmlQualifiedName_o *)shaderName,
      (System_Xml_Schema_XmlSchemaObject_o *)v10,
      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    return (UnityEngine_Shader_o *)v10;
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
  MethodInfo v20; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8CF5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, material);
    sub_B16FFC(&StringLiteral_15891, v8);
    sub_B16FFC(&StringLiteral_15875, v9);
    sub_B16FFC(&StringLiteral_16032, v10);
    sub_B16FFC(&StringLiteral_15853, v11);
    byte_40F8CF5 = 1;
  }
  v20.methodPointer = 0LL;
  v20.invoker_method = 0LL;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v16, v17, v18, v19, &v20);
  if ( !material )
    sub_B170D4();
  if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_15891, 0LL) )
  {
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15891, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_15853, 0LL) )
  {
    v23 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15853, 0LL);
    v20.methodPointer = *(Il2CppMethodPointer *)&v23.fields.r;
    v20.invoker_method = *(void **)&v23.fields.b;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)chocoShader, 0LL, 0LL) )
    UnityEngine_Material__set_shader(material, chocoShader, 0LL);
  v24.fields.r = r;
  v24.fields.g = g;
  v24.fields.b = b;
  v24.fields.a = a;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_15891, v24, 0LL);
  *(_QWORD *)&v25.fields.r = v20.methodPointer;
  *(_QWORD *)&v25.fields.b = v20.invoker_method;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_15853, v25, 0LL);
  UnityEngine_Material__SetTexture(
    material,
    (System_String_o *)StringLiteral_15875,
    (UnityEngine_Texture_o *)chocoTexture,
    0LL);
  if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_16032, 0LL) )
    UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16032, 1.0, 0LL);
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
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8CF6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, material);
    sub_B16FFC(&StringLiteral_15891, v10);
    byte_40F8CF6 = 1;
  }
  v12.fields.r = 0.05;
  v12.fields.a = 1.0;
  v12.fields.g = 0.05;
  v12.fields.b = 0.05;
  *(_QWORD *)&v11.fields.r = 0LL;
  *(_QWORD *)&v11.fields.b = 0LL;
  UnityEngine_Color___ctor(v12, v4, v5, v6, v7, (const MethodInfo *)&v11);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)shadowShader, 0LL, 0LL) )
  {
    if ( material )
      goto LABEL_10;
LABEL_11:
    sub_B170D4();
  }
  if ( !material )
    goto LABEL_11;
  UnityEngine_Material__set_shader(material, shadowShader, 0LL);
LABEL_10:
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_15891, v11, 0LL);
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
  Il2CppObject *current; // x23
  Il2CppObject *v22; // x22
  int v23; // w21
  int v24; // w8
  Il2CppObject *v25; // x22
  int v26; // w21
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+0h] [xbp-B0h] BYREF
  int v28[3]; // [xsp+18h] [xbp-98h]
  int v29; // [xsp+24h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_40F8CF7 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__,
      material);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__,
      v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__,
      v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__,
      v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__,
      v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__get_Current__,
      v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__get_Current__,
      v16);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__get_Current__,
      v17);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__,
      v18);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__,
      v19);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__,
      v20);
    byte_40F8CF7 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
  if ( !replaceShaderFloatValues )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderFloatValues,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
  v32 = v27;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__) )
  {
    current = v32.fields.current;
    if ( !v32.fields.current )
      sub_B170D4();
    if ( !material )
      sub_B170D4();
    if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)v32.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetFloat(material, (System_String_o *)current[1].klass, *(float *)&current[1].monitor, 0LL);
  }
  v28[0] = 74;
  v29 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
  v29 = 0;
  if ( !replaceShaderColorValues )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderColorValues,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
  v31 = v27;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__) )
  {
    v22 = v31.fields.current;
    if ( !v31.fields.current )
      sub_B170D4();
    if ( !material )
      sub_B170D4();
    if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)v31.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)v22[1].klass,
        *(UnityEngine_Color_o *)&v22[1].monitor,
        0LL);
  }
  v28[0] = 148;
  v23 = ++v29;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v28[v23 - 1] == 148 )
    {
      --v23;
      v29 = v24;
    }
  }
  if ( !replaceShaderTextureValues )
LABEL_37:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderTextureValues,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__) )
  {
    v25 = v30.fields.current;
    if ( !v30.fields.current )
      sub_B170D4();
    if ( !material )
      sub_B170D4();
    if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)v30.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetTexture(
        material,
        (System_String_o *)v25[1].klass,
        (UnityEngine_Texture_o *)v25[1].monitor,
        0LL);
  }
  v28[v23] = 228;
  v26 = ++v29;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
  if ( v26 && v28[v26 - 1] == 228 )
    v29 = v26 - 1;
}


void __fastcall BattleEffectReplaceShaderTexture_ReplaceObject___ctor(
        BattleEffectReplaceShaderTexture_ReplaceObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_40F850B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16814, method);
    byte_40F850B = 1;
  }
  this->fields.useUniqueId = 1;
  this->fields.isCheckUniqueId = 1;
  v3 = StringLiteral_16814;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_16814;
  sub_B16F98(&this->fields.searchMeshWord, v3);
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