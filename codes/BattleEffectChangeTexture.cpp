void __fastcall BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43505AF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_B70694(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_B70694(&StringLiteral_17133/*"body_level"*/);
    byte_43505AF = 1;
  }
  LODWORD(this->fields.sourceServantIds) = -1;
  LOBYTE(this->fields.searchMeshWord) = 1;
  v9 = (System_Int32_array **)StringLiteral_17133/*"body_level"*/;
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)StringLiteral_17133/*"body_level"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.targetRendererList, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  *(_QWORD *)&this->fields.isCreateShadowAura = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.isCreateShadowAura,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleEffectChangeTexture__ChangeTexture(
        BattleEffectChangeTexture_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  BattleActorControl_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_43505AC & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43505AC = 1;
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
      BattleEffectChangeTexture__ChangeTexture_22684244(this, v5, v6);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_22684244(
        BattleEffectChangeTexture_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  BattleEffectChangeTexture_o *v4; // x19
  int sourceServantIds; // w8
  BattleEffectChangeTexture_o *v6; // x22
  unsigned int v7; // w23
  BattleEffectChangeTexture_c **v8; // x8
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x24
  int v12; // w8
  UnityEngine_Material_o *v13; // x22
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  UnityEngine_Transform_o *v17; // x21
  __int64 v18; // x21
  unsigned __int64 v19; // x22
  __int64 v20; // x10
  UnityEngine_Material_o *material; // x21
  float v22; // s4
  float v23; // s5
  float v24; // s6
  float v25; // s7
  UnityEngine_Shader_o *v26; // x20
  __int64 v27; // x22
  UnityEngine_Texture_o *v28; // x21
  unsigned __int64 v29; // x24
  UnityEngine_Renderer_o *v30; // x22
  __int64 v31; // x10
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v36; // s4
  float v37; // s5
  float v38; // s6
  float v39; // s7
  __int64 v40; // x9
  int v41; // w8
  BattleEffectChangeTexture_o *v42; // x22
  unsigned int v43; // w25
  BattleEffectChangeTexture_c **v44; // x8
  UnityEngine_Material_o *v45; // x23
  __int64 v46; // x0
  BattleEffectChangeTexture_o *v47; // x0
  int32_t v48; // w1
  const MethodInfo *v49; // x2
  UnityEngine_Color_o v50; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_43505AD & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____69251200);
    sub_B70694(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    sub_B70694(&StringLiteral_16178/*"_Color"*/);
    sub_B70694(&StringLiteral_16161/*"_ChocoTex"*/);
    sub_B70694(&StringLiteral_4598/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_B70694(&StringLiteral_13008/*"Shaders/ChocoMap"*/);
    this = (BattleEffectChangeTexture_o *)sub_B70694(&StringLiteral_16138/*"_AddColor"*/);
    byte_43505AD = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( !actor )
    goto LABEL_71;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____69251200);
  if ( !this )
    goto LABEL_71;
  sourceServantIds = (int)this->fields.sourceServantIds;
  v6 = this;
  if ( sourceServantIds >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= sourceServantIds )
        goto LABEL_73;
      v8 = &v6->klass + (int)v7;
      v9 = (UnityEngine_Object_o *)v8[4];
      if ( !v9 )
        break;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v8[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v9, 0LL);
        if ( !this )
          break;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_44830516(
                                                (System_String_o *)this,
                                                (System_String_o *)v4->fields.targetRendererList,
                                                0LL);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      sourceServantIds = (int)v6->fields.sourceServantIds;
      if ( (int)++v7 >= sourceServantIds )
        goto LABEL_13;
    }
LABEL_71:
    sub_B7076C(this, actor);
  }
LABEL_13:
  v9 = 0LL;
