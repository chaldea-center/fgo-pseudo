void __fastcall BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w1
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B034F0 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_List_Renderer__TypeInfo, v7);
    sub_1BC3008(&StringLiteral_17175/*"body_level"*/, v8);
    byte_4B034F0 = 1;
  }
  this->fields.sourceServantId = -1;
  this->fields.isCheckUniqueId = 1;
  v9 = StringLiteral_17175/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17175/*"body_level"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.searchMeshWord, v9, v2, v3);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.targetRendererList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.shadowAuraList, (int32_t)v13, v14, v15);
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

  if ( (byte_4B034ED & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId);
    byte_4B034ED = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v5 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
      BattleEffectChangeTexture__ChangeTexture_42590320(this, v5, v6);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_42590320(
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
  __int64 v27; // x2
  int m_CancellationTokenSource; // w8
  BattleEffectChangeTexture_o *v29; // x22
  unsigned int v30; // w23
  BattleEffectChangeTexture_c **v31; // x8
  UnityEngine_Object_o *v32; // x21
  int32_t v33; // w22
  BattleEffectChangeTexture_o *v34; // x23
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21
  BattleEffectChangeTexture___c_c *v37; // x8
  System_Func_object__object__o *_9__16_0; // x22
  Il2CppObject *v39; // x23
  struct BattleEffectChangeTexture___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v43; // x0
  NpcServantDisplayTypeDetailEntity_o *v44; // x21
  System_Collections_Generic_IEnumerable_Material__o *v45; // x22
  System_Collections_Generic_IEnumerable_TSource__o *shadowAuraNodeTransformArray; // x21
  _QWORD *v47; // x21
  __int64 v48; // x8
  __int64 v49; // x0
  __int64 v50; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x0
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v54; // x21
  Il2CppObject *v55; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_List_object__o *shadowAuraList; // x21
  NpcServantDisplayTypeDetailEntity_o *v58; // x22
  System_Collections_Generic_IEnumerable_Transform__o *v59; // x23
  UnityEngine_Shader_o *v60; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  BattleEffectChangeTexture_o *v62; // x21
  int32_t v63; // w22
  __int64 v64; // x10
  int v65; // w8
  BattleEffectChangeTexture_o *v66; // x23
  unsigned int v67; // w26
  BattleEffectChangeTexture_c **v68; // x8
  UnityEngine_Material_o *v69; // x24
  int32_t v70; // w21
  Il2CppObject *Item; // x22
  __int64 methodPtr_low; // x10
  BattleDataDefine_c *v73; // x8
  BattleEffectChangeTexture_o *v74; // x22
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4B034EE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_Transform___, actor);
    sub_1BC3008(&Method_BasicHelper_ExcludeNull_Transform___, v5);
    sub_1BC3008(&BattleDataDefine_TypeInfo, v6);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v7);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76831808, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_Append_Transform___, v9);
    sub_1BC3008(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___, v10);
    sub_1BC3008(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___, v12);
    sub_1BC3008(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__AddRange__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__get_Count__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__get_Item__, v16);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v17);
    sub_1BC3008(&Method_UnityEngine_Resources_Load_Texture2D___, v18);
    sub_1BC3008(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v19);
    sub_1BC3008(&Method_BattleEffectChangeTexture___c__ChangeTexture_b__16_0__, v20);
    sub_1BC3008(&BattleEffectChangeTexture___c_TypeInfo, v21);
    sub_1BC3008(&StringLiteral_16025/*"_Color"*/, v22);
    sub_1BC3008(&StringLiteral_16006/*"_ChocoTex"*/, v23);
    sub_1BC3008(&StringLiteral_4873/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v24);
    sub_1BC3008(&StringLiteral_12711/*"Shaders/ChocoMap"*/, v25);
    this = (BattleEffectChangeTexture_o *)sub_1BC3008(&StringLiteral_15973/*"_AddColor"*/, v26);
    byte_4B034EE = 1;
  }
  entity = 0LL;
  if ( !actor )
    goto LABEL_85;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_2FF9358 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76831808);
  if ( !this )
    goto LABEL_85;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v29 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v30 = 0;
    while ( v30 < m_CancellationTokenSource )
    {
      v31 = &v29->klass + (int)v30;
      v32 = (UnityEngine_Object_o *)v31[4];
      if ( !v32 )
        goto LABEL_85;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v31[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v32, 0LL);
        if ( !this )
          goto LABEL_85;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_62407024(
                                                (System_String_o *)this,
                                                v4->fields.searchMeshWord,
                                                0LL);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      m_CancellationTokenSource = (int)v29->fields.m_CancellationTokenSource;
      if ( (int)++v30 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_86:
    sub_1BC326C(this, actor, v27);
  }
LABEL_13:
  v32 = 0LL;
LABEL_14:
  if ( v4->fields.targetRendererList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
    {
      this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
      if ( !this )
        goto LABEL_85;
      v33 = 0;
      while ( v33 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v33,
                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          if ( v32 )
          {
            v34 = this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v32, 0LL);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0LL);
              if ( v34 )
              {
                UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v34, (UnityEngine_Texture_o *)this, 0LL);
                this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
                ++v33;
                if ( this )
                  continue;
              }
            }
          }
        }
        goto LABEL_85;
      }
      if ( BattleActorControl__isShadowServant(actor, 0LL) )
      {
        this = (BattleEffectChangeTexture_o *)actor->fields.battleSvtData;
        if ( !this )
          goto LABEL_85;
        this = (BattleEffectChangeTexture_o *)BattleServantData__TryGetDisplayTypeDetailEntity(
                                                (BattleServantData_o *)this,
                                                &entity,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_85;
          v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)v4->fields.targetRendererList,
                                                                       (const MethodInfo_302D068 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
          v37 = BattleEffectChangeTexture___c_TypeInfo;
          if ( !BattleEffectChangeTexture___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectChangeTexture___c_TypeInfo);
            v37 = BattleEffectChangeTexture___c_TypeInfo;
          }
          _9__16_0 = (System_Func_object__object__o *)v37->static_fields->__9__16_0;
          if ( !_9__16_0 )
          {
            if ( !v37->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v37);
              v37 = BattleEffectChangeTexture___c_TypeInfo;
            }
            v39 = (Il2CppObject *)v37->static_fields->__9;
            _9__16_0 = (System_Func_object__object__o *)sub_1BC3254(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
            System_Func_object__object____ctor(
              _9__16_0,
              v39,
              Method_BattleEffectChangeTexture___c__ChangeTexture_b__16_0__,
              0LL);
            static_fields = BattleEffectChangeTexture___c_TypeInfo->static_fields;
            static_fields->__9__16_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__16_0;
            sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v41, v42);
          }
          v43 = System_Linq_Enumerable__SelectMany_object__object_(
                  v36,
                  (System_Func_TSource__IEnumerable_TResult___o *)_9__16_0,
                  (const MethodInfo_3038834 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
          v44 = entity;
          v45 = (System_Collections_Generic_IEnumerable_Material__o *)v43;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__SetShadowServantColorToMaterials(v45, v44, 0LL);
        }
        else
        {
          this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
          if ( !this )
            goto LABEL_85;
          v70 = 0;
          while ( v70 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     v70,
                     (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
            {
              if ( Item )
              {
                methodPtr_low = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
                if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
                  && (UnityEngine_SkinnedMeshRenderer_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
                {
                  this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material(
                                                          (UnityEngine_Renderer_o *)Item,
                                                          0LL);
                  v73 = BattleDataDefine_TypeInfo;
                  v74 = this;
                  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    v73 = BattleDataDefine_TypeInfo;
                  }
                  if ( !v74 )
                    goto LABEL_85;
                  UnityEngine_Material__set_color(
                    (UnityEngine_Material_o *)v74,
                    v73->static_fields->ShadowServantDefaultColor,
                    0LL);
                }
              }
            }
            this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
            ++v70;
            if ( !this )
              goto LABEL_85;
          }
        }
        if ( v4->fields.isCreateShadowAura )
        {
          shadowAuraNodeTransformArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.shadowAuraNodeTransformArray;
          if ( !shadowAuraNodeTransformArray )
          {
            v47 = Method_System_Array_Empty_Transform___;
            v48 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
            if ( !v48 )
            {
              sub_1C134C8(Method_System_Array_Empty_Transform___);
              v48 = v47[7];
            }
            v49 = *(_QWORD *)(v48 + 16);
            if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
              v49 = sub_1C1346C(inited);
            if ( !*(_DWORD *)(v49 + 224) )
              inited = j_il2cpp_runtime_class_init_0(v49);
            v50 = *(_QWORD *)(v47[7] + 16LL);
            if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
              v50 = sub_1C1346C(inited);
            shadowAuraNodeTransformArray = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v50 + 184);
          }
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0LL);
          NodeFromName = (Il2CppObject *)TransformHelper__getNodeFromName(
                                           transform,
                                           v4->fields.shadowAuraNodeName,
                                           0,
                                           0LL);
          appended = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Append_object_(
                                                                      shadowAuraNodeTransformArray,
                                                                      NodeFromName,
                                                                      (const MethodInfo_300FFF0 *)Method_System_Linq_Enumerable_Append_Transform___);
          v54 = BasicHelper__ExcludeNull_object_(
                  appended,
                  (const MethodInfo_2FEBC30 *)Method_BasicHelper_ExcludeNull_Transform___);
          v55 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
          v56 = System_Linq_Enumerable__DefaultIfEmpty_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v54,
                  v55,
                  (const MethodInfo_3020D10 *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
          shadowAuraList = (System_Collections_Generic_List_object__o *)v4->fields.shadowAuraList;
          v58 = entity;
          v59 = (System_Collections_Generic_IEnumerable_Transform__o *)v56;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          this = (BattleEffectChangeTexture_o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
                                                  v59,
                                                  v58,
                                                  0LL);
          if ( !shadowAuraList )
            goto LABEL_85;
          System_Collections_Generic_List_object___AddRange(
            shadowAuraList,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_GameObject__AddRange__);
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v60 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4873/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_object_(
                                                (System_String_o *)StringLiteral_12711/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_309AA50 *)Method_UnityEngine_Resources_Load_Texture2D___);
        targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
        if ( targetRendererList )
        {
          v62 = this;
          v63 = 0;
          while ( 1 )
          {
            if ( v63 >= targetRendererList->fields._size )
              return;
            this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                    targetRendererList,
                                                    v63,
                                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( this )
            {
              v64 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v64
                && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v64 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(
                                                        (UnityEngine_Renderer_o *)this,
                                                        0LL);
                if ( !this )
                  goto LABEL_85;
                v65 = (int)this->fields.m_CancellationTokenSource;
                v66 = this;
                if ( v65 >= 1 )
                  break;
              }
            }
LABEL_68:
            targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
            ++v63;
            if ( !targetRendererList )
              goto LABEL_85;
          }
          v67 = 0;
          while ( v67 < v65 )
          {
            v68 = &v66->klass + (int)v67;
            v69 = (UnityEngine_Material_o *)v68[4];
            if ( !v69 )
              goto LABEL_85;
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)v68[4], v60, 0LL);
            v76.fields.r = 1.0;
            v76.fields.g = 1.0;
            v76.fields.b = 1.0;
            v76.fields.a = 1.0;
            UnityEngine_Material__SetColor(v69, (System_String_o *)StringLiteral_16025/*"_Color"*/, v76, 0LL);
            v77.fields.r = 0.0;
            v77.fields.g = 0.0;
            v77.fields.b = 0.0;
            v77.fields.a = 0.0;
            UnityEngine_Material__SetColor(v69, (System_String_o *)StringLiteral_15973/*"_AddColor"*/, v77, 0LL);
            UnityEngine_Material__SetTexture(
              v69,
              (System_String_o *)StringLiteral_16006/*"_ChocoTex"*/,
              (UnityEngine_Texture_o *)v62,
              0LL);
            v65 = (int)v66->fields.m_CancellationTokenSource;
            if ( (int)++v67 >= v65 )
              goto LABEL_68;
          }
          goto LABEL_86;
        }
