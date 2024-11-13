void __fastcall ParticleDisconnector___ctor(ParticleDisconnector_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_ParticleSystem_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15703 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_ParticleSystem___TypeInfo, method, v2);
    byte_4B15703 = 1;
  }
  v4 = (struct UnityEngine_ParticleSystem_array *)sub_1BCA888(UnityEngine_ParticleSystem___TypeInfo, 0LL);
  this->fields.particles = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.particles, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4B15706 & 1) == 0 )
  {
    globalParent = (UnityEngine_Transform_o *)sub_1BCA7E0(
                                                &Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___,
                                                obj,
                                                method);
    byte_4B15706 = 1;
  }
  if ( !v4
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_GameObject__AddComponent_object_(
                                                    (UnityEngine_GameObject_o *)globalParent,
                                                    (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___)) == 0LL )
  {
    sub_1BCAA3C(globalParent, obj);
  }
  v6 = (ParticleDisconnector_o *)globalParent;
  ParticleDisconnector__Initialize((ParticleDisconnector_o *)globalParent, obj, v5);
  return v6;
}


void __fastcall ParticleDisconnector__HideAll(ParticleDisconnector_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_IEnumerable_T__o *v15; // x19
  ParticleDisconnector___c_c *v16; // x8
  System_Action_object__o *_9__3_0; // x20
  Il2CppObject *v18; // x21
  struct ParticleDisconnector___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B15705 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ParticleSystem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_ParticleSystem___, v4, v5);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_ParticleSystem___, v6, v7);
    sub_1BCA7E0(&Method_ParticleDisconnector___c__HideAll_b__3_0__, v8, v9);
    sub_1BCA7E0(&ParticleDisconnector___c_TypeInfo, v10, v11);
    byte_4B15705 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.particles, 0LL) )
  {
    v15 = BasicHelper__ExcludeNull_object_(
            (System_Collections_Generic_IEnumerable_T__o *)this->fields.particles,
            (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    v16 = ParticleDisconnector___c_TypeInfo;
    if ( !ParticleDisconnector___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ParticleDisconnector___c_TypeInfo, v12);
      v16 = ParticleDisconnector___c_TypeInfo;
    }
    _9__3_0 = (System_Action_object__o *)v16->static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, v12);
        v16 = ParticleDisconnector___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__3_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ParticleSystem__TypeInfo, v12, v13, v14);
      System_Action_object____ctor(_9__3_0, v18, Method_ParticleDisconnector___c__HideAll_b__3_0__, 0LL);
      static_fields = ParticleDisconnector___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Action_ParticleSystem__o *)_9__3_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
        (int64_t)_9__3_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    BasicHelper__ForEach_object_(
      v15,
      (System_Action_T__o *)_9__3_0,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_ParticleSystem___);
  }
}


void __fastcall ParticleDisconnector__Initialize(
        ParticleDisconnector_o *this,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  ParticleDisconnector_o *v4; // x19
  System_Object_array *ComponentsInChildren_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UnityEngine_ParticleSystem_array *particles; // x22
  int max_length; // w8
  unsigned int v14; // w23
  Il2CppClass **v15; // x8
  UnityEngine_Component_o *v16; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v19; // 0:x0.8

  v4 = this;
  if ( (byte_4B15704 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1BCA7E0(
                                       &Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____76859088,
                                       obj,
                                       method);
    byte_4B15704 = 1;
  }
  m_ParticleSystem = 0LL;
  if ( !obj )
    goto LABEL_16;
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)obj,
                                  1,
                                  (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____76859088);
  v4->fields.particles = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.particles,
    (int64_t)ComponentsInChildren_object,
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
        sub_1BCAA44(this, obj);
      v15 = &particles->obj.klass + (int)v14;
      v16 = (UnityEngine_Component_o *)v15[4];
      if ( !v16 )
        break;
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15[4], 0LL);
      if ( !this )
        break;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
      {
        this = (ParticleDisconnector_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
        if ( !this )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)v16, 0LL).fields.m_ParticleSystem;
      v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_cullingMode(v19, 3, 0LL);
      transform = UnityEngine_Component__get_transform(v16, 0LL);
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      UnityEngine_ParticleSystem__Stop_70434692((UnityEngine_ParticleSystem_o *)v16, 0LL);
      max_length = particles->max_length;
      if ( (int)++v14 >= max_length )
        return;
    }
LABEL_16:
    sub_1BCAA3C(this, obj);
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
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x19

  v3 = this;
  if ( (byte_4B15708 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15708 = 1;
  }
  particles = v3->fields.particles;
  if ( !particles )
LABEL_17:
    sub_1BCAA3C(this, method);
  v5 = *(_QWORD *)&particles->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v5 )
        sub_1BCAA44(this, method);
      v7 = (UnityEngine_Object_o *)particles->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_17;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
  _QWORD *monitor; // x22
  __int64 v5; // x8
  unsigned __int64 v6; // x23
  UnityEngine_Object_o *v7; // x20
  _QWORD *v8; // x22
  __int64 v9; // x8
  int v10; // w23
  unsigned __int64 v11; // x24
  UnityEngine_Object_o *v12; // x20

  v3 = (UnityEngine_Object_o *)this;
  if ( (byte_4B15707 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15707 = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_28;
  v5 = monitor[3];
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v5 )
LABEL_27:
        sub_1BCAA44(this, method);
      v7 = (UnityEngine_Object_o *)monitor[v6 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_28;
        UnityEngine_ParticleSystem__Stop_70434692((UnityEngine_ParticleSystem_o *)v7, 0LL);
      }
      LODWORD(v5) = *((_DWORD *)monitor + 6);
      ++v6;
    }
    while ( (__int64)v6 < (int)v5 );
  }
  v8 = v3[1].monitor;
  if ( !v8 )
LABEL_28:
    sub_1BCAA3C(this, method);
  v9 = v8[3];
  if ( (int)v9 < 1 )
    goto LABEL_31;
  v10 = 0;
  v11 = 0LL;
  do
  {
    if ( v11 >= (unsigned int)v9 )
      goto LABEL_27;
    v12 = (UnityEngine_Object_o *)v8[v11 + 4];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_28;
      this = (ParticleDisconnector_o *)UnityEngine_ParticleSystem__get_particleCount(
                                         (UnityEngine_ParticleSystem_o *)v12,
                                         0LL);
      v10 += (int)this;
    }
    LODWORD(v9) = *((_DWORD *)v8 + 6);
    ++v11;
  }
  while ( (__int64)v11 < (int)v9 );
  if ( !v10 )
  {
LABEL_31:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__Destroy_70154244(v3, 0LL);
  }
}


void __fastcall ParticleDisconnector___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15709 & 1) == 0 )
  {
    sub_1BCA7E0(&ParticleDisconnector___c_TypeInfo, v1, v2);
    byte_4B15709 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ParticleDisconnector___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ParticleDisconnector___c_TypeInfo->static_fields->__9 = (struct ParticleDisconnector___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ParticleDisconnector___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}