void __fastcall EffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B04E39 & 1) == 0 )
  {
    sub_1BC3008(&EffectComponent_TypeInfo, v1);
    byte_4B04E39 = 1;
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
  if ( (byte_4B04E37 & 1) == 0 )
  {
    this = (EffectComponent_o *)sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, loadData);
    byte_4B04E37 = 1;
  }
  if ( !loadData
    || (this = (EffectComponent_o *)AssetData__GetObjectNameList(loadData, 0LL)) == 0LL
    || (texture = v4->fields.texture,
        this = (EffectComponent_o *)AssetData__GetObject_object__50213776(
                                      loadData,
                                      v4->fields.filename,
                                      (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696),
        !texture) )
  {
    sub_1BC3264(this, loadData);
  }
  ((void (__fastcall *)(struct UITexture_o *, EffectComponent_o *, Il2CppMethodPointer))texture->klass->vtable._27_set_mainTexture.method)(
    texture,
    this,
    texture->klass->vtable._28_get_shader.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
UISprite_o *__fastcall EffectComponent__GetSpriteByIndex(
        EffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4B04E34 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_IndexValue_UISprite___, *(_QWORD *)&index);
    byte_4B04E34 = 1;
  }
  return (UISprite_o *)BasicHelper__IndexValue_object_(
                         (System_Object_array *)this->fields.spriteArray,
                         index,
                         0LL,
                         (const MethodInfo_2FF04DC *)Method_BasicHelper_IndexValue_UISprite___);
}


void __fastcall EffectComponent__Init(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_Object_array *ComponentsInChildren_object__50685372; // x21
  int32_t v10; // w20
  UnityEngine_Material_o *v11; // x21

  if ( (byte_4B04E2E & 1) == 0 )
  {
    sub_1BC3008(&EffectComponent_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___, v5);
    byte_4B04E2E = 1;
  }
  if ( this->fields.uieffect )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    ComponentsInChildren_object__50685372 = UnityEngine_GameObject__GetComponentsInChildren_object__50685372(
                                              gameObject,
                                              (const MethodInfo_30565BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50685372(
                                               gameObject,
                                               (const MethodInfo_30565BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( !((unsigned __int64)ComponentsInChildren_object__50685372 | (unsigned __int64)gameObject) )
    {
      if ( !transform )
        goto LABEL_18;
      if ( UnityEngine_Transform__get_childCount(transform, 0LL) >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(transform, v10, 0LL);
          if ( !gameObject )
            break;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)gameObject,
                                                     0LL);
          v11 = (UnityEngine_Material_o *)gameObject;
          if ( !EffectComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo);
          if ( !v11 )
            break;
          UnityEngine_Material__set_renderQueue(v11, EffectComponent_TypeInfo->static_fields->_RenderQueue, 0LL);
          if ( ++v10 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
            return;
        }
LABEL_18:
        sub_1BC3264(gameObject, v8);
      }
    }
  }
}


void __fastcall EffectComponent__OnDestroy(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x20
  _QWORD *materials; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x8
  _QWORD *v9; // x20
  unsigned __int64 v10; // x23
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *texture; // x20
  UnityEngine_Object_o *v13; // x0

  if ( (byte_4B04E30 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B04E30 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      v8 = materials[3];
      v9 = materials;
      if ( (int)v8 >= 1 )
      {
        v10 = 0LL;
        do
        {
          if ( v10 >= (unsigned int)v8 )
            sub_1BC326C(materials, v6, v7);
          v11 = (UnityEngine_Object_o *)v9[v10 + 4];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_70034488(v11, 0LL);
          LODWORD(v8) = *((_DWORD *)v9 + 6);
          ++v10;
        }
        while ( (__int64)v10 < (int)v8 );
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
      v13 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*materials + 728LL))(
                                      materials,
                                      *(_QWORD *)(*materials + 736LL));
      UnityEngine_Resources__UnloadAsset(v13, 0LL);
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
    sub_1BC3264(materials, v6);
  }
}


void __fastcall EffectComponent__OnSpawn(EffectComponent_o *this, const MethodInfo *method)
{
  this->fields.totaltime = 0.0;
}


void __fastcall EffectComponent__SetBattleActor(
        EffectComponent_o *this,
        BattleActorControl_o *actor,
        int32_t buffEffectId,
        const MethodInfo *method)
{
  struct BattleActorControl_o **p_battleActor; // x20
  __int64 v6; // x1
  BattleActorControl_o *v7; // x0

  this->fields.battleActor = actor;
  p_battleActor = &this->fields.battleActor;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.battleActor, (int32_t)actor, buffEffectId, method);
  v7 = *p_battleActor;
  *((_DWORD *)p_battleActor + 2) = buffEffectId;
  if ( !v7 )
    sub_1BC3264(0LL, v6);
  BattleActorControl__AddReservedEffectBuffEffectId(v7, buffEffectId, 0LL);
}


void __fastcall EffectComponent__Start(EffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  long double v4; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  struct Spawner_o **v8; // x8
  struct Spawner_o *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4B04E2F & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_Spawner__getInstance__, method);
    byte_4B04E2F = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1346C(v4);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1346C(v4);
  v8 = *(struct Spawner_o ***)(v7 + 184);
  v9 = *v8;
  this->fields.spawner = *v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.spawner, (int32_t)v9, v2, v3);
  EffectComponent__Init(this, v10);
}