LABEL_85:
        sub_1BC3264(this, actor);
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
  struct System_Collections_Generic_List_Renderer__o *targetRendererList; // x8
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v11; // x2
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct System_Int32_array *sourceServantIds; // x20
  __int64 v16; // x8
  unsigned __int64 v17; // x21

  if ( (byte_4B034EC & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    byte_4B034EC = 1;
  }
  targetRendererList = this->fields.targetRendererList;
  if ( targetRendererList && targetRendererList->fields._size >= 1 )
  {
    if ( this->fields.isNPEffect )
    {
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (UnityEngine_GameObject_o *)Instance[3].monitor) == 0LL )
        sub_1BC3264(Instance, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_42590320(this, (BattleActorControl_o *)Component_object, v11);
    }
    else
    {
      BattleEffectChangeTexture__ChangeTexture(this, this->fields.sourceServantId, v2);
      sourceServantIds = this->fields.sourceServantIds;
      if ( sourceServantIds )
      {
        v16 = *(_QWORD *)&sourceServantIds->max_length;
        if ( (int)v16 >= 1 )
        {
          v17 = 0LL;
          do
          {
            if ( v17 >= (unsigned int)v16 )
              sub_1BC326C(v12, v13, v14);
            BattleEffectChangeTexture__ChangeTexture(this, sourceServantIds->m_Items[v17 + 1], v14);
            LODWORD(v16) = sourceServantIds->max_length;
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

  if ( (byte_4B034EF & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B034EF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_308ACC8 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_1BC326C(ObjectsOfType_object, v7, v8);
      v12 = &v10->obj.klass + (int)v11;
      v13 = (BattleActorControl_o *)v12[4];
      if ( !v13 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v12[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!this->fields.isCheckUniqueId || v13->fields.uniqueID == this->fields.targetId) )
      {
        return v13;
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_1BC3264(ObjectsOfType_object, v7);
  }
  return 0LL;
}


void __fastcall BattleEffectChangeTexture__OnDestroy(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  System_Action_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x8
  int32_t size; // w2
  int v13; // w9

  if ( (byte_4B034EB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_GameObject__TypeInfo, method);
    sub_1BC3008(&Method_BasicHelper_ExcludeNull_GameObject___, v3);
    sub_1BC3008(&Method_BasicHelper_ForEach_GameObject___, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1BC3008(&Method_UnityEngine_Object_Destroy__, v6);
    byte_4B034EB = 1;
  }
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.shadowAuraList,
         (const MethodInfo_2FEBC30 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v8 = (System_Action_object__o *)sub_1BC3254(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v8, 0LL, Method_UnityEngine_Object_Destroy__, 0LL);
  BasicHelper__ForEach_object_(
    v7,
    (System_Action_T__o *)v8,
    (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = this->fields.shadowAuraList;
  if ( !shadowAuraList )
    sub_1BC3264(v9, v10);
  size = shadowAuraList->fields._size;
  v13 = shadowAuraList->fields._version + 1;
  shadowAuraList->fields._size = 0;
  shadowAuraList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)shadowAuraList->fields._items, 0, size, 0LL);
}


void __fastcall BattleEffectChangeTexture__SetTargetId(
        BattleEffectChangeTexture_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  this->fields.targetId = uniqueId;
}


void __fastcall BattleEffectChangeTexture__Start(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  if ( this->fields.isNPEffect )
    BattleEffectChangeTexture__Execute(this, method);
}


void __fastcall BattleEffectChangeTexture___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B034F1 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectChangeTexture___c_TypeInfo, v1);
    byte_4B034F1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BattleEffectChangeTexture___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleEffectChangeTexture___c_TypeInfo->static_fields->__9 = (struct BattleEffectChangeTexture___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattleEffectChangeTexture___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleEffectChangeTexture___c___ctor(BattleEffectChangeTexture___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleEffectChangeTexture___c___ChangeTexture_b__16_0(
        BattleEffectChangeTexture___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}