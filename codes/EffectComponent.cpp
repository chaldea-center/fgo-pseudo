void EffectComponent___cctor(const MethodInfo *method)
{
  if ( (byte_59738E0 & 1) == 0 )
  {
    sub_2213A60(&EffectComponent_TypeInfo);
    byte_59738E0 = 1;
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
  int m_CancellationTokenSource; // w8
  int v6; // w9
  struct UITexture_o *texture; // x21

  v4 = this;
  if ( (byte_59738DE & 1) == 0 )
  {
    this = (EffectComponent_o *)sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    byte_59738DE = 1;
  }
  if ( !loadData )
    goto LABEL_12;
  this = (EffectComponent_o *)AssetData__GetObjectNameList(loadData, 0);
  if ( !this )
    goto LABEL_12;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v6 = m_CancellationTokenSource & ~(m_CancellationTokenSource >> 31);
    do
    {
      if ( !m_CancellationTokenSource )
        sub_2213CE4(this);
      --v6;
      --m_CancellationTokenSource;
    }
    while ( v6 );
  }
  texture = v4->fields.texture;
  this = (EffectComponent_o *)AssetData__GetObject_object__58532980(
                                loadData,
                                v4->fields.filename,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  if ( !texture )
LABEL_12:
    sub_2213CDC(this, loadData);
  ((void (__fastcall *)(struct UITexture_o *, EffectComponent_o *, const MethodInfo *))texture->klass->vtable._27_set_mainTexture.methodPtr)(
    texture,
    this,
    texture->klass->vtable._27_set_mainTexture.method);
}


UISprite_o *EffectComponent__GetSpriteByIndex(EffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  if ( (byte_59738DB & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_UISprite___);
    byte_59738DB = 1;
  }
  return (UISprite_o *)BasicHelper__IndexValue_object_(
                         (System_Object_array *)this->fields.spriteArray,
                         index,
                         0,
                         (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_UISprite___);
}


void EffectComponent__Init(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  System_Object_array *ComponentsInChildren_object__59472212; // x21
  int32_t v7; // w20
  UnityEngine_Material_o *v8; // x21

  if ( (byte_59738D5 & 1) == 0 )
  {
    sub_2213A60(&EffectComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    byte_59738D5 = 1;
  }
  if ( this->fields.uieffect )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_18;
    ComponentsInChildren_object__59472212 = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                              gameObject,
                                              (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                               gameObject,
                                               (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( !((unsigned __int64)ComponentsInChildren_object__59472212 | (unsigned __int64)gameObject) )
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
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)gameObject,
                                                     0);
          v8 = (UnityEngine_Material_o *)gameObject;
          if ( !*(&EffectComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo, v5);
          if ( !v8 )
            break;
          UnityEngine_Material__set_renderQueue(v8, EffectComponent_TypeInfo->static_fields->_RenderQueue, 0);
          if ( ++v7 >= UnityEngine_Transform__get_childCount(transform, 0) )
            return;
        }
LABEL_18:
        sub_2213CDC(gameObject, v5);
      }
    }
  }
}


void EffectComponent__OnDestroy(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x20
  _QWORD *materials; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  _QWORD *v8; // x20
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *texture; // x20
  UnityEngine_Object_o *v12; // x0

  if ( (byte_59738D7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59738D7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
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
      v7 = materials[3];
      v8 = materials;
      if ( (int)v7 >= 1 )
      {
        v9 = 0;
        do
        {
          if ( v9 >= (unsigned int)v7 )
            sub_2213CE4(materials);
          v10 = (UnityEngine_Object_o *)v8[v9 + 4];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
          UnityEngine_Object__DestroyImmediate_83460132(v10, 0);
          LODWORD(v7) = *((_DWORD *)v8 + 6);
          ++v9;
        }
        while ( (__int64)v9 < (int)v7 );
      }
    }
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
  {
    materials = &this->fields.texture->klass;
    if ( materials )
    {
      v12 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*materials + 728LL))(
                                      materials,
                                      *(_QWORD *)(*materials + 736LL));
      UnityEngine_Resources__UnloadAsset(v12, 0);
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
    sub_2213CDC(materials, v6);
  }
}


