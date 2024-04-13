void __fastcall BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array **v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42E7839 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_Renderer__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17087/*"body_level"*/, v12, v13, v14);
    byte_42E7839 = 1;
  }
  LODWORD(this->fields.sourceServantIds) = -1;
  LOBYTE(this->fields.searchMeshWord) = 1;
  v15 = (System_Int32_array **)StringLiteral_17087/*"body_level"*/;
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)StringLiteral_17087/*"body_level"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.targetRendererList, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Renderer___ctor__);
  *(_QWORD *)&this->fields.isCreateShadowAura = v16;
  sub_B5D560(
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


void __fastcall BattleEffectChangeTexture__ChangeTexture(
        BattleEffectChangeTexture_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_42E7836 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, servantId, (_DWORD)method, v3);
    byte_42E7836 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v6 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
      BattleEffectChangeTexture__ChangeTexture_23289344(this, v6, v7);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_23289344(
        BattleEffectChangeTexture_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleEffectChangeTexture_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int sourceServantIds; // w8
  BattleEffectChangeTexture_o *v40; // x22
  unsigned int v41; // w23
  BattleEffectChangeTexture_c **v42; // x8
  UnityEngine_Object_o *v43; // x21
  __int64 v44; // x22
  __int64 v45; // x24
  int v46; // w8
  UnityEngine_Material_o *v47; // x22
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v51; // x21
  __int64 v52; // x21
  unsigned __int64 v53; // x22
  __int64 v54; // x10
  UnityEngine_Material_o *material; // x21
  float v56; // s4
  float v57; // s5
  float v58; // s6
  float v59; // s7
  UnityEngine_Shader_o *v60; // x20
  __int64 v61; // x22
  UnityEngine_Texture_o *v62; // x21
  unsigned __int64 v63; // x24
  UnityEngine_Renderer_o *v64; // x22
  __int64 v65; // x10
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v70; // s4
  float v71; // s5
  float v72; // s6
  float v73; // s7
  __int64 v74; // x9
  int v75; // w8
  BattleEffectChangeTexture_o *v76; // x22
  unsigned int v77; // w25
  BattleEffectChangeTexture_c **v78; // x8
  UnityEngine_Material_o *v79; // x23
  __int64 v80; // x0
  BattleEffectChangeTexture_o *v81; // x0
  int32_t v82; // w1
  const MethodInfo *v83; // x2
  UnityEngine_Color_o v84; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = this;
  if ( (byte_42E7837 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____68825800,
      (_DWORD)actor,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__get_Item__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_4588/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v33, v34, v35);
    this = (BattleEffectChangeTexture_o *)sub_B5D5C4(&StringLiteral_16107/*"_AddColor"*/, v36, v37, v38);
    byte_42E7837 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( !actor )
    goto LABEL_71;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____68825800);
  if ( !this )
    goto LABEL_71;
  sourceServantIds = (int)this->fields.sourceServantIds;
  v40 = this;
  if ( sourceServantIds >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      if ( v41 >= sourceServantIds )
        goto LABEL_73;
      v42 = &v40->klass + (int)v41;
      v43 = (UnityEngine_Object_o *)v42[4];
      if ( !v43 )
        break;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v42[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v43, 0LL);
        if ( !this )
          break;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_44650136(
                                                (System_String_o *)this,
                                                (System_String_o *)v5->fields.targetRendererList,
                                                0LL);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      sourceServantIds = (int)v40->fields.sourceServantIds;
      if ( (int)++v41 >= sourceServantIds )
        goto LABEL_13;
    }
LABEL_71:
    sub_B5D69C(this, actor);
  }
LABEL_13:
  v43 = 0LL;
