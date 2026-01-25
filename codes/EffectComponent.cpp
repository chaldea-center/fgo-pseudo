void EffectComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CF1643 & 1) == 0 )
  {
    sub_1C7BAE8(&EffectComponent_TypeInfo);
    byte_4CF1643 = 1;
  }
  EffectComponent_TypeInfo->static_fields->_RenderQueue = 4000;
}


void EffectComponent___ctor(EffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #5.0 }
  *(_QWORD *)&this->fields.endtime = _D0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void EffectComponent__EndLoadAsset(EffectComponent_o *this, AssetData_o *loadData, const MethodInfo *method)
{
  EffectComponent_o *v4; // x20
  struct UITexture_o *texture; // x21

  v4 = this;
  if ( (byte_4CF1641 & 1) == 0 )
  {
    this = (EffectComponent_o *)sub_1C7BAE8(&Method_AssetData_GetObject_Texture2D____78791600);
    byte_4CF1641 = 1;
  }
  if ( !loadData
    || (this = (EffectComponent_o *)AssetData__GetObjectNameList(loadData, 0)) == 0
    || (texture = v4->fields.texture,
        this = (EffectComponent_o *)AssetData__GetObject_object__51713432(
                                      loadData,
                                      v4->fields.filename,
                                      (const MethodInfo_3151598 *)Method_AssetData_GetObject_Texture2D____78791600),
        !texture) )
  {
    sub_1C7BD40(this, loadData);
  }
  ((void (__fastcall *)(struct UITexture_o *, EffectComponent_o *, const MethodInfo *))texture->klass->vtable._27_set_mainTexture.methodPtr)(
    texture,
    this,
    texture->klass->vtable._27_set_mainTexture.method);
}


UISprite_o *EffectComponent__GetSpriteByIndex(EffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  if ( (byte_4CF163E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_IndexValue_UISprite___);
    byte_4CF163E = 1;
  }
  return (UISprite_o *)BasicHelper__IndexValue_object_(
                         (System_Object_array *)this->fields.spriteArray,
                         index,
                         0,
                         (const MethodInfo_315E928 *)Method_BasicHelper_IndexValue_UISprite___);
}


void EffectComponent__Init(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  System_Object_array *ComponentsInChildren_object__52198636; // x21
  int32_t v7; // w20
  UnityEngine_Material_o *v8; // x21

  if ( (byte_4CF1638 & 1) == 0 )
  {
    sub_1C7BAE8(&EffectComponent_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    byte_4CF1638 = 1;
  }
  if ( this->fields.uieffect )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_18;
    ComponentsInChildren_object__52198636 = UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                                              gameObject,
                                              (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52198636(
                                               gameObject,
                                               (const MethodInfo_31C7CEC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( !((unsigned __int64)ComponentsInChildren_object__52198636 | (unsigned __int64)gameObject) )
    {
      if ( !transform )
        goto LABEL_18;
      if ( UnityEngine_Transform__get_childCount(transform, 0) >= 1 )
      {
        v7 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(transform, v7, 0);
          if ( !gameObject )
            break;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)gameObject,
                                                     0);
          v8 = (UnityEngine_Material_o *)gameObject;
          if ( !EffectComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo);
          if ( !v8 )
            break;
          UnityEngine_Material__set_renderQueue(v8, EffectComponent_TypeInfo->static_fields->_RenderQueue, 0);
          if ( ++v7 >= UnityEngine_Transform__get_childCount(transform, 0) )
            return;
        }
LABEL_18:
        sub_1C7BD40(gameObject, v5);
      }
    }
  }
}


void EffectComponent__OnDestroy(EffectComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CF163A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF163A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  materials = (_QWORD *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)materials & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_23;
    if ( UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)Component_object, 0) )
    {
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)Component_object, 0);
      if ( !materials )
        goto LABEL_23;
      v6 = materials[3];
      v7 = materials;
      if ( (int)v6 >= 1 )
      {
        v8 = 0;
        do
        {
          if ( v8 >= (unsigned int)v6 )
            sub_1C7BD48(materials);
          v9 = (UnityEngine_Object_o *)v7[v8 + 4];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_71870336(v9, 0);
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
  if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
  {
    materials = &this->fields.texture->klass;
    if ( materials )
    {
      v11 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*materials + 728LL))(
                                      materials,
                                      *(_QWORD *)(*materials + 736LL));
      UnityEngine_Resources__UnloadAsset(v11, 0);
      materials = &this->fields.texture->klass;
      if ( materials )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*materials + 744LL))(
          materials,
          0,
          *(_QWORD *)(*materials + 752LL));
        return;
      }
    }
