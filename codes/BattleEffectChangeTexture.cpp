void __fastcall BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array **v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F8CE4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_Renderer__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_16814/*"body_level"*/, v10);
    byte_40F8CE4 = 1;
  }
  LODWORD(this->fields.sourceServantIds) = -1;
  LOBYTE(this->fields.searchMeshWord) = 1;
  v11 = (System_Int32_array **)StringLiteral_16814/*"body_level"*/;
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)StringLiteral_16814/*"body_level"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.targetRendererList, v11, v2, v3, v4, v5, v6, v7);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Renderer__TypeInfo,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  *(_QWORD *)&this->fields.isCreateShadowAura = v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.isCreateShadowAura,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEffectChangeTexture__ChangeTexture(
        BattleEffectChangeTexture_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  BattleActorControl_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_40F8CE1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId);
    byte_40F8CE1 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v5 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
      BattleEffectChangeTexture__ChangeTexture_23023632(this, v5, v6);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_23023632(
        BattleEffectChangeTexture_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
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
  void *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int v19; // w8
  _DWORD *v20; // x22
  unsigned int v21; // w23
  char *v22; // x8
  UnityEngine_Object_o *v23; // x21
  System_String_o *name; // x0
  __int64 v25; // x22
  __int64 v26; // x24
  int v27; // w8
  UnityEngine_Renderer_o *v28; // x0
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v30; // x22
  UnityEngine_Material_o *v31; // x0
  UnityEngine_Texture_o *mainTexture; // x0
  ServantAssetLoadManager_o *Instance; // x0
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Transform_o *v38; // x21
  __int64 v39; // x21
  unsigned __int64 v40; // x22
  UnityEngine_Renderer_o *v41; // x0
  __int64 v42; // x10
  UnityEngine_Material_o *v43; // x21
  float v44; // s4
  float v45; // s5
  float v46; // s6
  float v47; // s7
  UnityEngine_Shader_o *v48; // x20
  UIAtlas_o *UIAtlas; // x0
  __int64 v50; // x22
  UnityEngine_Texture_o *v51; // x21
  unsigned __int64 v52; // x24
  UnityEngine_Renderer_o *v53; // x22
  __int64 v54; // x10
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v59; // s4
  float v60; // s5
  float v61; // s6
  float v62; // s7
  __int64 v63; // x9
  int v64; // w8
  _DWORD *v65; // x22
  unsigned int v66; // w25
  char *v67; // x8
  UnityEngine_Material_o *v68; // x23
  BattleEffectChangeTexture_o *v69; // x0
  int32_t v70; // w1
  const MethodInfo *v71; // x2
  UnityEngine_Color_o v72; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8CE2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____66819888, actor);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__get_Item__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v9);
    sub_B16FFC(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v11);
    sub_B16FFC(&StringLiteral_15875/*"_ChocoTex"*/, v12);
    sub_B16FFC(&StringLiteral_4499/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v13);
    sub_B16FFC(&StringLiteral_12773/*"Shaders/ChocoMap"*/, v14);
    sub_B16FFC(&StringLiteral_15853/*"_AddColor"*/, v15);
    byte_40F8CE2 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( !actor )
    goto LABEL_71;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)actor,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____66819888);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_71;
  v19 = *((_DWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 6);
  v20 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= v19 )
        goto LABEL_73;
      v22 = (char *)&v20[2 * v21];
      v23 = (UnityEngine_Object_o *)*((_QWORD *)v22 + 4);
      if ( !v23 )
        break;
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)UnityEngine_Renderer__get_enabled(
                                                                          *((UnityEngine_Renderer_o **)v22 + 4),
                                                                          0LL);
      if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
      {
        name = UnityEngine_Object__get_name(v23, 0LL);
        if ( !name )
          break;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)System_String__IndexOf_43816080(
                                                                            name,
                                                                            (System_String_o *)this->fields.targetRendererList,
                                                                            0LL);
        if ( ((unsigned int)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 0x80000000) == 0 )
          goto LABEL_14;
      }
      v19 = v20[6];
      if ( (int)++v21 >= v19 )
        goto LABEL_13;
    }
LABEL_71:
    sub_B170D4();
  }
LABEL_13:
  v23 = 0LL;
