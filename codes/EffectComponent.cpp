void __fastcall EffectComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4BDF13B & 1) == 0 )
  {
    sub_1C21E38(&EffectComponent_TypeInfo);
    byte_4BDF13B = 1;
  }
  EffectComponent_TypeInfo->static_fields->_RenderQueue = 4000;
}


void __fastcall EffectComponent___ctor(EffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #5.0 }
  *(_QWORD *)&this->fields.endtime = _D0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectComponent__EndLoadAsset(EffectComponent_o *this, AssetData_o *loadData, const MethodInfo *method)
{
  EffectComponent_o *v4; // x20
  struct UITexture_o *texture; // x21

  v4 = this;
  if ( (byte_4BDF139 & 1) == 0 )
  {
    this = (EffectComponent_o *)sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    byte_4BDF139 = 1;
  }
  if ( !loadData
    || (this = (EffectComponent_o *)AssetData__GetObjectNameList(loadData, 0LL)) == 0LL
    || (texture = v4->fields.texture,
        this = (EffectComponent_o *)AssetData__GetObject_object__49880776(
                                      loadData,
                                      v4->fields.filename,
                                      (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312),
        !texture) )
  {
    sub_1C22094(this, loadData);
  }
  ((void (__fastcall *)(struct UITexture_o *, EffectComponent_o *, Il2CppMethodPointer))texture->klass->vtable._27_set_mainTexture.method)(
    texture,
    this,
    texture->klass->vtable._28_get_shader.methodPtr);
}


UISprite_o *__fastcall EffectComponent__GetSpriteByIndex(
        EffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4BDF136 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_UISprite___);
    byte_4BDF136 = 1;
  }
  return (UISprite_o *)BasicHelper__IndexValue_object_(
                         (System_Object_array *)this->fields.spriteArray,
                         index,
                         0LL,
                         (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_UISprite___);
}


void __fastcall EffectComponent__Init(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  System_Object_array *ComponentsInChildren_object__50336088; // x21
  int32_t v7; // w20
  UnityEngine_Material_o *v8; // x21

  if ( (byte_4BDF130 & 1) == 0 )
  {
    sub_1C21E38(&EffectComponent_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    byte_4BDF130 = 1;
  }
  if ( this->fields.uieffect )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    ComponentsInChildren_object__50336088 = UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                              gameObject,
                                              (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                               gameObject,
                                               (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( !((unsigned __int64)ComponentsInChildren_object__50336088 | (unsigned __int64)gameObject) )
    {
      if ( !transform )
        goto LABEL_18;
      if ( UnityEngine_Transform__get_childCount(transform, 0LL) >= 1 )
      {
        v7 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(transform, v7, 0LL);
          if ( !gameObject )
            break;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)gameObject,
                                                     0LL);
          v8 = (UnityEngine_Material_o *)gameObject;
          if ( !EffectComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo);
          if ( !v8 )
            break;
          UnityEngine_Material__set_renderQueue(v8, EffectComponent_TypeInfo->static_fields->_RenderQueue, 0LL);
          if ( ++v7 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
            return;
        }
LABEL_18:
        sub_1C22094(gameObject, v5);
      }
    }
  }
}


void __fastcall EffectComponent__OnDestroy(EffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _QWORD *materials; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  _QWORD *v7; // x20
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *texture; // x20
  UnityEngine_Object_o *v11; // x0

  if ( (byte_4BDF132 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF132 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  materials = (_QWORD *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)materials & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_23;
    if ( UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)Component_object, 0LL) )
    {
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)Component_object, 0LL);
      if ( !materials )
        goto LABEL_23;
      v6 = materials[3];
      v7 = materials;
      if ( (int)v6 >= 1 )
      {
        v8 = 0LL;
        do
        {
          if ( v8 >= (unsigned int)v6 )
            sub_1C2209C(materials, v5);
          v9 = (UnityEngine_Object_o *)v7[v8 + 4];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_70869800(v9, 0LL);
          LODWORD(v6) = *((_DWORD *)v7 + 6);
          ++v8;
        }
        while ( (__int64)v8 < (int)v6 );
      }
    }
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(texture, 0LL, 0LL) )
  {
    materials = &this->fields.texture->klass;
    if ( materials )
    {
      v11 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*materials + 728LL))(
                                      materials,
                                      *(_QWORD *)(*materials + 736LL));
      UnityEngine_Resources__UnloadAsset(v11, 0LL);
      materials = &this->fields.texture->klass;
      if ( materials )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*materials + 744LL))(
          materials,
          0LL,
          *(_QWORD *)(*materials + 752LL));
        return;
      }
    }
