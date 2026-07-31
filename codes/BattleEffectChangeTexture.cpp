void BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5939CF8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_21FFC50(&StringLiteral_18030/*"body_level"*/);
    byte_5939CF8 = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_18030/*"body_level"*/;
  this->fields.sourceServantId = -1;
  this->fields.isCheckUniqueId = 1;
  this->fields.searchMeshWord = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.searchMeshWord, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetRendererList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.shadowAuraList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleEffectChangeTexture__ChangeTexture(
        BattleEffectChangeTexture_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleActorControl_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_5939CF5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939CF5 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v6 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
      BattleEffectChangeTexture__ChangeTexture_50648236(this, v6, v7);
  }
}


void BattleEffectChangeTexture__ChangeTexture_50648236(
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
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x21
  BattleEffectChangeTexture___c_c *v14; // x8
  struct BattleEffectChangeTexture___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__16_0; // x22
  Il2CppObject *v17; // x23
  struct BattleEffectChangeTexture___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_Material__o *v26; // x22
  NpcServantDisplayTypeDetailEntity_o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *shadowAuraNodeTransformArray; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x0
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v32; // x21
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerable_Transform__o *v35; // x23
  System_Collections_Generic_List_object__o *shadowAuraList; // x21
  NpcServantDisplayTypeDetailEntity_o *v37; // x22
  UnityEngine_Shader_o *v38; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  BattleEffectChangeTexture_o *v40; // x21
  int32_t v41; // w22
  __int64 v42; // x10
  int v43; // w8
  BattleEffectChangeTexture_o *v44; // x23
  __int64 v45; // x26
  UnityEngine_Material_o *v46; // x24
  int32_t v47; // w21
  __int64 v48; // x1
  Il2CppObject *Item; // x22
  __int64 naturalAligment; // x10
  BattleEffectChangeTexture_o *v51; // x22
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_5939CF6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_Transform___);
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_Transform___);
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____91505672);
    sub_21FFC50(&Method_System_Linq_Enumerable_Append_Transform___);
    sub_21FFC50(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
    sub_21FFC50(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_21FFC50(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    sub_21FFC50(&Method_BattleEffectChangeTexture___c__ChangeTexture_b__16_0__);
    sub_21FFC50(&BattleEffectChangeTexture___c_TypeInfo);
    sub_21FFC50(&StringLiteral_16781/*"_Color"*/);
    sub_21FFC50(&StringLiteral_16763/*"_ChocoTex"*/);
    sub_21FFC50(&StringLiteral_5090/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_21FFC50(&StringLiteral_13350/*"Shaders/ChocoMap"*/);
    this = (BattleEffectChangeTexture_o *)sub_21FFC50(&StringLiteral_16726/*"_AddColor"*/);
    byte_5939CF6 = 1;
  }
  entity = 0;
  if ( !actor )
    goto LABEL_77;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____91505672);
  if ( !this )
    goto LABEL_77;
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
        goto LABEL_77;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v8[4], 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v9, 0);
        if ( !this )
          goto LABEL_77;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_75501892(
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
LABEL_78:
    sub_21FFED4(this);
  }
LABEL_13:
  v9 = 0;
LABEL_14:
  if ( v4->fields.targetRendererList )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actor);
    if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
    {
      this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
      if ( !this )
        goto LABEL_77;
      v10 = 0;
      while ( v10 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v10,
                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
        goto LABEL_77;
      }
      if ( BattleActorControl__isShadowServant(actor, 0) )
      {
        this = (BattleEffectChangeTexture_o *)actor->fields.battleSvtData;
        if ( !this )
          goto LABEL_77;
        this = (BattleEffectChangeTexture_o *)BattleServantData__TryGetDisplayTypeDetailEntity(
                                                (BattleServantData_o *)this,
                                                &entity,
                                                0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_77;
          v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)v4->fields.targetRendererList,
                                                                       (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
          v14 = BattleEffectChangeTexture___c_TypeInfo;
          if ( !*(&BattleEffectChangeTexture___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectChangeTexture___c_TypeInfo, v12);
            v14 = BattleEffectChangeTexture___c_TypeInfo;
          }
          static_fields = v14->static_fields;
          _9__16_0 = (System_Func_object__object__o *)static_fields->__9__16_0;
          if ( !_9__16_0 )
          {
            if ( !*(&v14->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v14, v12);
              static_fields = BattleEffectChangeTexture___c_TypeInfo->static_fields;
            }
            v17 = (Il2CppObject *)static_fields->__9;
            _9__16_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
            System_Func_object__object____ctor(
              _9__16_0,
              v17,
              Method_BattleEffectChangeTexture___c__ChangeTexture_b__16_0__,
              0);
            v18 = BattleEffectChangeTexture___c_TypeInfo->static_fields;
            v18->__9__16_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__16_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v18->__9__16_0,
              (int32_t)_9__16_0,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
          }
          v26 = (System_Collections_Generic_IEnumerable_Material__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                        v13,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__16_0,
                                                                        (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
          v27 = entity;
          if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v25);
          BattleEffectUtility__SetShadowServantColorToMaterials(v26, v27, 0);
        }
        else
        {
          this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
          if ( !this )
            goto LABEL_77;
          v47 = 0;
          while ( v47 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     v47,
                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
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
                  v51 = this;
                  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, actor);
                  if ( !v51 )
                    goto LABEL_77;
                  UnityEngine_Material__set_color(
                    (UnityEngine_Material_o *)v51,
                    BattleDataDefine_TypeInfo->static_fields->ShadowServantDefaultColor,
                    0);
                }
              }
            }
            this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
            ++v47;
            if ( !this )
              goto LABEL_77;
          }
        }
        if ( v4->fields.isCreateShadowAura )
        {
          shadowAuraNodeTransformArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.shadowAuraNodeTransformArray;
          if ( !shadowAuraNodeTransformArray )
            shadowAuraNodeTransformArray = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1FED6F0(Method_System_Array_Empty_Transform___);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0);
          NodeFromName = (Il2CppObject *)TransformHelper__getNodeFromName(
                                           transform,
                                           v4->fields.shadowAuraNodeName,
                                           0,
                                           0);
          appended = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Append_object_(
                                                                      shadowAuraNodeTransformArray,
                                                                      NodeFromName,
                                                                      (const MethodInfo_3834FF4 *)Method_System_Linq_Enumerable_Append_Transform___);
          v32 = BasicHelper__ExcludeNull_object_(
                  appended,
                  (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_Transform___);
          v33 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
          v35 = (System_Collections_Generic_IEnumerable_Transform__o *)System_Linq_Enumerable__DefaultIfEmpty_object__59018520(
                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                                         v33,
                                                                         (const MethodInfo_3848D18 *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
          shadowAuraList = (System_Collections_Generic_List_object__o *)v4->fields.shadowAuraList;
          v37 = entity;
          if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v34);
          this = (BattleEffectChangeTexture_o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
                                                  v35,
                                                  v37,
                                                  0);
          if ( !shadowAuraList )
            goto LABEL_77;
          System_Collections_Generic_List_object___AddRange(
            shadowAuraList,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_GameObject__AddRange__);
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0) )
      {
        v38 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5090/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_object_(
                                                (System_String_o *)StringLiteral_13350/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_Texture2D___);
        targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
        if ( targetRendererList )
        {
          v40 = this;
          v41 = 0;
          while ( 1 )
          {
            if ( v41 >= targetRendererList->fields._size )
              return;
            this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                    targetRendererList,
                                                    v41,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( this )
            {
              v42 = UnityEngine_SkinnedMeshRenderer_TypeInfo->_2.naturalAligment;
              if ( this->klass->_2.naturalAligment >= (unsigned int)v42
                && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v42 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(
                                                        (UnityEngine_Renderer_o *)this,
                                                        0);
                if ( !this )
                  goto LABEL_77;
                v43 = (int)this->fields.m_CancellationTokenSource;
                v44 = this;
                if ( v43 >= 1 )
                  break;
              }
            }
LABEL_60:
            ++v41;
            targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
            if ( !targetRendererList )
              goto LABEL_77;
          }
          v45 = 0;
          while ( (unsigned int)v45 < v43 )
          {
            v46 = (UnityEngine_Material_o *)*((_QWORD *)&v44->fields.sourceServantId + v45);
            if ( !v46 )
              goto LABEL_77;
            UnityEngine_Material__set_shader(*((UnityEngine_Material_o **)&v44->fields.sourceServantId + v45), v38, 0);
            v53.fields.r = 1.0;
            v53.fields.g = 1.0;
            v53.fields.b = 1.0;
            v53.fields.a = 1.0;
            UnityEngine_Material__SetColor(v46, (System_String_o *)StringLiteral_16781/*"_Color"*/, v53, 0);
            v54.fields.r = 0.0;
            v54.fields.g = 0.0;
            v54.fields.b = 0.0;
            v54.fields.a = 0.0;
            UnityEngine_Material__SetColor(v46, (System_String_o *)StringLiteral_16726/*"_AddColor"*/, v54, 0);
            UnityEngine_Material__SetTexture(
              v46,
              (System_String_o *)StringLiteral_16763/*"_ChocoTex"*/,
              (UnityEngine_Texture_o *)v40,
              0);
            v43 = (int)v44->fields.m_CancellationTokenSource;
            if ( (int)++v45 >= v43 )
              goto LABEL_60;
          }
          goto LABEL_78;
        }
LABEL_77:
        sub_21FFECC(this, actor);
      }
    }
  }
}


