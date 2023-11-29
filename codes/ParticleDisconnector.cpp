void __fastcall ParticleDisconnector___ctor(ParticleDisconnector_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_ParticleSystem_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F8030 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_ParticleSystem___TypeInfo, method);
    byte_40F8030 = 1;
  }
  v4 = (struct UnityEngine_ParticleSystem_array *)sub_B17014(UnityEngine_ParticleSystem___TypeInfo, 0LL, v2);
  this->fields.particles = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.particles,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


ParticleDisconnector_o *__fastcall ParticleDisconnector__DisconnectParticles(
        UnityEngine_Transform_o *globalParent,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v6; // x0
  const MethodInfo *v7; // x2
  ParticleDisconnector_o *v8; // x20

  if ( (byte_40F8033 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___, obj);
    byte_40F8033 = 1;
  }
  if ( !globalParent
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)globalParent, 0LL)) == 0LL
    || (v6 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
               gameObject,
               (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___)) == 0LL )
  {
    sub_B170D4();
  }
  v8 = (ParticleDisconnector_o *)v6;
  ParticleDisconnector__Initialize((ParticleDisconnector_o *)v6, obj, v7);
  return v8;
}


void __fastcall ParticleDisconnector__HideAll(ParticleDisconnector_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_IEnumerable_T__o *v12; // x19
  ParticleDisconnector___c_c *v13; // x8
  struct ParticleDisconnector___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__3_0; // x20
  Il2CppObject *v16; // x21
  struct ParticleDisconnector___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40F8032 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ParticleSystem___ctor__, method);
    sub_B16FFC(&System_Action_ParticleSystem__TypeInfo, v3);
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_ParticleSystem___, v4);
    sub_B16FFC(&Method_BasicHelper_ForEach_ParticleSystem___, v5);
    sub_B16FFC(&Method_ParticleDisconnector___c__HideAll_b__3_0__, v6);
    sub_B16FFC(&ParticleDisconnector___c_TypeInfo, v7);
    byte_40F8032 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.particles, 0LL) )
  {
    v12 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            (System_Collections_Generic_IEnumerable_T__o *)this->fields.particles,
            (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    v13 = ParticleDisconnector___c_TypeInfo;
    if ( (BYTE3(ParticleDisconnector___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ParticleDisconnector___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ParticleDisconnector___c_TypeInfo);
      v13 = ParticleDisconnector___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__3_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = ParticleDisconnector___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__3_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_ParticleSystem__TypeInfo,
                                                                                       v8,
                                                                                       v9,
                                                                                       v10,
                                                                                       v11);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__3_0,
        v16,
        Method_ParticleDisconnector___c__HideAll_b__3_0__,
        (const MethodInfo_24B7310 *)Method_System_Action_ParticleSystem___ctor__);
      v17 = ParticleDisconnector___c_TypeInfo->static_fields;
      v17->__9__3_0 = (struct System_Action_ParticleSystem__o *)_9__3_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v17->__9__3_0,
        (System_Int32_array **)_9__3_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v12,
      (System_Action_T__o *)_9__3_0,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_ParticleSystem___);
  }
}


void __fastcall ParticleDisconnector__Initialize(
        ParticleDisconnector_o *this,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct UnityEngine_ParticleSystem_array *particles; // x22
  int max_length; // w8
  unsigned int v17; // w23
  Il2CppClass **v18; // x8
  UnityEngine_Component_o *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v23; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v25; // 0:x0.8

  if ( (byte_40F8031 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____66819872, obj);
    byte_40F8031 = 1;
  }
  m_ParticleSystem = 0LL;
  if ( !obj )
    goto LABEL_16;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (struct UnityEngine_ParticleSystem_array *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_((UnityEngine_Component_o *)obj, 1, (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____66819872);
  this->fields.particles = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.particles,
    (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  particles = this->fields.particles;
  if ( !particles )
    goto LABEL_16;
  max_length = particles->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      v18 = &particles->obj.klass + (int)v17;
      v19 = (UnityEngine_Component_o *)v18[4];
      if ( !v19 )
        break;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18[4], 0LL);
      if ( !gameObject )
        break;
      if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
      {
        v21 = UnityEngine_Component__get_gameObject(v19, 0LL);
        if ( !v21 )
          break;
        UnityEngine_GameObject__SetActive(v21, 0, 0LL);
      }
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v19, 0LL).fields.m_ParticleSystem;
      v25.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_cullingMode(v25, 3, 0LL);
      transform = UnityEngine_Component__get_transform(v19, 0LL);
      v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__set_parent(transform, v23, 0LL);
      UnityEngine_ParticleSystem__Stop_49805596((UnityEngine_ParticleSystem_o *)v19, 0LL);
      max_length = particles->max_length;
      if ( (int)++v17 >= max_length )
        return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall ParticleDisconnector__OnDestroy(ParticleDisconnector_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ParticleDisconnector_o *v3; // x19
  struct UnityEngine_ParticleSystem_array *particles; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19
  UnityEngine_Object_o *gameObject; // x19

  v3 = this;
  if ( (byte_40F8035 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8035 = 1;
  }
  particles = v3->fields.particles;
  if ( !particles )
LABEL_19:
    sub_B170D4();
  v5 = *(_QWORD *)&particles->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v5 )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v7 = (UnityEngine_Object_o *)particles->m_Items[v6];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_19;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      }
      LODWORD(v5) = particles->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v5 );
  }
}


void __fastcall ParticleDisconnector__Update(ParticleDisconnector_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *v3; // x19
  UnityEngine_Object_c *klass; // x21
  const char *namespaze; // x8
  unsigned __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_c *v8; // x21
  const char *v9; // x8
  int v10; // w22
  unsigned __int64 v11; // x23
  UnityEngine_Object_o *v12; // x20

  v3 = (UnityEngine_Object_o *)this;
  if ( (byte_40F8034 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8034 = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_31;
  namespaze = klass->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)namespaze )
      {
LABEL_30:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v7 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v6);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_31;
        UnityEngine_ParticleSystem__Stop_49805596((UnityEngine_ParticleSystem_o *)v7, 0LL);
      }
      LODWORD(namespaze) = klass->_1.namespaze;
      ++v6;
    }
    while ( (__int64)v6 < (int)namespaze );
  }
  v8 = v3[1].klass;
  if ( !v8 )
LABEL_31:
    sub_B170D4();
  v9 = v8->_1.namespaze;
  if ( (int)v9 < 1 )
    goto LABEL_26;
  v10 = 0;
  v11 = 0LL;
  do
  {
    if ( v11 >= (unsigned int)v9 )
      goto LABEL_30;
    v12 = (UnityEngine_Object_o *)*((_QWORD *)&v8->_1.byval_arg.data + v11);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_31;
      this = (ParticleDisconnector_o *)UnityEngine_ParticleSystem__get_particleCount(
                                         (UnityEngine_ParticleSystem_o *)v12,
                                         0LL);
      v10 += (int)this;
    }
    LODWORD(v9) = v8->_1.namespaze;
    ++v11;
  }
  while ( (__int64)v11 < (int)v9 );
  if ( !v10 )
  {
LABEL_26:
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v3, 0LL);
  }
}


void __fastcall ParticleDisconnector___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8366 & 1) == 0 )
  {
    sub_B16FFC(&ParticleDisconnector___c_TypeInfo, v1);
    byte_40F8366 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ParticleDisconnector___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ParticleDisconnector___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ParticleDisconnector___c___ctor(ParticleDisconnector___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ParticleDisconnector___c___HideAll_b__3_0(
        ParticleDisconnector___c_o *this,
        UnityEngine_ParticleSystem_o *x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !x || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}