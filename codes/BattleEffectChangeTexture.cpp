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
  int64_t v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B384FC & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_1BD3458(&System_Collections_Generic_List_Renderer__TypeInfo, v9);
    sub_1BD3458(&StringLiteral_17554/*"body_level"*/, v10);
    byte_4B384FC = 1;
  }
  this->fields.sourceServantId = -1;
  this->fields.isCheckUniqueId = 1;
  v11 = StringLiteral_17554/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17554/*"body_level"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.searchMeshWord, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v12;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.targetRendererList,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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

  if ( (byte_4B384F9 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId);
    byte_4B384F9 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v5 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
      BattleEffectChangeTexture__ChangeTexture_41457576(this, v5, v6);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_41457576(
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
  int m_CancellationTokenSource; // w8
  BattleEffectChangeTexture_o *v27; // x22
  unsigned int v28; // w23
  BattleEffectChangeTexture_c **v29; // x8
  UnityEngine_Object_o *v30; // x21
  int32_t v31; // w22
  BattleEffectChangeTexture_o *v32; // x23
  int32_t effectId; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x22
  BattleEffectChangeTexture___c_c *v35; // x8
  System_Func_object__object__o *_9__13_0; // x23
  Il2CppObject *v37; // x24
  struct BattleEffectChangeTexture___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v45; // x0
  NpcServantDisplayTypeDetailEntity_o *v46; // x22
  System_Collections_Generic_IEnumerable_Material__o *v47; // x23
  int32_t v48; // w21
  Il2CppObject *Item; // x22
  __int64 methodPtr_low; // x10
  BattleDataDefine_c *v51; // x8
  BattleEffectChangeTexture_o *v52; // x22
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  BattleEffectChangeTexture_o *v56; // x23
  __int64 v57; // x1
  System_Collections_Generic_List_object__o *v58; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  NpcServantDisplayTypeDetailEntity_o *v69; // x21
  UnityEngine_Shader_o *v70; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  BattleEffectChangeTexture_o *v72; // x21
  int32_t v73; // w22
  __int64 v74; // x10
  int v75; // w8
  BattleEffectChangeTexture_o *v76; // x23
  unsigned int v77; // w26
  BattleEffectChangeTexture_c **v78; // x8
  UnityEngine_Material_o *v79; // x24
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4B384FA & 1) == 0 )
  {
    sub_1BD3458(&BattleDataDefine_TypeInfo, actor);
    sub_1BD3458(&BattleEffectUtility_TypeInfo, v5);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76991544, v6);
    sub_1BD3458(&Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___, v7);
    sub_1BD3458(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___, v8);
    sub_1BD3458(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_Renderer__get_Count__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_Renderer__get_Item__, v13);
    sub_1BD3458(&System_Collections_Generic_List_GameObject__TypeInfo, v14);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v15);
    sub_1BD3458(&Method_UnityEngine_Resources_Load_Texture2D___, v16);
    sub_1BD3458(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v17);
    sub_1BD3458(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v18);
    sub_1BD3458(&Method_BattleEffectChangeTexture___c__ChangeTexture_b__13_0__, v19);
    sub_1BD3458(&BattleEffectChangeTexture___c_TypeInfo, v20);
    sub_1BD3458(&StringLiteral_16365/*"_Color"*/, v21);
    sub_1BD3458(&StringLiteral_16346/*"_ChocoTex"*/, v22);
    sub_1BD3458(&StringLiteral_5030/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v23);
    sub_1BD3458(&StringLiteral_12912/*"Shaders/ChocoMap"*/, v24);
    this = (BattleEffectChangeTexture_o *)sub_1BD3458(&StringLiteral_16321/*"_AddColor"*/, v25);
    byte_4B384FA = 1;
  }
  entity = 0LL;
  if ( !actor )
    goto LABEL_88;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_2F28C14 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76991544);
  if ( !this )
    goto LABEL_88;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v27 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v28 = 0;
    while ( v28 < m_CancellationTokenSource )
    {
      v29 = &v27->klass + (int)v28;
      v30 = (UnityEngine_Object_o *)v29[4];
      if ( !v30 )
        goto LABEL_88;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v29[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v30, 0LL);
        if ( !this )
          goto LABEL_88;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_62556824(
                                                (System_String_o *)this,
                                                v4->fields.searchMeshWord,
                                                0LL);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      m_CancellationTokenSource = (int)v27->fields.m_CancellationTokenSource;
      if ( (int)++v28 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_90:
    sub_1BD36BC(this, actor);
  }
LABEL_13:
  v30 = 0LL;
LABEL_14:
  if ( v4->fields.targetRendererList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
    {
      this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
      if ( !this )
        goto LABEL_88;
      v31 = 0;
      while ( v31 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v31,
                                                (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          if ( v30 )
          {
            v32 = this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v30, 0LL);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0LL);
              if ( v32 )
              {
                UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v32, (UnityEngine_Texture_o *)this, 0LL);
                this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
                ++v31;
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
          v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                       (System_Collections_IEnumerable_o *)v4->fields.targetRendererList,
                                                                       (const MethodInfo_2F5A2A0 *)Method_System_Linq_Enumerable_OfType_SkinnedMeshRenderer___);
          v35 = BattleEffectChangeTexture___c_TypeInfo;
          if ( !BattleEffectChangeTexture___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectChangeTexture___c_TypeInfo);
            v35 = BattleEffectChangeTexture___c_TypeInfo;
          }
          _9__13_0 = (System_Func_object__object__o *)v35->static_fields->__9__13_0;
          if ( !_9__13_0 )
          {
            if ( !v35->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v35);
              v35 = BattleEffectChangeTexture___c_TypeInfo;
            }
            v37 = (Il2CppObject *)v35->static_fields->__9;
            _9__13_0 = (System_Func_object__object__o *)sub_1BD36A4(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
            System_Func_object__object____ctor(
              _9__13_0,
              v37,
              Method_BattleEffectChangeTexture___c__ChangeTexture_b__13_0__,
              0LL);
            static_fields = BattleEffectChangeTexture___c_TypeInfo->static_fields;
            static_fields->__9__13_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__13_0;
            sub_1BD33FC(
              (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
              (int64_t)_9__13_0,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
          }
          v45 = System_Linq_Enumerable__SelectMany_object__object_(
                  v34,
                  (System_Func_TSource__IEnumerable_TResult___o *)_9__13_0,
                  (const MethodInfo_2F653A0 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
          v46 = entity;
          v47 = (System_Collections_Generic_IEnumerable_Material__o *)v45;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__SetShadowServantColorToMaterials(v47, v46, 0LL);
        }
        else
        {
          this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
          if ( !this )
            goto LABEL_88;
          v48 = 0;
          while ( v48 < SLODWORD(this->fields.m_CancellationTokenSource) )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     v48,
                     (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
                  v51 = BattleDataDefine_TypeInfo;
                  v52 = this;
                  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    v51 = BattleDataDefine_TypeInfo;
                  }
                  if ( !v52 )
                    goto LABEL_88;
                  UnityEngine_Material__set_color(
                    (UnityEngine_Material_o *)v52,
                    v51->static_fields->ShadowServantDefaultColor,
                    0LL);
                }
              }
            }
            this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
            ++v48;
            if ( !this )
              goto LABEL_88;
          }
          effectId = 0;
        }
        if ( v4->fields.isCreateShadowAura )
        {
          this = (BattleEffectChangeTexture_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v56 = this;
          UnityEngine_Transform__SetParent(
            (UnityEngine_Transform_o *)this,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v81.fields.x = 0.0;
          v81.fields.y = 0.0;
          v81.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v56, v81, 0LL);
          if ( !byte_4B31946 )
          {
            sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v57);
            byte_4B31946 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v56,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          v58 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v58,
            (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( !v58 )
            goto LABEL_88;
          items = v58->fields._items;
          v66 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v58->fields._version;
          if ( !items )
            goto LABEL_88;
          size = v58->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v58,
              (Il2CppObject *)ShadowEffect,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v68 = &items->obj.klass + size;
            v58->fields._size = size + 1;
            v68[4] = (Il2CppClass *)ShadowEffect;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)ShadowEffect, v59, v60, v61, v62, v63, v64);
          }
          v69 = entity;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__SetColorToShadowEffectParticles(
            (System_Collections_Generic_List_GameObject__o *)v58,
            v69,
            0LL);
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v70 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5030/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_object_(
                                                (System_String_o *)StringLiteral_12912/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_2FC6478 *)Method_UnityEngine_Resources_Load_Texture2D___);
        targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
        if ( targetRendererList )
        {
          v72 = this;
          v73 = 0;
          while ( 1 )
          {
            if ( v73 >= targetRendererList->fields._size )
              return;
            this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                    targetRendererList,
                                                    v73,
                                                    (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( this )
            {
              v74 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v74
                && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v74 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(
                                                        (UnityEngine_Renderer_o *)this,
                                                        0LL);
                if ( !this )
                  goto LABEL_88;
                v75 = (int)this->fields.m_CancellationTokenSource;
                v76 = this;
                if ( v75 >= 1 )
                  break;
              }
            }
LABEL_87:
            targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
            ++v73;
            if ( !targetRendererList )
              goto LABEL_88;
          }
          v77 = 0;
          while ( v77 < v75 )
          {
            v78 = &v76->klass + (int)v77;
            v79 = (UnityEngine_Material_o *)v78[4];
            if ( !v79 )
              goto LABEL_88;
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)v78[4], v70, 0LL);
            v82.fields.r = 1.0;
            v82.fields.g = 1.0;
            v82.fields.b = 1.0;
            v82.fields.a = 1.0;
            UnityEngine_Material__SetColor(v79, (System_String_o *)StringLiteral_16365/*"_Color"*/, v82, 0LL);
            v83.fields.r = 0.0;
            v83.fields.g = 0.0;
            v83.fields.b = 0.0;
            v83.fields.a = 0.0;
            UnityEngine_Material__SetColor(v79, (System_String_o *)StringLiteral_16321/*"_AddColor"*/, v83, 0LL);
            UnityEngine_Material__SetTexture(
              v79,
              (System_String_o *)StringLiteral_16346/*"_ChocoTex"*/,
              (UnityEngine_Texture_o *)v72,
              0LL);
            v75 = (int)v76->fields.m_CancellationTokenSource;
            if ( (int)++v77 >= v75 )
              goto LABEL_87;
          }
          goto LABEL_90;
        }
LABEL_88:
        sub_1BD36B4(this, actor);
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

  if ( (byte_4B384F8 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    byte_4B384F8 = 1;
  }
  targetRendererList = this->fields.targetRendererList;
  if ( targetRendererList && targetRendererList->fields._size >= 1 )
  {
    if ( this->fields.isNPEffect )
    {
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (UnityEngine_GameObject_o *)Instance[4].klass) == 0LL )
        sub_1BD36B4(Instance, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_41457576(this, (BattleActorControl_o *)Component_object, v11);
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
              sub_1BD36BC(v12, v13);
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

  if ( (byte_4B384FB & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    byte_4B384FB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2FB6AC8 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_1BD36BC(ObjectsOfType_object, v7);
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
    sub_1BD36B4(ObjectsOfType_object, v7);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B384FD & 1) == 0 )
  {
    sub_1BD3458(&BattleEffectChangeTexture___c_TypeInfo, v1);
    byte_4B384FD = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(BattleEffectChangeTexture___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleEffectChangeTexture___c_TypeInfo->static_fields->__9 = (struct BattleEffectChangeTexture___c_o *)v2;
  sub_1BD33FC(
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


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleEffectChangeTexture___c___ChangeTexture_b__13_0(
        BattleEffectChangeTexture___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}