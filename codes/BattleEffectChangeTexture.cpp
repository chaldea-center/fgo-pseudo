void BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C38FDB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1C32C20(&StringLiteral_17324/*"body_level"*/);
    byte_4C38FDB = 1;
  }
  this->fields.sourceServantId = -1;
  this->fields.isCheckUniqueId = 1;
  v5 = StringLiteral_17324/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17324/*"body_level"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.searchMeshWord, v5, v2, v3);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetRendererList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.shadowAuraList, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleEffectChangeTexture__ChangeTexture(
        BattleEffectChangeTexture_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  BattleActorControl_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C38FD8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C38FD8 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v5 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0) )
      BattleEffectChangeTexture__ChangeTexture_43605464(this, v5, v6);
  }
}


void BattleEffectChangeTexture__ChangeTexture_43605464(
        BattleEffectChangeTexture_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  BattleEffectChangeTexture_o *v4; // x19
  int m_CancellationTokenSource; // w8
  BattleEffectChangeTexture_o *v6; // x22
  unsigned int v7; // w23
  BattleEffectChangeTexture_c **v8; // x8
  UnityEngine_Object_o *v9; // x21
  int32_t v10; // w22
  BattleEffectChangeTexture_o *v11; // x23
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x21
  BattleEffectChangeTexture___c_c *v14; // x8
  System_Func_object__object__o *_9__16_0; // x22
  Il2CppObject *v16; // x23
  struct BattleEffectChangeTexture___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  NpcServantDisplayTypeDetailEntity_o *v21; // x21
  System_Collections_Generic_IEnumerable_Material__o *v22; // x22
  System_Collections_Generic_IEnumerable_TSource__o *shadowAuraNodeTransformArray; // x21
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x0
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v31; // x21
  Il2CppObject *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_object__o *shadowAuraList; // x21
  NpcServantDisplayTypeDetailEntity_o *v35; // x22
  System_Collections_Generic_IEnumerable_Transform__o *v36; // x23
  UnityEngine_Shader_o *v37; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  BattleEffectChangeTexture_o *v39; // x21
  int32_t v40; // w22
  __int64 v41; // x10
  int v42; // w8
  BattleEffectChangeTexture_o *v43; // x23
  unsigned int v44; // w26
  BattleEffectChangeTexture_c **v45; // x8
  UnityEngine_Material_o *v46; // x24
  int32_t v47; // w21
  Il2CppObject *Item; // x22
  __int64 naturalAligment; // x10
  BattleDataDefine_c *v50; // x8
  BattleEffectChangeTexture_o *v51; // x22
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C38FD9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_Transform___);
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_Transform___);
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    sub_1C32C20(&BattleEffectUtility_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____78081896);
    sub_1C32C20(&Method_System_Linq_Enumerable_Append_Transform___);
    sub_1C32C20(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
    sub_1C32C20(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C32C20(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    sub_1C32C20(&Method_BattleEffectChangeTexture___c__ChangeTexture_b__16_0__);
    sub_1C32C20(&BattleEffectChangeTexture___c_TypeInfo);
    sub_1C32C20(&StringLiteral_16171/*"_Color"*/);
    sub_1C32C20(&StringLiteral_16152/*"_ChocoTex"*/);
    sub_1C32C20(&StringLiteral_4914/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_1C32C20(&StringLiteral_12836/*"Shaders/ChocoMap"*/);
    this = (BattleEffectChangeTexture_o *)sub_1C32C20(&StringLiteral_16119/*"_AddColor"*/);
    byte_4C38FD9 = 1;
  }
  entity = 0;
  if ( !actor )
    goto LABEL_85;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____78081896);
  if ( !this )
    goto LABEL_85;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    while ( v7 < m_CancellationTokenSource )
    {
      v8 = &v6->klass + (int)v7;
      v9 = (UnityEngine_Object_o *)v8[4];
      if ( !v9 )
        goto LABEL_85;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v8[4], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v9, 0);
        if ( !this )
          goto LABEL_85;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_63576920(
                                                (System_String_o *)this,
                                                v4->fields.searchMeshWord,
                                                0);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
      if ( (int)++v7 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_86:
    sub_1C32E84(this);
  }