LABEL_14:
  if ( *(_QWORD *)&this->fields.isCreateShadowAura )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      v25 = *(_QWORD *)&this->fields.isCreateShadowAura;
      if ( !v25 )
        goto LABEL_71;
      v26 = 0LL;
      while ( 1 )
      {
        v27 = *(_DWORD *)(v25 + 24);
        if ( (int)v26 >= v27 )
          break;
        if ( v27 <= (unsigned int)v26 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v28 = *(UnityEngine_Renderer_o **)(*(_QWORD *)(v25 + 16) + 8 * v26 + 32);
        if ( v28 )
        {
          material = UnityEngine_Renderer__get_material(v28, 0LL);
          if ( v23 )
          {
            v30 = material;
            v31 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v23, 0LL);
            if ( v31 )
            {
              mainTexture = UnityEngine_Material__get_mainTexture(v31, 0LL);
              if ( v30 )
              {
                UnityEngine_Material__set_mainTexture(v30, mainTexture, 0LL);
                v25 = *(_QWORD *)&this->fields.isCreateShadowAura;
                ++v26;
                if ( v25 )
                  continue;
              }
            }
          }
        }
        goto LABEL_71;
      }
      if ( BattleActorControl__isShadowServant(actor, 0LL) )
      {
        if ( LOBYTE(this->fields.shadowAuraNodeName) )
        {
          Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !Instance )
            goto LABEL_71;
          ShadowEffect = ServantAssetLoadManager__createShadowEffect(Instance, 0, 0LL);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0LL);
          NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                   transform,
                                                   *(System_String_o **)&this->fields.targetId,
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
            goto LABEL_71;
          v37 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
          if ( !v37 )
            goto LABEL_71;
          v38 = v37;
          UnityEngine_Transform__SetParent(v37, (UnityEngine_Transform_o *)NodeFromName, 0LL);
          v74.fields.x = 0.0;
          v74.fields.y = 0.0;
          v74.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v38, v74, 0LL);
          one = UnityEngine_Vector3__get_one(0LL);
          UnityEngine_Transform__set_localScale(v38, one, 0LL);
        }
        v39 = *(_QWORD *)&this->fields.isCreateShadowAura;
        if ( !v39 )
          goto LABEL_71;
        v40 = 0LL;
        while ( (__int64)v40 < *(int *)(v39 + 24) )
        {
          if ( v40 >= *(unsigned int *)(v39 + 24) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v41 = *(UnityEngine_Renderer_o **)(*(_QWORD *)(v39 + 16) + 8 * v40 + 32);
          if ( v41 )
          {
            v42 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v41->klass->_2.bitflags2 + 1) >= (unsigned int)v42
              && (UnityEngine_SkinnedMeshRenderer_c *)v41->klass->_2.typeHierarchy[v42 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              v43 = UnityEngine_Renderer__get_material(v41, 0LL);
              v76.fields.r = 0.05;
              v76.fields.g = 0.05;
              v76.fields.b = 0.05;
              v76.fields.a = 1.0;
              *(_QWORD *)&v72.fields.r = 0LL;
              *(_QWORD *)&v72.fields.b = 0LL;
              UnityEngine_Color___ctor(v76, v44, v45, v46, v47, (const MethodInfo *)&v72);
              if ( !v43 )
                goto LABEL_71;
              UnityEngine_Material__set_color(v43, v72, 0LL);
            }
          }
          v39 = *(_QWORD *)&this->fields.isCreateShadowAura;
          ++v40;
          if ( !v39 )
            goto LABEL_71;
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v48 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4499/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                    (System_String_o *)StringLiteral_12773/*"Shaders/ChocoMap"*/,
                    (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
        v50 = *(_QWORD *)&this->fields.isCreateShadowAura;
        if ( v50 )
        {
          v51 = (UnityEngine_Texture_o *)UIAtlas;
          v52 = 0LL;
          while ( 1 )
          {
            if ( (__int64)v52 >= *(int *)(v50 + 24) )
              return;
            if ( v52 >= *(unsigned int *)(v50 + 24) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v53 = *(UnityEngine_Renderer_o **)(*(_QWORD *)(v50 + 16) + 8 * v52 + 32);
            if ( v53 )
            {
              v54 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v53->klass->_2.bitflags2 + 1) >= (unsigned int)v54
                && (UnityEngine_SkinnedMeshRenderer_c *)v53->klass->_2.typeHierarchy[v54 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                white = UnityEngine_Color__get_white(0LL);
                r = white.fields.r;
                g = white.fields.g;
                b = white.fields.b;
                a = white.fields.a;
                white.fields.r = 0.0;
                white.fields.g = 0.0;
                white.fields.b = 0.0;
                white.fields.a = 0.0;
                UnityEngine_Color___ctor(white, v59, v60, v61, v62, &methoda);
                v63 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
                if ( *(&v53->klass->_2.bitflags2 + 1) < (unsigned int)v63
                  || (UnityEngine_SkinnedMeshRenderer_c *)v53->klass->_2.typeHierarchy[v63 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
                {
                  v69 = (BattleEffectChangeTexture_o *)sub_B173C8(v53);
                  BattleEffectChangeTexture__ChangeTexture(v69, v70, v71);
                  return;
                }
                ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Renderer__get_materials(v53, 0LL);
                if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
                  goto LABEL_71;
                v64 = *((_DWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 6);
                v65 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
                if ( v64 >= 1 )
                {
                  v66 = 0;
                  while ( v66 < v64 )
                  {
                    v67 = (char *)&v65[2 * v66];
                    v68 = (UnityEngine_Material_o *)*((_QWORD *)v67 + 4);
                    if ( !v68 )
                      goto LABEL_71;
                    UnityEngine_Material__set_shader(*((UnityEngine_Material_o **)v67 + 4), v48, 0LL);
                    v78.fields.r = r;
                    v78.fields.g = g;
                    v78.fields.b = b;
                    v78.fields.a = a;
                    UnityEngine_Material__SetColor(v68, (System_String_o *)StringLiteral_15891/*"_Color"*/, v78, 0LL);
                    *(_QWORD *)&v79.fields.r = methoda.methodPointer;
                    *(_QWORD *)&v79.fields.b = methoda.invoker_method;
                    UnityEngine_Material__SetColor(v68, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, v79, 0LL);
                    UnityEngine_Material__SetTexture(v68, (System_String_o *)StringLiteral_15875/*"_ChocoTex"*/, v51, 0LL);
                    v64 = v65[6];
                    if ( (int)++v66 >= v64 )
                      goto LABEL_70;
                  }
LABEL_73:
                  sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v17, v18);
                  sub_B170A0();
                }
              }
            }
LABEL_70:
            v50 = *(_QWORD *)&this->fields.isCreateShadowAura;
            ++v52;
            if ( !v50 )
              goto LABEL_71;
          }
        }
        goto LABEL_71;
      }
    }
  }
}