LABEL_23:
    sub_1C7BD40(materials, v5);
  }
}


void EffectComponent__OnSpawn(EffectComponent_o *this, const MethodInfo *method)
{
  this->fields.totaltime = 0.0;
}


void EffectComponent__SetBattleActor(
        EffectComponent_o *this,
        BattleActorControl_o *actor,
        int32_t buffEffectId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleActorControl_o **p_battleActor; // x20
  __int64 v10; // x1
  BattleActorControl_o *v11; // x0

  this->fields.battleActor = actor;
  p_battleActor = &this->fields.battleActor;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleActor,
    (int32_t)actor,
    buffEffectId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v11 = *p_battleActor;
  *((_DWORD *)p_battleActor + 2) = buffEffectId;
  if ( !v11 )
    sub_1C7BD40(0, v10);
  BattleActorControl__AddReservedEffectBuffEffectId(v11, buffEffectId, 0);
}


void EffectComponent__Start(EffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double v8; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  struct Spawner_o **v12; // x8
  struct Spawner_o *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_4CF1639 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_Spawner__getInstance__);
    byte_4CF1639 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C51B7C(v8);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C51B7C(v8);
  v12 = *(struct Spawner_o ***)(v11 + 184);
  v13 = *v12;
  this->fields.spawner = *v12;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.spawner, (int32_t)v13, v2, v3, v4, v5, v6, v7);
  EffectComponent__Init(this, v14);
}


void EffectComponent__StartActorBuffEffect(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleActorControl_o *v5; // x0

  if ( (byte_4CF1642 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1642 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleActor, 0, 0) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    BattleActorControl__ActiveReservedBuffEffect(v5, this->fields.effectBuffEffectId, 0);
  }
}


void EffectComponent__Update(EffectComponent_o *this, const MethodInfo *method)
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x21
  UnityEngine_Object_o *v16; // x19
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CF163B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF163B = 1;
  }
  if ( this->fields.loop )
    return;
  totaltime = this->fields.totaltime;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
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
    if ( !UnityEngine_Object__op_Inequality(spawner, 0, 0) )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(gameObject, 0);
      return;
    }
    v10 = this->fields.spawner;
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( v10 )
    {
      Spawner__Despawn(v10, v11, 1, 0);
      return;
    }
LABEL_27:
    sub_1C7BD40(v11, v12);
  }
  if ( endtime > v8 )
    return;
  EffectComponent__StartActorBuffEffect(this, v4);
  particlelist = this->fields.particlelist;
  if ( !particlelist )
    goto LABEL_27;
  max_length = particlelist->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= (unsigned int)max_length )
        sub_1C7BD48(v11);
      v16 = (UnityEngine_Object_o *)particlelist->m_Items[v15];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_27;
        UnityEngine_ParticleSystem__Stop_72156196((UnityEngine_ParticleSystem_o *)v16, 0);
      }
      LODWORD(max_length) = particlelist->max_length;
      ++v15;
    }
    while ( (__int64)v15 < (int)max_length );
  }
}


void EffectComponent__onFigureAssetLoad(EffectComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o *FigureLoadCallback; // x8

  FigureLoadCallback = this->fields.FigureLoadCallback;
  if ( FigureLoadCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))FigureLoadCallback->fields.invoke_impl)(
      FigureLoadCallback->fields.method_code,
      FigureLoadCallback->fields.method);
}


