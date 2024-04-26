void __fastcall BattleEffectReplaceShaderTexture___ctor(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_43505C4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_Material__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&StringLiteral_7255/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/);
    sub_B70694(&StringLiteral_7258/*"Hidden/Particle/distortion-GrabPass"*/);
    sub_B70694(&StringLiteral_6431/*"FGO_Battle/Ken/Base"*/);
    sub_B70694(&StringLiteral_7259/*"Hidden/Particle/distortion-Stencil"*/);
    sub_B70694(&StringLiteral_7257/*"Hidden/Particle/distortion"*/);
    sub_B70694(&StringLiteral_6432/*"FGO_Battle/Particle/Base"*/);
    sub_B70694(&StringLiteral_7254/*"Hidden/Particle/MultiplyAdd1Pass"*/);
    sub_B70694(&StringLiteral_7248/*"Hidden/Ken/Distortion"*/);
    sub_B70694(&StringLiteral_7256/*"Hidden/Particle/dissolve"*/);
    sub_B70694(&StringLiteral_7250/*"Hidden/Ken/MultiplyAdd"*/);
    sub_B70694(&StringLiteral_7251/*"Hidden/Particle/Base-Stencil"*/);
    sub_B70694(&StringLiteral_7252/*"Hidden/Particle/MultiplyAdd"*/);
    sub_B70694(&StringLiteral_7253/*"Hidden/Particle/MultiplyAdd-Stencil"*/);
    sub_B70694(&StringLiteral_7249/*"Hidden/Ken/GradationMap"*/);
    byte_43505C4 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
  this->fields.replaceObjects = (struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.replaceObjects,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v10 )
    sub_B7076C(v11, v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6432/*"FGO_Battle/Particle/Base"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7252/*"Hidden/Particle/MultiplyAdd"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7254/*"Hidden/Particle/MultiplyAdd1Pass"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7257/*"Hidden/Particle/distortion"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7251/*"Hidden/Particle/Base-Stencil"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7253/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7255/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7259/*"Hidden/Particle/distortion-Stencil"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7258/*"Hidden/Particle/distortion-GrabPass"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7256/*"Hidden/Particle/dissolve"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6431/*"FGO_Battle/Ken/Base"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7250/*"Hidden/Ken/MultiplyAdd"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7248/*"Hidden/Ken/Distortion"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_7249/*"Hidden/Ken/GradationMap"*/,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.autoReplaceShaderNames = (struct System_Collections_Generic_List_string__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.autoReplaceShaderNames,
    (System_Int32_array **)v10,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.replaceMaterials = (struct System_Collections_Generic_List_Material__o *)v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.replaceMaterials,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEffectReplaceShaderTexture__Execute(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  BattleEffectReplaceShaderTexture_o *v2; // x19
  struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *replaceObjects; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20
  UnityEngine_Object_o *v5; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  Il2CppObject *current; // x20
  System_Collections_Generic_List_BattleActorControl__o *TargetActors; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  _BOOL8 isShadowServant; // x0
  const MethodInfo *v16; // x3
  bool v17; // w23
  UnityEngine_Object_o *ActorTexture; // x24
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  UnityEngine_Transform_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Transform_o *v26; // x0
  __int64 v27; // x1
  UnityEngine_Transform_o *v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  int v31; // s0
  UnityEngine_Transform_o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  int v37; // s0
  UnityEngine_Object_o *klass; // x21
  __int64 v41; // x1
  UnityEngine_Object_o *v42; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v43; // x0
  __int64 v44; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *monitor; // x0
  Il2CppObject *v46; // x21
  const MethodInfo *v47; // x5
  UnityEngine_Renderer_array *TargetRenderers; // x0
  __int64 v49; // x1
  UnityEngine_Renderer_array *v50; // x27
  __int64 v51; // x8
  unsigned __int64 v52; // x9
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v53; // x0
  WarBoardManager_TaskList_o *v54; // x21
  const MethodInfo *v55; // x4
  System_Collections_Generic_List_Material__o *TargetMaterials; // x0
  __int64 v57; // x1
  Il2CppObject *v58; // x28
  _BOOL8 v59; // x0
  __int64 v60; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *autoReplaceShaderNames; // x21
  UnityEngine_Object_o *shader; // x0
  __int64 v63; // x1
  System_String_o *name; // x0
  UnityEngine_Object_o *v65; // x0
  __int64 v66; // x1
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  const MethodInfo *v69; // x3
  UnityEngine_Object_o *ReplaceChocoShader; // x25
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v72; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  _BOOL8 v74; // x0
  __int64 v75; // x1
  UnityEngine_Shader_o *v76; // x0
  _BOOL8 v77; // x0
  const MethodInfo *v78; // x3
  UIAtlas_o *UIAtlas; // x0
  const MethodInfo *v80; // x4
  UnityEngine_Texture2D_o *v81; // x3
  BattleEffectReplaceShaderTexture_o *v82; // x0
  const MethodInfo *v83; // x5
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v84; // x21
  UnityEngine_Object_o *v85; // x0
  __int64 v86; // x1
  System_String_o *v87; // x0
  UnityEngine_Object_o *v88; // x0
  __int64 v89; // x1
  System_String_o *v90; // x0
  System_String_o *v91; // x0
  const MethodInfo *v92; // x3
  UnityEngine_Object_o *v93; // x21
  _BOOL8 v94; // x0
  const MethodInfo *v95; // x3
  BattleEffectReplaceShaderTexture_o *v96; // x0
  const MethodInfo *v97; // x5
  System_Collections_Generic_List_WarBoardManager_TaskList__o *replaceMaterials; // x0
  __int64 v99; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v100; // x0
  __int64 v101; // x0
  System_String_o *targetShaderName; // [xsp+8h] [xbp-158h]
  Il2CppObject *v103; // [xsp+10h] [xbp-150h]
  unsigned __int64 v104; // [xsp+18h] [xbp-148h]
  UnityEngine_Component_o *v105; // [xsp+20h] [xbp-140h]
  bool isChocoServant; // [xsp+2Ch] [xbp-134h]
  _BYTE v107[44]; // [xsp+30h] [xbp-130h] BYREF
  int v108; // [xsp+5Ch] [xbp-104h]
  System_Collections_Generic_List_Enumerator_T__o v109; // [xsp+60h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v110; // [xsp+80h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v111; // [xsp+A0h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v112; // [xsp+C0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_string__Shader__o *shaderCaches[2]; // [xsp+100h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_43505B8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_Material__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_Material__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_Material__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&StringLiteral_16160/*"_Choco"*/);
    sub_B70694(&StringLiteral_16291/*"_Shadow"*/);
    sub_B70694(&StringLiteral_13008/*"Shaders/ChocoMap"*/);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B70694(&StringLiteral_4599/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/);
    byte_43505B8 = 1;
  }
  shaderCaches[0] = 0LL;
  memset(&v113, 0, sizeof(v113));
  memset(&v112, 0, sizeof(v112));
  memset(&v111, 0, sizeof(v111));
  memset(&v110, 0, sizeof(v110));
  memset(&v109, 0, sizeof(v109));
  v108 = 0;
  replaceObjects = v2->fields.replaceObjects;
  if ( !replaceObjects )
    goto LABEL_159;
  if ( replaceObjects->fields._size < 1 )
    return;
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
  shaderCaches[0] = (System_Collections_Generic_Dictionary_string__Shader__o *)v4;
  this = (BattleEffectReplaceShaderTexture_o *)v2->fields.replaceObjects;
  if ( !this )
LABEL_159:
    sub_B7076C(this, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v107,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
  v5 = 0LL;
  v113 = *(System_Collections_Generic_List_Enumerator_T__o *)v107;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v113,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__);
    if ( !v6 )
      break;
    current = v113.fields.current;
    if ( !v113.fields.current )
      sub_B7076C(v6, v7);
    TargetActors = BattleEffectReplaceShaderTexture__GetTargetActors(
                     v2,
                     (System_Int32_array *)v113.fields.current[1].monitor,
                     (bool)v113.fields.current[2].klass,
                     (bool)v113.fields.current[1].klass,
                     v8);
    if ( !TargetActors )
      sub_B7076C(0LL, v11);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v107,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TargetActors,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    v112 = *(System_Collections_Generic_List_Enumerator_T__o *)v107;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v112,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
      if ( !v12 )
        break;
      v14 = v112.fields.current;
      if ( !v112.fields.current )
        sub_B7076C(v12, v13);
      isChocoServant = BattleActorControl__isChocoServant((BattleActorControl_o *)v112.fields.current, 0LL);
      isShadowServant = BattleActorControl__isShadowServant((BattleActorControl_o *)v14, 0LL);
      v17 = isShadowServant;
      v105 = (UnityEngine_Component_o *)v14;
      if ( LOBYTE(current[11].monitor) )
        ActorTexture = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getActorTexture(
                                                 (BattleEffectReplaceShaderTexture_o *)isShadowServant,
                                                 (BattleActorControl_o *)v14,
                                                 (System_String_o *)current[2].monitor,
                                                 v16);
      else
        ActorTexture = 0LL;
      if ( v17 && LOBYTE(current[3].klass) != 0 )
      {
        Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !Instance )
          sub_B7076C(0LL, v20);
        ShadowEffect = ServantAssetLoadManager__createShadowEffect(Instance, 0, 0LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
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
        v24 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)v24 & 1) != 0 )
        {
          v24 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
          NodeFromName = (UnityEngine_Object_o *)v24;
        }
        if ( !ShadowEffect )
          sub_B7076C(v24, v25);
        v26 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !v26 )
          sub_B7076C(0LL, v27);
        UnityEngine_Transform__SetParent(v26, (UnityEngine_Transform_o *)NodeFromName, 0LL);
        v28 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v28 )
          sub_B7076C(v29, v30);
        UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v31, 0LL);
        v34 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
        if ( !v34 )
          sub_B7076C(v35, v36);
        UnityEngine_Transform__set_localScale(v34, *(UnityEngine_Vector3_o *)&v37, 0LL);
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
        v42 = (UnityEngine_Object_o *)current[7].klass;
        if ( !v42 )
          sub_B7076C(0LL, v41);
        targetShaderName = UnityEngine_Object__get_name(v42, 0LL);
      }
      v43 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current[4].klass;
      if ( !v43 )
        sub_B7076C(0LL, v41);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v107,
        v43,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v111 = *(System_Collections_Generic_List_Enumerator_T__o *)v107;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v111,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        monitor = (System_Collections_Generic_List_Voice_BATTLE__o *)current[5].monitor;
        if ( !monitor )
          sub_B7076C(0LL, v44);
        v46 = v111.fields.current;
        System_Collections_Generic_List_Voice_BATTLE___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v107,
          monitor,
          (const MethodInfo_30B9FF4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
        v110 = *(System_Collections_Generic_List_Enumerator_T__o *)v107;
        while ( System_Collections_Generic_List_Enumerator_Voice_BATTLE___MoveNext(
                  &v110,
                  (const MethodInfo_221F62C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__) )
        {
          TargetRenderers = BattleEffectReplaceShaderTexture__getTargetRenderers(
                              v2,
                              (UnityEngine_GameObject_o *)v46,
                              (int32_t)v110.fields.current,
                              (bool)current[5].klass,
                              BYTE1(current[5].klass),
                              v47);
          v50 = TargetRenderers;
          if ( TargetRenderers )
          {
            v51 = *(_QWORD *)&TargetRenderers->max_length;
            if ( (int)v51 >= 1 )
            {
              v52 = 0LL;
              v103 = v46;
              do
              {
                if ( v52 >= (unsigned int)v51 )
                {
                  v101 = sub_B70798(TargetRenderers);
                  sub_B70738(v101, 0LL);
                }
                v53 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)current[4].monitor;
                if ( !v53 )
                  sub_B7076C(0LL, v49);
                v104 = v52;
                v54 = (WarBoardManager_TaskList_o *)v50->m_Items[v52];
                TargetRenderers = (UnityEngine_Renderer_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                  v53,
                                                                  v54,
                                                                  (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                if ( ((unsigned __int8)TargetRenderers & 1) != 0 )
                  goto LABEL_115;
                TargetMaterials = BattleEffectReplaceShaderTexture__getTargetMaterials(
                                    (BattleEffectReplaceShaderTexture_o *)TargetRenderers,
                                    (UnityEngine_Renderer_o *)v54,
                                    targetShaderName,
                                    (bool)current[6].klass,
                                    v55);
                if ( !TargetMaterials )
                  sub_B7076C(0LL, v57);
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)v107,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TargetMaterials,
                  (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
                v109 = *(System_Collections_Generic_List_Enumerator_T__o *)v107;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v109,
                          (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
                {
                  v58 = v109.fields.current;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  v59 = UnityEngine_Object__op_Inequality(ActorTexture, 0LL, 0LL);
                  if ( v59 )
                  {
                    if ( !v58 )
                      sub_B7076C(v59, v60);
                    UnityEngine_Material__set_mainTexture(
                      (UnityEngine_Material_o *)v58,
                      (UnityEngine_Texture_o *)ActorTexture,
                      0LL);
                  }
                  if ( isChocoServant )
                  {
                    if ( !BYTE1(current[11].monitor) )
                      goto LABEL_63;
                    if ( !v58 )
                      sub_B7076C(v59, v60);
                    autoReplaceShaderNames = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v2->fields.autoReplaceShaderNames;
                    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v58,
                                                       0LL);
                    if ( !shader )
                      sub_B7076C(0LL, v63);
                    name = UnityEngine_Object__get_name(shader, 0LL);
                    if ( !autoReplaceShaderNames )
                      sub_B7076C(name, name);
                    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                           autoReplaceShaderNames,
                           (WarBoardManager_TaskList_o *)name,
                           (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
                    {
                      v65 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v58, 0LL);
                      if ( !v65 )
                        sub_B7076C(0LL, v66);
                      v67 = UnityEngine_Object__get_name(v65, 0LL);
                      v68 = System_String__Concat_44758168(v67, (System_String_o *)StringLiteral_16160/*"_Choco"*/, 0LL);
                      ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                     (BattleEffectReplaceShaderTexture_o *)v68,
                                                                     v68,
                                                                     shaderCaches,
                                                                     v69);
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
                      gameObject = UnityEngine_Component__get_gameObject(v105, 0LL);
                      if ( !gameObject )
                        sub_B7076C(0LL, v72);
                      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          gameObject,
                                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      v74 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
                      if ( v74 )
                      {
                        if ( !v58 )
                          sub_B7076C(v74, v75);
                        v76 = UnityEngine_Material__get_shader((UnityEngine_Material_o *)v58, 0LL);
                        if ( !Component_srcLineSprite )
                          sub_B7076C(v76, v76);
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleServantDeadComponent__getReplaceChocoShader(
                                                                       (BattleServantDeadComponent_o *)Component_srcLineSprite,
                                                                       v76,
                                                                       0LL,
                                                                       0LL);
                      }
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v77 = UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL);
                    if ( v77 )
                      ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                     (BattleEffectReplaceShaderTexture_o *)v77,
                                                                     (System_String_o *)StringLiteral_4599/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/,
                                                                     shaderCaches,
                                                                     v78);
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UIAtlas = (UIAtlas_o *)UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
                    if ( ((unsigned __int8)UIAtlas & 1) != 0 )
                    {
                      UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                                  (System_String_o *)StringLiteral_13008/*"Shaders/ChocoMap"*/,
                                  (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_Texture2D___);
                      v81 = (UnityEngine_Texture2D_o *)UIAtlas;
                    }
                    else
                    {
                      v81 = (UnityEngine_Texture2D_o *)v5;
                    }
                    v5 = (UnityEngine_Object_o *)v81;
                    BattleEffectReplaceShaderTexture__setupChocoShader(
                      (BattleEffectReplaceShaderTexture_o *)UIAtlas,
                      (UnityEngine_Material_o *)v58,
                      (UnityEngine_Shader_o *)ReplaceChocoShader,
                      v81,
                      v80);
                    BattleEffectReplaceShaderTexture__updateShaderValues(
                      v82,
                      (UnityEngine_Material_o *)v58,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[8].klass,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[8].monitor,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[9].klass,
                      v83);
                  }
                  if ( v17 )
                  {
                    if ( !v58 )
                      sub_B7076C(v59, v60);
                    v84 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v2->fields.autoReplaceShaderNames;
                    v85 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v58, 0LL);
                    if ( !v85 )
                      sub_B7076C(0LL, v86);
                    v87 = UnityEngine_Object__get_name(v85, 0LL);
                    if ( !v84 )
                      sub_B7076C(v87, v87);
                    if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                           v84,
                           (WarBoardManager_TaskList_o *)v87,
                           (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
                    {
                      v88 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v58, 0LL);
                      if ( !v88 )
                        sub_B7076C(0LL, v89);
                      v90 = UnityEngine_Object__get_name(v88, 0LL);
                      v91 = System_String__Concat_44758168(v90, (System_String_o *)StringLiteral_16291/*"_Shadow"*/, 0LL);
                      v93 = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                      (BattleEffectReplaceShaderTexture_o *)v91,
                                                      v91,
                                                      shaderCaches,
                                                      v92);
                    }
                    else
                    {
                      v93 = 0LL;
                    }
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    v94 = UnityEngine_Object__op_Equality(v93, 0LL, 0LL);
                    if ( v94 )
                      v93 = (UnityEngine_Object_o *)current[9].monitor;
                    BattleEffectReplaceShaderTexture__setupShadowShader(
                      (BattleEffectReplaceShaderTexture_o *)v94,
                      (UnityEngine_Material_o *)v58,
                      (UnityEngine_Shader_o *)v93,
                      v95);
                    BattleEffectReplaceShaderTexture__updateShaderValues(
                      v96,
                      (UnityEngine_Material_o *)v58,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[10].klass,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[10].monitor,
                      (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[11].klass,
                      v97);
                  }
                  replaceMaterials = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v2->fields.replaceMaterials;
                  if ( !replaceMaterials )
                    sub_B7076C(0LL, v60);
                  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                          replaceMaterials,
                          (WarBoardManager_TaskList_o *)v58,
                          (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_Material__Contains__) )
                  {
                    v100 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v2->fields.replaceMaterials;
                    if ( !v100 )
                      sub_B7076C(0LL, v99);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v100,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
                      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_Material__Add__);
                  }
                }
                *(_DWORD *)&v107[4 * v108++ + 24] = 864;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v109,
                  (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
                if ( !v108 )
                {
LABEL_115:
                  v46 = v103;
                }
                else
                {
                  v46 = v103;
                  if ( *(_DWORD *)&v107[4 * v108 + 20] == 864 )
                    --v108;
                }
                LODWORD(v51) = v50->max_length;
                v52 = v104 + 1;
              }
              while ( (__int64)(v104 + 1) < (int)v51 );
            }
          }
        }
        *(_DWORD *)&v107[4 * v108++ + 24] = 909;
        System_Collections_Generic_List_Enumerator_Voice_BATTLE___Dispose(
          &v110,
          (const MethodInfo_221F628 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
        if ( v108 && *(_DWORD *)&v107[4 * v108 + 20] == 909 )
          --v108;
      }
      *(_DWORD *)&v107[4 * v108++ + 24] = 937;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v111,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( v108 && *(_DWORD *)&v107[4 * v108 + 20] == 937 )
        --v108;
    }
    *(_DWORD *)&v107[4 * v108++ + 24] = 965;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v112,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v108 && *(_DWORD *)&v107[4 * v108 + 20] == 965 )
      --v108;
  }
  *(_DWORD *)&v107[4 * v108++ + 24] = 993;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v113,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
  if ( v108 && *(_DWORD *)&v107[4 * v108 + 20] == 993 )
    --v108;
}