LABEL_23:
    sub_1C22094(materials, v5);
  }
}


void __fastcall EffectComponent__OnSpawn(EffectComponent_o *this, const MethodInfo *method)
{
  this->fields.totaltime = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EffectComponent__SetBattleActor(
        EffectComponent_o *this,
        BattleActorControl_o *actor,
        int32_t buffEffectId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleActorControl_o **p_battleActor; // x20
  __int64 v10; // x1
  BattleActorControl_o *v11; // x0

  this->fields.battleActor = actor;
  p_battleActor = &this->fields.battleActor;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.battleActor,
    (int64_t)actor,
    *(int64_t *)&buffEffectId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v11 = *p_battleActor;
  *((_DWORD *)p_battleActor + 2) = buffEffectId;
  if ( !v11 )
    sub_1C22094(0LL, v10);
  BattleActorControl__AddReservedEffectBuffEffectId(v11, buffEffectId, 0LL);
}


void __fastcall EffectComponent__Start(EffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double v8; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  struct Spawner_o **v12; // x8
  struct Spawner_o *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_4BDF131 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_Spawner__getInstance__);
    byte_4BDF131 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C73D14(v8);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C73D14(v8);
  v12 = *(struct Spawner_o ***)(v11 + 184);
  v13 = *v12;
  this->fields.spawner = *v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.spawner, (int64_t)v13, v2, v3, v4, v5, v6, v7);
  EffectComponent__Init(this, v14);
}


void __fastcall EffectComponent__StartActorBuffEffect(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleActorControl_o *v5; // x0

  if ( (byte_4BDF13A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF13A = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    BattleActorControl__ActiveReservedBuffEffect(v5, this->fields.effectBuffEffectId, 0LL);
  }
}


void __fastcall EffectComponent__Update(EffectComponent_o *this, const MethodInfo *method)
{
  float totaltime; // s8
  const MethodInfo *v4; // x1
  float deltaTime; // s0
  float endtime; // s1
  float losttime; // s2
  float v8; // s0
  UnityEngine_Object_o *spawner; // x20
  Spawner_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x0
  __int64 v12; // x1
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  __int64 v14; // x8
  unsigned __int64 v15; // x21
  UnityEngine_Object_o *v16; // x19
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BDF133 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF133 = 1;
  }
  if ( this->fields.loop )
    return;
  totaltime = this->fields.totaltime;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  endtime = this->fields.endtime;
  losttime = this->fields.losttime;
  v8 = totaltime + deltaTime;
  this->fields.totaltime = v8;
  if ( (float)(endtime + losttime) < v8 )
  {
    EffectComponent__StartActorBuffEffect(this, v4);
    spawner = (UnityEngine_Object_o *)this->fields.spawner;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
      return;
    }
    v10 = this->fields.spawner;
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v10 )
    {
      Spawner__Despawn(v10, v11, 1, 0LL);
      return;
    }
LABEL_27:
    sub_1C22094(v11, v12);
  }
  if ( endtime > v8 )
    return;
  EffectComponent__StartActorBuffEffect(this, v4);
  particlelist = this->fields.particlelist;
  if ( !particlelist )
    goto LABEL_27;
  v14 = *(_QWORD *)&particlelist->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
        sub_1C2209C(v11, v12);
      v16 = (UnityEngine_Object_o *)particlelist->m_Items[v15];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_27;
        UnityEngine_ParticleSystem__Stop_71150228((UnityEngine_ParticleSystem_o *)v16, 0LL);
      }
      LODWORD(v14) = particlelist->max_length;
      ++v15;
    }
    while ( (__int64)v15 < (int)v14 );
  }
}


void __fastcall EffectComponent__onFigureAssetLoad(EffectComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o *FigureLoadCallback; // x8

  FigureLoadCallback = this->fields.FigureLoadCallback;
  if ( FigureLoadCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))FigureLoadCallback->fields.m_target)(
      FigureLoadCallback->fields.original_method_info,
      *(_QWORD *)&FigureLoadCallback->fields.extra_arg);
}