LABEL_13:
  v9 = 0;
LABEL_14:
  if ( v4->fields.targetRendererList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
      if ( !this )
        goto LABEL_85;
      v10 = 0;
      while ( v10 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v10,
                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
          if ( v9 )
          {
            v11 = this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v9, 0);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0);
              if ( v11 )
              {
                UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v11, (UnityEngine_Texture_o *)this, 0);
                this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
                ++v10;
                if ( this )
                  continue;
              }
            }
          }
        }
        goto LABEL_85;
      }
      if ( BattleActorControl__isShadowServant(actor, 0) )
      {
        this = (BattleEffectChangeTexture_o *)actor->fields.battleSvtData;
        if ( !this )
          goto LABEL_85;
        this = (BattleEffectChangeTexture_o *)BattleServantData__TryGetDisplayTypeDetailEntity(
                                                (BattleServantData_o *)this,
                                                &entity,
                                                0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_85;
          v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)v4->fields.targetRendererList,
                                                                       (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
          v14 = BattleEffectChangeTexture___c_TypeInfo;
          if ( !BattleEffectChangeTexture___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectChangeTexture___c_TypeInfo);
            v14 = BattleEffectChangeTexture___c_TypeInfo;
          }
          _9__16_0 = (System_Func_object__object__o *)v14->static_fields->__9__16_0;
          if ( !_9__16_0 )
          {
            if ( !v14->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v14);
              v14 = BattleEffectChangeTexture___c_TypeInfo;
            }
            v16 = (Il2CppObject *)v14->static_fields->__9;
            _9__16_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
            System_Func_object__object____ctor(
              _9__16_0,
              v16,
              Method_BattleEffectChangeTexture___c__ChangeTexture_b__16_0__,
              0);
            static_fields = BattleEffectChangeTexture___c_TypeInfo->static_fields;
            static_fields->__9__16_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__16_0;
            sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v18, v19);
          }
          v20 = System_Linq_Enumerable__SelectMany_object__object_(
                  v13,
                  (System_Func_TSource__IEnumerable_TResult___o *)_9__16_0,
                  (const MethodInfo_31168AC *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
          v21 = entity;
          v22 = (System_Collections_Generic_IEnumerable_Material__o *)v20;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__SetShadowServantColorToMaterials(v22, v21, 0);
        }
        else
        {
          this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
          if ( !this )
            goto LABEL_85;
          v47 = 0;
          while ( v47 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     v47,
                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
            {
              if ( Item )
              {
                naturalAligment = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
                if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
                  && (UnityEngine_SkinnedMeshRenderer_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
                {
                  this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material(
                                                          (UnityEngine_Renderer_o *)Item,
                                                          0);
                  v50 = BattleDataDefine_TypeInfo;
                  v51 = this;
                  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    v50 = BattleDataDefine_TypeInfo;
                  }
                  if ( !v51 )
                    goto LABEL_85;
                  UnityEngine_Material__set_color(
                    (UnityEngine_Material_o *)v51,
                    v50->static_fields->ShadowServantDefaultColor,
                    0);
                }
              }
            }
            this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
            ++v47;
            if ( !this )
              goto LABEL_85;
          }
        }
        if ( v4->fields.isCreateShadowAura )
        {
          shadowAuraNodeTransformArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.shadowAuraNodeTransformArray;
          if ( !shadowAuraNodeTransformArray )
          {
            v24 = Method_System_Array_Empty_Transform___;
            v25 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
            if ( !v25 )
            {
              sub_1C83390(Method_System_Array_Empty_Transform___);
              v25 = v24[7];
            }
            v26 = *(_QWORD *)(v25 + 16);
            if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
              v26 = sub_1C83334(inited);
            if ( !*(_DWORD *)(v26 + 224) )
              inited = j_il2cpp_runtime_class_init_0(v26);
            v27 = *(_QWORD *)(v24[7] + 16LL);
            if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
              v27 = sub_1C83334(inited);
            shadowAuraNodeTransformArray = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v27 + 184);
          }
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0);
          NodeFromName = (Il2CppObject *)TransformHelper__getNodeFromName(
                                           transform,
                                           v4->fields.shadowAuraNodeName,
                                           0,
                                           0);
          appended = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Append_object_(
                                                                      shadowAuraNodeTransformArray,
                                                                      NodeFromName,
                                                                      (const MethodInfo_30EB57C *)Method_System_Linq_Enumerable_Append_Transform___);
          v31 = BasicHelper__ExcludeNull_object_(
                  appended,
                  (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_Transform___);
          v32 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
          v33 = System_Linq_Enumerable__DefaultIfEmpty_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                  v32,
                  (const MethodInfo_3100274 *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
          shadowAuraList = (System_Collections_Generic_List_object__o *)v4->fields.shadowAuraList;
          v35 = entity;
          v36 = (System_Collections_Generic_IEnumerable_Transform__o *)v33;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          this = (BattleEffectChangeTexture_o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
                                                  v36,
                                                  v35,
                                                  0);
          if ( !shadowAuraList )
            goto LABEL_85;
          System_Collections_Generic_List_object___AddRange(
            shadowAuraList,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0) )
      {
        v37 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4914/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_object_(
                                                (System_String_o *)StringLiteral_12836/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_31799A8 *)Method_UnityEngine_Resources_Load_Texture2D___);
        targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
        if ( targetRendererList )
        {
          v39 = this;
          v40 = 0;
          while ( 1 )
          {
            if ( v40 >= targetRendererList->fields._size )
              return;
            this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                    targetRendererList,
                                                    v40,
                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( this )
            {
              v41 = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
              if ( this->klass->_2.naturalAligment >= (unsigned int)v41
                && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v41 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(
                                                        (UnityEngine_Renderer_o *)this,
                                                        0);
                if ( !this )
                  goto LABEL_85;
                v42 = (int)this->fields.m_CancellationTokenSource;
                v43 = this;
                if ( v42 >= 1 )
                  break;
              }
            }
LABEL_68:
            targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
            ++v40;
            if ( !targetRendererList )
              goto LABEL_85;
          }
          v44 = 0;
          while ( v44 < v42 )
          {
            v45 = &v43->klass + (int)v44;
            v46 = (UnityEngine_Material_o *)v45[4];
            if ( !v46 )
              goto LABEL_85;
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)v45[4], v37, 0);
            v53.fields.r = 1.0;
            v53.fields.g = 1.0;
            v53.fields.b = 1.0;
            v53.fields.a = 1.0;
            UnityEngine_Material__SetColor(v46, (System_String_o *)StringLiteral_16171/*"_Color"*/, v53, 0);
            v54.fields.r = 0.0;
            v54.fields.g = 0.0;
            v54.fields.b = 0.0;
            v54.fields.a = 0.0;
            UnityEngine_Material__SetColor(v46, (System_String_o *)StringLiteral_16119/*"_AddColor"*/, v54, 0);
            UnityEngine_Material__SetTexture(
              v46,
              (System_String_o *)StringLiteral_16152/*"_ChocoTex"*/,
              (UnityEngine_Texture_o *)v39,
              0);
            v42 = (int)v43->fields.m_CancellationTokenSource;
            if ( (int)++v44 >= v42 )
              goto LABEL_68;
          }
          goto LABEL_86;
        }