BattleActorControl_o *__fastcall BattleEffectReplaceShaderTexture__GetModelBattleActor(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t servantId,
        bool isCheckUniqueId,
        const MethodInfo *method)
{
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v8; // x1
  int max_length; // w8
  System_Object_array *v10; // x22
  unsigned int v11; // w24
  Il2CppClass **v12; // x8
  BattleActorControl_o *v13; // x23
  __int64 v15; // x0

  if ( (byte_43505BA & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43505BA = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_1D585D8 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        v15 = sub_B70798(ObjectsOfType_object);
        sub_B70738(v15, 0LL);
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
    sub_B7076C(ObjectsOfType_object, v8);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  void *Instance; // x0
  const MethodInfo *v11; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x1
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x0
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x9
  __int64 v18; // x8
  unsigned __int64 v19; // x24
  bool v20; // w22
  UnityEngine_Object_o *ModelBattleActor; // x23
  __int64 v23; // x0

  if ( (byte_43505B9 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&Method_System_Collections_Generic_List_BattleActorControl__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleActorControl__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleActorControl___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleActorControl__TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_43505B9 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  if ( this->fields.isNPEffect )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !Instance )
      goto LABEL_46;
    v13 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 11);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (void *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_46;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)v13,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (void *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v9 )
        {
          v15 = v9;
          v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
LABEL_43:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            v12,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
          return (System_Collections_Generic_List_BattleActorControl__o *)v9;
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
    Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_1D585D8 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( !Instance )
      goto LABEL_46;
    v16 = *((unsigned int *)Instance + 6);
    if ( (__int64)(v16 << 32) >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= v16 )
          goto LABEL_45;
        v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)Instance + v17 + 4);
        if ( !v12 )
          goto LABEL_46;
        if ( v12[11].fields.missionTargetId == this->fields.targetId )
          break;
        if ( (__int64)++v17 >= (int)v16 )
          return (System_Collections_Generic_List_BattleActorControl__o *)v9;
      }
      if ( v9 )
      {
        v15 = v9;
        goto LABEL_43;
      }
LABEL_46:
      sub_B7076C(Instance, v12);
    }
  }
  else if ( servantIds )
  {
    v18 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      v20 = isCheckUniqueId;
      do
      {
        if ( v19 >= (unsigned int)v18 )
        {
LABEL_45:
          v23 = sub_B70798(Instance);
          sub_B70738(v23, 0LL);
        }
        ModelBattleActor = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__GetModelBattleActor(
                                                     this,
                                                     servantIds->m_Items[v19 + 1],
                                                     v20,
                                                     v11);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (void *)UnityEngine_Object__op_Inequality(ModelBattleActor, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_46;
          Instance = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                               (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v9,
                               (WarBoardManager_TaskList_o *)ModelBattleActor,
                               (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_BattleActorControl__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)ModelBattleActor,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
        }
        LODWORD(v18) = servantIds->max_length;
        ++v19;
      }
      while ( (__int64)v19 < (int)v18 );
    }
  }
  return (System_Collections_Generic_List_BattleActorControl__o *)v9;
}


