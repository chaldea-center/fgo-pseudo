void __fastcall BattleEffectChangeTexture___ctor(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5C46C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Renderer__TypeInfo);
    sub_1B885B0(&StringLiteral_17358/*"body_level"*/);
    byte_4A5C46C = 1;
  }
  this->fields.sourceServantId = -1;
  this->fields.isCheckUniqueId = 1;
  v5 = StringLiteral_17358/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17358/*"body_level"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.searchMeshWord, v5, v2, v3);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.targetRendererList = (struct System_Collections_Generic_List_Renderer__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetRendererList, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleEffectChangeTexture__ChangeTexture(
        BattleEffectChangeTexture_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  BattleActorControl_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A5C469 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C469 = 1;
  }
  if ( (servantId & 0x80000000) == 0 )
  {
    v5 = BattleEffectChangeTexture__GetModelBattleActor(this, servantId, method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
      BattleEffectChangeTexture__ChangeTexture_40617028(this, v5, v6);
  }
}


void __fastcall BattleEffectChangeTexture__ChangeTexture_40617028(
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
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x22
  BattleEffectChangeTexture_o *v15; // x21
  int32_t v16; // w21
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Shader_o *v19; // x20
  System_Collections_Generic_List_object__o *targetRendererList; // x8
  BattleEffectChangeTexture_o *v21; // x21
  int32_t v22; // w22
  __int64 v23; // x10
  int v24; // w8
  BattleEffectChangeTexture_o *v25; // x23
  unsigned int v26; // w26
  BattleEffectChangeTexture_c **v27; // x8
  UnityEngine_Material_o *v28; // x24
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4A5C46A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76107592);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&UnityEngine_SkinnedMeshRenderer_TypeInfo);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    sub_1B885B0(&StringLiteral_4953/*"Custom/SoftEdgeUnlitCutZ_Choco"*/);
    sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    this = (BattleEffectChangeTexture_o *)sub_1B885B0(&StringLiteral_16135/*"_AddColor"*/);
    byte_4A5C46A = 1;
  }
  if ( !actor )
    goto LABEL_63;
  this = (BattleEffectChangeTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                          (UnityEngine_Component_o *)actor,
                                          1,
                                          (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76107592);
  if ( !this )
    goto LABEL_63;
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
        goto LABEL_63;
      this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v8[4], 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleEffectChangeTexture_o *)UnityEngine_Object__get_name(v9, 0LL);
        if ( !this )
          goto LABEL_63;
        this = (BattleEffectChangeTexture_o *)System_String__IndexOf_61738608(
                                                (System_String_o *)this,
                                                v4->fields.searchMeshWord,
                                                0LL);
        if ( ((unsigned int)this & 0x80000000) == 0 )
          goto LABEL_14;
      }
      m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
      if ( (int)++v7 >= m_CancellationTokenSource )
        goto LABEL_13;
    }
LABEL_65:
    sub_1B88814(this, actor);
  }
LABEL_13:
  v9 = 0LL;
