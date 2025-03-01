void __fastcall BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BFEB38 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer___ctor__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_1C2E12C(&System_Collections_Generic_List_Renderer__TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_17659/*"body_level"*/, v12);
    byte_4BFEB38 = 1;
  }
  this->fields.sourceServantId = -1;
  this->fields.isCheckUniqueId = 1;
  v13 = StringLiteral_17659/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17659/*"body_level"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.searchMeshWord, v13, v2, v3, v4, v5, v6, v7);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v14;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.targetRendererList,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.shadowAuraList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
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

  if ( (byte_4BFEB35 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId);
    byte_4BFEB35 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v5 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
      BattleEffectChangeTexture__ChangeTexture_41987484(this, v5, v6);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_41987484(
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
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v46; // x0
  NpcServantDisplayTypeDetailEntity_o *v47; // x21
  System_Collections_Generic_IEnumerable_Material__o *v48; // x22
  System_Collections_Generic_IEnumerable_TSource__o *shadowAuraNodeTransformArray; // x21
  _QWORD *v50; // x21
  __int64 v51; // x8
  __int64 v52; // x0
  __int64 v53; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x0
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v57; // x21
  Il2CppObject *v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_List_object__o *shadowAuraList; // x21
  NpcServantDisplayTypeDetailEntity_o *v61; // x22
  System_Collections_Generic_IEnumerable_Transform__o *v62; // x23
  UnityEngine_Shader_o *v63; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  BattleEffectChangeTexture_o *v65; // x21
  int32_t v66; // w22
  __int64 v67; // x10
  int v68; // w8
  BattleEffectChangeTexture_o *v69; // x23
  unsigned int v70; // w26
  BattleEffectChangeTexture_c **v71; // x8
  UnityEngine_Material_o *v72; // x24
  int32_t v73; // w21
  Il2CppObject *Item; // x22
  __int64 methodPtr_low; // x10
  BattleDataDefine_c *v76; // x8
  BattleEffectChangeTexture_o *v77; // x22
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4BFEB36 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_Transform___, actor);
    sub_1C2E12C(&Method_BasicHelper_ExcludeNull_Transform___, v5);
    sub_1C2E12C(&BattleDataDefine_TypeInfo, v6);
    sub_1C2E12C(&BattleEffectUtility_TypeInfo, v7);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____77780176, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Append_Transform___, v9);
    sub_1C2E12C(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___, v10);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___, v11);
    sub_1C2E12C(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___, v12);
    sub_1C2E12C(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__AddRange__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer__get_Count__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer__get_Item__, v16);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v17);
    sub_1C2E12C(&Method_UnityEngine_Resources_Load_Texture2D___, v18);
    sub_1C2E12C(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v19);
    sub_1C2E12C(&Method_BattleEffectChangeTexture___c__ChangeTexture_b__16_0__, v20);
    sub_1C2E12C(&BattleEffectChangeTexture___c_TypeInfo, v21);
    sub_1C2E12C(&StringLiteral_16466/*"_Color"*/, v22);
    sub_1C2E12C(&StringLiteral_16447/*"_ChocoTex"*/, v23);
    sub_1C2E12C(&StringLiteral_5043/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v24);
    sub_1C2E12C(&StringLiteral_12994/*"Shaders/ChocoMap"*/, v25);
    this = (BattleEffectChangeTexture_o *)sub_1C2E12C(&StringLiteral_16422/*"_AddColor"*/, v26);
    byte_4BFEB36 = 1;
  }
  entity = 0LL;
  if ( !actor )
    goto LABEL_85;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_2FC8DC0 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____77780176);
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
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_63267160(
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
    sub_1C2E390(this, actor);
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
                                                (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
                                                                       (const MethodInfo_2FFB080 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
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
            _9__16_0 = (System_Func_object__object__o *)sub_1C2E378(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
            System_Func_object__object____ctor(
              _9__16_0,
              v38,
              Method_BattleEffectChangeTexture___c__ChangeTexture_b__16_0__,
              0LL);
            static_fields = BattleEffectChangeTexture___c_TypeInfo->static_fields;
            static_fields->__9__16_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__16_0;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
              (int64_t)_9__16_0,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
          }
          v46 = System_Linq_Enumerable__SelectMany_object__object_(
                  v35,
                  (System_Func_TSource__IEnumerable_TResult___o *)_9__16_0,
                  (const MethodInfo_3006114 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
          v47 = entity;
          v48 = (System_Collections_Generic_IEnumerable_Material__o *)v46;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__SetShadowServantColorToMaterials(v48, v47, 0LL);
        }
        else
        {
          this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
          if ( !this )
            goto LABEL_85;
          v73 = 0;
          while ( v73 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     v73,
                     (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
                  v76 = BattleDataDefine_TypeInfo;
                  v77 = this;
                  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    v76 = BattleDataDefine_TypeInfo;
                  }
                  if ( !v77 )
                    goto LABEL_85;
                  UnityEngine_Material__set_color(
                    (UnityEngine_Material_o *)v77,
                    v76->static_fields->ShadowServantDefaultColor,
                    0LL);
                }
              }
            }
            this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
            ++v73;
            if ( !this )
              goto LABEL_85;
          }
        }
        if ( v4->fields.isCreateShadowAura )
        {
          shadowAuraNodeTransformArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.shadowAuraNodeTransformArray;
          if ( !shadowAuraNodeTransformArray )
          {
            v50 = Method_System_Array_Empty_Transform___;
            v51 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
            if ( !v51 )
            {
              sub_1C80064(Method_System_Array_Empty_Transform___);
              v51 = v50[7];
            }
            v52 = *(_QWORD *)(v51 + 16);
            if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
              v52 = sub_1C80008(inited);
            if ( !*(_DWORD *)(v52 + 224) )
              inited = j_il2cpp_runtime_class_init_0(v52);
            v53 = *(_QWORD *)(v50[7] + 16LL);
            if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
              v53 = sub_1C80008(inited);
            shadowAuraNodeTransformArray = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v53 + 184);
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
                                                                      (const MethodInfo_2FDF840 *)Method_System_Linq_Enumerable_Append_Transform___);
          v57 = BasicHelper__ExcludeNull_object_(
                  appended,
                  (const MethodInfo_2FBCB90 *)Method_BasicHelper_ExcludeNull_Transform___);
          v58 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
          v59 = System_Linq_Enumerable__DefaultIfEmpty_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v57,
                  v58,
                  (const MethodInfo_2FEEE24 *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
          shadowAuraList = (System_Collections_Generic_List_object__o *)v4->fields.shadowAuraList;
          v61 = entity;
          v62 = (System_Collections_Generic_IEnumerable_Transform__o *)v59;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          this = (BattleEffectChangeTexture_o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
                                                  v62,
                                                  v61,
                                                  0LL);
          if ( !shadowAuraList )
            goto LABEL_85;
          System_Collections_Generic_List_object___AddRange(
            shadowAuraList,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v63 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5043/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_object_(
                                                (System_String_o *)StringLiteral_12994/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_30676E8 *)Method_UnityEngine_Resources_Load_Texture2D___);
        targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
        if ( targetRendererList )
        {
          v65 = this;
          v66 = 0;
          while ( 1 )
          {
            if ( v66 >= targetRendererList->fields._size )
              return;
            this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                    targetRendererList,
                                                    v66,
                                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( this )
            {
              v67 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v67
                && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v67 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(
                                                        (UnityEngine_Renderer_o *)this,
                                                        0LL);
                if ( !this )
                  goto LABEL_85;
                v68 = (int)this->fields.m_CancellationTokenSource;
                v69 = this;
                if ( v68 >= 1 )
                  break;
              }
            }
LABEL_68:
            targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
            ++v66;
            if ( !targetRendererList )
              goto LABEL_85;
          }
          v70 = 0;
          while ( v70 < v68 )
          {
            v71 = &v69->klass + (int)v70;
            v72 = (UnityEngine_Material_o *)v71[4];
            if ( !v72 )
              goto LABEL_85;
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)v71[4], v63, 0LL);
            v79.fields.r = 1.0;
            v79.fields.g = 1.0;
            v79.fields.b = 1.0;
            v79.fields.a = 1.0;
            UnityEngine_Material__SetColor(v72, (System_String_o *)StringLiteral_16466/*"_Color"*/, v79, 0LL);
            v80.fields.r = 0.0;
            v80.fields.g = 0.0;
            v80.fields.b = 0.0;
            v80.fields.a = 0.0;
            UnityEngine_Material__SetColor(v72, (System_String_o *)StringLiteral_16422/*"_AddColor"*/, v80, 0LL);
            UnityEngine_Material__SetTexture(
              v72,
              (System_String_o *)StringLiteral_16447/*"_ChocoTex"*/,
              (UnityEngine_Texture_o *)v65,
              0LL);
            v68 = (int)v69->fields.m_CancellationTokenSource;
            if ( (int)++v70 >= v68 )
              goto LABEL_68;
          }
          goto LABEL_86;
        }
