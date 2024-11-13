void __fastcall BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B17536 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_Renderer__TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_17529/*"body_level"*/, v11, v12);
    byte_4B17536 = 1;
  }
  this->fields.sourceServantId = -1;
  this->fields.isCheckUniqueId = 1;
  v13 = StringLiteral_17529/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17529/*"body_level"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.searchMeshWord, v13, v2, v3, v4, v5, v6, v7);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Renderer__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetRendererList,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEffectChangeTexture__ChangeTexture(
        BattleEffectChangeTexture_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleActorControl_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4B17533 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId, method);
    byte_4B17533 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v6 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
      BattleEffectChangeTexture__ChangeTexture_41356708(this, v6, v7);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_41356708(
        BattleEffectChangeTexture_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  BattleEffectChangeTexture_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  int m_CancellationTokenSource; // w8
  BattleEffectChangeTexture_o *v48; // x22
  unsigned int v49; // w23
  BattleEffectChangeTexture_c **v50; // x8
  UnityEngine_Object_o *v51; // x21
  int32_t v52; // w22
  BattleEffectChangeTexture_o *v53; // x23
  int32_t effectId; // w21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x22
  BattleEffectChangeTexture___c_c *v59; // x8
  System_Func_object__object__o *_9__13_0; // x23
  Il2CppObject *v61; // x24
  struct BattleEffectChangeTexture___c_StaticFields *static_fields; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v69; // x0
  __int64 v70; // x1
  NpcServantDisplayTypeDetailEntity_o *v71; // x22
  System_Collections_Generic_IEnumerable_Material__o *v72; // x23
  int32_t v73; // w21
  __int64 v74; // x1
  Il2CppObject *Item; // x22
  __int64 methodPtr_low; // x10
  BattleDataDefine_c *v77; // x8
  BattleEffectChangeTexture_o *v78; // x22
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  __int64 v81; // x1
  UnityEngine_Object_o *NodeFromName; // x22
  BattleEffectChangeTexture_o *v83; // x23
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Collections_Generic_List_object__o *v89; // x22
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  Il2CppClass **v99; // x0
  __int64 v100; // x1
  NpcServantDisplayTypeDetailEntity_o *v101; // x21
  UnityEngine_Shader_o *v102; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  BattleEffectChangeTexture_o *v104; // x21
  int32_t v105; // w22
  __int64 v106; // x10
  int v107; // w8
  BattleEffectChangeTexture_o *v108; // x23
  unsigned int v109; // w26
  BattleEffectChangeTexture_c **v110; // x8
  UnityEngine_Material_o *v111; // x24
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4B17534 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, actor, method);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76859104, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___, v11, v12);
    sub_1BCA7E0(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Item__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_BattleEffectChangeTexture___c__ChangeTexture_b__13_0__, v33, v34);
    sub_1BCA7E0(&BattleEffectChangeTexture___c_TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_5022/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v43, v44);
    this = (BattleEffectChangeTexture_o *)sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v45, v46);
    byte_4B17534 = 1;
  }
  entity = 0LL;
  if ( !actor )
    goto LABEL_88;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76859104);
  if ( !this )
    goto LABEL_88;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v48 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v49 = 0;
    while ( v49 < m_CancellationTokenSource )
    {
      v50 = &v48->klass + (int)v49;
      v51 = (UnityEngine_Object_o *)v50[4];
      if ( !v51 )
        goto LABEL_88;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v50[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v51, 0LL);
        if ( !this )
          goto LABEL_88;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_62432796(
                                                (System_String_o *)this,
                                                v4->fields.searchMeshWord,
                                                0LL);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      m_CancellationTokenSource = (int)v48->fields.m_CancellationTokenSource;
      if ( (int)++v49 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_90:
    sub_1BCAA44(this, actor);
  }
LABEL_13:
  v51 = 0LL;
LABEL_14:
  if ( v4->fields.targetRendererList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actor);
    if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
    {
      this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
      if ( !this )
        goto LABEL_88;
      v52 = 0;
      while ( v52 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v52,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          if ( v51 )
          {
            v53 = this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v51, 0LL);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0LL);
              if ( v53 )
              {
                UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v53, (UnityEngine_Texture_o *)this, 0LL);
                this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
                ++v52;
                if ( this )
                  continue;
              }
            }
          }
        }
        goto LABEL_88;
      }
      if ( BattleActorControl__isShadowServant(actor, 0LL) )
      {
        this = (BattleEffectChangeTexture_o *)actor->fields.battleSvtData;
        if ( !this )
          goto LABEL_88;
        this = (BattleEffectChangeTexture_o *)BattleServantData__TryGetDisplayTypeDetailEntity(
                                                (BattleServantData_o *)this,
                                                &entity,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_88;
          effectId = entity->fields.effectId;
          v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)v4->fields.targetRendererList,
                                                                       (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
          v59 = BattleEffectChangeTexture___c_TypeInfo;
          if ( !BattleEffectChangeTexture___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectChangeTexture___c_TypeInfo, v55);
            v59 = BattleEffectChangeTexture___c_TypeInfo;
          }
          _9__13_0 = (System_Func_object__object__o *)v59->static_fields->__9__13_0;
          if ( !_9__13_0 )
          {
            if ( !v59->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v59, v55);
              v59 = BattleEffectChangeTexture___c_TypeInfo;
            }
            v61 = (Il2CppObject *)v59->static_fields->__9;
            _9__13_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                          System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo,
                                                          v55,
                                                          v56,
                                                          v57);
            System_Func_object__object____ctor(
              _9__13_0,
              v61,
              Method_BattleEffectChangeTexture___c__ChangeTexture_b__13_0__,
              0LL);
            static_fields = BattleEffectChangeTexture___c_TypeInfo->static_fields;
            static_fields->__9__13_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__13_0;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
              (int64_t)_9__13_0,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68);
          }
          v69 = System_Linq_Enumerable__SelectMany_object__object_(
                  v58,
                  (System_Func_TSource__IEnumerable_TResult___o *)_9__13_0,
                  (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
          v71 = entity;
          v72 = (System_Collections_Generic_IEnumerable_Material__o *)v69;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v70);
          BattleEffectUtility__SetShadowServantColorToMaterials(v72, v71, 0LL);
        }
        else
        {
          this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
          if ( !this )
            goto LABEL_88;
          v73 = 0;
          while ( v73 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     v73,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v74);
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
                  v77 = BattleDataDefine_TypeInfo;
                  v78 = this;
                  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, actor);
                    v77 = BattleDataDefine_TypeInfo;
                  }
                  if ( !v78 )
                    goto LABEL_88;
                  UnityEngine_Material__set_color(
                    (UnityEngine_Material_o *)v78,
                    v77->static_fields->ShadowServantDefaultColor,
                    0LL);
                }
              }
            }
            this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
            ++v73;
            if ( !this )
              goto LABEL_88;
          }
          effectId = 0;
        }
        if ( v4->fields.isCreateShadowAura )
        {
          this = (BattleEffectChangeTexture_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !this )
            goto LABEL_88;
          ShadowEffect = ServantAssetLoadManager__createShadowEffect(
                           (ServantAssetLoadManager_o *)this,
                           0,
                           effectId,
                           0LL);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0LL);
          NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                   transform,
                                                   v4->fields.shadowAuraNodeName,
                                                   0,
                                                   0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v81);
          this = (BattleEffectChangeTexture_o *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleEffectChangeTexture_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)v4,
                                                    0LL);
            NodeFromName = (UnityEngine_Object_o *)this;
          }
          if ( !ShadowEffect )
            goto LABEL_88;
          this = (BattleEffectChangeTexture_o *)UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
          if ( !this )
            goto LABEL_88;
          v83 = this;
          UnityEngine_Transform__SetParent(
            (UnityEngine_Transform_o *)this,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v113.fields.x = 0.0;
          v113.fields.y = 0.0;
          v113.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v83, v113, 0LL);
          if ( !byte_4B109C6 )
          {
            sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v84, v85);
            byte_4B109C6 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v83,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          v89 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               v86,
                                                               v87,
                                                               v88);
          System_Collections_Generic_List_object____ctor(
            v89,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( !v89 )
            goto LABEL_88;
          items = v89->fields._items;
          v97 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v89->fields._version;
          if ( !items )
            goto LABEL_88;
          size = v89->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v89,
              (Il2CppObject *)ShadowEffect,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
          }
          else
          {
            v99 = &items->obj.klass + size;
            v89->fields._size = size + 1;
            v99[4] = (Il2CppClass *)ShadowEffect;
            sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 4), (int64_t)ShadowEffect, v90, v91, v92, v93, v94, v95);
          }
          v101 = entity;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v100);
          BattleEffectUtility__SetColorToShadowEffectParticles(
            (System_Collections_Generic_List_GameObject__o *)v89,
            v101,
            0LL);
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v102 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5022/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_object_(
                                                (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
        targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
        if ( targetRendererList )
        {
          v104 = this;
          v105 = 0;
          while ( 1 )
          {
            if ( v105 >= targetRendererList->fields._size )
              return;
            this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                    targetRendererList,
                                                    v105,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( this )
            {
              v106 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v106
                && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v106 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(
                                                        (UnityEngine_Renderer_o *)this,
                                                        0LL);
                if ( !this )
                  goto LABEL_88;
                v107 = (int)this->fields.m_CancellationTokenSource;
                v108 = this;
                if ( v107 >= 1 )
                  break;
              }
            }
LABEL_87:
            targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
            ++v105;
            if ( !targetRendererList )
              goto LABEL_88;
          }
          v109 = 0;
          while ( v109 < v107 )
          {
            v110 = &v108->klass + (int)v109;
            v111 = (UnityEngine_Material_o *)v110[4];
            if ( !v111 )
              goto LABEL_88;
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)v110[4], v102, 0LL);
            v114.fields.r = 1.0;
            v114.fields.g = 1.0;
            v114.fields.b = 1.0;
            v114.fields.a = 1.0;
            UnityEngine_Material__SetColor(v111, (System_String_o *)StringLiteral_16346/*"_Color"*/, v114, 0LL);
            v115.fields.r = 0.0;
            v115.fields.g = 0.0;
            v115.fields.b = 0.0;
            v115.fields.a = 0.0;
            UnityEngine_Material__SetColor(v111, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v115, 0LL);
            UnityEngine_Material__SetTexture(
              v111,
              (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
              (UnityEngine_Texture_o *)v104,
              0LL);
            v107 = (int)v108->fields.m_CancellationTokenSource;
            if ( (int)++v109 >= v107 )
              goto LABEL_87;
          }
          goto LABEL_90;
        }