void __fastcall BattleEffectReplaceShaderTexture__OnDestroy(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_Material__o *replaceMaterials; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43505B7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Material__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_Material__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43505B7 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  if ( this->fields.destroyReplaceShaderMaterials )
  {
    replaceMaterials = this->fields.replaceMaterials;
    if ( !replaceMaterials )
      goto LABEL_18;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v5,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceMaterials,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v5,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
    {
      current = v5.fields.current;
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
        UnityEngine_Object__DestroyImmediate_36067420((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v5,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
  }
  replaceMaterials = this->fields.replaceMaterials;
  if ( !replaceMaterials )
LABEL_18:
    sub_B7076C(replaceMaterials, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)replaceMaterials,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_Material__Clear__);
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

  if ( (byte_43505BC & 1) == 0 )
  {
    this = (BattleEffectReplaceShaderTexture_o *)sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____69251200);
    byte_43505BC = 1;
  }
  if ( !actor )
    goto LABEL_16;
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                 (UnityEngine_Component_o *)actor,
                                                 1,
                                                 (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____69251200);
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
      v12 = sub_B70798(this);
      sub_B70738(v12, 0LL);
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
      this = (BattleEffectReplaceShaderTexture_o *)System_String__IndexOf_44830516(
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
    sub_B7076C(this, actor);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)this, 0LL);
}