LABEL_85:
        sub_1C32E7C(this);
      }
    }
  }
}


void BattleEffectChangeTexture__Execute(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_List_Renderer__o *targetRendererList; // x8
  UnityEngine_GameObject_o *Instance; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x2
  struct System_Int32_array *sourceServantIds; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x21

  if ( (byte_4C38FD7 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C38FD7 = 1;
  }
  targetRendererList = this->fields.targetRendererList;
  if ( targetRendererList && targetRendererList->fields._size >= 1 )
  {
    if ( this->fields.isNPEffect )
    {
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (UnityEngine_GameObject_o *)Instance[3].monitor) == 0 )
        sub_1C32E7C(Instance);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        BattleEffectChangeTexture__ChangeTexture_43605464(this, (BattleActorControl_o *)Component_object, v7);
    }
    else
    {
      BattleEffectChangeTexture__ChangeTexture(this, this->fields.sourceServantId, v2);
      sourceServantIds = this->fields.sourceServantIds;
      if ( sourceServantIds )
      {
        max_length = sourceServantIds->max_length;
        if ( (int)max_length >= 1 )
        {
          v12 = 0;
          do
          {
            if ( v12 >= (unsigned int)max_length )
              sub_1C32E84(v8);
            BattleEffectChangeTexture__ChangeTexture(this, sourceServantIds->m_Items[v12], v9);
            LODWORD(max_length) = sourceServantIds->max_length;
            ++v12;
          }
          while ( (__int64)v12 < (int)max_length );
        }
      }
    }
  }
}