LABEL_14:
  if ( v4->fields.targetRendererList )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
      if ( !this )
        goto LABEL_63;
      v10 = 0;
      while ( v10 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                v10,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( this )
        {
          this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          if ( v9 )
          {
            v11 = this;
            this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v9, 0LL);
            if ( this )
            {
              this = (BattleEffectChangeTexture_o *)UnityEngine_Material__get_mainTexture(
                                                      (UnityEngine_Material_o *)this,
                                                      0LL);
              if ( v11 )
              {
                UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v11, (UnityEngine_Texture_o *)this, 0LL);
                this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
                ++v10;
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
          this = (BattleEffectChangeTexture_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
          v15 = this;
          UnityEngine_Transform__SetParent(
            (UnityEngine_Transform_o *)this,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v29.fields.x = 0.0;
          v29.fields.y = 0.0;
          v29.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v15, v29, 0LL);
          if ( !byte_4A55CE6 )
          {
            sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE6 = 1;
          }
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v15,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
        }
        this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
        if ( !this )
          goto LABEL_63;
        v16 = 0;
        while ( v16 < SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this,
                   v16,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
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
              v30.fields.a = 1.0;
              v30.fields.r = 0.05;
              v30.fields.g = 0.05;
              v30.fields.b = 0.05;
              UnityEngine_Material__set_color((UnityEngine_Material_o *)this, v30, 0LL);
            }
          }
          this = (BattleEffectChangeTexture_o *)v4->fields.targetRendererList;
          ++v16;
          if ( !this )
            goto LABEL_63;
        }
      }
      if ( BattleActorControl__isChocoServant(actor, 0LL) )
      {
        v19 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4953/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
        this = (BattleEffectChangeTexture_o *)UnityEngine_Resources__Load_object_(
                                                (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                                                (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
        targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
        if ( targetRendererList )
        {
          v21 = this;
          v22 = 0;
          while ( 1 )
          {
            if ( v22 >= targetRendererList->fields._size )
              return;
            this = (BattleEffectChangeTexture_o *)System_Collections_Generic_List_object___get_Item(
                                                    targetRendererList,
                                                    v22,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_Renderer__get_Item__);
            if ( this )
            {
              v23 = LOBYTE(UnityEngine_SkinnedMeshRenderer_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v23
                && (UnityEngine_SkinnedMeshRenderer_c *)this->klass->_2.typeHierarchy[v23 - 1] == UnityEngine_SkinnedMeshRenderer_TypeInfo )
              {
                this = (BattleEffectChangeTexture_o *)UnityEngine_Renderer__get_materials(
                                                        (UnityEngine_Renderer_o *)this,
                                                        0LL);
                if ( !this )
                  goto LABEL_63;
                v24 = (int)this->fields.m_CancellationTokenSource;
                v25 = this;
                if ( v24 >= 1 )
                  break;
              }
            }
LABEL_62:
            targetRendererList = (System_Collections_Generic_List_object__o *)v4->fields.targetRendererList;
            ++v22;
            if ( !targetRendererList )
              goto LABEL_63;
          }
          v26 = 0;
          while ( v26 < v24 )
          {
            v27 = &v25->klass + (int)v26;
            v28 = (UnityEngine_Material_o *)v27[4];
            if ( !v28 )
              goto LABEL_63;
            UnityEngine_Material__set_shader((UnityEngine_Material_o *)v27[4], v19, 0LL);
            v31.fields.r = 1.0;
            v31.fields.g = 1.0;
            v31.fields.b = 1.0;
            v31.fields.a = 1.0;
            UnityEngine_Material__SetColor(v28, (System_String_o *)StringLiteral_16179/*"_Color"*/, v31, 0LL);
            v32.fields.r = 0.0;
            v32.fields.g = 0.0;
            v32.fields.b = 0.0;
            v32.fields.a = 0.0;
            UnityEngine_Material__SetColor(v28, (System_String_o *)StringLiteral_16135/*"_AddColor"*/, v32, 0LL);
            UnityEngine_Material__SetTexture(
              v28,
              (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/,
              (UnityEngine_Texture_o *)v21,
              0LL);
            v24 = (int)v25->fields.m_CancellationTokenSource;
            if ( (int)++v26 >= v24 )
              goto LABEL_62;
          }
          goto LABEL_65;
        }
LABEL_63:
        sub_1B8880C(this, actor);
      }
    }
  }
}


void __fastcall BattleEffectChangeTexture__Execute(BattleEffectChangeTexture_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_List_Renderer__o *targetRendererList; // x8
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct System_Int32_array *sourceServantIds; // x20
  __int64 v13; // x8
  unsigned __int64 v14; // x21

  if ( (byte_4A5C468 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4A5C468 = 1;
  }
  targetRendererList = this->fields.targetRendererList;
  if ( targetRendererList && targetRendererList->fields._size >= 1 )
  {
    if ( this->fields.isNPEffect )
    {
      Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Instance || (Instance = (UnityEngine_GameObject_o *)Instance[4].klass) == 0LL )
        sub_1B8880C(Instance, v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Instance,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        BattleEffectChangeTexture__ChangeTexture_40617028(this, (BattleActorControl_o *)Component_object, v8);
    }
    else
    {
      BattleEffectChangeTexture__ChangeTexture(this, this->fields.sourceServantId, v2);
      sourceServantIds = this->fields.sourceServantIds;
      if ( sourceServantIds )
      {
        v13 = *(_QWORD *)&sourceServantIds->max_length;
        if ( (int)v13 >= 1 )
        {
          v14 = 0LL;
          do
          {
            if ( v14 >= (unsigned int)v13 )
              sub_1B88814(v9, v10);
            BattleEffectChangeTexture__ChangeTexture(this, sourceServantIds->m_Items[v14 + 1], v11);
            LODWORD(v13) = sourceServantIds->max_length;
            ++v14;
          }
          while ( (__int64)v14 < (int)v13 );
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

  if ( (byte_4A5C46B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5C46B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F03700 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
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
        sub_1B88814(ObjectsOfType_object, v6);
      v10 = &v8->obj.klass + (int)v9;
      v11 = (BattleActorControl_o *)v10[4];
      if ( !v11 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v10[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!this->fields.isCheckUniqueId || v11->fields.uniqueID == this->fields.targetId) )
      {
        return v11;
      }
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_1B8880C(ObjectsOfType_object, v6);
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