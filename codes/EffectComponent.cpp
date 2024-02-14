void __fastcall EffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4218B67 & 1) == 0 )
  {
    sub_B0D8A4(&EffectComponent_TypeInfo, v1);
    byte_4218B67 = 1;
  }
  EffectComponent_TypeInfo->static_fields->_RenderQueue = 4000;
}


void __fastcall EffectComponent___ctor(EffectComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #5.0 }
  *(_QWORD *)&this->fields.losttime = _D0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectComponent__EndLoadAsset(EffectComponent_o *this, AssetData_o *loadData, const MethodInfo *method)
{
  EffectComponent_o *v4; // x20
  float losttime; // w8
  int v6; // w9
  struct UnityEngine_ParticleSystem_array *particlelist; // x21
  __int64 v8; // x0

  v4 = this;
  if ( (byte_4218B65 & 1) == 0 )
  {
    this = (EffectComponent_o *)sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, loadData);
    byte_4218B65 = 1;
  }
  if ( !loadData )
    goto LABEL_12;
  this = (EffectComponent_o *)AssetData__GetObjectNameList(loadData, 0LL);
  if ( !this )
    goto LABEL_12;
  losttime = this->fields.losttime;
  if ( SLODWORD(losttime) >= 1 )
  {
    v6 = 0;
    do
    {
      if ( (unsigned int)v6 >= LODWORD(losttime) )
      {
        v8 = sub_B0D9A8(this);
        sub_B0D948(v8, 0LL);
      }
      ++v6;
    }
    while ( v6 < SLODWORD(losttime) );
  }
  particlelist = v4->fields.particlelist;
  this = (EffectComponent_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                loadData,
                                (System_String_o *)v4->fields.myStandFigure,
                                (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
  if ( !particlelist )
LABEL_12:
    sub_B0D97C(this);
  ((void (__fastcall *)(struct UnityEngine_ParticleSystem_array *, EffectComponent_o *, Il2CppMethodPointer))particlelist->obj.klass->vtable[27].method)(
    particlelist,
    this,
    particlelist->obj.klass->vtable[28].methodPtr);
}


// local variable allocation has failed, the output may be wrong!
UISprite_o *__fastcall EffectComponent__GetSpriteByIndex(
        EffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4218B62 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_UISprite___, *(_QWORD *)&index);
    byte_4218B62 = 1;
  }
  return (UISprite_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                         (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.spawner,
                         index,
                         0LL,
                         (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_UISprite___);
}


void __fastcall EffectComponent__Init(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  changeVColor_array *v8; // x21
  int32_t v9; // w20
  UnityEngine_Material_o *v10; // x21

  if ( (byte_4218B5C & 1) == 0 )
  {
    sub_B0D8A4(&EffectComponent_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___, v5);
    byte_4218B5C = 1;
  }
  if ( LOBYTE(this->fields.label) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v8 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
           gameObject,
           (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                               gameObject,
                                               (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( !((unsigned __int64)v8 | (unsigned __int64)gameObject) )
    {
      if ( !transform )
        goto LABEL_19;
      if ( UnityEngine_Transform__get_childCount(transform, 0LL) >= 1 )
      {
        v9 = 0;
        while ( 1 )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(transform, v9, 0LL);
          if ( !gameObject )
            break;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gameObject,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)gameObject,
                                                     0LL);
          v10 = (UnityEngine_Material_o *)gameObject;
          if ( (BYTE3(EffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EffectComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo);
          }
          if ( !v10 )
            break;
          UnityEngine_Material__set_renderQueue(v10, EffectComponent_TypeInfo->static_fields->_RenderQueue, 0LL);
          if ( ++v9 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
            return;
        }
LABEL_19:
        sub_B0D97C(gameObject);
      }
    }
  }
}


void __fastcall EffectComponent__OnDestroy(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _QWORD *materials; // x0
  __int64 v6; // x8
  _QWORD *v7; // x20
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *particlelist; // x20
  UnityEngine_Object_o *v11; // x0
  __int64 v12; // x0

  if ( (byte_4218B5E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4218B5E = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  materials = (_QWORD *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)materials & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_26;
    if ( UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)Component_WebViewObject, 0LL) )
    {
      materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)Component_WebViewObject, 0LL);
      if ( !materials )
        goto LABEL_26;
      v6 = materials[3];
      v7 = materials;
      if ( (int)v6 >= 1 )
      {
        v8 = 0LL;
        do
        {
          if ( v8 >= (unsigned int)v6 )
          {
            v12 = sub_B0D9A8(materials);
            sub_B0D948(v12, 0LL);
          }
          v9 = (UnityEngine_Object_o *)v7[v8 + 4];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_34935488(v9, 0LL);
          LODWORD(v6) = *((_DWORD *)v7 + 6);
          ++v8;
        }
        while ( (__int64)v8 < (int)v6 );
      }
    }
  }
  particlelist = (UnityEngine_Object_o *)this->fields.particlelist;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(particlelist, 0LL, 0LL) )
  {
    materials = &this->fields.particlelist->obj.klass;
    if ( materials )
    {
      v11 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*materials + 728LL))(
                                      materials,
                                      *(_QWORD *)(*materials + 736LL));
      UnityEngine_Resources__UnloadAsset(v11, 0LL);
      materials = &this->fields.particlelist->obj.klass;
      if ( materials )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*materials + 744LL))(
          materials,
          0LL,
          *(_QWORD *)(*materials + 752LL));
        return;
      }
    }