UnityEngine_Renderer_o *__fastcall BattleEffectReplaceShaderTexture__getRenderer(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        const MethodInfo *method)
{
  __int64 *v6; // x8
  UnityEngine_Renderer_o *result; // x0

  if ( (byte_43505BE & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B70694(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    byte_43505BE = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_15;
      v6 = &Method_UnityEngine_GameObject_GetComponent_Renderer___;
      goto LABEL_12;
    case 1:
      if ( !gameObject )
        goto LABEL_15;
      v6 = &Method_UnityEngine_GameObject_GetComponent_MeshRenderer___;
      goto LABEL_12;
    case 2:
      if ( !gameObject )
        goto LABEL_15;
      v6 = &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___;
      goto LABEL_12;
    case 3:
      if ( !gameObject )
LABEL_15:
        sub_B7076C(this, gameObject);
      v6 = &Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___;
LABEL_12:
      result = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           gameObject,
                                           (const MethodInfo_1D4AE28 *)*v6);
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
  __int64 *v8; // x8
  UnityEngine_Renderer_array *result; // x0

  if ( (byte_43505BF & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____69293096);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____69293120);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____69293128);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____69293144);
    byte_43505BF = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_15;
      v8 = &Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____69293128;
      goto LABEL_12;
    case 1:
      if ( !gameObject )
        goto LABEL_15;
      v8 = &Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____69293096;
      goto LABEL_12;
    case 2:
      if ( !gameObject )
        goto LABEL_15;
      v8 = &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____69293144;
      goto LABEL_12;
    case 3:
      if ( !gameObject )
LABEL_15:
        sub_B7076C(this, gameObject);
      v8 = &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____69293120;
LABEL_12:
      result = (UnityEngine_Renderer_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                               gameObject,
                                               includeInactive,
                                               (const MethodInfo_1D4B288 *)*v8);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  UnityEngine_Object_o *materials; // x0
  __int64 v10; // x1
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v12; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v14; // x23
  UnityEngine_Object_o *shader; // x24
  System_String_o *name; // x0
  __int64 v18; // x0

  if ( (byte_43505C0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Material__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_Material__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_B70694(&System_Collections_Generic_List_Material__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43505C0 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !renderer || (materials = (UnityEngine_Object_o *)UnityEngine_Renderer__get_materials(renderer, 0LL)) == 0LL )
LABEL_26:
    sub_B7076C(materials, v10);
  klass = materials[1].klass;
  v12 = materials;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
      {
        v18 = sub_B70798(materials);
        sub_B70738(v18, 0LL);
      }
      v14 = (UnityEngine_Object_o *)*((_QWORD *)&v12[1].monitor + i);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
        goto LABEL_30;
      if ( !v14 )
        goto LABEL_26;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v14, 0LL);
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
        if ( !v14 )
          goto LABEL_26;
        materials = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v14, 0LL);
        if ( !materials )
          goto LABEL_26;
        name = UnityEngine_Object__get_name(materials, 0LL);
        materials = (UnityEngine_Object_o *)System_String__op_Equality(name, targetShaderName, 0LL);
        if ( ((unsigned __int8)materials & 1) != 0 )
        {
LABEL_21:
          if ( !v8 )
            goto LABEL_26;
          materials = (UnityEngine_Object_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v8,
                                                (WarBoardManager_TaskList_o *)v14,
                                                (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_Material__Contains__);
          if ( ((unsigned __int8)materials & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_Material__Add__);
        }
      }
      LODWORD(klass) = v12[1].klass;
    }
  }
  return (System_Collections_Generic_List_Material__o *)v8;
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
  System_Int32_array **Renderer; // x19
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_43505BD & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B70694(&UnityEngine_Renderer___TypeInfo);
    byte_43505BD = 1;
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
  v12 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Renderer, 0LL, 0LL) )
  {
    v13 = sub_B706AC(UnityEngine_Renderer___TypeInfo, 1LL);
    if ( !v13 )
      sub_B7076C(0LL, v14);
    v12 = v13;
    if ( Renderer )
    {
      v13 = sub_B70754(Renderer, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
      if ( !v13 )
      {
        v22 = sub_B7078C();
        sub_B70738(v22, 0LL);
      }
    }
    if ( !*(_DWORD *)(v12 + 24) )
    {
      v21 = sub_B70798(v13);
      sub_B70738(v21, 0LL);
    }
    *(_QWORD *)(v12 + 32) = Renderer;
    sub_B70630((BattleServantConfConponent_o *)(v12 + 32), Renderer, v15, v16, v17, v18, v19, v20);
  }
  return (UnityEngine_Renderer_array *)v12;
}