void BattleEffectChangeTexture__Execute(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_List_Renderer__o *targetRendererList; // x8
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v9; // x2
  __int64 v10; // x0
  const MethodInfo *v11; // x2
  struct System_Int32_array *sourceServantIds; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x21

  if ( (byte_5939CF4 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_5939CF4 = 1;
  }
  targetRendererList = this->fields.targetRendererList;
  if ( targetRendererList && targetRendererList->fields._size >= 1 )
  {
    if ( this->fields.isNPEffect )
    {
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (UnityEngine_GameObject_o *)Instance[3].monitor) == 0 )
        sub_21FFECC(Instance, v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        BattleEffectChangeTexture__ChangeTexture_50648236(this, (BattleActorControl_o *)Component_object, v9);
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
          v14 = 0;
          do
          {
            if ( v14 >= (unsigned int)max_length )
              sub_21FFED4(v10);
            BattleEffectChangeTexture__ChangeTexture(this, sourceServantIds->m_Items[v14], v11);
            LODWORD(max_length) = sourceServantIds->max_length;
            ++v14;
          }
          while ( (__int64)v14 < (int)max_length );
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
BattleActorControl_o *BattleEffectChangeTexture__GetModelBattleActor(
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

  if ( (byte_5939CF7 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939CF7 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_38BFEC0 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_16;
  max_length = ObjectsOfType_object->max_length;
  v8 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_21FFED4(ObjectsOfType_object);
      v10 = &v8->obj.klass + (int)v9;
      v11 = (BattleActorControl_o *)v10[4];
      if ( !v11 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId((BattleActorControl_o *)v10[4], 0);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!this->fields.isCheckUniqueId || v11->fields.uniqueID == this->fields.targetId) )
      {
        return v11;
      }
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return 0;
    }
LABEL_16:
    sub_21FFECC(ObjectsOfType_object, v6);
  }
  return 0;
}


void BattleEffectChangeTexture__OnDestroy(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x8
  int32_t size; // w2
  int v9; // w9

  if ( (byte_5939CF3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_21FFC50(&Method_BasicHelper_ForEach_GameObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_UnityEngine_Object_Destroy__);
    byte_5939CF3 = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.shadowAuraList,
         (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_GameObject___);
  v4 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v4, 0, Method_UnityEngine_Object_Destroy__, 0);
  BasicHelper__ForEach_object_(
    v3,
    (System_Action_T__o *)v4,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = this->fields.shadowAuraList;
  if ( !shadowAuraList )
    sub_21FFECC(v5, v6);
  size = shadowAuraList->fields._size;
  v9 = shadowAuraList->fields._version + 1;
  shadowAuraList->fields._size = 0;
  shadowAuraList->fields._version = v9;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939CF9 & 1) == 0 )
  {
    sub_21FFC50(&BattleEffectChangeTexture___c_TypeInfo);
    byte_5939CF9 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleEffectChangeTexture___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleEffectChangeTexture___c_TypeInfo->static_fields->__9 = (struct BattleEffectChangeTexture___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleEffectChangeTexture___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0);
}