LABEL_26:
    sub_B0D97C(materials);
  }
}


void __fastcall EffectComponent__OnSpawn(EffectComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.battleActor) = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EffectComponent__SetBattleActor(
        EffectComponent_o *this,
        BattleActorControl_o *actor,
        int32_t buffEffectId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t *p_effectBuffEffectId; // x20
  BattleActorControl_o *v10; // x0

  *(_QWORD *)&this->fields.effectBuffEffectId = actor;
  p_effectBuffEffectId = &this->fields.effectBuffEffectId;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effectBuffEffectId,
    (System_Int32_array **)actor,
    *(System_String_array ***)&buffEffectId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v10 = *(BattleActorControl_o **)p_effectBuffEffectId;
  p_effectBuffEffectId[2] = buffEffectId;
  if ( !v10 )
    sub_B0D97C(0LL);
  BattleActorControl__AddReservedEffectBuffEffectId(v10, buffEffectId, 0LL);
}


void __fastcall EffectComponent__Start(EffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x20
  __int64 v10; // x20
  System_Int32_array ***v11; // x8
  System_Int32_array **v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4218B5D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_Spawner__getInstance__, method);
    byte_4218B5D = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AA65A4(v10);
  v11 = *(System_Int32_array ****)(v10 + 184);
  v12 = *v11;
  *(_QWORD *)&this->fields.totaltime = *v11;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.totaltime, v12, v2, v3, v4, v5, v6, v7);
  EffectComponent__Init(this, v13);
}