UnityEngine_Shader_o *__fastcall BattleEffectReplaceShaderTexture__loadShader(
        BattleEffectReplaceShaderTexture_o *this,
        System_String_o *shaderName,
        System_Collections_Generic_Dictionary_string__Shader__o **shaderCaches,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__Shader__o *v6; // x0
  UnityEngine_Shader_o *result; // x0
  UnityEngine_Object_o *v8; // x21
  bool v9; // w8

  if ( (byte_43505BB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43505BB = 1;
  }
  v6 = *shaderCaches;
  if ( !*shaderCaches )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6,
         (System_Xml_XmlQualifiedName_o *)shaderName,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__) )
  {
    v6 = *shaderCaches;
    if ( *shaderCaches )
      return (UnityEngine_Shader_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                       (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6,
                                       (System_Type_o *)shaderName,
                                       (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
LABEL_14:
    sub_B7076C(v6, shaderName);
  }
  v8 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(shaderName, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  result = 0LL;
  if ( v9 )
  {
    v6 = *shaderCaches;
    if ( !*shaderCaches )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6,
      (System_Xml_XmlQualifiedName_o *)shaderName,
      (System_Xml_Schema_XmlSchemaObject_o *)v8,
      (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    return (UnityEngine_Shader_o *)v8;
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
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  __int64 v16; // x0
  __int64 v17; // x1
  MethodInfo v18; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43505C1 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_16178/*"_Color"*/);
    sub_B70694(&StringLiteral_16161/*"_ChocoTex"*/);
    sub_B70694(&StringLiteral_16329/*"_Use_alphawidth"*/);
    sub_B70694(&StringLiteral_16138/*"_AddColor"*/);
    byte_43505C1 = 1;
  }
  v18.methodPointer = 0LL;
  v18.invoker_method = 0LL;
  white = UnityEngine_Color__get_white(0LL);
  r = white.fields.r;
  g = white.fields.g;
  b = white.fields.b;
  a = white.fields.a;
  white.fields.r = 0.0;
  white.fields.g = 0.0;
  white.fields.b = 0.0;
  white.fields.a = 0.0;
  UnityEngine_Color___ctor(white, v12, v13, v14, v15, &v18);
  if ( !material )
    sub_B7076C(v16, v17);
  if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)StringLiteral_16178/*"_Color"*/, 0LL) )
  {
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16178/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, 0LL) )
  {
    v21 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, 0LL);
    v18.methodPointer = *(Il2CppMethodPointer *)&v21.fields.r;
    v18.invoker_method = *(void **)&v21.fields.b;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)chocoShader, 0LL, 0LL) )
    UnityEngine_Material__set_shader(material, chocoShader, 0LL);
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16178/*"_Color"*/, v22, 0LL);
  *(_QWORD *)&v23.fields.r = v18.methodPointer;
  *(_QWORD *)&v23.fields.b = v18.invoker_method;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, v23, 0LL);
  UnityEngine_Material__SetTexture(
    material,
    (System_String_o *)StringLiteral_16161/*"_ChocoTex"*/,
    (UnityEngine_Texture_o *)chocoTexture,
    0LL);
  if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)StringLiteral_16329/*"_Use_alphawidth"*/, 0LL) )
    UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16329/*"_Use_alphawidth"*/, 1.0, 0LL);
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
  _BOOL8 v10; // x0
  __int64 v11; // x1
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43505C2 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_16178/*"_Color"*/);
    byte_43505C2 = 1;
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
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)shadowShader, 0LL, 0LL);
  if ( !v10 )
  {
    if ( material )
      goto LABEL_10;
LABEL_11:
    sub_B7076C(v10, v11);
  }
  if ( !material )
    goto LABEL_11;
  UnityEngine_Material__set_shader(material, shadowShader, 0LL);