void EffectComponent__replaceFigure(EffectComponent_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 NodeFromName; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF163F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13808/*"Texture"*/);
    byte_4CF163F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  NodeFromName = (__int64)TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_13808/*"Texture"*/, 1, 0);
  if ( !NodeFromName )
    goto LABEL_18;
  v8 = (UnityEngine_Transform_o *)NodeFromName;
  NodeFromName = (__int64)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)NodeFromName,
                            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0);
  if ( !obj )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  NodeFromName = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (NodeFromName & 1) != 0 )
  {
    if ( Component_object )
    {
      NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( NodeFromName )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)NodeFromName, v8, 0);
        NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( NodeFromName )
        {
          v17.fields.y = 475.0;
          v17.fields.z = 0.0;
          v17.fields.x = -280.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v17, 0);
          NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
          if ( NodeFromName )
          {
            v18.fields.x = 0.0;
            v18.fields.y = 0.0;
            v18.fields.z = 0.0;
            UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v18, 0);
            NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
            v10 = (UnityEngine_Transform_o *)NodeFromName;
            if ( !byte_4CE7E5E )
            {
              NodeFromName = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
              byte_4CE7E5E = 1;
            }
            if ( v10 )
            {
              UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)Component_object, 200, 0);
              this->fields.myStandFigure = (struct UIStandFigureR_o *)Component_object;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&this->fields.myStandFigure,
                (int32_t)Component_object,
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
    sub_1C7BD40(NodeFromName, v7);
  }
}


void EffectComponent__setFigure(
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v20; // x23
  struct UIStandFigureR_o *RenderPrefab_41240676; // x0
  struct UIStandFigureR_o **p_myStandFigure; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Transform_o *v29; // x20
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF1640 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C7BAE8(&Method_EffectComponent_onFigureAssetLoad__);
    sub_1C7BAE8(&StringLiteral_13808/*"Texture"*/);
    byte_4CF1640 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                              transform,
                                              (System_String_o *)StringLiteral_13808/*"Texture"*/,
                                              1,
                                              0);
  if ( !NodeFromName )
    goto LABEL_15;
  v12 = NodeFromName;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              NodeFromName,
                                              (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0);
  this->fields.FigureLoadCallback = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.FigureLoadCallback,
    (int32_t)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  gameObject = UnityEngine_Component__get_gameObject(v12, 0);
  v20 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_EffectComponent_onFigureAssetLoad__, 0);
  RenderPrefab_41240676 = StandFigureManager__CreateRenderPrefab_41240676(
                            gameObject,
                            svtId,
                            limit,
                            2,
                            2,
                            0,
                            v20,
                            0,
                            -1,
                            0,
                            0);
  this->fields.myStandFigure = RenderPrefab_41240676;
  p_myStandFigure = &this->fields.myStandFigure;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)p_myStandFigure,
    (int32_t)RenderPrefab_41240676,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0);
  if ( !NodeFromName )
    goto LABEL_15;
  v30.fields.y = 475.0;
  v30.fields.z = 0.0;
  v30.fields.x = -280.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v30, 0);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0);
  if ( !NodeFromName )
    goto LABEL_15;
  v31.fields.x = 0.0;
  v31.fields.y = 0.0;
  v31.fields.z = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v31, 0);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0);
  v29 = (UnityEngine_Transform_o *)NodeFromName;
  if ( !byte_4CE7E5E )
  {
    NodeFromName = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v29
    || (UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure) == 0) )
  {
LABEL_15:
    sub_1C7BD40(NodeFromName, v11);
  }
  UIStandFigureR__SetDepth((UIStandFigureR_o *)NodeFromName, 200, 0);
}


void EffectComponent__setLabel(EffectComponent_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4CF163C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF163C = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    v7 = this->fields.label;
    if ( !v7 )
      sub_1C7BD40(0, v6);
    UILabel__set_text(v7, text, 0);
  }
}


void EffectComponent__setTexture(EffectComponent_o *this, System_String_o *filename, const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x21
  Il2CppObject *object; // x0
  __int64 v7; // x1
  struct UITexture_o *v8; // x8

  if ( (byte_4CF163D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Resources_Load_Texture2D___);
    byte_4CF163D = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
  {
    object = UnityEngine_Resources__Load_object_(
               filename,
               (const MethodInfo_320C160 *)Method_UnityEngine_Resources_Load_Texture2D___);
    v8 = this->fields.texture;
    if ( !v8 )
      sub_1C7BD40(object, v7);
    ((void (__fastcall *)(struct UITexture_o *, Il2CppObject *, const MethodInfo *))v8->klass->vtable._27_set_mainTexture.methodPtr)(
      v8,
      object,
      v8->klass->vtable._27_set_mainTexture.method);
  }
}