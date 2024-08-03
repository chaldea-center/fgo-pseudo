void __fastcall ParticleDisconnector___ctor(ParticleDisconnector_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB961 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_ParticleSystem___TypeInfo, method);
    byte_49FB961 = 1;
  }
  v3 = (struct UnityEngine_ParticleSystem_array *)sub_1B64170(UnityEngine_ParticleSystem___TypeInfo, 0LL);
  this->fields.particles = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.particles, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


ParticleDisconnector_o *__fastcall ParticleDisconnector__DisconnectParticles(
        UnityEngine_Transform_o *globalParent,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x20
  const MethodInfo *v5; // x2
  ParticleDisconnector_o *v6; // x20

  v4 = (UnityEngine_Component_o *)globalParent;
  if ( (byte_49FB964 & 1) == 0 )
  {
    globalParent = (UnityEngine_Transform_o *)sub_1B640C8(
                                                &Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___,
                                                obj);
    byte_49FB964 = 1;
  }
  if ( !v4
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_GameObject__AddComponent_object_(
                                                    (UnityEngine_GameObject_o *)globalParent,
                                                    (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___)) == 0LL )
  {
    sub_1B64324(globalParent);
  }
  v6 = (ParticleDisconnector_o *)globalParent;
  ParticleDisconnector__Initialize((ParticleDisconnector_o *)globalParent, obj, v5);
  return v6;
}


void __fastcall ParticleDisconnector__HideAll(ParticleDisconnector_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_T__o *v9; // x19
  ParticleDisconnector___c_c *v10; // x8
  System_Action_object__o *_9__3_0; // x20
  Il2CppObject *v12; // x21
  struct ParticleDisconnector___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FB963 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ParticleSystem__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_ParticleSystem___, v3);
    sub_1B640C8(&Method_BasicHelper_ForEach_ParticleSystem___, v4);
    sub_1B640C8(&Method_ParticleDisconnector___c__HideAll_b__3_0__, v5);
    sub_1B640C8(&ParticleDisconnector___c_TypeInfo, v6);
    byte_49FB963 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.particles, 0LL) )
  {
    v9 = BasicHelper__ExcludeNull_object_(
           (System_Collections_Generic_IEnumerable_T__o *)this->fields.particles,
           (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    v10 = ParticleDisconnector___c_TypeInfo;
    if ( !ParticleDisconnector___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ParticleDisconnector___c_TypeInfo);
      v10 = ParticleDisconnector___c_TypeInfo;
    }
    _9__3_0 = (System_Action_object__o *)v10->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = ParticleDisconnector___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__3_0 = (System_Action_object__o *)sub_1B64314(System_Action_ParticleSystem__TypeInfo, v7, v8);
      System_Action_object____ctor(_9__3_0, v12, Method_ParticleDisconnector___c__HideAll_b__3_0__, 0LL);
      static_fields = ParticleDisconnector___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Action_ParticleSystem__o *)_9__3_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v14, v15);
    }
    BasicHelper__ForEach_object_(
      v9,
      (System_Action_T__o *)_9__3_0,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_ParticleSystem___);
  }
}


void __fastcall ParticleDisconnector__Initialize(
        ParticleDisconnector_o *this,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  ParticleDisconnector_o *v4; // x19
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  struct UnityEngine_ParticleSystem_array *particles; // x22
  int max_length; // w8
  unsigned int v11; // w23
  Il2CppClass **v12; // x8
  UnityEngine_Component_o *v13; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v16; // 0:x0.8

  v4 = this;
  if ( (byte_49FB962 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1B640C8(
                                       &Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____75728080,
                                       obj);
    byte_49FB962 = 1;
  }
  m_ParticleSystem = 0LL;
  if ( !obj )
    goto LABEL_16;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)obj,
                                  1,
                                  (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____75728080);
  v4->fields.particles = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.particles, (int32_t)ComponentsInChildren_object, v6, v7);
  particles = v4->fields.particles;
  if ( !particles )
    goto LABEL_16;
  max_length = particles->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B6432C(this, v8);
      v12 = &particles->obj.klass + (int)v11;
      v13 = (UnityEngine_Component_o *)v12[4];
      if ( !v13 )
        break;
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12[4], 0LL);
      if ( !this )
        break;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
      {
        this = (ParticleDisconnector_o *)UnityEngine_Component__get_gameObject(v13, 0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v13, 0LL).fields.m_ParticleSystem;
      v16.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_cullingMode(v16, 3, 0LL);
      transform = UnityEngine_Component__get_transform(v13, 0LL);
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      UnityEngine_ParticleSystem__Stop_69408224((UnityEngine_ParticleSystem_o *)v13, 0LL);
      max_length = particles->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_16:
    sub_1B64324(this);
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

  v2 = this;
  if ( (byte_49FB966 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB966 = 1;
  }
  particles = v2->fields.particles;
  if ( !particles )
LABEL_17:
    sub_1B64324(this);
  v4 = *(_QWORD *)&particles->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
        sub_1B6432C(this, method);
      v6 = (UnityEngine_Object_o *)particles->m_Items[v5];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_17;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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
  if ( (byte_49FB965 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB965 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_28;
  v4 = monitor[3];
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= (unsigned int)v4 )
LABEL_27:
        sub_1B6432C(this, method);
      v6 = (UnityEngine_Object_o *)monitor[v5 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_28;
        UnityEngine_ParticleSystem__Stop_69408224((UnityEngine_ParticleSystem_o *)v6, 0LL);
      }
      LODWORD(v4) = *((_DWORD *)monitor + 6);
      ++v5;
    }
    while ( (__int64)v5 < (int)v4 );
  }
  v7 = v2[1].monitor;
  if ( !v7 )
LABEL_28:
    sub_1B64324(this);
  v8 = v7[3];
  if ( (int)v8 < 1 )
    goto LABEL_31;
  v9 = 0;
  v10 = 0LL;
  do
  {
    if ( v10 >= (unsigned int)v8 )
      goto LABEL_27;
    v11 = (UnityEngine_Object_o *)v7[v10 + 4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_28;
      this = (ParticleDisconnector_o *)UnityEngine_ParticleSystem__get_particleCount(
                                         (UnityEngine_ParticleSystem_o *)v11,
                                         0LL);
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
    UnityEngine_Object__Destroy_69127736(v2, 0LL);
  }
}


void __fastcall ParticleDisconnector___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB967 & 1) == 0 )
  {
    sub_1B640C8(&ParticleDisconnector___c_TypeInfo, v1);
    byte_49FB967 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ParticleDisconnector___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ParticleDisconnector___c_TypeInfo->static_fields->__9 = (struct ParticleDisconnector___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ParticleDisconnector___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}