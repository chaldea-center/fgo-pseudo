void __fastcall EffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FE262 & 1) == 0 )
  {
    sub_B16FFC(&EffectComponent_TypeInfo, v1);
    byte_40FE262 = 1;
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
  System_String_array *ObjectNameList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  int i; // w9
  struct UnityEngine_ParticleSystem_array *particlelist; // x21
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_40FE260 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, loadData);
    byte_40FE260 = 1;
  }
  if ( !loadData )
    goto LABEL_12;
  ObjectNameList = AssetData__GetObjectNameList(loadData, 0LL);
  if ( !ObjectNameList )
    goto LABEL_12;
  max_length = ObjectNameList->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        sub_B17100(ObjectNameList, v6, v7);
        sub_B170A0();
      }
    }
  }
  particlelist = this->fields.particlelist;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     loadData,
                                     (System_String_o *)this->fields.myStandFigure,
                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !particlelist )
LABEL_12:
    sub_B170D4();
  ((void (__fastcall *)(struct UnityEngine_ParticleSystem_array *, WarBoardWaitTimeSetting_o *, Il2CppMethodPointer))particlelist->obj.klass->vtable[27].method)(
    particlelist,
    Object_WarBoardWaitTimeSetting,
    particlelist->obj.klass->vtable[28].methodPtr);
}


void __fastcall EffectComponent__Init(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  changeVColor_array *v8; // x21
  UnityEngine_GameObject_o *v9; // x0
  int32_t v10; // w20
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Renderer_o *Component_srcLineSprite; // x0
  UnityEngine_Material_o *material; // x21

  if ( (byte_40FE258 & 1) == 0 )
  {
    sub_B16FFC(&EffectComponent_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___, v5);
    byte_40FE258 = 1;
  }
  if ( LOBYTE(this->fields.label) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    v8 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
           gameObject,
           (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UISprite___);
    v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v9 )
      goto LABEL_19;
    if ( !((unsigned __int64)v8 | (unsigned __int64)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                                      v9,
                                                      (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___)) )
    {
      if ( !transform )
        goto LABEL_19;
      if ( UnityEngine_Transform__get_childCount(transform, 0LL) >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(transform, v10, 0LL);
          if ( !Child )
            break;
          v12 = UnityEngine_Component__get_gameObject(Child, 0LL);
          if ( !v12 )
            break;
          Component_srcLineSprite = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                v12,
                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Renderer___);
          if ( !Component_srcLineSprite )
            break;
          material = UnityEngine_Renderer__get_material(Component_srcLineSprite, 0LL);
          if ( (BYTE3(EffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EffectComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo);
          }
          if ( !material )
            break;
          UnityEngine_Material__set_renderQueue(material, EffectComponent_TypeInfo->static_fields->_RenderQueue, 0LL);
          if ( ++v10 >= UnityEngine_Transform__get_childCount(transform, 0LL) )
            return;
        }
LABEL_19:
        sub_B170D4();
      }
    }
  }
}


