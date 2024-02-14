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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42134DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_Renderer__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_16930/*"body_level"*/, v10);
    byte_42134DE = 1;
  }
  LODWORD(this->fields.sourceServantIds) = -1;
  LOBYTE(this->fields.searchMeshWord) = 1;
  v11 = (System_Int32_array **)StringLiteral_16930/*"body_level"*/;
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)StringLiteral_16930/*"body_level"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.targetRendererList, v11, v2, v3, v4, v5, v6, v7);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Renderer__TypeInfo,
                                                                                                  v12,
                                                                                                  v13);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  *(_QWORD *)&this->fields.isCreateShadowAura = v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isCreateShadowAura,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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

  if ( (byte_42134DB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId);
    byte_42134DB = 1;
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
      BattleEffectChangeTexture__ChangeTexture_22179432(this, v5, v6);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_22179432(
        BattleEffectChangeTexture_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  BattleEffectChangeTexture_o *v4; // x19
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
  int sourceServantIds; // w8
  BattleEffectChangeTexture_o *v17; // x22
  unsigned int v18; // w23
  BattleEffectChangeTexture_c **v19; // x8
  UnityEngine_Object_o *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x24
  int v23; // w8
  UnityEngine_Material_o *v24; // x22
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v28; // x21
  __int64 v29; // x21
  unsigned __int64 v30; // x22
  __int64 v31; // x10
  UnityEngine_Material_o *material; // x21
  float v33; // s4
  float v34; // s5
  float v35; // s6
  float v36; // s7
  UnityEngine_Shader_o *v37; // x20
  __int64 v38; // x22
  UnityEngine_Texture_o *v39; // x21
  unsigned __int64 v40; // x24
  UnityEngine_Renderer_o *v41; // x22
  __int64 v42; // x10
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v47; // s4
  float v48; // s5
  float v49; // s6
  float v50; // s7
  __int64 v51; // x9
  int v52; // w8
  BattleEffectChangeTexture_o *v53; // x22
  unsigned int v54; // w25
  BattleEffectChangeTexture_c **v55; // x8
  UnityEngine_Material_o *v56; // x23
  __int64 v57; // x0
  BattleEffectChangeTexture_o *v58; // x0
  int32_t v59; // w1
  const MethodInfo *v60; // x2
  UnityEngine_Color_o v61; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42134DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____67969328, actor);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__get_Item__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_Texture2D___, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v9);
    sub_B0D8A4(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_16002/*"_Color"*/, v11);
    sub_B0D8A4(&StringLiteral_15986/*"_ChocoTex"*/, v12);
    sub_B0D8A4(&StringLiteral_4532/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v13);
    sub_B0D8A4(&StringLiteral_12873/*"Shaders/ChocoMap"*/, v14);
    this = (BattleEffectChangeTexture_o *)sub_B0D8A4(&StringLiteral_15963/*"_AddColor"*/, v15);
    byte_42134DC = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( !actor )
    goto LABEL_71;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____67969328);
  if ( !this )
    goto LABEL_71;
  sourceServantIds = (int)this->fields.sourceServantIds;
  v17 = this;
  if ( sourceServantIds >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= sourceServantIds )
        goto LABEL_73;
      v19 = &v17->klass + (int)v18;
      v20 = (UnityEngine_Object_o *)v19[4];
      if ( !v20 )
        break;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v19[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v20, 0LL);
        if ( !this )
          break;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_43922252(
                                                (System_String_o *)this,
                                                (System_String_o *)v4->fields.targetRendererList,
                                                0LL);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      sourceServantIds = (int)v17->fields.sourceServantIds;
      if ( (int)++v18 >= sourceServantIds )
        goto LABEL_13;
    }
LABEL_71:
    sub_B0D97C(this);
  }
LABEL_13:
  v20 = 0LL;