LABEL_85:
        sub_1C2E388(this, actor);
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

  if ( (byte_4BFEB34 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    byte_4BFEB34 = 1;
  }
  targetRendererList = this->fields.targetRendererList;
  if ( targetRendererList && targetRendererList->fields._size >= 1 )
  {
    if ( this->fields.isNPEffect )
    {
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (UnityEngine_GameObject_o *)Instance[4].klass) == 0LL )
        sub_1C2E388(Instance, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_41987484(this, (BattleActorControl_o *)Component_object, v11);
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
              sub_1C2E390(v12, v13);
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

  if ( (byte_4BFEB37 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4BFEB37 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3057D38 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_1C2E390(ObjectsOfType_object, v7);
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
    sub_1C2E388(ObjectsOfType_object, v7);
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

  if ( (byte_4BFEB33 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_GameObject__TypeInfo, method);
    sub_1C2E12C(&Method_BasicHelper_ExcludeNull_GameObject___, v3);
    sub_1C2E12C(&Method_BasicHelper_ForEach_GameObject___, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1C2E12C(&Method_UnityEngine_Object_Destroy__, v6);
    byte_4BFEB33 = 1;
  }
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.shadowAuraList,
         (const MethodInfo_2FBCB90 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v8 = (System_Action_object__o *)sub_1C2E378(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v8, 0LL, Method_UnityEngine_Object_Destroy__, 0LL);
  BasicHelper__ForEach_object_(
    v7,
    (System_Action_T__o *)v8,
    (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = this->fields.shadowAuraList;
  if ( !shadowAuraList )
    sub_1C2E388(v9, v10);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFEB39 & 1) == 0 )
  {
    sub_1C2E12C(&BattleEffectChangeTexture___c_TypeInfo, v1);
    byte_4BFEB39 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(BattleEffectChangeTexture___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleEffectChangeTexture___c_TypeInfo->static_fields->__9 = (struct BattleEffectChangeTexture___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BattleEffectChangeTexture___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}