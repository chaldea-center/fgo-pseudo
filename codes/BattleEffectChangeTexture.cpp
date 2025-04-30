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

  if ( (byte_4A4F919 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_1B863B8(&System_Collections_Generic_List_Renderer__TypeInfo, v7);
    sub_1B863B8(&StringLiteral_17113/*"body_level"*/, v8);
    byte_4A4F919 = 1;
  }
  this->fields.sourceServantId = -1;
  this->fields.isCheckUniqueId = 1;
  v9 = StringLiteral_17113/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17113/*"body_level"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.searchMeshWord, v9, v2, v3);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v10;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.targetRendererList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.shadowAuraList, (int32_t)v13, v14, v15);
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

  if ( (byte_4A4F916 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId);
    byte_4A4F916 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v5 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
      BattleEffectChangeTexture__ChangeTexture_41678932(this, v5, v6);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_41678932(
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
  int m_CancellationTokenSource; // w8
  BattleEffectChangeTexture_o *v28; // x22
  unsigned int v29; // w23
  BattleEffectChangeTexture_c **v30; // x8
  UnityEngine_Object_o *v31; // x21
  int32_t v32; // w22
  BattleEffectChangeTexture_o *v33; // x23
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x21
  BattleEffectChangeTexture___c_c *v36; // x8
  System_Func_object__object__o *_9__16_0; // x22
  Il2CppObject *v38; // x23
  struct BattleEffectChangeTexture___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v42; // x0
  NpcServantDisplayTypeDetailEntity_o *v43; // x21
  System_Collections_Generic_IEnumerable_Material__o *v44; // x22
  System_Collections_Generic_IEnumerable_TSource__o *shadowAuraNodeTransformArray; // x21
  _QWORD *v46; // x21
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x0
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v53; // x21
  Il2CppObject *v54; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_List_object__o *shadowAuraList; // x21
  NpcServantDisplayTypeDetailEntity_o *v57; // x22
  System_Collections_Generic_IEnumerable_Transform__o *v58; // x23
  UnityEngine_Shader_o *v59; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  BattleEffectChangeTexture_o *v61; // x21
  int32_t v62; // w22
  __int64 v63; // x10
  int v64; // w8
  BattleEffectChangeTexture_o *v65; // x23
  unsigned int v66; // w26
  BattleEffectChangeTexture_c **v67; // x8
  UnityEngine_Material_o *v68; // x24
  int32_t v69; // w21
  Il2CppObject *Item; // x22
  __int64 methodPtr_low; // x10
  BattleDataDefine_c *v72; // x8
  BattleEffectChangeTexture_o *v73; // x22
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4A4F917 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_Transform___, actor);
    sub_1B863B8(&Method_BasicHelper_ExcludeNull_Transform___, v5);
    sub_1B863B8(&BattleDataDefine_TypeInfo, v6);
    sub_1B863B8(&BattleEffectUtility_TypeInfo, v7);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76107048, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_Append_Transform___, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___, v12);
    sub_1B863B8(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__AddRange__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__get_Count__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__get_Item__, v16);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B863B8(&Method_UnityEngine_Resources_Load_Texture2D___, v18);
    sub_1B863B8(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v19);
    sub_1B863B8(&Method_BattleEffectChangeTexture___c__ChangeTexture_b__16_0__, v20);
    sub_1B863B8(&BattleEffectChangeTexture___c_TypeInfo, v21);
    sub_1B863B8(&StringLiteral_15942/*"_Color"*/, v22);
    sub_1B863B8(&StringLiteral_15923/*"_ChocoTex"*/, v23);
    sub_1B863B8(&StringLiteral_4884/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v24);
    sub_1B863B8(&StringLiteral_12614/*"Shaders/ChocoMap"*/, v25);
    this = (BattleEffectChangeTexture_o *)sub_1B863B8(&StringLiteral_15898/*"_AddColor"*/, v26);
    byte_4A4F917 = 1;
  }
  entity = 0LL;
  if ( !actor )
    goto LABEL_85;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_2F651AC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76107048);
  if ( !this )
    goto LABEL_85;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v28 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v29 = 0;
    while ( v29 < m_CancellationTokenSource )
    {
      v30 = &v28->klass + (int)v29;
      v31 = (UnityEngine_Object_o *)v30[4];
      if ( !v31 )
        goto LABEL_85;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v30[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v31, 0LL);
        if ( !this )
          goto LABEL_85;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_61703672(
                                                (System_String_o *)this,
                                                v4->fields.searchMeshWord,
                                                0LL);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      m_CancellationTokenSource = (int)v28->fields.m_CancellationTokenSource;
      if ( (int)++v29 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_86:
    sub_1B8661C(this, actor);
  }
LABEL_13:
  v31 = 0LL;
LABEL_14:
  if ( v4->fields.targetRendererList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
    {
      this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
      if ( !this )
        goto LABEL_85;
      v32 = 0;
      while ( v32 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v32,
                                                (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          if ( v31 )
          {
            v33 = this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v31, 0LL);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0LL);
              if ( v33 )
              {
                UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v33, (UnityEngine_Texture_o *)this, 0LL);
                this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
                ++v32;
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
          v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)v4->fields.targetRendererList,
                                                                       (const MethodInfo_2F9A6B0 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
          v36 = BattleEffectChangeTexture___c_TypeInfo;
          if ( !BattleEffectChangeTexture___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectChangeTexture___c_TypeInfo);
            v36 = BattleEffectChangeTexture___c_TypeInfo;
          }
          _9__16_0 = (System_Func_object__object__o *)v36->static_fields->__9__16_0;
          if ( !_9__16_0 )
          {
            if ( !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = BattleEffectChangeTexture___c_TypeInfo;
            }
            v38 = (Il2CppObject *)v36->static_fields->__9;
            _9__16_0 = (System_Func_object__object__o *)sub_1B86604(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
            System_Func_object__object____ctor(
              _9__16_0,
              v38,
              Method_BattleEffectChangeTexture___c__ChangeTexture_b__16_0__,
              0LL);
            static_fields = BattleEffectChangeTexture___c_TypeInfo->static_fields;
            static_fields->__9__16_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__16_0;
            sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v40, v41);
          }
          v42 = System_Linq_Enumerable__SelectMany_object__object_(
                  v35,
                  (System_Func_TSource__IEnumerable_TResult___o *)_9__16_0,
                  (const MethodInfo_2FA37F8 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
          v43 = entity;
          v44 = (System_Collections_Generic_IEnumerable_Material__o *)v42;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__SetShadowServantColorToMaterials(v44, v43, 0LL);
        }
        else
        {
          this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
          if ( !this )
            goto LABEL_85;
          v69 = 0;
          while ( v69 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     v69,
                     (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
                  v72 = BattleDataDefine_TypeInfo;
                  v73 = this;
                  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    v72 = BattleDataDefine_TypeInfo;
                  }
                  if ( !v73 )
                    goto LABEL_85;
                  UnityEngine_Material__set_color(
                    (UnityEngine_Material_o *)v73,
                    v72->static_fields->ShadowServantDefaultColor,
                    0LL);
                }
              }
            }
            this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
            ++v69;
            if ( !this )
              goto LABEL_85;
          }
        }
        if ( v4->fields.isCreateShadowAura )
        {
          shadowAuraNodeTransformArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.shadowAuraNodeTransformArray;
          if ( !shadowAuraNodeTransformArray )
          {
            v46 = Method_System_Array_Empty_Transform___;
            v47 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
            if ( !v47 )
            {
              sub_1BD6AA4(Method_System_Array_Empty_Transform___);
              v47 = v46[7];
            }
            v48 = *(_QWORD *)(v47 + 16);
            if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
              v48 = sub_1BD6A48(inited);
            if ( !*(_DWORD *)(v48 + 224) )
              inited = j_il2cpp_runtime_class_init_0(v48);
            v49 = *(_QWORD *)(v46[7] + 16LL);
            if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
              v49 = sub_1BD6A48(inited);
            shadowAuraNodeTransformArray = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v49 + 184);
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
                                                                      (const MethodInfo_2F7DEF0 *)Method_System_Linq_Enumerable_Append_Transform___);
          v53 = BasicHelper__ExcludeNull_object_(
                  appended,
                  (const MethodInfo_2F58608 *)Method_BasicHelper_ExcludeNull_Transform___);
          v54 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
          v55 = System_Linq_Enumerable__DefaultIfEmpty_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v53,
                  v54,
                  (const MethodInfo_2F8DFF8 *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
          shadowAuraList = (System_Collections_Generic_List_object__o *)v4->fields.shadowAuraList;
          v57 = entity;
          v58 = (System_Collections_Generic_IEnumerable_Transform__o *)v55;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          this = (BattleEffectChangeTexture_o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
                                                  v58,
                                                  v57,
                                                  0LL);
          if ( !shadowAuraList )
            goto LABEL_85;
          System_Collections_Generic_List_object___AddRange(
            shadowAuraList,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v59 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4884/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_object_(
                                                (System_String_o *)StringLiteral_12614/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_30059F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
        targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
        if ( targetRendererList )
        {
          v61 = this;
          v62 = 0;
          while ( 1 )
          {
            if ( v62 >= targetRendererList->fields._size )
              return;
            this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                    targetRendererList,
                                                    v62,
                                                    (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( this )
            {
              v63 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v63
                && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v63 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(
                                                        (UnityEngine_Renderer_o *)this,
                                                        0LL);
                if ( !this )
                  goto LABEL_85;
                v64 = (int)this->fields.m_CancellationTokenSource;
                v65 = this;
                if ( v64 >= 1 )
                  break;
              }
            }
LABEL_68:
            targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
            ++v62;
            if ( !targetRendererList )
              goto LABEL_85;
          }
          v66 = 0;
          while ( v66 < v64 )
          {
            v67 = &v65->klass + (int)v66;
            v68 = (UnityEngine_Material_o *)v67[4];
            if ( !v68 )
              goto LABEL_85;
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)v67[4], v59, 0LL);
            v75.fields.r = 1.0;
            v75.fields.g = 1.0;
            v75.fields.b = 1.0;
            v75.fields.a = 1.0;
            UnityEngine_Material__SetColor(v68, (System_String_o *)StringLiteral_15942/*"_Color"*/, v75, 0LL);
            v76.fields.r = 0.0;
            v76.fields.g = 0.0;
            v76.fields.b = 0.0;
            v76.fields.a = 0.0;
            UnityEngine_Material__SetColor(v68, (System_String_o *)StringLiteral_15898/*"_AddColor"*/, v76, 0LL);
            UnityEngine_Material__SetTexture(
              v68,
              (System_String_o *)StringLiteral_15923/*"_ChocoTex"*/,
              (UnityEngine_Texture_o *)v61,
              0LL);
            v64 = (int)v65->fields.m_CancellationTokenSource;
            if ( (int)++v66 >= v64 )
              goto LABEL_68;
          }
          goto LABEL_86;
        }
LABEL_85:
        sub_1B86614(this, actor);
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

  if ( (byte_4A4F915 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    byte_4A4F915 = 1;
  }
  targetRendererList = this->fields.targetRendererList;
  if ( targetRendererList && targetRendererList->fields._size >= 1 )
  {
    if ( this->fields.isNPEffect )
    {
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (UnityEngine_GameObject_o *)Instance[3].monitor) == 0LL )
        sub_1B86614(Instance, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_41678932(this, (BattleActorControl_o *)Component_object, v11);
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
              sub_1B8661C(v12, v13);
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
  int max_length; // w8
  System_Object_array *v9; // x21
  unsigned int v10; // w23
  Il2CppClass **v11; // x8
  BattleActorControl_o *v12; // x22

  if ( (byte_4A4F918 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A4F918 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2FF5C68 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_17;
  max_length = ObjectsOfType_object->max_length;
  v9 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1B8661C(ObjectsOfType_object, v7);
      v11 = &v9->obj.klass + (int)v10;
      v12 = (BattleActorControl_o *)v11[4];
      if ( !v12 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v11[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!this->fields.isCheckUniqueId || v12->fields.uniqueID == this->fields.targetId) )
      {
        return v12;
      }
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_1B86614(ObjectsOfType_object, v7);
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

  if ( (byte_4A4F914 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_GameObject__TypeInfo, method);
    sub_1B863B8(&Method_BasicHelper_ExcludeNull_GameObject___, v3);
    sub_1B863B8(&Method_BasicHelper_ForEach_GameObject___, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1B863B8(&Method_UnityEngine_Object_Destroy__, v6);
    byte_4A4F914 = 1;
  }
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.shadowAuraList,
         (const MethodInfo_2F58608 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v8 = (System_Action_object__o *)sub_1B86604(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v8, 0LL, Method_UnityEngine_Object_Destroy__, 0LL);
  BasicHelper__ForEach_object_(
    v7,
    (System_Action_T__o *)v8,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = this->fields.shadowAuraList;
  if ( !shadowAuraList )
    sub_1B86614(v9, v10);
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

  if ( (byte_4A4F91A & 1) == 0 )
  {
    sub_1B863B8(&BattleEffectChangeTexture___c_TypeInfo, v1);
    byte_4A4F91A = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BattleEffectChangeTexture___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleEffectChangeTexture___c_TypeInfo->static_fields->__9 = (struct BattleEffectChangeTexture___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)BattleEffectChangeTexture___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}