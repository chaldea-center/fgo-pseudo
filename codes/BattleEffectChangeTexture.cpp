void __fastcall BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FD6E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_Renderer__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_17288/*"body_level"*/, v6);
    byte_49FD6E6 = 1;
  }
  this->fields.sourceServantId = -1;
  this->fields.isCheckUniqueId = 1;
  v7 = StringLiteral_17288/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17288/*"body_level"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.searchMeshWord, v7, v2, v3);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Renderer__TypeInfo,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetRendererList, (int32_t)v10, v11, v12);
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

  if ( (byte_49FD6E3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&servantId);
    byte_49FD6E3 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v5 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
      BattleEffectChangeTexture__ChangeTexture_40282000(this, v5, v6);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_40282000(
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
  int m_CancellationTokenSource; // w8
  BattleEffectChangeTexture_o *v18; // x22
  unsigned int v19; // w23
  BattleEffectChangeTexture_c **v20; // x8
  UnityEngine_Object_o *v21; // x21
  int32_t v22; // w22
  BattleEffectChangeTexture_o *v23; // x23
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  BattleEffectChangeTexture_o *v27; // x21
  __int64 v28; // x1
  int32_t v29; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Shader_o *v32; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  BattleEffectChangeTexture_o *v34; // x21
  int32_t v35; // w22
  __int64 v36; // x10
  int v37; // w8
  BattleEffectChangeTexture_o *v38; // x23
  unsigned int v39; // w26
  BattleEffectChangeTexture_c **v40; // x8
  UnityEngine_Material_o *v41; // x24
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_49FD6E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____75728096, actor);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Item__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_Texture2D___, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v9);
    sub_1B640C8(&UnityEngine_SkinnedMeshRenderer_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_16110/*"_Color"*/, v11);
    sub_1B640C8(&StringLiteral_16091/*"_ChocoTex"*/, v12);
    sub_1B640C8(&StringLiteral_4930/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v13);
    sub_1B640C8(&StringLiteral_12673/*"Shaders/ChocoMap"*/, v14);
    this = (BattleEffectChangeTexture_o *)sub_1B640C8(&StringLiteral_16066/*"_AddColor"*/, v15);
    byte_49FD6E4 = 1;
  }
  if ( !actor )
    goto LABEL_63;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____75728096);
  if ( !this )
    goto LABEL_63;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v18 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v19 = 0;
    while ( v19 < m_CancellationTokenSource )
    {
      v20 = &v18->klass + (int)v19;
      v21 = (UnityEngine_Object_o *)v20[4];
      if ( !v21 )
        goto LABEL_63;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v20[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v21, 0LL);
        if ( !this )
          goto LABEL_63;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_61406964(
                                                (System_String_o *)this,
                                                v4->fields.searchMeshWord,
                                                0LL);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      m_CancellationTokenSource = (int)v18->fields.m_CancellationTokenSource;
      if ( (int)++v19 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_65:
    sub_1B6432C(this, v16);
  }
LABEL_13:
  v21 = 0LL;
LABEL_14:
  if ( v4->fields.targetRendererList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
      if ( !this )
        goto LABEL_63;
      v22 = 0;
      while ( v22 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v22,
                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          if ( v21 )
          {
            v23 = this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v21, 0LL);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0LL);
              if ( v23 )
              {
                UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v23, (UnityEngine_Texture_o *)this, 0LL);
                this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
                ++v22;
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
          this = (BattleEffectChangeTexture_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
          v27 = this;
          UnityEngine_Transform__SetParent(
            (UnityEngine_Transform_o *)this,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v42.fields.x = 0.0;
          v42.fields.y = 0.0;
          v42.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v27, v42, 0LL);
          if ( !byte_49F7116 )
          {
            sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v28);
            byte_49F7116 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v27,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
        }
        this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
        if ( !this )
          goto LABEL_63;
        v29 = 0;
        while ( v29 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v29,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
              v43.fields.a = 1.0;
              v43.fields.r = 0.05;
              v43.fields.g = 0.05;
              v43.fields.b = 0.05;
              UnityEngine_Material__set_color((UnityEngine_Material_o *)this, v43, 0LL);
            }
          }
          this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
          ++v29;
          if ( !this )
            goto LABEL_63;
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v32 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4930/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_object_(
                                                (System_String_o *)StringLiteral_12673/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_Texture2D___);
        targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
        if ( targetRendererList )
        {
          v34 = this;
          v35 = 0;
          while ( 1 )
          {
            if ( v35 >= targetRendererList->fields._size )
              return;
            this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                    targetRendererList,
                                                    v35,
                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( this )
            {
              v36 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v36
                && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v36 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(
                                                        (UnityEngine_Renderer_o *)this,
                                                        0LL);
                if ( !this )
                  goto LABEL_63;
                v37 = (int)this->fields.m_CancellationTokenSource;
                v38 = this;
                if ( v37 >= 1 )
                  break;
              }
            }
LABEL_62:
            targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
            ++v35;
            if ( !targetRendererList )
              goto LABEL_63;
          }
          v39 = 0;
          while ( v39 < v37 )
          {
            v40 = &v38->klass + (int)v39;
            v41 = (UnityEngine_Material_o *)v40[4];
            if ( !v41 )
              goto LABEL_63;
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)v40[4], v32, 0LL);
            v44.fields.r = 1.0;
            v44.fields.g = 1.0;
            v44.fields.b = 1.0;
            v44.fields.a = 1.0;
            UnityEngine_Material__SetColor(v41, (System_String_o *)StringLiteral_16110/*"_Color"*/, v44, 0LL);
            v45.fields.r = 0.0;
            v45.fields.g = 0.0;
            v45.fields.b = 0.0;
            v45.fields.a = 0.0;
            UnityEngine_Material__SetColor(v41, (System_String_o *)StringLiteral_16066/*"_AddColor"*/, v45, 0LL);
            UnityEngine_Material__SetTexture(
              v41,
              (System_String_o *)StringLiteral_16091/*"_ChocoTex"*/,
              (UnityEngine_Texture_o *)v34,
              0LL);
            v37 = (int)v38->fields.m_CancellationTokenSource;
            if ( (int)++v39 >= v37 )
              goto LABEL_62;
          }
          goto LABEL_65;
        }
