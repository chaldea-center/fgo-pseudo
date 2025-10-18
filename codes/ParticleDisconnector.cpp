void ParticleDisconnector___ctor(ParticleDisconnector_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C42433 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_ParticleSystem___TypeInfo);
    byte_4C42433 = 1;
  }
  v3 = (struct UnityEngine_ParticleSystem_array *)sub_1C37100(UnityEngine_ParticleSystem___TypeInfo, 0);
  this->fields.particles = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.particles, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


ParticleDisconnector_o *ParticleDisconnector__DisconnectParticles(
        UnityEngine_Transform_o *globalParent,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x20
  const MethodInfo *v5; // x2
  ParticleDisconnector_o *v6; // x20

  v4 = (UnityEngine_Component_o *)globalParent;
  if ( (byte_4C42436 & 1) == 0 )
  {
    globalParent = (UnityEngine_Transform_o *)sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___);
    byte_4C42436 = 1;
  }
  if ( !v4
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0)) == 0
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_GameObject__AddComponent_object_(
                                                    (UnityEngine_GameObject_o *)globalParent,
                                                    (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___)) == 0 )
  {
    sub_1C372B4(globalParent);
  }
  v6 = (ParticleDisconnector_o *)globalParent;
  ParticleDisconnector__Initialize((ParticleDisconnector_o *)globalParent, obj, v5);
  return v6;
}


void ParticleDisconnector__HideAll(ParticleDisconnector_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x19
  ParticleDisconnector___c_c *v4; // x8
  System_Action_object__o *_9__3_0; // x20
  Il2CppObject *v6; // x21
  struct ParticleDisconnector___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C42435 & 1) == 0 )
  {
    sub_1C37058(&System_Action_ParticleSystem__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ExcludeNull_ParticleSystem___);
    sub_1C37058(&Method_BasicHelper_ForEach_ParticleSystem___);
    sub_1C37058(&Method_ParticleDisconnector___c__HideAll_b__3_0__);
    sub_1C37058(&ParticleDisconnector___c_TypeInfo);
    byte_4C42435 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.particles, 0) )
  {
    v3 = BasicHelper__ExcludeNull_object_(
           (System_Collections_Generic_IEnumerable_T__o *)this->fields.particles,
           (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    v4 = ParticleDisconnector___c_TypeInfo;
    if ( !ParticleDisconnector___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ParticleDisconnector___c_TypeInfo);
      v4 = ParticleDisconnector___c_TypeInfo;
    }
    _9__3_0 = (System_Action_object__o *)v4->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = ParticleDisconnector___c_TypeInfo;
      }
      v6 = (Il2CppObject *)v4->static_fields->__9;
      _9__3_0 = (System_Action_object__o *)sub_1C372A4(System_Action_ParticleSystem__TypeInfo);
      System_Action_object____ctor(_9__3_0, v6, Method_ParticleDisconnector___c__HideAll_b__3_0__, 0);
      static_fields = ParticleDisconnector___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Action_ParticleSystem__o *)_9__3_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v8, v9);
    }
    BasicHelper__ForEach_object_(
      v3,
      (System_Action_T__o *)_9__3_0,
      (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ParticleSystem___);
  }
}