void __fastcall EffectComponent__StartActorBuffEffect(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  BattleActorControl_o *v4; // x0

  if ( (byte_4218B66 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218B66 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.effectBuffEffectId;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
  {
    v4 = *(BattleActorControl_o **)&this->fields.effectBuffEffectId;
    if ( !v4 )
      sub_B0D97C(0LL);
    BattleActorControl__ActiveReservedBuffEffect(v4, (int32_t)this->fields.filename, 0LL);
  }
}


void __fastcall EffectComponent__Update(EffectComponent_o *this, const MethodInfo *method)
{
  float v3; // s8
  const MethodInfo *v4; // x1
  float deltaTime; // s0
  float losttime; // s1
  float v7; // s2
  float v8; // s0
  UnityEngine_Object_o *v9; // x20
  Spawner_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x0
  struct UISprite_array *spriteArray; // x20
  __int64 v13; // x8
  unsigned __int64 v14; // x21
  UnityEngine_Object_o *v15; // x19
  UnityEngine_Object_o *gameObject; // x19
  __int64 v17; // x0

  if ( (byte_4218B5F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4218B5F = 1;
  }
  if ( BYTE1(this->fields.label) )
    return;
  v3 = *(float *)&this->fields.battleActor;
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  losttime = this->fields.losttime;
  v7 = *(float *)&this->fields.uieffect;
  v8 = v3 + deltaTime;
  *(float *)&this->fields.battleActor = v8;
  if ( (float)(losttime + v7) < v8 )
  {
    EffectComponent__StartActorBuffEffect(this, v4);
    v9 = *(UnityEngine_Object_o **)&this->fields.totaltime;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      return;
    }
    v10 = *(Spawner_o **)&this->fields.totaltime;
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v10 )
    {
      Spawner__Despawn(v10, v11, 1, 0LL);
      return;
    }
LABEL_30:
    sub_B0D97C(v11);
  }
  if ( losttime > v8 )
    return;
  EffectComponent__StartActorBuffEffect(this, v4);
  spriteArray = this->fields.spriteArray;
  if ( !spriteArray )
    goto LABEL_30;
  v13 = *(_QWORD *)&spriteArray->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
      {
        v17 = sub_B0D9A8(v11);
        sub_B0D948(v17, 0LL);
      }
      v15 = (UnityEngine_Object_o *)spriteArray->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_30;
        UnityEngine_ParticleSystem__Stop_50661880((UnityEngine_ParticleSystem_o *)v15, 0LL);
      }
      LODWORD(v13) = spriteArray->max_length;
      ++v14;
    }
    while ( (__int64)v14 < (int)v13 );
  }
}