LABEL_14:
  if ( *(_QWORD *)&v5->fields.isCreateShadowAura )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleEffectChangeTexture_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v44 = *(_QWORD *)&v5->fields.isCreateShadowAura;
      if ( !v44 )
        goto LABEL_71;
      v45 = 0LL;
      while ( 1 )
      {
        v46 = *(_DWORD *)(v44 + 24);
        if ( (int)v45 >= v46 )
          break;
        if ( v46 <= (unsigned int)v45 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = *(BattleEffectChangeTexture_o **)(*(_QWORD *)(v44 + 16) + 8 * v45 + 32);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          if ( v43 )
          {
            v47 = (UnityEngine_Material_o *)this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v43, 0LL);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0LL);
              if ( v47 )
              {
                UnityEngine_Material__set_mainTexture(v47, (UnityEngine_Texture_o *)this, 0LL);
                v44 = *(_QWORD *)&v5->fields.isCreateShadowAura;
                ++v45;
                if ( v44 )
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
        if ( LOBYTE(v5->fields.shadowAuraNodeName) )
        {
          this = (BattleEffectChangeTexture_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !this )
            goto LABEL_71;
          ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)this, 0, 0LL);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0LL);
          NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                   transform,
                                                   *(System_String_o **)&v5->fields.targetId,
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
                                                    (UnityEngine_Component_o *)v5,
                                                    0LL);
            NodeFromName = (UnityEngine_Object_o *)this;
          }
          if ( !ShadowEffect )
            goto LABEL_71;
          this = (BattleEffectChangeTexture_o *)UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
          if ( !this )
            goto LABEL_71;
          v51 = (UnityEngine_Transform_o *)this;
          UnityEngine_Transform__SetParent(
            (UnityEngine_Transform_o *)this,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v86.fields.x = 0.0;
          v86.fields.y = 0.0;
          v86.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v51, v86, 0LL);
          one = UnityEngine_Vector3__get_one(0LL);
          UnityEngine_Transform__set_localScale(v51, one, 0LL);
        }
        v52 = *(_QWORD *)&v5->fields.isCreateShadowAura;
        if ( !v52 )
          goto LABEL_71;
        v53 = 0LL;
        while ( (__int64)v53 < *(int *)(v52 + 24) )
        {
          if ( v53 >= *(unsigned int *)(v52 + 24) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          this = *(BattleEffectChangeTexture_o **)(*(_QWORD *)(v52 + 16) + 8 * v53 + 32);
          if ( this )
          {
            v54 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
            if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v54
              && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v54 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
              v88.fields.r = 0.05;
              v88.fields.g = 0.05;
              v88.fields.b = 0.05;
              v88.fields.a = 1.0;
              *(_QWORD *)&v84.fields.r = 0LL;
              *(_QWORD *)&v84.fields.b = 0LL;
              UnityEngine_Color___ctor(v88, v56, v57, v58, v59, (const MethodInfo *)&v84);
              if ( !material )
                goto LABEL_71;
              UnityEngine_Material__set_color(material, v84, 0LL);
            }
          }
          v52 = *(_QWORD *)&v5->fields.isCreateShadowAura;
          ++v53;
          if ( !v52 )
            goto LABEL_71;
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v60 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4588/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
        v61 = *(_QWORD *)&v5->fields.isCreateShadowAura;
        if ( v61 )
        {
          v62 = (UnityEngine_Texture_o *)this;
          v63 = 0LL;
          while ( 1 )
          {
            if ( (__int64)v63 >= *(int *)(v61 + 24) )
              return;
            if ( v63 >= *(unsigned int *)(v61 + 24) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v64 = *(UnityEngine_Renderer_o **)(*(_QWORD *)(v61 + 16) + 8 * v63 + 32);
            if ( v64 )
            {
              v65 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v64->klass->_2.bitflags2 + 1) >= (unsigned int)v65
                && (UnityEngine_SkinnedMeshRenderer_c *)v64->klass->_2.typeHierarchy[v65 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
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
                UnityEngine_Color___ctor(white, v70, v71, v72, v73, &methoda);
                v74 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
                if ( *(&v64->klass->_2.bitflags2 + 1) < (unsigned int)v74
                  || (UnityEngine_SkinnedMeshRenderer_c *)v64->klass->_2.typeHierarchy[v74 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
                {
                  v81 = (BattleEffectChangeTexture_o *)sub_B5D990(v64);
                  BattleEffectChangeTexture__ChangeTexture(v81, v82, v83);
                  return;
                }
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(v64, 0LL);
                if ( !this )
                  goto LABEL_71;
                v75 = (int)this->fields.sourceServantIds;
                v76 = this;
                if ( v75 >= 1 )
                {
                  v77 = 0;
                  while ( v77 < v75 )
                  {
                    v78 = &v76->klass + (int)v77;
                    v79 = (UnityEngine_Material_o *)v78[4];
                    if ( !v79 )
                      goto LABEL_71;
                    UnityEngine_Material__set_shader((UnityEngine_Material_o *)v78[4], v60, 0LL);
                    v90.fields.r = r;
                    v90.fields.g = g;
                    v90.fields.b = b;
                    v90.fields.a = a;
                    UnityEngine_Material__SetColor(v79, (System_String_o *)StringLiteral_16146/*"_Color"*/, v90, 0LL);
                    *(_QWORD *)&v91.fields.r = methoda.methodPointer;
                    *(_QWORD *)&v91.fields.b = methoda.invoker_method;
                    UnityEngine_Material__SetColor(v79, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, v91, 0LL);
                    UnityEngine_Material__SetTexture(v79, (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/, v62, 0LL);
                    v75 = (int)v76->fields.sourceServantIds;
                    if ( (int)++v77 >= v75 )
                      goto LABEL_70;
                  }
LABEL_73:
                  v80 = sub_B5D6C8(this);
                  sub_B5D668(v80, 0LL);
                }
              }
            }
LABEL_70:
            v61 = *(_QWORD *)&v5->fields.isCreateShadowAura;
            ++v63;
            if ( !v61 )
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
  __int64 v14; // x8
  WebViewManager_o *Instance; // x0
  __int64 v16; // x1
  BattleActorControl_o *Component_srcLineSprite; // x20
  const MethodInfo *v18; // x2
  __int64 v19; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x20
  __int64 v22; // x8
  unsigned __int64 v23; // x21
  __int64 v24; // x0

  if ( (byte_42E7835 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Renderer__get_Count__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v11, v12, v13);
    byte_42E7835 = 1;
  }
  v14 = *(_QWORD *)&this->fields.isCreateShadowAura;
  if ( v14 && *(int *)(v14 + 24) >= 1 )
  {
    if ( BYTE1(this->fields.searchMeshWord) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (WebViewManager_o *)Instance->fields.webView) == 0LL )
        sub_B5D69C(Instance, v16);
      Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_23289344(this, Component_srcLineSprite, v18);
    }
    else
    {
      BattleEffectChangeTexture__ChangeTexture(this, (int32_t)this->fields.sourceServantIds, v2);
      v21 = *(_QWORD *)&this->fields.isCheckUniqueId;
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 24);
        if ( (int)v22 >= 1 )
        {
          v23 = 0LL;
          do
          {
            if ( v23 >= (unsigned int)v22 )
            {
              v24 = sub_B5D6C8(v19);
              sub_B5D668(v24, 0LL);
            }
            BattleEffectChangeTexture__ChangeTexture(this, *(_DWORD *)(v21 + 32 + 4 * v23), v20);
            LODWORD(v22) = *(_DWORD *)(v21 + 24);
            ++v23;
          }
          while ( (__int64)v23 < (int)v22 );
        }
      }
    }
  }
}


BattleActorControl_o *__fastcall BattleEffectChangeTexture__GetModelBattleActor(
        BattleEffectChangeTexture_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v10; // x1
  int max_length; // w8
  System_Object_array *v12; // x21
  unsigned int v13; // w23
  Il2CppClass **v14; // x8
  BattleActorControl_o *v15; // x22
  __int64 v17; // x0

  if ( (byte_42E7838 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, servantId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E7838 = 1;
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
  v12 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v17 = sub_B5D6C8(ObjectsOfType_object);
        sub_B5D668(v17, 0LL);
      }
      v14 = &v12->obj.klass + (int)v13;
      v15 = (BattleActorControl_o *)v14[4];
      if ( !v15 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v14[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!LOBYTE(this->fields.searchMeshWord) || v15->fields.uniqueID == LODWORD(this[1].klass)) )
      {
        return v15;
      }
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_B5D69C(ObjectsOfType_object, v10);
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