void __fastcall BattleEffectChangeTexture__Execute(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  WebViewManager_o *Instance; // x0
  UnityEngine_GameObject_o *webView; // x0
  BattleActorControl_o *Component_srcLineSprite; // x20
  const MethodInfo *v11; // x2
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x20
  __int64 v16; // x8
  unsigned __int64 v17; // x21

  if ( (byte_40F8CE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    byte_40F8CE0 = 1;
  }
  v7 = *(_QWORD *)&this->fields.isCreateShadowAura;
  if ( v7 && *(int *)(v7 + 24) >= 1 )
  {
    if ( BYTE1(this->fields.searchMeshWord) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (webView = (UnityEngine_GameObject_o *)Instance->fields.webView) == 0LL )
        sub_B170D4();
      Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          webView,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_23023632(this, Component_srcLineSprite, v11);
    }
    else
    {
      BattleEffectChangeTexture__ChangeTexture(this, (int32_t)this->fields.sourceServantIds, v2);
      v15 = *(_QWORD *)&this->fields.isCheckUniqueId;
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 24);
        if ( (int)v16 >= 1 )
        {
          v17 = 0LL;
          do
          {
            if ( v17 >= (unsigned int)v16 )
            {
              sub_B17100(v12, v13, v14);
              sub_B170A0();
            }
            BattleEffectChangeTexture__ChangeTexture(this, *(_DWORD *)(v15 + 32 + 4 * v17), v14);
            LODWORD(v16) = *(_DWORD *)(v15 + 24);
            ++v17;
          }
          while ( (__int64)v17 < (int)v16 );
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
BattleActorControl_o *__fastcall BattleEffectChangeTexture__GetModelBattleActor(
        BattleEffectChangeTexture_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  System_Object_array *v10; // x21
  unsigned int v11; // w23
  Il2CppClass **v12; // x8
  BattleActorControl_o *v13; // x22

  if ( (byte_40F8CE3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F8CE3 = 1;
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
  v10 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        sub_B17100(ObjectsOfType_object, v7, v8);
        sub_B170A0();
      }
      v12 = &v10->obj.klass + (int)v11;
      v13 = (BattleActorControl_o *)v12[4];
      if ( !v13 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v12[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!LOBYTE(this->fields.searchMeshWord) || v13->fields.uniqueID == LODWORD(this[1].klass)) )
      {
        return v13;
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_B170D4();
  }
  return 0LL;
}


void __fastcall BattleEffectChangeTexture__SetTargetId(
        BattleEffectChangeTexture_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  LODWORD(this[1].klass) = uniqueId;
}


void __fastcall BattleEffectChangeTexture__Start(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  if ( BYTE1(this->fields.searchMeshWord) )
    BattleEffectChangeTexture__Execute(this, method);
}