void __fastcall EffectComponent__StartActorBuffEffect(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleActorControl_o *v5; // x0

  if ( (byte_4B04E38 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B04E38 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleActor, 0LL, 0LL) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
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
  __int64 v13; // x2
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x21
  UnityEngine_Object_o *v17; // x19
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B04E31 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B04E31 = 1;
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
      UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
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
    sub_1BC3264(v11, v12);
  }
  if ( endtime > v8 )
    return;
  EffectComponent__StartActorBuffEffect(this, v4);
  particlelist = this->fields.particlelist;
  if ( !particlelist )
    goto LABEL_27;
  v15 = *(_QWORD *)&particlelist->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1BC326C(v11, v12, v13);
      v17 = (UnityEngine_Object_o *)particlelist->m_Items[v16];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_27;
        UnityEngine_ParticleSystem__Stop_70318060((UnityEngine_ParticleSystem_o *)v17, 0LL);
      }
      LODWORD(v15) = particlelist->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)v15 );
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 NodeFromName; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B04E35 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UITexture___, obj);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_13620/*"Texture"*/, v7);
    byte_4B04E35 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (__int64)TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_13620/*"Texture"*/, 1, 0LL);
  if ( !NodeFromName )
    goto LABEL_18;
  v11 = (UnityEngine_Transform_o *)NodeFromName;
  NodeFromName = (__int64)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)NodeFromName,
                            (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0LL);
  if ( !obj )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  NodeFromName = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (NodeFromName & 1) != 0 )
  {
    if ( Component_object )
    {
      NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
      if ( NodeFromName )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)NodeFromName, v11, 0LL);
        NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        if ( NodeFromName )
        {
          v16.fields.y = 475.0;
          v16.fields.z = 0.0;
          v16.fields.x = -280.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v16, 0LL);
          NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
          if ( NodeFromName )
          {
            v17.fields.x = 0.0;
            v17.fields.y = 0.0;
            v17.fields.z = 0.0;
            UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v17, 0LL);
            NodeFromName = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
            v13 = (UnityEngine_Transform_o *)NodeFromName;
            if ( !byte_4AFBDB6 )
            {
              NodeFromName = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v10);
              byte_4AFBDB6 = 1;
            }
            if ( v13 )
            {
              UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)Component_object, 200, 0LL);
              this->fields.myStandFigure = (struct UIStandFigureR_o *)Component_object;
              sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.myStandFigure, (int32_t)Component_object, v14, v15);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1BC3264(NodeFromName, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EffectComponent__setFigure(
        EffectComponent_o *this,
        int32_t svtId,
        int32_t limit,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *NodeFromName; // x0
  __int64 v14; // x1
  UnityEngine_Component_o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v19; // x23
  struct UIStandFigureR_o *RenderPrefab_39781712; // x0
  struct UIStandFigureR_o **p_myStandFigure; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Transform_o *v24; // x20
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B04E36 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_UITexture___, v9);
    sub_1BC3008(&Method_EffectComponent_onFigureAssetLoad__, v10);
    sub_1BC3008(&StringLiteral_13620/*"Texture"*/, v11);
    byte_4B04E36 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                              transform,
                                              (System_String_o *)StringLiteral_13620/*"Texture"*/,
                                              1,
                                              0LL);
  if ( !NodeFromName )
    goto LABEL_15;
  v15 = NodeFromName;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              NodeFromName,
                                              (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0LL);
  this->fields.FigureLoadCallback = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.FigureLoadCallback, (int32_t)callback, v16, v17);
  gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
  v19 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_EffectComponent_onFigureAssetLoad__, 0LL);
  RenderPrefab_39781712 = StandFigureManager__CreateRenderPrefab_39781712(
                            gameObject,
                            svtId,
                            limit,
                            2,
                            2,
                            0,
                            v19,
                            0,
                            -1,
                            0LL,
                            0LL);
  this->fields.myStandFigure = RenderPrefab_39781712;
  p_myStandFigure = &this->fields.myStandFigure;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_myStandFigure, (int32_t)RenderPrefab_39781712, v22, v23);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  if ( !NodeFromName )
    goto LABEL_15;
  v25.fields.y = 475.0;
  v25.fields.z = 0.0;
  v25.fields.x = -280.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v25, 0LL);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  if ( !NodeFromName )
    goto LABEL_15;
  v26.fields.x = 0.0;
  v26.fields.y = 0.0;
  v26.fields.z = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v26, 0LL);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  v24 = (UnityEngine_Transform_o *)NodeFromName;
  if ( !byte_4AFBDB6 )
  {
    NodeFromName = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4AFBDB6 = 1;
  }
  if ( !v24
    || (UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure) == 0LL) )
  {
LABEL_15:
    sub_1BC3264(NodeFromName, v14);
  }
  UIStandFigureR__SetDepth((UIStandFigureR_o *)NodeFromName, 200, 0LL);
}


void __fastcall EffectComponent__setLabel(EffectComponent_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4B04E32 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, text);
    byte_4B04E32 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0LL, 0LL) )
  {
    v7 = this->fields.label;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    UILabel__set_text(v7, text, 0LL);
  }
}


void __fastcall EffectComponent__setTexture(
        EffectComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *texture; // x21
  Il2CppObject *object; // x0
  __int64 v8; // x1
  struct UITexture_o *v9; // x8

  if ( (byte_4B04E33 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, filename);
    sub_1BC3008(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    byte_4B04E33 = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(texture, 0LL, 0LL) )
  {
    object = UnityEngine_Resources__Load_object_(
               filename,
               (const MethodInfo_309AA50 *)Method_UnityEngine_Resources_Load_Texture2D___);
    v9 = this->fields.texture;
    if ( !v9 )
      sub_1BC3264(object, v8);
    ((void (__fastcall *)(struct UITexture_o *, Il2CppObject *, Il2CppMethodPointer))v9->klass->vtable._27_set_mainTexture.method)(
      v9,
      object,
      v9->klass->vtable._28_get_shader.methodPtr);
  }
}