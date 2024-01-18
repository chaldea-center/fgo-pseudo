void __fastcall EffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418BD44 & 1) == 0 )
  {
    sub_B2C35C(&EffectComponent_TypeInfo, v1);
    byte_418BD44 = 1;
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
  if ( (byte_418BD42 & 1) == 0 )
  {
    this = (EffectComponent_o *)sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, loadData);
    byte_418BD42 = 1;
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
        v8 = sub_B2C460(this);
        sub_B2C400(v8, 0LL);
      }
      ++v6;
    }
    while ( v6 < SLODWORD(losttime) );
  }
  particlelist = v4->fields.particlelist;
  this = (EffectComponent_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                loadData,
                                (System_String_o *)v4->fields.myStandFigure,
                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !particlelist )
LABEL_12:
    sub_B2C434(this, loadData);
  ((void (__fastcall *)(struct UnityEngine_ParticleSystem_array *, EffectComponent_o *, Il2CppMethodPointer))particlelist->obj.klass->vtable[27].method)(
    particlelist,
    this,
    particlelist->obj.klass->vtable[28].methodPtr);
}


void __fastcall EffectComponent__Init(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  changeVColor_array *v9; // x21
  int32_t v10; // w20
  UnityEngine_Material_o *v11; // x21

  if ( (byte_418BD3A & 1) == 0 )
  {
    sub_B2C35C(&EffectComponent_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___, v5);
    byte_418BD3A = 1;
  }
  if ( LOBYTE(this->fields.label) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v9 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
           gameObject,
           (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                               gameObject,
                                               (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( !((unsigned __int64)v9 | (unsigned __int64)gameObject) )
    {
      if ( !transform )
        goto LABEL_19;
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
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gameObject,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !gameObject )
            break;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material(
                                                     (UnityEngine_Renderer_o *)gameObject,
                                                     0LL);
          v11 = (UnityEngine_Material_o *)gameObject;
          if ( (BYTE3(EffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EffectComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo);
          }
          if ( !v11 )
            break;
          UnityEngine_Material__set_renderQueue(v11, EffectComponent_TypeInfo->static_fields->_RenderQueue, 0LL);
          if ( ++v10 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
            return;
        }
LABEL_19:
        sub_B2C434(gameObject, v8);
      }
    }
  }
}


void __fastcall EffectComponent__OnDestroy(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _QWORD *materials; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  _QWORD *v8; // x20
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *particlelist; // x20
  UnityEngine_Object_o *v12; // x0
  __int64 v13; // x0

  if ( (byte_418BD3C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418BD3C = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      v7 = materials[3];
      v8 = materials;
      if ( (int)v7 >= 1 )
      {
        v9 = 0LL;
        do
        {
          if ( v9 >= (unsigned int)v7 )
          {
            v13 = sub_B2C460(materials);
            sub_B2C400(v13, 0LL);
          }
          v10 = (UnityEngine_Object_o *)v8[v9 + 4];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_35315108(v10, 0LL);
          LODWORD(v7) = *((_DWORD *)v8 + 6);
          ++v9;
        }
        while ( (__int64)v9 < (int)v7 );
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
      v12 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*materials + 728LL))(
                                      materials,
                                      *(_QWORD *)(*materials + 736LL));
      UnityEngine_Resources__UnloadAsset(v12, 0LL);
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
    sub_B2C434(materials, v6);
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
  __int64 v10; // x1
  BattleActorControl_o *v11; // x0

  *(_QWORD *)&this->fields.effectBuffEffectId = actor;
  p_effectBuffEffectId = &this->fields.effectBuffEffectId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.effectBuffEffectId,
    (System_Int32_array **)actor,
    *(System_String_array ***)&buffEffectId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v11 = *(BattleActorControl_o **)p_effectBuffEffectId;
  p_effectBuffEffectId[2] = buffEffectId;
  if ( !v11 )
    sub_B2C434(0LL, v10);
  BattleActorControl__AddReservedEffectBuffEffectId(v11, buffEffectId, 0LL);
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

  if ( (byte_418BD3B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_Spawner__getInstance__, method);
    byte_418BD3B = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AC505C(v10);
  v11 = *(System_Int32_array ****)(v10 + 184);
  v12 = *v11;
  *(_QWORD *)&this->fields.totaltime = *v11;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.totaltime, v12, v2, v3, v4, v5, v6, v7);
  EffectComponent__Init(this, v13);
}


void __fastcall EffectComponent__StartActorBuffEffect(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  __int64 v4; // x1
  BattleActorControl_o *v5; // x0

  if ( (byte_418BD43 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418BD43 = 1;
  }
  v3 = *(UnityEngine_Object_o **)&this->fields.effectBuffEffectId;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
  {
    v5 = *(BattleActorControl_o **)&this->fields.effectBuffEffectId;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    BattleActorControl__ActiveReservedBuffEffect(v5, (int32_t)this->fields.filename, 0LL);
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
  __int64 v12; // x1
  struct Spawner_o *spawner; // x20
  struct Spawner_ResourcePrecacher_o *resourcePrecacher; // x8
  unsigned __int64 v15; // x21
  UnityEngine_Object_o *v16; // x19
  UnityEngine_Object_o *gameObject; // x19
  __int64 v18; // x0

  if ( (byte_418BD3D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418BD3D = 1;
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
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
    sub_B2C434(v11, v12);
  }
  if ( losttime > v8 )
    return;
  EffectComponent__StartActorBuffEffect(this, v4);
  spawner = this->fields.spawner;
  if ( !spawner )
    goto LABEL_30;
  resourcePrecacher = spawner->fields.resourcePrecacher;
  if ( (int)resourcePrecacher >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)resourcePrecacher )
      {
        v18 = sub_B2C460(v11);
        sub_B2C400(v18, 0LL);
      }
      v16 = (UnityEngine_Object_o *)*((_QWORD *)&spawner->fields.requestsByPath + v15);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_30;
        UnityEngine_ParticleSystem__Stop_50259500((UnityEngine_ParticleSystem_o *)v16, 0LL);
      }
      LODWORD(resourcePrecacher) = spawner->fields.resourcePrecacher;
      ++v15;
    }
    while ( (__int64)v15 < (int)resourcePrecacher );
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
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *v13; // x21
  int v14; // s0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418BD40 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, obj);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_13658/*"Texture"*/, v7);
    byte_418BD40 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_13658/*"Texture"*/, 1, 0LL);
  if ( !NodeFromName )
    goto LABEL_17;
  v11 = NodeFromName;
  NodeFromName = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              (UnityEngine_Component_o *)NodeFromName,
                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0LL);
  if ( !obj )
    goto LABEL_17;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      obj,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
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
        UnityEngine_Transform__set_parent(NodeFromName, v11, 0LL);
        NodeFromName = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
        if ( NodeFromName )
        {
          v23.fields.x = -280.0;
          v23.fields.y = 475.0;
          v23.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(NodeFromName, v23, 0LL);
          NodeFromName = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
          if ( NodeFromName )
          {
            v24.fields.x = 0.0;
            v24.fields.y = 0.0;
            v24.fields.z = 0.0;
            UnityEngine_Transform__set_localEulerAngles(NodeFromName, v24, 0LL);
            v13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
            *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL);
            if ( v13 )
            {
              UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)Component_srcLineSprite, 200, 0LL);
              this->fields.FigureLoadCallback = (struct System_Action_o *)Component_srcLineSprite;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.FigureLoadCallback,
                (System_Int32_array **)Component_srcLineSprite,
                v17,
                v18,
                v19,
                v20,
                v21,
                v22);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_B2C434(NodeFromName, v10);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v23; // x23
  struct System_Action_o *RenderPrefab_27085276; // x0
  struct System_Action_o **p_FigureLoadCallback; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Transform_o *v32; // x19
  int v33; // s0
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418BD41 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, v9);
    sub_B2C35C(&Method_EffectComponent_onFigureAssetLoad__, v10);
    sub_B2C35C(&StringLiteral_13658/*"Texture"*/, v11);
    byte_418BD41 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                              transform,
                                              (System_String_o *)StringLiteral_13658/*"Texture"*/,
                                              1,
                                              0LL);
  if ( !NodeFromName )
    goto LABEL_13;
  v15 = NodeFromName;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              NodeFromName,
                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !NodeFromName )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)NodeFromName, 0, 0LL);
  this[1].klass = (EffectComponent_c *)callback;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EffectComponent_onFigureAssetLoad__, 0LL);
  RenderPrefab_27085276 = (struct System_Action_o *)StandFigureManager__CreateRenderPrefab_27085276(
                                                      gameObject,
                                                      svtId,
                                                      limit,
                                                      2,
                                                      2,
                                                      0,
                                                      v23,
                                                      0,
                                                      -1,
                                                      0LL);
  p_FigureLoadCallback = &this->fields.FigureLoadCallback;
  this->fields.FigureLoadCallback = RenderPrefab_27085276;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.FigureLoadCallback,
    (System_Int32_array **)RenderPrefab_27085276,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  NodeFromName = (UnityEngine_Component_o *)this->fields.FigureLoadCallback;
  if ( !NodeFromName )
    goto LABEL_13;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  if ( !NodeFromName )
    goto LABEL_13;
  v36.fields.x = -280.0;
  v36.fields.y = 475.0;
  v36.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)NodeFromName, v36, 0LL);
  NodeFromName = (UnityEngine_Component_o *)*p_FigureLoadCallback;
  if ( !*p_FigureLoadCallback )
    goto LABEL_13;
  NodeFromName = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(NodeFromName, 0LL);
  if ( !NodeFromName )
    goto LABEL_13;
  v37.fields.x = 0.0;
  v37.fields.y = 0.0;
  v37.fields.z = 0.0;
  UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)NodeFromName, v37, 0LL);
  NodeFromName = (UnityEngine_Component_o *)*p_FigureLoadCallback;
  if ( !*p_FigureLoadCallback
    || (v32 = UnityEngine_Component__get_transform(NodeFromName, 0LL),
        *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL),
        !v32)
    || (UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v33, 0LL),
        (NodeFromName = (UnityEngine_Component_o *)*p_FigureLoadCallback) == 0LL) )
  {
LABEL_13:
    sub_B2C434(NodeFromName, v14);
  }
  UIStandFigureR__SetDepth((UIStandFigureR_o *)NodeFromName, 200, 0LL);
}


void __fastcall EffectComponent__setLabel(EffectComponent_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mstobject; // x21
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0

  if ( (byte_418BD3E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, text);
    byte_418BD3E = 1;
  }
  mstobject = (UnityEngine_Object_o *)this->fields.mstobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mstobject, 0LL, 0LL) )
  {
    v7 = this->fields.mstobject;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    UILabel__set_text((UILabel_o *)v7, text, 0LL);
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
  __int64 v8; // x1
  struct UnityEngine_ParticleSystem_array *v9; // x8

  if ( (byte_418BD3F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, filename);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    byte_418BD3F = 1;
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
                (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
    v9 = this->fields.particlelist;
    if ( !v9 )
      sub_B2C434(UIAtlas, v8);
    ((void (__fastcall *)(struct UnityEngine_ParticleSystem_array *, UIAtlas_o *, Il2CppMethodPointer))v9->obj.klass->vtable[27].method)(
      v9,
      UIAtlas,
      v9->obj.klass->vtable[28].methodPtr);
  }
}