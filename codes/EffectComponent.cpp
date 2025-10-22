void EffectComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C59D00 & 1) == 0 )
  {
    sub_1C3E564(&EffectComponent_TypeInfo);
    byte_4C59D00 = 1;
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
  if ( (byte_4C59CFE & 1) == 0 )
  {
    this = (EffectComponent_o *)sub_1C3E564(&Method_AssetData_GetObject_Texture2D____78185184);
    byte_4C59CFE = 1;
  }
  if ( !loadData
    || (this = (EffectComponent_o *)AssetData__GetObjectNameList(loadData, 0)) == 0
    || (texture = v4->fields.texture,
        this = (EffectComponent_o *)AssetData__GetObject_object__51228128(
                                      loadData,
                                      v4->fields.filename,
                                      (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_Texture2D____78185184),
        !texture) )
  {
    sub_1C3E7C0(this, loadData);
  }
  ((void (__fastcall *)(struct UITexture_o *, EffectComponent_o *, const MethodInfo *))texture->klass->vtable._27_set_mainTexture.methodPtr)(
    texture,
    this,
    texture->klass->vtable._27_set_mainTexture.method);
}


UISprite_o *EffectComponent__GetSpriteByIndex(EffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  if ( (byte_4C59CFB & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_IndexValue_UISprite___);
    byte_4C59CFB = 1;
  }
  return (UISprite_o *)BasicHelper__IndexValue_object_(
                         (System_Object_array *)this->fields.spriteArray,
                         index,
                         0,
                         (const MethodInfo_30E8010 *)Method_BasicHelper_IndexValue_UISprite___);
}


void EffectComponent__Init(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  System_Object_array *ComponentsInChildren_object__51715312; // x21
  int32_t v7; // w20
  UnityEngine_Material_o *v8; // x21

  if ( (byte_4C59CF5 & 1) == 0 )
  {
    sub_1C3E564(&EffectComponent_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    byte_4C59CF5 = 1;
  }
  if ( this->fields.uieffect )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_18;
    ComponentsInChildren_object__51715312 = UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                                              gameObject,
                                              (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                                               gameObject,
                                               (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( !((unsigned __int64)ComponentsInChildren_object__51715312 | (unsigned __int64)gameObject) )
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
                                                     (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
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
        sub_1C3E7C0(gameObject, v5);
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

  if ( (byte_4C59CF7 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59CF7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
            sub_1C3E7C8(materials, v5);
          v9 = (UnityEngine_Object_o *)v7[v8 + 4];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_71341752(v9, 0);
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
    sub_1C3E7C0(materials, v5);
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
  struct BattleActorControl_o **p_battleActor; // x20
  __int64 v6; // x1
  BattleActorControl_o *v7; // x0

  this->fields.battleActor = actor;
  p_battleActor = &this->fields.battleActor;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.battleActor, (int32_t)actor, buffEffectId, method);
  v7 = *p_battleActor;
  *((_DWORD *)p_battleActor + 2) = buffEffectId;
  if ( !v7 )
    sub_1C3E7C0(0, v6);
  BattleActorControl__AddReservedEffectBuffEffectId(v7, buffEffectId, 0);
}


void EffectComponent__Start(EffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  long double v4; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  struct Spawner_o **v8; // x8
  struct Spawner_o *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4C59CF6 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_Spawner__getInstance__);
    byte_4C59CF6 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8EC78(v4);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8EC78(v4);
  v8 = *(struct Spawner_o ***)(v7 + 184);
  v9 = *v8;
  this->fields.spawner = *v8;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.spawner, (int32_t)v9, v2, v3);
  EffectComponent__Init(this, v10);
}


void EffectComponent__StartActorBuffEffect(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleActorControl_o *v5; // x0

  if ( (byte_4C59CFF & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59CFF = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleActor, 0, 0) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
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

  if ( (byte_4C59CF8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59CF8 = 1;
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
      UnityEngine_Object__Destroy_71341564(gameObject, 0);
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
    sub_1C3E7C0(v11, v12);
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
        sub_1C3E7C8(v11, v12);
      v16 = (UnityEngine_Object_o *)particlelist->m_Items[v15];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v16, 0, 0);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_27;
        UnityEngine_ParticleSystem__Stop_71625324((UnityEngine_ParticleSystem_o *)v16, 0);
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
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C59CFC & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_13760/*"Texture"*/);
    byte_4C59CFC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  NodeFromName = (__int64)TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_13760/*"Texture"*/, 1, 0);
  if ( !NodeFromName )
    goto LABEL_18;
  v8 = (UnityEngine_Transform_o *)NodeFromName;
  NodeFromName = (__int64)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)NodeFromName,
                            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0);
  if ( !obj )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
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
          v13.fields.y = 475.0;
          v13.fields.z = 0.0;
          v13.fields.x = -280.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v13, 0);
          NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
          if ( NodeFromName )
          {
            v14.fields.x = 0.0;
            v14.fields.y = 0.0;
            v14.fields.z = 0.0;
            UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v14, 0);
            NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
            v10 = (UnityEngine_Transform_o *)NodeFromName;
            if ( !byte_4C506A6 )
            {
              NodeFromName = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
              byte_4C506A6 = 1;
            }
            if ( v10 )
            {
              UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)Component_object, 200, 0);
              this->fields.myStandFigure = (struct UIStandFigureR_o *)Component_object;
              sub_1C3E508((CGThumbnailListItem_o *)&this->fields.myStandFigure, (int32_t)Component_object, v11, v12);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C3E7C0(NodeFromName, v7);
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
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v16; // x23
  struct UIStandFigureR_o *RenderPrefab_40722664; // x0
  struct UIStandFigureR_o **p_myStandFigure; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Transform_o *v21; // x20
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C59CFD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C3E564(&Method_EffectComponent_onFigureAssetLoad__);
    sub_1C3E564(&StringLiteral_13760/*"Texture"*/);
    byte_4C59CFD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                              transform,
                                              (System_String_o *)StringLiteral_13760/*"Texture"*/,
                                              1,
                                              0);
  if ( !NodeFromName )
    goto LABEL_15;
  v12 = NodeFromName;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              NodeFromName,
                                              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0);
  this->fields.FigureLoadCallback = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.FigureLoadCallback, (int32_t)callback, v13, v14);
  gameObject = UnityEngine_Component__get_gameObject(v12, 0);
  v16 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EffectComponent_onFigureAssetLoad__, 0);
  RenderPrefab_40722664 = StandFigureManager__CreateRenderPrefab_40722664(
                            gameObject,
                            svtId,
                            limit,
                            2,
                            2,
                            0,
                            v16,
                            0,
                            -1,
                            0,
                            0);
  this->fields.myStandFigure = RenderPrefab_40722664;
  p_myStandFigure = &this->fields.myStandFigure;
  sub_1C3E508((CGThumbnailListItem_o *)p_myStandFigure, (int32_t)RenderPrefab_40722664, v19, v20);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0);
  if ( !NodeFromName )
    goto LABEL_15;
  v22.fields.y = 475.0;
  v22.fields.z = 0.0;
  v22.fields.x = -280.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v22, 0);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0);
  if ( !NodeFromName )
    goto LABEL_15;
  v23.fields.x = 0.0;
  v23.fields.y = 0.0;
  v23.fields.z = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v23, 0);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0);
  v21 = (UnityEngine_Transform_o *)NodeFromName;
  if ( !byte_4C506A6 )
  {
    NodeFromName = (UnityEngine_Component_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  if ( !v21
    || (UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure) == 0) )
  {
LABEL_15:
    sub_1C3E7C0(NodeFromName, v11);
  }
  UIStandFigureR__SetDepth((UIStandFigureR_o *)NodeFromName, 200, 0);
}


void EffectComponent__setLabel(EffectComponent_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4C59CF9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59CF9 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    v7 = this->fields.label;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
    UILabel__set_text(v7, text, 0);
  }
}


void EffectComponent__setTexture(EffectComponent_o *this, System_String_o *filename, const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x21
  Il2CppObject *object; // x0
  __int64 v7; // x1
  struct UITexture_o *v8; // x8

  if ( (byte_4C59CFA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Resources_Load_Texture2D___);
    byte_4C59CFA = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
  {
    object = UnityEngine_Resources__Load_object_(
               filename,
               (const MethodInfo_3196164 *)Method_UnityEngine_Resources_Load_Texture2D___);
    v8 = this->fields.texture;
    if ( !v8 )
      sub_1C3E7C0(object, v7);
    ((void (__fastcall *)(struct UITexture_o *, Il2CppObject *, const MethodInfo *))v8->klass->vtable._27_set_mainTexture.methodPtr)(
      v8,
      object,
      v8->klass->vtable._27_set_mainTexture.method);
  }
}