void __fastcall ParticleDisconnector___ctor(ParticleDisconnector_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *v3; // x0

  if ( (byte_4212108 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_ParticleSystem___TypeInfo, method);
    byte_4212108 = 1;
  }
  v3 = (struct UnityEngine_ParticleSystem_array *)sub_B0D8BC(UnityEngine_ParticleSystem___TypeInfo, 0LL);
  this->fields.particles = v3;
  sub_B0D840(&this->fields.particles, v3);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


ParticleDisconnector_o *__fastcall ParticleDisconnector__DisconnectParticles(
        UnityEngine_Transform_o *globalParent,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x20
  const MethodInfo *v5; // x2
  UnityEngine_Transform_o *v6; // x20

  v4 = (UnityEngine_Component_o *)globalParent;
  if ( (byte_421210B & 1) == 0 )
  {
    globalParent = (UnityEngine_Transform_o *)sub_B0D8A4(
                                                &Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___,
                                                obj);
    byte_421210B = 1;
  }
  if ( !v4
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                    (UnityEngine_GameObject_o *)globalParent,
                                                    (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___)) == 0LL )
  {
    sub_B0D97C(globalParent);
  }
  v6 = globalParent;
  ParticleDisconnector__Initialize((ParticleDisconnector_o *)globalParent, obj, v5);
  return (ParticleDisconnector_o *)v6;
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
  System_Collections_Generic_IEnumerable_T__o *v10; // x19
  ParticleDisconnector___c_c *v11; // x8
  struct ParticleDisconnector___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__3_0; // x20
  Il2CppObject *v14; // x21
  struct ParticleDisconnector___c_StaticFields *v15; // x0

  if ( (byte_421210A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ParticleSystem___ctor__, method);
    sub_B0D8A4(&System_Action_ParticleSystem__TypeInfo, v3);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_ParticleSystem___, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_ParticleSystem___, v5);
    sub_B0D8A4(&Method_ParticleDisconnector___c__HideAll_b__3_0__, v6);
    sub_B0D8A4(&ParticleDisconnector___c_TypeInfo, v7);
    byte_421210A = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.particles, 0LL) )
  {
    v10 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            (System_Collections_Generic_IEnumerable_T__o *)this->fields.particles,
            (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    v11 = ParticleDisconnector___c_TypeInfo;
    if ( (BYTE3(ParticleDisconnector___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ParticleDisconnector___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ParticleDisconnector___c_TypeInfo);
      v11 = ParticleDisconnector___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__3_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = ParticleDisconnector___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__3_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                       System_Action_ParticleSystem__TypeInfo,
                                                                                       v8,
                                                                                       v9);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__3_0,
        v14,
        Method_ParticleDisconnector___c__HideAll_b__3_0__,
        (const MethodInfo_246EA3C *)Method_System_Action_ParticleSystem___ctor__);
      v15 = ParticleDisconnector___c_TypeInfo->static_fields;
      v15->__9__3_0 = (struct System_Action_ParticleSystem__o *)_9__3_0;
      sub_B0D840(&v15->__9__3_0, _9__3_0);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v10,
      (System_Action_T__o *)_9__3_0,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_ParticleSystem___);
  }
}


void __fastcall ParticleDisconnector__Initialize(
        ParticleDisconnector_o *this,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  UnityEngine_Component_c *klass; // x22
  int namespaze; // w8
  unsigned int v8; // w23
  void **v9; // x8
  UnityEngine_Component_o *v10; // x20
  UnityEngine_Transform_o *transform; // x21
  __int64 v12; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v14; // 0:x0.8

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4212109 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_B0D8A4(
                                       &Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____67969312,
                                       obj);
    byte_4212109 = 1;
  }
  m_ParticleSystem = 0LL;
  if ( !obj )
    goto LABEL_16;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              (UnityEngine_Component_o *)obj,
                                                              1,
                                                              (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____67969312);
  v4[1].klass = (UnityEngine_Component_c *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  sub_B0D840(&v4[1], ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_16;
  namespaze = (int)klass->_1.namespaze;
  if ( namespaze >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= namespaze )
      {
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
      }
      v9 = &klass->_1.image + (int)v8;
      v10 = (UnityEngine_Component_o *)v9[4];
      if ( !v10 )
        break;
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9[4], 0LL);
      if ( !this )
        break;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
      {
        this = (ParticleDisconnector_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v10, 0LL).fields.m_ParticleSystem;
      v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_cullingMode(v14, 3, 0LL);
      transform = UnityEngine_Component__get_transform(v10, 0LL);
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_transform(v4, 0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      UnityEngine_ParticleSystem__Stop_50661880((UnityEngine_ParticleSystem_o *)v10, 0LL);
      namespaze = (int)klass->_1.namespaze;
      if ( (int)++v8 >= namespaze )
        return;
    }
LABEL_16:
    sub_B0D97C(this);
  }
}