void EffectComponent__OnSpawn(EffectComponent_o *this, const MethodInfo *method)
{
  this->fields.totaltime = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void EffectComponent__SetBattleActor(
        EffectComponent_o *this,
        BattleActorControl_o *actor,
        int32_t buffEffectId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleActorControl_o **p_battleActor; // x20
  __int64 v10; // x1
  BattleActorControl_o *v11; // x0

  this->fields.battleActor = actor;
  p_battleActor = &this->fields.battleActor;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleActor,
    (int32_t)actor,
    *(System_String_o **)&buffEffectId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v11 = *p_battleActor;
  *((_DWORD *)p_battleActor + 2) = buffEffectId;
  if ( !v11 )
    sub_2213CDC(0, v10);
  BattleActorControl__AddReservedEffectBuffEffectId(v11, buffEffectId, 0);
}


void EffectComponent__Start(EffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  struct Spawner_o **v12; // x8
  struct Spawner_o *v13; // x1

  if ( (byte_59738D6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_Spawner__getInstance__);
    byte_59738D6 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 4);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908(v8);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908(v8);
  v12 = *(struct Spawner_o ***)(v11 + 184);
  v13 = *v12;
  this->fields.spawner = *v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.spawner, (int32_t)v13, v2, v3, v4, v5, v6, v7);
  ((void (__fastcall *)(EffectComponent_o *, const MethodInfo *))this->klass->vtable._4_Init.methodPtr)(
    this,
    this->klass->vtable._4_Init.method);
}


void EffectComponent__StartActorBuffEffect(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActor; // x20
  __int64 v4; // x1
  BattleActorControl_o *v5; // x0

  if ( (byte_59738DF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59738DF = 1;
  }
  battleActor = (UnityEngine_Object_o *)this->fields.battleActor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(battleActor, 0, 0) )
  {
    v5 = this->fields.battleActor;
    if ( !v5 )
      sub_2213CDC(0, v4);
    BattleActorControl__ActiveReservedBuffEffect(v5, this->fields.effectBuffEffectId, 0);
  }
}


void EffectComponent__Update(EffectComponent_o *this, const MethodInfo *method)
{
  float totaltime; // s8
  const MethodInfo *v4; // x1
  float deltaTime; // s0
  float endtime; // s1
  float v7; // s0
  float v8; // s2
  __int64 v9; // x1
  UnityEngine_Object_o *spawner; // x20
  Spawner_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1
  struct UnityEngine_ParticleSystem_array *particlelist; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x21
  UnityEngine_Object_o *v17; // x19
  __int64 v18; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_59738D8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59738D8 = 1;
  }
  if ( this->fields.loop )
    return;
  totaltime = this->fields.totaltime;
  deltaTime = UnityEngine_Time__get_deltaTime(0);
  endtime = this->fields.endtime;
  v7 = totaltime + deltaTime;
  v8 = endtime + this->fields.losttime;
  this->fields.totaltime = v7;
  if ( v8 < v7 )
  {
    EffectComponent__StartActorBuffEffect(this, v4);
    spawner = (UnityEngine_Object_o *)this->fields.spawner;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( !UnityEngine_Object__op_Inequality(spawner, 0, 0) )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      return;
    }
    v11 = this->fields.spawner;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( v11 )
    {
      Spawner__Despawn(v11, v12, 1, 0);
      return;
    }