LABEL_14:
  if ( *(_QWORD *)&v4->fields.isCreateShadowAura )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleEffectChangeTexture_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v10 = *(_QWORD *)&v4->fields.isCreateShadowAura;
      if ( !v10 )
        goto LABEL_71;
      v11 = 0LL;
      while ( 1 )
      {
        v12 = *(_DWORD *)(v10 + 24);
        if ( (int)v11 >= v12 )
          break;
        if ( v12 <= (unsigned int)v11 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        this = *(BattleEffectChangeTexture_o **)(*(_QWORD *)(v10 + 16) + 8 * v11 + 32);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          if ( v9 )
          {
            v13 = (UnityEngine_Material_o *)this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v9, 0LL);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0LL);
              if ( v13 )
              {
                UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)this, 0LL);
                v10 = *(_QWORD *)&v4->fields.isCreateShadowAura;
                ++v11;
                if ( v10 )
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
          this = (BattleEffectChangeTexture_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
          v17 = (UnityEngine_Transform_o *)this;
          UnityEngine_Transform__SetParent(
            (UnityEngine_Transform_o *)this,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v52.fields.x = 0.0;
          v52.fields.y = 0.0;
          v52.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v17, v52, 0LL);
          one = UnityEngine_Vector3__get_one(0LL);
          UnityEngine_Transform__set_localScale(v17, one, 0LL);
        }
        v18 = *(_QWORD *)&v4->fields.isCreateShadowAura;
        if ( !v18 )
          goto LABEL_71;
        v19 = 0LL;
        while ( (__int64)v19 < *(int *)(v18 + 24) )
        {
          if ( v19 >= *(unsigned int *)(v18 + 24) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          this = *(BattleEffectChangeTexture_o **)(*(_QWORD *)(v18 + 16) + 8 * v19 + 32);
          if ( this )
          {
            v20 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
            if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v20
              && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v20 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
              v54.fields.r = 0.05;
              v54.fields.g = 0.05;
              v54.fields.b = 0.05;
              v54.fields.a = 1.0;
              *(_QWORD *)&v50.fields.r = 0LL;
              *(_QWORD *)&v50.fields.b = 0LL;
              UnityEngine_Color___ctor(v54, v22, v23, v24, v25, (const MethodInfo *)&v50);
              if ( !material )
                goto LABEL_71;
              UnityEngine_Material__set_color(material, v50, 0LL);
            }
          }
          v18 = *(_QWORD *)&v4->fields.isCreateShadowAura;
          ++v19;
          if ( !v18 )
            goto LABEL_71;
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v26 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4598/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                (System_String_o *)StringLiteral_13008/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_Texture2D___);
        v27 = *(_QWORD *)&v4->fields.isCreateShadowAura;
        if ( v27 )
        {
          v28 = (UnityEngine_Texture_o *)this;
          v29 = 0LL;
          while ( 1 )
          {
            if ( (__int64)v29 >= *(int *)(v27 + 24) )
              return;
            if ( v29 >= *(unsigned int *)(v27 + 24) )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v30 = *(UnityEngine_Renderer_o **)(*(_QWORD *)(v27 + 16) + 8 * v29 + 32);
            if ( v30 )
            {
              v31 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v30->klass->_2.bitflags2 + 1) >= (unsigned int)v31
                && (UnityEngine_SkinnedMeshRenderer_c *)v30->klass->_2.typeHierarchy[v31 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
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
                UnityEngine_Color___ctor(white, v36, v37, v38, v39, &methoda);
                v40 = *(&UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.bitflags2 + 1);
                if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v40
                  || (UnityEngine_SkinnedMeshRenderer_c *)v30->klass->_2.typeHierarchy[v40 - 1] != UnityEngine_SkinnedMeshRenderer_TypeInfo )
                {
                  v47 = (BattleEffectChangeTexture_o *)sub_B70A60(v30);
                  BattleEffectChangeTexture__ChangeTexture(v47, v48, v49);
                  return;
                }
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(v30, 0LL);
                if ( !this )
                  goto LABEL_71;
                v41 = (int)this->fields.sourceServantIds;
                v42 = this;
                if ( v41 >= 1 )
                {
                  v43 = 0;
                  while ( v43 < v41 )
                  {
                    v44 = &v42->klass + (int)v43;
                    v45 = (UnityEngine_Material_o *)v44[4];
                    if ( !v45 )
                      goto LABEL_71;
                    UnityEngine_Material__set_shader((UnityEngine_Material_o *)v44[4], v26, 0LL);
                    v56.fields.r = r;
                    v56.fields.g = g;
                    v56.fields.b = b;
                    v56.fields.a = a;
                    UnityEngine_Material__SetColor(v45, (System_String_o *)StringLiteral_16178/*"_Color"*/, v56, 0LL);
                    *(_QWORD *)&v57.fields.r = methoda.methodPointer;
                    *(_QWORD *)&v57.fields.b = methoda.invoker_method;
                    UnityEngine_Material__SetColor(v45, (System_String_o *)StringLiteral_16138/*"_AddColor"*/, v57, 0LL);
                    UnityEngine_Material__SetTexture(v45, (System_String_o *)StringLiteral_16161/*"_ChocoTex"*/, v28, 0LL);
                    v41 = (int)v42->fields.sourceServantIds;
                    if ( (int)++v43 >= v41 )
                      goto LABEL_70;
                  }
LABEL_73:
                  v46 = sub_B70798(this);
                  sub_B70738(v46, 0LL);
                }
              }
            }
LABEL_70:
            v27 = *(_QWORD *)&v4->fields.isCreateShadowAura;
            ++v29;
            if ( !v27 )
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
  __int64 v4; // x8
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  BattleActorControl_o *Component_srcLineSprite; // x20
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x20
  __int64 v12; // x8
  unsigned __int64 v13; // x21
  __int64 v14; // x0

  if ( (byte_43505AB & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_43505AB = 1;
  }
  v4 = *(_QWORD *)&this->fields.isCreateShadowAura;
  if ( v4 && *(int *)(v4 + 24) >= 1 )
  {
    if ( BYTE1(this->fields.searchMeshWord) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (WebViewManager_o *)Instance->fields.webView) == 0LL )
        sub_B7076C(Instance, v6);
      Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_22684244(this, Component_srcLineSprite, v8);
    }
    else
    {
      BattleEffectChangeTexture__ChangeTexture(this, (int32_t)this->fields.sourceServantIds, v2);
      v11 = *(_QWORD *)&this->fields.isCheckUniqueId;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 24);
        if ( (int)v12 >= 1 )
        {
          v13 = 0LL;
          do
          {
            if ( v13 >= (unsigned int)v12 )
            {
              v14 = sub_B70798(v9);
              sub_B70738(v14, 0LL);
            }
            BattleEffectChangeTexture__ChangeTexture(this, *(_DWORD *)(v11 + 32 + 4 * v13), v10);
            LODWORD(v12) = *(_DWORD *)(v11 + 24);
            ++v13;
          }
          while ( (__int64)v13 < (int)v12 );
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
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  System_Object_array *v8; // x21
  unsigned int v9; // w23
  Il2CppClass **v10; // x8
  BattleActorControl_o *v11; // x22
  __int64 v13; // x0

  if ( (byte_43505AE & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43505AE = 1;
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
  v8 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v13 = sub_B70798(ObjectsOfType_object);
        sub_B70738(v13, 0LL);
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
    sub_B7076C(ObjectsOfType_object, v6);
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