void __fastcall EffectComponent__OnDestroy(EffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Renderer_o *Component_WebViewObject; // x20
  UnityEngine_Material_array *materials; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x8
  UnityEngine_Material_array *v9; // x20
  unsigned __int64 v10; // x23
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *particlelist; // x20
  struct UnityEngine_ParticleSystem_array *v13; // x0
  UnityEngine_Object_o *v14; // x0
  struct UnityEngine_ParticleSystem_array *v15; // x0

  if ( (byte_40FE25A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FE25A = 1;
  }
  Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      goto LABEL_26;
    if ( UnityEngine_Renderer__get_materials(Component_WebViewObject, 0LL) )
    {
      materials = UnityEngine_Renderer__get_materials(Component_WebViewObject, 0LL);
      if ( !materials )
        goto LABEL_26;
      v8 = *(_QWORD *)&materials->max_length;
      v9 = materials;
      if ( (int)v8 >= 1 )
      {
        v10 = 0LL;
        do
        {
          if ( v10 >= (unsigned int)v8 )
          {
            sub_B17100(materials, v6, v7);
            sub_B170A0();
          }
          v11 = (UnityEngine_Object_o *)v9->m_Items[v10];
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_34809676(v11, 0LL);
          LODWORD(v8) = v9->max_length;
          ++v10;
        }
        while ( (__int64)v10 < (int)v8 );
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
    v13 = this->fields.particlelist;
    if ( v13 )
    {
      v14 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UnityEngine_ParticleSystem_array *, Il2CppMethodPointer))v13->obj.klass->vtable[26].method)(
                                      v13,
                                      v13->obj.klass->vtable[27].methodPtr);
      UnityEngine_Resources__UnloadAsset(v14, 0LL);
      v15 = this->fields.particlelist;
      if ( v15 )
      {
        ((void (__fastcall *)(struct UnityEngine_ParticleSystem_array *, _QWORD, Il2CppMethodPointer))v15->obj.klass->vtable[27].method)(
          v15,
          0LL,
          v15->obj.klass->vtable[28].methodPtr);
        return;
      }
    }
LABEL_26:
    sub_B170D4();
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
  sub_B16F98(
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
    sub_B170D4();
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

  if ( (byte_40FE259 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_Spawner__getInstance__, method);
    byte_40FE259 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_Spawner__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(v10);
  v11 = *(System_Int32_array ****)(v10 + 184);
  v12 = *v11;
  *(_QWORD *)&this->fields.totaltime = *v11;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.totaltime, v12, v2, v3, v4, v5, v6, v7);
  EffectComponent__Init(this, v13);
}


void __fastcall EffectComponent__StartActorBuffEffect(EffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  BattleActorControl_o *v4; // x0

  if ( (byte_40FE261 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FE261 = 1;
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
      sub_B170D4();
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
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct Spawner_o *spawner; // x20
  struct Spawner_ResourcePrecacher_o *resourcePrecacher; // x8
  unsigned __int64 v17; // x21
  UnityEngine_Object_o *v18; // x19
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FE25B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FE25B = 1;
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
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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
    sub_B170D4();
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
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)resourcePrecacher )
      {
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      v18 = (UnityEngine_Object_o *)*((_QWORD *)&spawner->fields.requestsByPath + v17);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
      if ( v12 )
      {
        if ( !v18 )
          goto LABEL_30;
        UnityEngine_ParticleSystem__Stop_49805596((UnityEngine_ParticleSystem_o *)v18, 0LL);
      }
      LODWORD(resourcePrecacher) = spawner->fields.resourcePrecacher;
      ++v17;
    }
    while ( (__int64)v17 < (int)resourcePrecacher );
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
  UnityEngine_Component_o *NodeFromName; // x0
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Behaviour_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x21
  int v17; // s0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FE25E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, obj);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_13601/*"Texture"*/, v7);
    byte_40FE25E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                              transform,
                                              (System_String_o *)StringLiteral_13601/*"Texture"*/,
                                              1,
                                              0LL);
  if ( !NodeFromName )
    goto LABEL_17;
  v10 = (UnityEngine_Transform_o *)NodeFromName;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         NodeFromName,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !Component_WebViewObject )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
  if ( !obj )
    goto LABEL_17;
  Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         obj,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      v13 = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
      if ( v13 )
      {
        UnityEngine_Transform__set_parent(v13, v10, 0LL);
        v14 = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
        if ( v14 )
        {
          v26.fields.x = -280.0;
          v26.fields.y = 475.0;
          v26.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v14, v26, 0LL);
          v15 = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
          if ( v15 )
          {
            v27.fields.x = 0.0;
            v27.fields.y = 0.0;
            v27.fields.z = 0.0;
            UnityEngine_Transform__set_localEulerAngles(v15, v27, 0LL);
            v16 = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
            *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
            if ( v16 )
            {
              UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)Component_srcLineSprite, 200, 0LL);
              this->fields.FigureLoadCallback = (struct System_Action_o *)Component_srcLineSprite;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.FigureLoadCallback,
                (System_Int32_array **)Component_srcLineSprite,
                v20,
                v21,
                v22,
                v23,
                v24,
                v25);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_B170D4();
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
  UnityEngine_Behaviour_o *Component_WebViewObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x23
  struct System_Action_o *RenderPrefab_26843068; // x0
  UnityEngine_Component_o **p_FigureLoadCallback; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Action_o *FigureLoadCallback; // x0
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Transform_o *v38; // x0
  UnityEngine_Transform_o *v39; // x19
  int v40; // s0
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FE25F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, v9);
    sub_B16FFC(&Method_EffectComponent_onFigureAssetLoad__, v10);
    sub_B16FFC(&StringLiteral_13601/*"Texture"*/, v11);
    byte_40FE25F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                              transform,
                                              (System_String_o *)StringLiteral_13601/*"Texture"*/,
                                              1,
                                              0LL);
  if ( !NodeFromName )
    goto LABEL_13;
  v14 = NodeFromName;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         NodeFromName,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  if ( !Component_WebViewObject )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
  this[1].klass = (EffectComponent_c *)callback;
  sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
  v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_EffectComponent_onFigureAssetLoad__, 0LL);
  RenderPrefab_26843068 = (struct System_Action_o *)StandFigureManager__CreateRenderPrefab_26843068(
                                                      gameObject,
                                                      svtId,
                                                      limit,
                                                      2,
                                                      2,
                                                      0,
                                                      v27,
                                                      0,
                                                      -1,
                                                      0LL);
  p_FigureLoadCallback = (UnityEngine_Component_o **)&this->fields.FigureLoadCallback;
  this->fields.FigureLoadCallback = RenderPrefab_26843068;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.FigureLoadCallback,
    (System_Int32_array **)RenderPrefab_26843068,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  FigureLoadCallback = this->fields.FigureLoadCallback;
  if ( !FigureLoadCallback )
    goto LABEL_13;
  v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)FigureLoadCallback, 0LL);
  if ( !v37 )
    goto LABEL_13;
  v43.fields.x = -280.0;
  v43.fields.y = 475.0;
  v43.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v37, v43, 0LL);
  if ( !*p_FigureLoadCallback )
    goto LABEL_13;
  v38 = UnityEngine_Component__get_transform(*p_FigureLoadCallback, 0LL);
  if ( !v38
    || (v44.fields.x = 0.0,
        v44.fields.y = 0.0,
        v44.fields.z = 0.0,
        UnityEngine_Transform__set_localEulerAngles(v38, v44, 0LL),
        !*p_FigureLoadCallback)
    || (v39 = UnityEngine_Component__get_transform(*p_FigureLoadCallback, 0LL),
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL),
        !v39)
    || (UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v40, 0LL), !*p_FigureLoadCallback) )
  {
LABEL_13:
    sub_B170D4();
  }
  UIStandFigureR__SetDepth((UIStandFigureR_o *)*p_FigureLoadCallback, 200, 0LL);
}


void __fastcall EffectComponent__setLabel(EffectComponent_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mstobject; // x21
  struct UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40FE25C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, text);
    byte_40FE25C = 1;
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
      sub_B170D4();
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

  if ( (byte_40FE25D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, filename);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    byte_40FE25D = 1;
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
                (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
    v8 = this->fields.particlelist;
    if ( !v8 )
      sub_B170D4();
    ((void (__fastcall *)(struct UnityEngine_ParticleSystem_array *, UIAtlas_o *, Il2CppMethodPointer))v8->obj.klass->vtable[27].method)(
      v8,
      UIAtlas,
      v8->obj.klass->vtable[28].methodPtr);
  }
}