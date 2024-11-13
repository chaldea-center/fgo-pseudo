void __fastcall EffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B18D2A & 1) == 0 )
  {
    sub_1BCA7E0(&EffectComponent_TypeInfo, v1, v2);
    byte_4B18D2A = 1;
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
  if ( (byte_4B18D28 & 1) == 0 )
  {
    this = (EffectComponent_o *)sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, loadData, method);
    byte_4B18D28 = 1;
  }
  if ( !loadData
    || (this = (EffectComponent_o *)AssetData__GetObjectNameList(loadData, 0LL)) == 0LL
    || (texture = v4->fields.texture,
        this = (EffectComponent_o *)AssetData__GetObject_object__49237568(
                                      loadData,
                                      v4->fields.filename,
                                      (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720),
        !texture) )
  {
    sub_1BCAA3C(this, loadData);
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
  if ( (byte_4B18D25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_UISprite___, *(_QWORD *)&index, method);
    byte_4B18D25 = 1;
  }
  return (UISprite_o *)BasicHelper__IndexValue_object_(
                         (System_Object_array *)this->fields.spriteArray,
                         index,
                         0LL,
                         (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_UISprite___);
}


void __fastcall EffectComponent__Init(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_Object_array *ComponentsInChildren_object__49689332; // x21
  int32_t v14; // w20
  UnityEngine_Material_o *v15; // x21

  if ( (byte_4B18D1F & 1) == 0 )
  {
    sub_1BCA7E0(&EffectComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___, v8, v9);
    byte_4B18D1F = 1;
  }
  if ( this->fields.uieffect )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    ComponentsInChildren_object__49689332 = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                              gameObject,
                                              (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                               gameObject,
                                               (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( !((unsigned __int64)ComponentsInChildren_object__49689332 | (unsigned __int64)gameObject) )
    {
      if ( !transform )
        goto LABEL_18;
      if ( UnityEngine_Transform__get_childCount(transform, 0LL) >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(transform, v14, 0LL);
          if ( !gameObject )
            break;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)gameObject,
                                                     0LL);
          v15 = (UnityEngine_Material_o *)gameObject;
          if ( !EffectComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo, v12);
          if ( !v15 )
            break;
          UnityEngine_Material__set_renderQueue(v15, EffectComponent_TypeInfo->static_fields->_RenderQueue, 0LL);
          if ( ++v14 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
            return;
        }
LABEL_18:
        sub_1BCAA3C(gameObject, v12);
      }
    }
  }
}


void __fastcall EffectComponent__OnDestroy(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  _QWORD *materials; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  _QWORD *v11; // x20
  unsigned __int64 v12; // x23
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Object_o *texture; // x20
  UnityEngine_Object_o *v15; // x0

  if ( (byte_4B18D21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18D21 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
      v10 = materials[3];
      v11 = materials;
      if ( (int)v10 >= 1 )
      {
        v12 = 0LL;
        do
        {
          if ( v12 >= (unsigned int)v10 )
            sub_1BCAA44(materials, v9);
          v13 = (UnityEngine_Object_o *)v11[v12 + 4];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
          UnityEngine_Object__DestroyImmediate_70154432(v13, 0LL);
          LODWORD(v10) = *((_DWORD *)v11 + 6);
          ++v12;
        }
        while ( (__int64)v12 < (int)v10 );
      }
    }
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(texture, 0LL, 0LL) )
  {
    materials = &this->fields.texture->klass;
    if ( materials )
    {
      v15 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*materials + 728LL))(
                                      materials,
                                      *(_QWORD *)(*materials + 736LL));
      UnityEngine_Resources__UnloadAsset(v15, 0LL);
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
    sub_1BCAA3C(materials, v9);
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
  sub_1BCA784(
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
    sub_1BCAA3C(0LL, v10);
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

  if ( (byte_4B18D20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_Spawner__getInstance__, method, v2);
    byte_4B18D20 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v8);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(v8);
  v12 = *(struct Spawner_o ***)(v11 + 184);
  v13 = *v12;
  this->fields.spawner = *v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spawner, (int64_t)v13, v2, v3, v4, v5, v6, v7);
  EffectComponent__Init(this, v14);
}


void __fastcall EffectComponent__StartActorBuffEffect(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *battleActor; // x20
  __int64 v5; // x1
  BattleActorControl_o *v6; // x0

  if ( (byte_4B18D29 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18D29 = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(battleActor, 0LL, 0LL) )
  {
    v6 = this->fields.battleActor;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    BattleActorControl__ActiveReservedBuffEffect(v6, this->fields.effectBuffEffectId, 0LL);
  }
}


void __fastcall EffectComponent__Update(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float totaltime; // s8
  const MethodInfo *v5; // x1
  float deltaTime; // s0
  float endtime; // s1
  float losttime; // s2
  float v9; // s0
  __int64 v10; // x1
  UnityEngine_Object_o *spawner; // x20
  Spawner_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x1
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  __int64 v16; // x8
  unsigned __int64 v17; // x21
  UnityEngine_Object_o *v18; // x19
  __int64 v19; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B18D22 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18D22 = 1;
  }
  if ( this->fields.loop )
    return;
  totaltime = this->fields.totaltime;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  endtime = this->fields.endtime;
  losttime = this->fields.losttime;
  v9 = totaltime + deltaTime;
  this->fields.totaltime = v9;
  if ( (float)(endtime + losttime) < v9 )
  {
    EffectComponent__StartActorBuffEffect(this, v5);
    spawner = (UnityEngine_Object_o *)this->fields.spawner;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( !UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      return;
    }
    v12 = this->fields.spawner;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v12 )
    {
      Spawner__Despawn(v12, v13, 1, 0LL);
      return;
    }
LABEL_27:
    sub_1BCAA3C(v13, v14);
  }
  if ( endtime > v9 )
    return;
  EffectComponent__StartActorBuffEffect(this, v5);
  particlelist = this->fields.particlelist;
  if ( !particlelist )
    goto LABEL_27;
  v16 = *(_QWORD *)&particlelist->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1BCAA44(v13, v14);
      v18 = (UnityEngine_Object_o *)particlelist->m_Items[v17];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)v13 & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_27;
        UnityEngine_ParticleSystem__Stop_70434692((UnityEngine_ParticleSystem_o *)v18, 0LL);
      }
      LODWORD(v16) = particlelist->max_length;
      ++v17;
    }
    while ( (__int64)v17 < (int)v16 );
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 NodeFromName; // x0
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x21
  __int64 v15; // x1
  Il2CppObject *Component_object; // x20
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B18D26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, obj, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_13817/*"Texture"*/, v9, v10);
    byte_4B18D26 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (__int64)TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_13817/*"Texture"*/, 1, 0LL);
  if ( !NodeFromName )
    goto LABEL_18;
  v14 = (UnityEngine_Transform_o *)NodeFromName;
  NodeFromName = (__int64)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)NodeFromName,
                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0LL);
  if ( !obj )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  NodeFromName = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (NodeFromName & 1) != 0 )
  {
    if ( Component_object )
    {
      NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
      if ( NodeFromName )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)NodeFromName, v14, 0LL);
        NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
        if ( NodeFromName )
        {
          v25.fields.y = 475.0;
          v25.fields.z = 0.0;
          v25.fields.x = -280.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v25, 0LL);
          NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
          if ( NodeFromName )
          {
            v26.fields.x = 0.0;
            v26.fields.y = 0.0;
            v26.fields.z = 0.0;
            UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v26, 0LL);
            NodeFromName = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)Component_object,
                                      0LL);
            v18 = (UnityEngine_Transform_o *)NodeFromName;
            if ( !byte_4B109C6 )
            {
              NodeFromName = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v17);
              byte_4B109C6 = 1;
            }
            if ( v18 )
            {
              UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)Component_object, 200, 0LL);
              this->fields.myStandFigure = (struct UIStandFigureR_o *)Component_object;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.myStandFigure,
                (int64_t)Component_object,
                v19,
                v20,
                v21,
                v22,
                v23,
                v24);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(NodeFromName, v13);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *NodeFromName; // x0
  __int64 v17; // x1
  UnityEngine_Component_o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x23
  struct UIStandFigureR_o *RenderPrefab_38693360; // x0
  struct UIStandFigureR_o **p_myStandFigure; // x19
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x2
  UnityEngine_Transform_o *v39; // x20
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B18D27 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limit);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, v9, v10);
    sub_1BCA7E0(&Method_EffectComponent_onFigureAssetLoad__, v11, v12);
    sub_1BCA7E0(&StringLiteral_13817/*"Texture"*/, v13, v14);
    byte_4B18D27 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                              transform,
                                              (System_String_o *)StringLiteral_13817/*"Texture"*/,
                                              1,
                                              0LL);
  if ( !NodeFromName )
    goto LABEL_15;
  v18 = NodeFromName;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              NodeFromName,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0LL);
  this->fields.FigureLoadCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FigureLoadCallback,
    (int64_t)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
  v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_EffectComponent_onFigureAssetLoad__, 0LL);
  RenderPrefab_38693360 = StandFigureManager__CreateRenderPrefab_38693360(
                            gameObject,
                            svtId,
                            limit,
                            2,
                            2,
                            0,
                            v29,
                            0,
                            -1,
                            0LL);
  this->fields.myStandFigure = RenderPrefab_38693360;
  p_myStandFigure = &this->fields.myStandFigure;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_myStandFigure,
    (int64_t)RenderPrefab_38693360,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  if ( !NodeFromName )
    goto LABEL_15;
  v40.fields.y = 475.0;
  v40.fields.z = 0.0;
  v40.fields.x = -280.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v40, 0LL);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  if ( !NodeFromName )
    goto LABEL_15;
  v41.fields.x = 0.0;
  v41.fields.y = 0.0;
  v41.fields.z = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v41, 0LL);
  NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure;
  if ( !*p_myStandFigure )
    goto LABEL_15;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  v39 = (UnityEngine_Transform_o *)NodeFromName;
  if ( !byte_4B109C6 )
  {
    NodeFromName = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v17, v38);
    byte_4B109C6 = 1;
  }
  if ( !v39
    || (UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(NodeFromName, v17);
  }
  UIStandFigureR__SetDepth((UIStandFigureR_o *)NodeFromName, 200, 0LL);
}


void __fastcall EffectComponent__setLabel(EffectComponent_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4B18D23 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, text, method);
    byte_4B18D23 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text);
  if ( UnityEngine_Object__op_Inequality(label, 0LL, 0LL) )
  {
    v7 = this->fields.label;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UILabel__set_text(v7, text, 0LL);
  }
}


void __fastcall EffectComponent__setTexture(
        EffectComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *texture; // x21
  Il2CppObject *object; // x0
  __int64 v9; // x1
  struct UITexture_o *v10; // x8

  if ( (byte_4B18D24 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, filename, method);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v5, v6);
    byte_4B18D24 = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, filename);
  if ( UnityEngine_Object__op_Inequality(texture, 0LL, 0LL) )
  {
    object = UnityEngine_Resources__Load_object_(
               filename,
               (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
    v10 = this->fields.texture;
    if ( !v10 )
      sub_1BCAA3C(object, v9);
    ((void (__fastcall *)(struct UITexture_o *, Il2CppObject *, Il2CppMethodPointer))v10->klass->vtable._27_set_mainTexture.method)(
      v10,
      object,
      v10->klass->vtable._28_get_shader.methodPtr);
  }
}