LABEL_10:
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16178/*"_Color"*/, v12, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__updateShaderValues(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *replaceShaderFloatValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *replaceShaderColorValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *replaceShaderTextureValues,
        const MethodInfo *method)
{
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x22
  int v16; // w21
  int v17; // w8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  int v21; // w21
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+0h] [xbp-B0h] BYREF
  int v23[3]; // [xsp+18h] [xbp-98h]
  int v24; // [xsp+24h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+60h] [xbp-50h] BYREF

  if ( (byte_43505C3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
    this = (BattleEffectReplaceShaderTexture_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
    byte_43505C3 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  memset(&v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  v24 = 0;
  if ( !replaceShaderFloatValues )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderFloatValues,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
  v27 = v22;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__);
    if ( !v10 )
      break;
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B7076C(v10, v11);
    if ( !material )
      sub_B7076C(v10, v11);
    if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)v27.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetFloat(material, (System_String_o *)current[1].klass, *(float *)&current[1].monitor, 0LL);
  }
  v23[0] = 74;
  v24 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
  v24 = 0;
  if ( !replaceShaderColorValues )
    goto LABEL_37;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderColorValues,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
  v26 = v22;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__);
    if ( !v13 )
      break;
    v15 = v26.fields.current;
    if ( !v26.fields.current )
      sub_B7076C(v13, v14);
    if ( !material )
      sub_B7076C(v13, v14);
    if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)v26.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)v15[1].klass,
        *(UnityEngine_Color_o *)&v15[1].monitor,
        0LL);
  }
  v23[0] = 148;
  v16 = ++v24;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v23[v16 - 1] == 148 )
    {
      --v16;
      v24 = v17;
    }
  }
  if ( !replaceShaderTextureValues )
LABEL_37:
    sub_B7076C(this, material);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)replaceShaderTextureValues,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__);
    if ( !v18 )
      break;
    v20 = v25.fields.current;
    if ( !v25.fields.current )
      sub_B7076C(v18, v19);
    if ( !material )
      sub_B7076C(v18, v19);
    if ( UnityEngine_Material__HasProperty_41121140(material, (System_String_o *)v25.fields.current[1].klass, 0LL) )
      UnityEngine_Material__SetTexture(
        material,
        (System_String_o *)v20[1].klass,
        (UnityEngine_Texture_o *)v20[1].monitor,
        0LL);
  }
  v23[v16] = 228;
  v21 = ++v24;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
  if ( v21 && v23[v21 - 1] == 228 )
    v24 = v21 - 1;
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

  if ( (byte_435138E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17133/*"body_level"*/);
    byte_435138E = 1;
  }
  this->fields.useUniqueId = 1;
  this->fields.isCheckUniqueId = 1;
  v9 = (System_Int32_array **)StringLiteral_17133/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17133/*"body_level"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.searchMeshWord, v9, v2, v3, v4, v5, v6, v7);
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