LABEL_14:
  if ( *(_QWORD *)&v4->fields.isCreateShadowAura )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleEffectChangeTexture_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v21 = *(_QWORD *)&v4->fields.isCreateShadowAura;
      if ( !v21 )
        goto LABEL_71;
      v22 = 0LL;
      while ( 1 )
      {
        v23 = *(_DWORD *)(v21 + 24);
        if ( (int)v22 >= v23 )
          break;
        if ( v23 <= (unsigned int)v22 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        this = *(BattleEffectChangeTexture_o **)(*(_QWORD *)(v21 + 16) + 8 * v22 + 32);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          if ( v20 )
          {
            v24 = (UnityEngine_Material_o *)this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v20, 0LL);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0LL);
              if ( v24 )
              {
                UnityEngine_Material__set_mainTexture(v24, (UnityEngine_Texture_o *)this, 0LL);
                v21 = *(_QWORD *)&v4->fields.isCreateShadowAura;
                ++v22;
                if ( v21 )
                  continue;
              }
            }
          }
        }
        goto LABEL_71;
      }
      this = (BattleEffectChangeTexture_o *)BattleActorControl__isShadowServant(actor, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( LOBYTE(v4->fields.shadowAuraNodeName) )
        {
          this = (BattleEffectChangeTexture_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !this )
            goto LABEL_71;
          ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)this, 0, 0LL);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0LL);
          NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                   transform,
                                                   *(System_String_o **)&v4->fields.targetId,
                                                   0,
                                                   0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (BattleEffectChangeTexture_o *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleEffectChangeTexture_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)v4,
                                                    0LL);
            NodeFromName = (UnityEngine_Object_o *)this;
          }
          if ( !ShadowEffect )
            goto LABEL_71;
          this = (BattleEffectChangeTexture_o *)UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
          if ( !this )
            goto LABEL_71;
          v28 = (UnityEngine_Transform_o *)this;
          UnityEngine_Transform__SetParent(
            (UnityEngine_Transform_o *)this,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v63.fields.x = 0.0;
          v63.fields.y = 0.0;
          v63.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v28, v63, 0LL);
          one = UnityEngine_Vector3__get_one(0LL);
          UnityEngine_Transform__set_localScale(v28, one, 0LL);
        }
        v29 = *(_QWORD *)&v4->fields.isCreateShadowAura;
        if ( !v29 )
          goto LABEL_71;
        v30 = 0LL;
        while ( (__int64)v30 < *(int *)(v29 + 24) )
        {
          if ( v30 >= *(unsigned int *)(v29 + 24) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          this = *(BattleEffectChangeTexture_o **)(*(_QWORD *)(v29 + 16) + 8 * v30 + 32);
          if ( this )
          {
            v31 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
            if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v31
              && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v31 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
              v65.fields.r = 0.05;
              v65.fields.g = 0.05;
              v65.fields.b = 0.05;
              v65.fields.a = 1.0;
              *(_QWORD *)&v61.fields.r = 0LL;
              *(_QWORD *)&v61.fields.b = 0LL;
              UnityEngine_Color___ctor(v65, v33, v34, v35, v36, (const MethodInfo *)&v61);
              if ( !material )
                goto LABEL_71;
              UnityEngine_Material__set_color(material, v61, 0LL);
            }
          }
          v29 = *(_QWORD *)&v4->fields.isCreateShadowAura;
          ++v30;
          if ( !v29 )
            goto LABEL_71;
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v37 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4532/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                (System_String_o *)StringLiteral_12873/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_Texture2D___);
        v38 = *(_QWORD *)&v4->fields.isCreateShadowAura;
        if ( v38 )
        {
          v39 = (UnityEngine_Texture_o *)this;
          v40 = 0LL;
          while ( 1 )
          {
            if ( (__int64)v40 >= *(int *)(v38 + 24) )
              return;
            if ( v40 >= *(unsigned int *)(v38 + 24) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v41 = *(UnityEngine_Renderer_o **)(*(_QWORD *)(v38 + 16) + 8 * v40 + 32);
            if ( v41 )
            {
              v42 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v41->klass->_2.bitflags2 + 1) >= (unsigned int)v42
                && (UnityEngine_SkinnedMeshRenderer_c *)v41->klass->_2.typeHierarchy[v42 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
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
                UnityEngine_Color___ctor(white, v47, v48, v49, v50, &methoda);
                v51 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
                if ( *(&v41->klass->_2.bitflags2 + 1) < (unsigned int)v51
                  || (UnityEngine_SkinnedMeshRenderer_c *)v41->klass->_2.typeHierarchy[v51 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
                {
                  v58 = (BattleEffectChangeTexture_o *)sub_B0DC70(v41);
                  BattleEffectChangeTexture__ChangeTexture(v58, v59, v60);
                  return;
                }
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(v41, 0LL);
                if ( !this )
                  goto LABEL_71;
                v52 = (int)this->fields.sourceServantIds;
                v53 = this;
                if ( v52 >= 1 )
                {
                  v54 = 0;
                  while ( v54 < v52 )
                  {
                    v55 = &v53->klass + (int)v54;
                    v56 = (UnityEngine_Material_o *)v55[4];
                    if ( !v56 )
                      goto LABEL_71;
                    UnityEngine_Material__set_shader((UnityEngine_Material_o *)v55[4], v37, 0LL);
                    v67.fields.r = r;
                    v67.fields.g = g;
                    v67.fields.b = b;
                    v67.fields.a = a;
                    UnityEngine_Material__SetColor(v56, (System_String_o *)StringLiteral_16002/*"_Color"*/, v67, 0LL);
                    *(_QWORD *)&v68.fields.r = methoda.methodPointer;
                    *(_QWORD *)&v68.fields.b = methoda.invoker_method;
                    UnityEngine_Material__SetColor(v56, (System_String_o *)StringLiteral_15963/*"_AddColor"*/, v68, 0LL);
                    UnityEngine_Material__SetTexture(v56, (System_String_o *)StringLiteral_15986/*"_ChocoTex"*/, v39, 0LL);
                    v52 = (int)v53->fields.sourceServantIds;
                    if ( (int)++v54 >= v52 )
                      goto LABEL_70;
                  }
LABEL_73:
                  v57 = sub_B0D9A8(this);
                  sub_B0D948(v57, 0LL);
                }
              }
            }
LABEL_70:
            v38 = *(_QWORD *)&v4->fields.isCreateShadowAura;
            ++v40;
            if ( !v38 )
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
  BattleActorControl_o *Component_srcLineSprite; // x20
  const MethodInfo *v10; // x2
  __int64 v11; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x20
  __int64 v14; // x8
  unsigned __int64 v15; // x21
  __int64 v16; // x0

  if ( (byte_42134DA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    byte_42134DA = 1;
  }
  v7 = *(_QWORD *)&this->fields.isCreateShadowAura;
  if ( v7 && *(int *)(v7 + 24) >= 1 )
  {
    if ( BYTE1(this->fields.searchMeshWord) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (WebViewManager_o *)Instance->fields.webView) == 0LL )
        sub_B0D97C(Instance);
      Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_22179432(this, Component_srcLineSprite, v10);
    }
    else
    {
      BattleEffectChangeTexture__ChangeTexture(this, (int32_t)this->fields.sourceServantIds, v2);
      v13 = *(_QWORD *)&this->fields.isCheckUniqueId;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 24);
        if ( (int)v14 >= 1 )
        {
          v15 = 0LL;
          do
          {
            if ( v15 >= (unsigned int)v14 )
            {
              v16 = sub_B0D9A8(v11);
              sub_B0D948(v16, 0LL);
            }
            BattleEffectChangeTexture__ChangeTexture(this, *(_DWORD *)(v13 + 32 + 4 * v15), v12);
            LODWORD(v14) = *(_DWORD *)(v13 + 24);
            ++v15;
          }
          while ( (__int64)v15 < (int)v14 );
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
  int max_length; // w8
  System_Object_array *v8; // x21
  unsigned int v9; // w23
  Il2CppClass **v10; // x8
  BattleActorControl_o *v11; // x22
  __int64 v13; // x0

  if ( (byte_42134DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42134DD = 1;
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
  v8 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v13 = sub_B0D9A8(ObjectsOfType_object);
        sub_B0D948(v13, 0LL);
      }
      v10 = &v8->obj.klass + (int)v9;
      v11 = (BattleActorControl_o *)v10[4];
      if ( !v11 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v10[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!LOBYTE(this->fields.searchMeshWord) || v11->fields.uniqueID == LODWORD(this[1].klass)) )
      {
        return v11;
      }
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_B0D97C(ObjectsOfType_object);
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