void ParticleDisconnector___ctor(ParticleDisconnector_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2FF0E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_ParticleSystem___TypeInfo);
    byte_4D2FF0E = 1;
  }
  v3 = (struct UnityEngine_ParticleSystem_array *)sub_1C93B7C(UnityEngine_ParticleSystem___TypeInfo, 0);
  this->fields.particles = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.particles, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4D2FF11 & 1) == 0 )
  {
    globalParent = (UnityEngine_Transform_o *)sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___);
    byte_4D2FF11 = 1;
  }
  if ( !v4
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0)) == 0
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_GameObject__AddComponent_object_(
                                                    (UnityEngine_GameObject_o *)globalParent,
                                                    (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___)) == 0 )
  {
    sub_1C93D2C(globalParent, obj);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2FF10 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ParticleSystem__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_ParticleSystem___);
    sub_1C93AD4(&Method_BasicHelper_ForEach_ParticleSystem___);
    sub_1C93AD4(&Method_ParticleDisconnector___c__HideAll_b__3_0__);
    sub_1C93AD4(&ParticleDisconnector___c_TypeInfo);
    byte_4D2FF10 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.particles, 0) )
  {
    v3 = BasicHelper__ExcludeNull_object_(
           (System_Collections_Generic_IEnumerable_T__o *)this->fields.particles,
           (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
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
      _9__3_0 = (System_Action_object__o *)sub_1C93D20(System_Action_ParticleSystem__TypeInfo);
      System_Action_object____ctor(_9__3_0, v6, Method_ParticleDisconnector___c__HideAll_b__3_0__, 0);
      static_fields = ParticleDisconnector___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Action_ParticleSystem__o *)_9__3_0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v8, v9, v10, v11, v12, v13);
    }
    BasicHelper__ForEach_object_(
      v3,
      (System_Action_T__o *)_9__3_0,
      (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_ParticleSystem___);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UnityEngine_ParticleSystem_array *particles; // x22
  int max_length; // w8
  unsigned int v14; // w23
  Il2CppClass **v15; // x8
  UnityEngine_Component_o *v16; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4D2FF0F & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____79080784);
    byte_4D2FF0F = 1;
  }
  m_ParticleSystem = 0;
  if ( !obj )
    goto LABEL_16;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)obj,
                                  1,
                                  (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____79080784);
  v4->fields.particles = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v4->fields.particles,
    (int32_t)ComponentsInChildren_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  particles = v4->fields.particles;
  if ( !particles )
    goto LABEL_16;
  max_length = particles->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C93D34(this);
      v15 = &particles->obj.klass + (int)v14;
      v16 = (UnityEngine_Component_o *)v15[4];
      if ( !v16 )
        break;
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15[4], 0);
      if ( !this )
        break;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
      {
        this = (ParticleDisconnector_o *)UnityEngine_Component__get_gameObject(v16, 0);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v16, 0).fields.m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_cullingMode(
        (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
        3,
        0);
      transform = UnityEngine_Component__get_transform(v16, 0);
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
      if ( !transform )
        break;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
      UnityEngine_ParticleSystem__Stop_72405956((UnityEngine_ParticleSystem_o *)v16, 0);
      max_length = particles->max_length;
      if ( (int)++v14 >= max_length )
        return;
    }
LABEL_16:
    sub_1C93D2C(this, obj);
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
  if ( (byte_4D2FF13 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FF13 = 1;
  }
  particles = v2->fields.particles;
  if ( !particles )
LABEL_17:
    sub_1C93D2C(this, method);
  max_length = particles->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C93D34(this);
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
        UnityEngine_Object__Destroy_72119908(gameObject, 0);
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
  if ( (byte_4D2FF12 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FF12 = 1;
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
        sub_1C93D34(this);
      v6 = (UnityEngine_Object_o *)monitor[v5 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_28;
        UnityEngine_ParticleSystem__Stop_72405956((UnityEngine_ParticleSystem_o *)v6, 0);
      }
      LODWORD(v4) = *((_DWORD *)monitor + 6);
      ++v5;
    }
    while ( (__int64)v5 < (int)v4 );
  }
  v7 = v2[1].monitor;
  if ( !v7 )
LABEL_28:
    sub_1C93D2C(this, method);
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
    UnityEngine_Object__Destroy_72119908(v2, 0);
  }
}


void ParticleDisconnector___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2FF14 & 1) == 0 )
  {
    sub_1C93AD4(&ParticleDisconnector___c_TypeInfo);
    byte_4D2FF14 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ParticleDisconnector___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ParticleDisconnector___c_TypeInfo->static_fields->__9 = (struct ParticleDisconnector___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ParticleDisconnector___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}