void __fastcall ParticleDisconnector__OnDestroy(ParticleDisconnector_o *this, const MethodInfo *method)
{
  ParticleDisconnector_o *v2; // x19
  struct UnityEngine_ParticleSystem_array *particles; // x20
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19
  UnityEngine_Object_o *gameObject; // x19
  __int64 v8; // x0

  v2 = this;
  if ( (byte_421210D & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421210D = 1;
  }
  particles = v2->fields.particles;
  if ( !particles )
LABEL_19:
    sub_B0D97C(this);
  v4 = *(_QWORD *)&particles->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
      {
        v8 = sub_B0D9A8(this);
        sub_B0D948(v8, 0LL);
      }
      v6 = (UnityEngine_Object_o *)particles->m_Items[v5];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_19;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      }
      LODWORD(v4) = particles->max_length;
      ++v5;
    }
    while ( (__int64)v5 < (int)v4 );
  }
}


void __fastcall ParticleDisconnector__Update(ParticleDisconnector_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v2; // x19
  UnityEngine_Object_c *klass; // x21
  const char *namespaze; // x8
  unsigned __int64 v5; // x22
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_c *v7; // x21
  const char *v8; // x8
  int v9; // w22
  unsigned __int64 v10; // x23
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x0

  v2 = (UnityEngine_Object_o *)this;
  if ( (byte_421210C & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421210C = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_31;
  namespaze = klass->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)namespaze )
      {
LABEL_30:
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
      }
      v6 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v5);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_31;
        UnityEngine_ParticleSystem__Stop_50661880((UnityEngine_ParticleSystem_o *)v6, 0LL);
      }
      LODWORD(namespaze) = klass->_1.namespaze;
      ++v5;
    }
    while ( (__int64)v5 < (int)namespaze );
  }
  v7 = v2[1].klass;
  if ( !v7 )
LABEL_31:
    sub_B0D97C(this);
  v8 = v7->_1.namespaze;
  if ( (int)v8 < 1 )
    goto LABEL_26;
  v9 = 0;
  v10 = 0LL;
  do
  {
    if ( v10 >= (unsigned int)v8 )
      goto LABEL_30;
    v11 = (UnityEngine_Object_o *)*((_QWORD *)&v7->_1.byval_arg.data + v10);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_31;
      this = (ParticleDisconnector_o *)UnityEngine_ParticleSystem__get_particleCount(
                                         (UnityEngine_ParticleSystem_o *)v11,
                                         0LL);
      v9 += (int)this;
    }
    LODWORD(v8) = v7->_1.namespaze;
    ++v10;
  }
  while ( (__int64)v10 < (int)v8 );
  if ( !v9 )
  {
LABEL_26:
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v2, 0LL);
  }
}


void __fastcall ParticleDisconnector___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ParticleDisconnector___c_StaticFields *static_fields; // x0

  if ( (byte_421216A & 1) == 0 )
  {
    sub_B0D8A4(&ParticleDisconnector___c_TypeInfo, v1);
    byte_421216A = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ParticleDisconnector___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ParticleDisconnector___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ParticleDisconnector___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  if ( !x
    || (this = (ParticleDisconnector___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL)) == 0LL )
  {
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}