BattleActorControl_o *BattleEffectChangeTexture__GetModelBattleActor(
        BattleEffectChangeTexture_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  System_Object_array *ObjectsOfType_object; // x0
  int max_length; // w8
  System_Object_array *v7; // x21
  unsigned int v8; // w23
  Il2CppClass **v9; // x8
  BattleActorControl_o *v10; // x22

  if ( (byte_4C38FDA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C38FDA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_31695FC *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_17;
  max_length = ObjectsOfType_object->max_length;
  v7 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C32E84(ObjectsOfType_object);
      v9 = &v7->obj.klass + (int)v8;
      v10 = (BattleActorControl_o *)v9[4];
      if ( !v10 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId((BattleActorControl_o *)v9[4], 0);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!this->fields.isCheckUniqueId || v10->fields.uniqueID == this->fields.targetId) )
      {
        return v10;
      }
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return 0;
    }
LABEL_17:
    sub_1C32E7C(ObjectsOfType_object);
  }
  return 0;
}


void BattleEffectChangeTexture__OnDestroy(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_4C38FD6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_GameObject__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_1C32C20(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_UnityEngine_Object_Destroy__);
    byte_4C38FD6 = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.shadowAuraList,
         (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v4 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v4, 0, Method_UnityEngine_Object_Destroy__, 0);
  BasicHelper__ForEach_object_(
    v3,
    (System_Action_T__o *)v4,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = this->fields.shadowAuraList;
  if ( !shadowAuraList )
    sub_1C32E7C(v5);
  size = shadowAuraList->fields._size;
  v8 = shadowAuraList->fields._version + 1;
  shadowAuraList->fields._size = 0;
  shadowAuraList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)shadowAuraList->fields._items, 0, size, 0);
}


void BattleEffectChangeTexture__SetTargetId(
        BattleEffectChangeTexture_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  this->fields.targetId = uniqueId;
}


void BattleEffectChangeTexture__Start(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  if ( this->fields.isNPEffect )
    BattleEffectChangeTexture__Execute(this, method);
}


void BattleEffectChangeTexture___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38FDC & 1) == 0 )
  {
    sub_1C32C20(&BattleEffectChangeTexture___c_TypeInfo);
    byte_4C38FDC = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleEffectChangeTexture___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleEffectChangeTexture___c_TypeInfo->static_fields->__9 = (struct BattleEffectChangeTexture___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleEffectChangeTexture___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleEffectChangeTexture___c___ctor(BattleEffectChangeTexture___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_Material__o *BattleEffectChangeTexture___c___ChangeTexture_b__16_0(
        BattleEffectChangeTexture___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0);
}