void __fastcall EffectComponent__onFigureAssetLoad(EffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *klass; // x0

  klass = (System_Action_o *)this[1].klass;
  if ( klass )
    System_Action__Invoke(klass, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EffectComponent__replaceFigure(
        EffectComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *v12; // x21
  int v13; // s0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218B63 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, obj);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_13702/*"Texture"*/, v7);
    byte_4218B63 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_13702/*"Texture"*/, 1, 0LL);
  if ( !NodeFromName )
    goto LABEL_17;
  v10 = NodeFromName;
  NodeFromName = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              (UnityEngine_Component_o *)NodeFromName,
                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0LL);
  if ( !obj )
    goto LABEL_17;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      obj,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  NodeFromName = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)NodeFromName & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      NodeFromName = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      if ( NodeFromName )
      {
        UnityEngine_Transform__set_parent(NodeFromName, v10, 0LL);
        NodeFromName = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( NodeFromName )
        {
          v22.fields.x = -280.0;
          v22.fields.y = 475.0;
          v22.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(NodeFromName, v22, 0LL);
          NodeFromName = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
          if ( NodeFromName )
          {
            v23.fields.x = 0.0;
            v23.fields.y = 0.0;
            v23.fields.z = 0.0;
            UnityEngine_Transform__set_localEulerAngles(NodeFromName, v23, 0LL);
            v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
            *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL);
            if ( v12 )
            {
              UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)Component_srcLineSprite, 200, 0LL);
              this->fields.FigureLoadCallback = (struct System_Action_o *)Component_srcLineSprite;
              sub_B0D840(
                (BattleServantConfConponent_o *)&this->fields.FigureLoadCallback,
                (System_Int32_array **)Component_srcLineSprite,
                v16,
                v17,
                v18,
                v19,
                v20,
                v21);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_B0D97C(NodeFromName);
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
  UnityEngine_Component_o *v14; // x23
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x23
  struct System_Action_o *RenderPrefab_25972252; // x0
  struct System_Action_o **p_FigureLoadCallback; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Transform_o *v33; // x19
  int v34; // s0
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218B64 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, v9);
    sub_B0D8A4(&Method_EffectComponent_onFigureAssetLoad__, v10);
    sub_B0D8A4(&StringLiteral_13702/*"Texture"*/, v11);
    byte_4218B64 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                              transform,
                                              (System_String_o *)StringLiteral_13702/*"Texture"*/,
                                              1,
                                              0LL);
  if ( !NodeFromName )
    goto LABEL_13;
  v14 = NodeFromName;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              NodeFromName,
                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0LL);
  this[1].klass = (EffectComponent_c *)callback;
  sub_B0D840((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_EffectComponent_onFigureAssetLoad__, 0LL);
  RenderPrefab_25972252 = (struct System_Action_o *)StandFigureManager__CreateRenderPrefab_25972252(
                                                      gameObject,
                                                      svtId,
                                                      limit,
                                                      2,
                                                      2,
                                                      0,
                                                      v24,
                                                      0,
                                                      -1,
                                                      0LL);
  p_FigureLoadCallback = &this->fields.FigureLoadCallback;
  this->fields.FigureLoadCallback = RenderPrefab_25972252;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.FigureLoadCallback,
    (System_Int32_array **)RenderPrefab_25972252,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  NodeFromName = (UnityEngine_Component_o *)this->fields.FigureLoadCallback;
  if ( !NodeFromName )
    goto LABEL_13;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  if ( !NodeFromName )
    goto LABEL_13;
  v37.fields.x = -280.0;
  v37.fields.y = 475.0;
  v37.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v37, 0LL);
  NodeFromName = (UnityEngine_Component_o *)*p_FigureLoadCallback;
  if ( !*p_FigureLoadCallback )
    goto LABEL_13;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  if ( !NodeFromName )
    goto LABEL_13;
  v38.fields.x = 0.0;
  v38.fields.y = 0.0;
  v38.fields.z = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v38, 0LL);
  NodeFromName = (UnityEngine_Component_o *)*p_FigureLoadCallback;
  if ( !*p_FigureLoadCallback
    || (v33 = UnityEngine_Component__get_transform(NodeFromName, 0LL),
        *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_one(0LL),
        !v33)
    || (UnityEngine_Transform__set_localScale(v33, *(UnityEngine_Vector3_o *)&v34, 0LL),
        (NodeFromName = (UnityEngine_Component_o *)*p_FigureLoadCallback) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(NodeFromName);
  }
  UIStandFigureR__SetDepth((UIStandFigureR_o *)NodeFromName, 200, 0LL);
}


void __fastcall EffectComponent__setLabel(EffectComponent_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mstobject; // x21
  struct UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4218B60 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, text);
    byte_4218B60 = 1;
  }
  mstobject = (UnityEngine_Object_o *)this->fields.mstobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mstobject, 0LL, 0LL) )
  {
    v6 = this->fields.mstobject;
    if ( !v6 )
      sub_B0D97C(0LL);
    UILabel__set_text((UILabel_o *)v6, text, 0LL);
  }
}


void __fastcall EffectComponent__setTexture(
        EffectComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *particlelist; // x21
  UIAtlas_o *UIAtlas; // x0
  struct UnityEngine_ParticleSystem_array *v8; // x8

  if ( (byte_4218B61 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, filename);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    byte_4218B61 = 1;
  }
  particlelist = (UnityEngine_Object_o *)this->fields.particlelist;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(particlelist, 0LL, 0LL) )
  {
    UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                filename,
                (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_Texture2D___);
    v8 = this->fields.particlelist;
    if ( !v8 )
      sub_B0D97C(UIAtlas);
    ((void (__fastcall *)(struct UnityEngine_ParticleSystem_array *, UIAtlas_o *, Il2CppMethodPointer))v8->obj.klass->vtable[27].method)(
      v8,
      UIAtlas,
      v8->obj.klass->vtable[28].methodPtr);
  }
}