LABEL_63:
        sub_1B64324(this);
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
  Il2CppObject *Component_object; // x20
  const MethodInfo *v10; // x2
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct System_Int32_array *sourceServantIds; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x21

  if ( (byte_49FD6E2 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Renderer__get_Count__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    byte_49FD6E2 = 1;
  }
  targetRendererList = this->fields.targetRendererList;
  if ( targetRendererList && targetRendererList->fields._size >= 1 )
  {
    if ( this->fields.isNPEffect )
    {
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (UnityEngine_GameObject_o *)Instance[4].klass) == 0LL )
        sub_1B64324(Instance);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_40282000(this, (BattleActorControl_o *)Component_object, v10);
    }
    else
    {
      BattleEffectChangeTexture__ChangeTexture(this, this->fields.sourceServantId, v2);
      sourceServantIds = this->fields.sourceServantIds;
      if ( sourceServantIds )
      {
        v15 = *(_QWORD *)&sourceServantIds->max_length;
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)v15 )
              sub_1B6432C(v11, v12);
            BattleEffectChangeTexture__ChangeTexture(this, sourceServantIds->m_Items[v16 + 1], v13);
            LODWORD(v15) = sourceServantIds->max_length;
            ++v16;
          }
          while ( (__int64)v16 < (int)v15 );
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

  if ( (byte_49FD6E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FD6E5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2EBBB44 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_1B6432C(ObjectsOfType_object, v7);
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
    sub_1B64324(ObjectsOfType_object);
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