void ParticleDisconnector__Initialize(
        ParticleDisconnector_o *this,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  ParticleDisconnector_o *v4; // x19
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UnityEngine_ParticleSystem_array *particles; // x22
  int max_length; // w8
  unsigned int v10; // w23
  Il2CppClass **v11; // x8
  UnityEngine_Component_o *v12; // x20
  UnityEngine_ParticleSystem_MainModule_o v13; // x0
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C42434 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____78127656);
    byte_4C42434 = 1;
  }
  m_ParticleSystem = 0;
  if ( !obj )
    goto LABEL_16;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)obj,
                                  1,
                                  (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____78127656);
  v4->fields.particles = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.particles, (int32_t)ComponentsInChildren_object, v6, v7);
  particles = v4->fields.particles;
  if ( !particles )
    goto LABEL_16;
  max_length = particles->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C372BC(this);
      v11 = &particles->obj.klass + (int)v10;
      v12 = (UnityEngine_Component_o *)v11[4];
      if ( !v12 )
        break;
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11[4], 0);
      if ( !this )
        break;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
      {
        this = (ParticleDisconnector_o *)UnityEngine_Component__get_gameObject(v12, 0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v12, 0).fields.m_ParticleSystem;
      v13.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_cullingMode(v13, 3, 0);
      transform = UnityEngine_Component__get_transform(v12, 0);
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
      if ( !transform )
        break;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
      UnityEngine_ParticleSystem__Stop_71550512((UnityEngine_ParticleSystem_o *)v12, 0);
      max_length = particles->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_16:
    sub_1C372B4(this);
  }
}


void ParticleDisconnector__OnDestroy(ParticleDisconnector_o *this, const MethodInfo *method)
{
  ParticleDisconnector_o *v2; // x19
  struct UnityEngine_ParticleSystem_array *particles; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_4C42438 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42438 = 1;
  }
  particles = v2->fields.particles;
  if ( !particles )
LABEL_17:
    sub_1C372B4(this);
  max_length = particles->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C372BC(this);
      v6 = (UnityEngine_Object_o *)particles->m_Items[v5];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_17;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71266752(gameObject, 0);
      }
      LODWORD(max_length) = particles->max_length;
      ++v5;
    }
    while ( (__int64)v5 < (int)max_length );
  }
}


void ParticleDisconnector__Update(ParticleDisconnector_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v2; // x19
  _QWORD *monitor; // x22
  __int64 v4; // x8
  unsigned __int64 v5; // x23
  UnityEngine_Object_o *v6; // x20
  _QWORD *v7; // x22
  __int64 v8; // x8
  int v9; // w23
  unsigned __int64 v10; // x24
  UnityEngine_Object_o *v11; // x20

  v2 = (UnityEngine_Object_o *)this;
  if ( (byte_4C42437 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42437 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_28;
  v4 = monitor[3];
  if ( (int)v4 >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= (unsigned int)v4 )
LABEL_27:
        sub_1C372BC(this);
      v6 = (UnityEngine_Object_o *)monitor[v5 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_28;
        UnityEngine_ParticleSystem__Stop_71550512((UnityEngine_ParticleSystem_o *)v6, 0);
      }
      LODWORD(v4) = *((_DWORD *)monitor + 6);
      ++v5;
    }
    while ( (__int64)v5 < (int)v4 );
  }
  v7 = v2[1].monitor;
  if ( !v7 )
LABEL_28:
    sub_1C372B4(this);
  v8 = v7[3];
  if ( (int)v8 < 1 )
    goto LABEL_31;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v10 >= (unsigned int)v8 )
      goto LABEL_27;
    v11 = (UnityEngine_Object_o *)v7[v10 + 4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_28;
      this = (ParticleDisconnector_o *)UnityEngine_ParticleSystem__get_particleCount(
                                         (UnityEngine_ParticleSystem_o *)v11,
                                         0);
      v9 += (int)this;
    }
    LODWORD(v8) = *((_DWORD *)v7 + 6);
    ++v10;
  }
  while ( (__int64)v10 < (int)v8 );
  if ( !v9 )
  {
LABEL_31:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v2, 0);
  }
}


void ParticleDisconnector___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42439 & 1) == 0 )
  {
    sub_1C37058(&ParticleDisconnector___c_TypeInfo);
    byte_4C42439 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ParticleDisconnector___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ParticleDisconnector___c_TypeInfo->static_fields->__9 = (struct ParticleDisconnector___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ParticleDisconnector___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ParticleDisconnector___c___ctor(ParticleDisconnector___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ParticleDisconnector___c___HideAll_b__3_0(
        ParticleDisconnector___c_o *this,
        UnityEngine_ParticleSystem_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (ParticleDisconnector___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0)) == 0 )
  {
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}