LABEL_27:
    sub_2213CDC(v12, v13);
  }
  if ( endtime > v7 )
    return;
  EffectComponent__StartActorBuffEffect(this, v4);
  particlelist = this->fields.particlelist;
  if ( !particlelist )
    goto LABEL_27;
  max_length = particlelist->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_2213CE4(v12);
      v17 = (UnityEngine_Object_o *)particlelist->m_Items[v16];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_27;
        UnityEngine_ParticleSystem__Stop_83837444((UnityEngine_ParticleSystem_o *)v17, 0);
      }
      LODWORD(max_length) = particlelist->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)max_length );
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
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59738DC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_14324/*"Texture"*/);
    byte_59738DC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  NodeFromName = (__int64)TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_14324/*"Texture"*/, 1, 0);
  if ( !NodeFromName )
    goto LABEL_18;
  v8 = (UnityEngine_Transform_o *)NodeFromName;
  NodeFromName = (__int64)UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)NodeFromName,
                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0);
  if ( !obj )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
          v18.fields.z = 0.0;
          v18.fields.x = -280.0;
          v18.fields.y = 475.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v18, 0);
          NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
          if ( NodeFromName )
          {
            v19.fields.x = 0.0;
            v19.fields.y = 0.0;
            v19.fields.z = 0.0;
            UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v19, 0);
            NodeFromName = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
            v11 = (UnityEngine_Transform_o *)NodeFromName;
            if ( !byte_5969AE5 )
            {
              NodeFromName = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
              byte_5969AE5 = 1;
            }
            if ( v11 )
            {
              UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)Component_object, 200, 0);
              this->fields.myStandFigure = (struct UIStandFigureR_o *)Component_object;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.myStandFigure,
                (int32_t)Component_object,
                v12,
                v13,
                v14,
                v15,
                v16,
                v17);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_2213CDC(NodeFromName, v7);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v20; // x23
  struct UIStandFigureR_o *RenderPrefab_47638192; // x0
  struct UIStandFigureR_o **p_myStandFigure; // x19
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UnityEngine_Transform_o *v29; // x20
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59738DD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_2213A60(&Method_EffectComponent_onFigureAssetLoad__);
    sub_2213A60(&StringLiteral_14324/*"Texture"*/);
    byte_59738DD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                              transform,
                                              (System_String_o *)StringLiteral_14324/*"Texture"*/,
                                              1,
                                              0);
  if ( !NodeFromName )
    goto LABEL_15;
  v12 = NodeFromName;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              NodeFromName,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0);
  this->fields.FigureLoadCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FigureLoadCallback,
    (int32_t)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  gameObject = UnityEngine_Component__get_gameObject(v12, 0);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_EffectComponent_onFigureAssetLoad__, 0);
  RenderPrefab_47638192 = StandFigureManager__CreateRenderPrefab_47638192(
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
  this->fields.myStandFigure = RenderPrefab_47638192;
  p_myStandFigure = &this->fields.myStandFigure;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_myStandFigure,
    (int32_t)RenderPrefab_47638192,
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
  v30.fields.z = 0.0;
  v30.fields.x = -280.0;
  v30.fields.y = 475.0;
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
  if ( !byte_5969AE5 )
  {
    NodeFromName = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v29
    || (UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (NodeFromName = (UnityEngine_Component_o *)*p_myStandFigure) == 0) )
  {
LABEL_15:
    sub_2213CDC(NodeFromName, v11);
  }
  UIStandFigureR__SetDepth((UIStandFigureR_o *)NodeFromName, 200, 0);
}


void EffectComponent__setLabel(EffectComponent_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_59738D9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59738D9 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    v7 = this->fields.label;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UILabel__set_text(v7, text, 0);
  }
}


void EffectComponent__setTexture(EffectComponent_o *this, System_String_o *filename, const MethodInfo *method)
{
  UnityEngine_Object_o *texture; // x21
  Il2CppObject *object; // x0
  __int64 v7; // x1
  struct UITexture_o *v8; // x8

  if ( (byte_59738DA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_Texture2D___);
    byte_59738DA = 1;
  }
  texture = (UnityEngine_Object_o *)this->fields.texture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, filename);
  if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
  {
    object = UnityEngine_Resources__Load_object_(
               filename,
               (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
    v8 = this->fields.texture;
    if ( !v8 )
      sub_2213CDC(object, v7);
    ((void (__fastcall *)(struct UITexture_o *__return_ptr, struct UITexture_o *, Il2CppObject *, const MethodInfo *))v8->klass->vtable._27_set_mainTexture.methodPtr)(
      v8,
      v8,
      object,
      v8->klass->vtable._27_set_mainTexture.method);
  }
}