LABEL_88:
        sub_1BCAA3C(this, actor);
      }
    }
  }
}


void __fastcall BattleEffectChangeTexture__Execute(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_Renderer__o *targetRendererList; // x8
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v15; // x2
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct System_Int32_array *sourceServantIds; // x20
  __int64 v20; // x8
  unsigned __int64 v21; // x21

  if ( (byte_4B17532 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8, v9);
    byte_4B17532 = 1;
  }
  targetRendererList = this->fields.targetRendererList;
  if ( targetRendererList && targetRendererList->fields._size >= 1 )
  {
    if ( this->fields.isNPEffect )
    {
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (UnityEngine_GameObject_o *)Instance[4].klass) == 0LL )
        sub_1BCAA3C(Instance, v12);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_41356708(this, (BattleActorControl_o *)Component_object, v15);
    }
    else
    {
      BattleEffectChangeTexture__ChangeTexture(this, this->fields.sourceServantId, v2);
      sourceServantIds = this->fields.sourceServantIds;
      if ( sourceServantIds )
      {
        v20 = *(_QWORD *)&sourceServantIds->max_length;
        if ( (int)v20 >= 1 )
        {
          v21 = 0LL;
          do
          {
            if ( v21 >= (unsigned int)v20 )
              sub_1BCAA44(v16, v17);
            BattleEffectChangeTexture__ChangeTexture(this, sourceServantIds->m_Items[v21 + 1], v18);
            LODWORD(v20) = sourceServantIds->max_length;
            ++v21;
          }
          while ( (__int64)v21 < (int)v20 );
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
  __int64 v6; // x2
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v8; // x1
  int max_length; // w8
  System_Object_array *v10; // x21
  unsigned int v11; // w23
  Il2CppClass **v12; // x8
  BattleActorControl_o *v13; // x22

  if ( (byte_4B17535 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B17535 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F97640 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_1BCAA44(ObjectsOfType_object, v8);
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
    sub_1BCAA3C(ObjectsOfType_object, v8);
  }
  return 0LL;
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17537 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectChangeTexture___c_TypeInfo, v1, v2);
    byte_4B17537 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleEffectChangeTexture___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleEffectChangeTexture___c_TypeInfo->static_fields->__9 = (struct BattleEffectChangeTexture___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleEffectChangeTexture___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleEffectChangeTexture___c___ctor(BattleEffectChangeTexture___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleEffectChangeTexture___c___ChangeTexture_b__13_0(
        BattleEffectChangeTexture___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}