void __fastcall EffectComponent__replaceFigure(
        EffectComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF137 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_13911/*"Texture"*/);
    byte_4BDF137 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_13911/*"Texture"*/, 1, 0LL);
  if ( !NodeFromName )
    goto LABEL_18;
  v8 = NodeFromName;
  NodeFromName = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)NodeFromName,
                                              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0LL);
  if ( !obj )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  NodeFromName = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
  if ( ((unsigned __int8)NodeFromName & 1) != 0 )
  {
    if ( Component_object )
    {
      NodeFromName = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
      if ( NodeFromName )
      {
        UnityEngine_Transform__set_parent(NodeFromName, v8, 0LL);
        NodeFromName = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        if ( NodeFromName )
        {
          v17.fields.y = 475.0;
          v17.fields.z = 0.0;
          v17.fields.x = -280.0;
          UnityEngine_Transform__set_localPosition(NodeFromName, v17, 0LL);
          NodeFromName = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
          if ( NodeFromName )
          {
            v18.fields.x = 0.0;
            v18.fields.y = 0.0;
            v18.fields.z = 0.0;
            UnityEngine_Transform__set_localEulerAngles(NodeFromName, v18, 0LL);
            NodeFromName = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
            v10 = NodeFromName;
            if ( !byte_4BD6BB6 )
            {
              NodeFromName = (UnityEngine_Transform_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
              byte_4BD6BB6 = 1;
            }
            if ( v10 )
            {
              UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)Component_object, 200, 0LL);
              this->fields.myStandFigure = (struct UIStandFigureR_o *)Component_object;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&this->fields.myStandFigure,
                (int64_t)Component_object,
                v11,
                v12,
                v13,
                v14,
                v15,
                v16);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C22094(NodeFromName, v7);
  }
}


void __fastcall EffectComponent__setFigure(
        EffectComponent_o *this,
        int32_t svtId,
        int32_t limit,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *NodeFromName; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x23
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v20; // x23
  struct UIStandFigureR_o *RenderPrefab_39223696; // x0
  struct UIStandFigureR_o **p_myStandFigure; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Transform_o *v29; // x20
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF138 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C21E38(&Method_EffectComponent_onFigureAssetLoad__);
    sub_1C21E38(&StringLiteral_13911/*"Texture"*/);
    byte_4BDF138 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                              transform,
                                              (System_String_o *)StringLiteral_13911/*"Texture"*/,
                                              1,
                                              0LL);
  if ( !NodeFromName )
    goto LABEL_15;
  v12 = NodeFromName;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              NodeFromName,
                                              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0LL);
  this->fields.FigureLoadCallback = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.FigureLoadCallback,
    (int64_t)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
  v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_EffectComponent_onFigureAssetLoad__, 0LL);
  RenderPrefab_39223696 = StandFigureManager__CreateRenderPrefab_39223696(
                            gameObject,
                            svtId,
                            limit,
                            2,
                            2,
                            0,
                            v20,
                            0,
                            -1,
                            0LL,
                            0LL);
  this->fields.myStandFigure = RenderPrefab_39223696;
  p_myStandFigure = &this->fields.myStandFigure;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)p_myStandFigure,
    (int64_t)RenderPrefab_39223696,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  if ( !NodeFromName )
    goto LABEL_15;
  v30.fields.y = 475.0;
  v30.fields.z = 0.0;
  v30.fields.x = -280.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v30, 0LL);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  if ( !NodeFromName )
    goto LABEL_15;
  v31.fields.x = 0.0;
  v31.fields.y = 0.0;
  v31.fields.z = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v31, 0LL);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  v29 = (UnityEngine_Transform_o *)NodeFromName;
  if ( !byte_4BD6BB6 )
  {
    NodeFromName = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v29
    || (UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure) == 0LL) )
  {
LABEL_15:
    sub_1C22094(NodeFromName, v11);
  }
  UIStandFigureR__SetDepth((UIStandFigureR_o *)NodeFromName, 200, 0LL);
}


void __fastcall EffectComponent__setLabel(EffectComponent_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4BDF134 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF134 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0LL, 0LL) )
  {
    v7 = this->fields.label;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    UILabel__set_text(v7, text, 0LL);
  }
}


void __fastcall EffectComponent__setTexture(
        EffectComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x21
  Il2CppObject *object; // x0
  __int64 v7; // x1
  struct UITexture_o *v8; // x8

  if ( (byte_4BDF135 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_Texture2D___);
    byte_4BDF135 = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(texture, 0LL, 0LL) )
  {
    object = UnityEngine_Resources__Load_object_(
               filename,
               (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_Texture2D___);
    v8 = this->fields.texture;
    if ( !v8 )
      sub_1C22094(object, v7);
    ((void (__fastcall *)(struct UITexture_o *, Il2CppObject *, Il2CppMethodPointer))v8->klass->vtable._27_set_mainTexture.method)(
      v8,
      object,
      v8->klass->vtable._28_get_shader.methodPtr);
  }
}