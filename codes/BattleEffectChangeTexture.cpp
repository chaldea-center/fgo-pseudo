void __fastcall BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB7075 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_1BAB41C(&System_Collections_Generic_List_Renderer__TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_17388/*"body_level"*/, v6);
    byte_4AB7075 = 1;
  }
  this->fields.sourceServantId = -1;
  this->fields.isCheckUniqueId = 1;
  v7 = StringLiteral_17388/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17388/*"body_level"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.searchMeshWord, v7, v2, v3);
  v8 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v8;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.targetRendererList, (int32_t)v8, v9, v10);
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

  if ( (byte_4AB7072 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId);
    byte_4AB7072 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v5 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
      BattleEffectChangeTexture__ChangeTexture_41012932(this, v5, v6);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_41012932(
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
  int m_CancellationTokenSource; // w8
  BattleEffectChangeTexture_o *v17; // x22
  unsigned int v18; // w23
  BattleEffectChangeTexture_c **v19; // x8
  UnityEngine_Object_o *v20; // x21
  int32_t v21; // w22
  BattleEffectChangeTexture_o *v22; // x23
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  BattleEffectChangeTexture_o *v26; // x21
  __int64 v27; // x1
  int32_t v28; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Shader_o *v31; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  BattleEffectChangeTexture_o *v33; // x21
  int32_t v34; // w22
  __int64 v35; // x10
  int v36; // w8
  BattleEffectChangeTexture_o *v37; // x23
  unsigned int v38; // w26
  BattleEffectChangeTexture_c **v39; // x8
  UnityEngine_Material_o *v40; // x24
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4AB7073 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76473168, actor);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Renderer__get_Count__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Renderer__get_Item__, v6);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    sub_1BAB41C(&Method_UnityEngine_Resources_Load_Texture2D___, v8);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v9);
    sub_1BAB41C(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v10);
    sub_1BAB41C(&StringLiteral_16209/*"_Color"*/, v11);
    sub_1BAB41C(&StringLiteral_16190/*"_ChocoTex"*/, v12);
    sub_1BAB41C(&StringLiteral_4950/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v13);
    sub_1BAB41C(&StringLiteral_12762/*"Shaders/ChocoMap"*/, v14);
    this = (BattleEffectChangeTexture_o *)sub_1BAB41C(&StringLiteral_16165/*"_AddColor"*/, v15);
    byte_4AB7073 = 1;
  }
  if ( !actor )
    goto LABEL_63;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_2EBB904 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76473168);
  if ( !this )
    goto LABEL_63;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v17 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v18 = 0;
    while ( v18 < m_CancellationTokenSource )
    {
      v19 = &v17->klass + (int)v18;
      v20 = (UnityEngine_Object_o *)v19[4];
      if ( !v20 )
        goto LABEL_63;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v19[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v20, 0LL);
        if ( !this )
          goto LABEL_63;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_62079704(
                                                (System_String_o *)this,
                                                v4->fields.searchMeshWord,
                                                0LL);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      m_CancellationTokenSource = (int)v17->fields.m_CancellationTokenSource;
      if ( (int)++v18 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_65:
    sub_1BAB680(this, actor);
  }
LABEL_13:
  v20 = 0LL;
LABEL_14:
  if ( v4->fields.targetRendererList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
      if ( !this )
        goto LABEL_63;
      v21 = 0;
      while ( v21 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v21,
                                                (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          if ( v20 )
          {
            v22 = this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v20, 0LL);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0LL);
              if ( v22 )
              {
                UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v22, (UnityEngine_Texture_o *)this, 0LL);
                this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
                ++v21;
                if ( this )
                  continue;
              }
            }
          }
        }
        goto LABEL_63;
      }
      if ( BattleActorControl__isShadowServant(actor, 0LL) )
      {
        if ( v4->fields.isCreateShadowAura )
        {
          this = (BattleEffectChangeTexture_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !this )
            goto LABEL_63;
          ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)this, 0, 0LL);
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
            goto LABEL_63;
          this = (BattleEffectChangeTexture_o *)UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
          if ( !this )
            goto LABEL_63;
          v26 = this;
          UnityEngine_Transform__SetParent(
            (UnityEngine_Transform_o *)this,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v41.fields.x = 0.0;
          v41.fields.y = 0.0;
          v41.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v26, v41, 0LL);
          if ( !byte_4AB0696 )
          {
            sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v27);
            byte_4AB0696 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v26,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
        }
        this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
        if ( !this )
          goto LABEL_63;
        v28 = 0;
        while ( v28 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v28,
                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
          if ( Item )
          {
            methodPtr_low = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
              && (UnityEngine_SkinnedMeshRenderer_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material(
                                                      (UnityEngine_Renderer_o *)Item,
                                                      0LL);
              if ( !this )
                goto LABEL_63;
              v42.fields.a = 1.0;
              v42.fields.r = 0.05;
              v42.fields.g = 0.05;
              v42.fields.b = 0.05;
              UnityEngine_Material__set_color((UnityEngine_Material_o *)this, v42, 0LL);
            }
          }
          this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
          ++v28;
          if ( !this )
            goto LABEL_63;
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v31 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4950/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_object_(
                                                (System_String_o *)StringLiteral_12762/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_2F57C2C *)Method_UnityEngine_Resources_Load_Texture2D___);
        targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
        if ( targetRendererList )
        {
          v33 = this;
          v34 = 0;
          while ( 1 )
          {
            if ( v34 >= targetRendererList->fields._size )
              return;
            this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                    targetRendererList,
                                                    v34,
                                                    (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( this )
            {
              v35 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v35
                && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v35 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(
                                                        (UnityEngine_Renderer_o *)this,
                                                        0LL);
                if ( !this )
                  goto LABEL_63;
                v36 = (int)this->fields.m_CancellationTokenSource;
                v37 = this;
                if ( v36 >= 1 )
                  break;
              }
            }
LABEL_62:
            targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
            ++v34;
            if ( !targetRendererList )
              goto LABEL_63;
          }
          v38 = 0;
          while ( v38 < v36 )
          {
            v39 = &v37->klass + (int)v38;
            v40 = (UnityEngine_Material_o *)v39[4];
            if ( !v40 )
              goto LABEL_63;
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)v39[4], v31, 0LL);
            v43.fields.r = 1.0;
            v43.fields.g = 1.0;
            v43.fields.b = 1.0;
            v43.fields.a = 1.0;
            UnityEngine_Material__SetColor(v40, (System_String_o *)StringLiteral_16209/*"_Color"*/, v43, 0LL);
            v44.fields.r = 0.0;
            v44.fields.g = 0.0;
            v44.fields.b = 0.0;
            v44.fields.a = 0.0;
            UnityEngine_Material__SetColor(v40, (System_String_o *)StringLiteral_16165/*"_AddColor"*/, v44, 0LL);
            UnityEngine_Material__SetTexture(
              v40,
              (System_String_o *)StringLiteral_16190/*"_ChocoTex"*/,
              (UnityEngine_Texture_o *)v33,
              0LL);
            v36 = (int)v37->fields.m_CancellationTokenSource;
            if ( (int)++v38 >= v36 )
              goto LABEL_62;
          }
          goto LABEL_65;
        }
LABEL_63:
        sub_1BAB678(this, actor);
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

  if ( (byte_4AB7071 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    byte_4AB7071 = 1;
  }
  targetRendererList = this->fields.targetRendererList;
  if ( targetRendererList && targetRendererList->fields._size >= 1 )
  {
    if ( this->fields.isNPEffect )
    {
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (UnityEngine_GameObject_o *)Instance[4].klass) == 0LL )
        sub_1BAB678(Instance, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_41012932(this, (BattleActorControl_o *)Component_object, v11);
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
              sub_1BAB680(v12, v13);
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

  if ( (byte_4AB7074 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB7074 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F4827C *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_1BAB680(ObjectsOfType_object, v7);
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
    sub_1BAB678(ObjectsOfType_object, v7);
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