void __fastcall ParticleDisconnector___ctor(ParticleDisconnector_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E63A5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_ParticleSystem___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63A5 = 1;
  }
  this->fields.particles = (struct UnityEngine_ParticleSystem_array *)sub_B5D5DC(
                                                                        UnityEngine_ParticleSystem___TypeInfo,
                                                                        0LL);
  sub_B5D560(&this->fields.particles);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


ParticleDisconnector_o *__fastcall ParticleDisconnector__DisconnectParticles(
        UnityEngine_Transform_o *globalParent,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *v5; // x20
  const MethodInfo *v6; // x2
  UnityEngine_Transform_o *v7; // x20

  v5 = (UnityEngine_Component_o *)globalParent;
  if ( (byte_42E63A8 & 1) == 0 )
  {
    globalParent = (UnityEngine_Transform_o *)sub_B5D5C4(
                                                &Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___,
                                                (_DWORD)obj,
                                                (_DWORD)method,
                                                v3);
    byte_42E63A8 = 1;
  }
  if ( !v5
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL
    || (globalParent = (UnityEngine_Transform_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                    (UnityEngine_GameObject_o *)globalParent,
                                                    (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_ParticleDisconnector___)) == 0LL )
  {
    sub_B5D69C(globalParent, obj);
  }
  v7 = globalParent;
  ParticleDisconnector__Initialize((ParticleDisconnector_o *)globalParent, obj, v6);
  return (ParticleDisconnector_o *)v7;
}


void __fastcall ParticleDisconnector__HideAll(ParticleDisconnector_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_T__o *v20; // x19
  ParticleDisconnector___c_c *v21; // x8
  struct ParticleDisconnector___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__3_0; // x20
  Il2CppObject *v24; // x21
  struct ParticleDisconnector___c_StaticFields *v25; // x0

  if ( (byte_42E63A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ParticleSystem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_ParticleSystem__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_ParticleSystem___, v8, v9, v10);
    sub_B5D5C4(&Method_BasicHelper_ForEach_ParticleSystem___, v11, v12, v13);
    sub_B5D5C4(&Method_ParticleDisconnector___c__HideAll_b__3_0__, v14, v15, v16);
    sub_B5D5C4(&ParticleDisconnector___c_TypeInfo, v17, v18, v19);
    byte_42E63A7 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.particles, 0LL) )
  {
    v20 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            (System_Collections_Generic_IEnumerable_T__o *)this->fields.particles,
            (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    v21 = ParticleDisconnector___c_TypeInfo;
    if ( (BYTE3(ParticleDisconnector___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ParticleDisconnector___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ParticleDisconnector___c_TypeInfo);
      v21 = ParticleDisconnector___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__3_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__3_0;
    if ( !_9__3_0 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        static_fields = ParticleDisconnector___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__3_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ParticleSystem__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__3_0,
        v24,
        Method_ParticleDisconnector___c__HideAll_b__3_0__,
        (const MethodInfo_258B320 *)Method_System_Action_ParticleSystem___ctor__);
      v25 = ParticleDisconnector___c_TypeInfo->static_fields;
      v25->__9__3_0 = (struct System_Action_ParticleSystem__o *)_9__3_0;
      sub_B5D560(&v25->__9__3_0);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v20,
      (System_Action_T__o *)_9__3_0,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_ParticleSystem___);
  }
}


void __fastcall ParticleDisconnector__Initialize(
        ParticleDisconnector_o *this,
        UnityEngine_Transform_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *v5; // x19
  UnityEngine_Component_c *klass; // x22
  int namespaze; // w8
  unsigned int v8; // w23
  void **v9; // x8
  UnityEngine_Component_o *v10; // x20
  UnityEngine_Transform_o *transform; // x21
  __int64 v12; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v14; // 0:x0.8

  v5 = (UnityEngine_Component_o *)this;
  if ( (byte_42E63A6 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_B5D5C4(
                                       &Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____68825784,
                                       (_DWORD)obj,
                                       (_DWORD)method,
                                       v3);
    byte_42E63A6 = 1;
  }
  m_ParticleSystem = 0LL;
  if ( !obj )
    goto LABEL_16;
  v5[1].klass = (UnityEngine_Component_c *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                             (UnityEngine_Component_o *)obj,
                                             1,
                                             (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem____68825784);
  sub_B5D560(&v5[1]);
  klass = v5[1].klass;
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
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
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
      this = (ParticleDisconnector_o *)UnityEngine_Component__get_transform(v5, 0LL);
      if ( !transform )
        break;
      UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
      UnityEngine_ParticleSystem__Stop_51307044((UnityEngine_ParticleSystem_o *)v10, 0LL);
      namespaze = (int)klass->_1.namespaze;
      if ( (int)++v8 >= namespaze )
        return;
    }
LABEL_16:
    sub_B5D69C(this, obj);
  }
}


void __fastcall ParticleDisconnector__OnDestroy(ParticleDisconnector_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ParticleDisconnector_o *v4; // x19
  struct UnityEngine_ParticleSystem_array *particles; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x19
  UnityEngine_Object_o *gameObject; // x19
  __int64 v10; // x0

  v4 = this;
  if ( (byte_42E63AA & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63AA = 1;
  }
  particles = v4->fields.particles;
  if ( !particles )
LABEL_19:
    sub_B5D69C(this, method);
  v6 = *(_QWORD *)&particles->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v6 )
      {
        v10 = sub_B5D6C8(this);
        sub_B5D668(v10, 0LL);
      }
      v8 = (UnityEngine_Object_o *)particles->m_Items[v7];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_19;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      }
      LODWORD(v6) = particles->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)v6 );
  }
}


void __fastcall ParticleDisconnector__Update(ParticleDisconnector_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *v4; // x19
  UnityEngine_Object_c *klass; // x21
  const char *namespaze; // x8
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_c *v9; // x21
  const char *v10; // x8
  int v11; // w22
  unsigned __int64 v12; // x23
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x0

  v4 = (UnityEngine_Object_o *)this;
  if ( (byte_42E63A9 & 1) == 0 )
  {
    this = (ParticleDisconnector_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63A9 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_31;
  namespaze = klass->_1.namespaze;
  if ( (int)namespaze >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)namespaze )
      {
LABEL_30:
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
      }
      v8 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v7);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_31;
        UnityEngine_ParticleSystem__Stop_51307044((UnityEngine_ParticleSystem_o *)v8, 0LL);
      }
      LODWORD(namespaze) = klass->_1.namespaze;
      ++v7;
    }
    while ( (__int64)v7 < (int)namespaze );
  }
  v9 = v4[1].klass;
  if ( !v9 )
LABEL_31:
    sub_B5D69C(this, method);
  v10 = v9->_1.namespaze;
  if ( (int)v10 < 1 )
    goto LABEL_26;
  v11 = 0;
  v12 = 0LL;
  do
  {
    if ( v12 >= (unsigned int)v10 )
      goto LABEL_30;
    v13 = (UnityEngine_Object_o *)*((_QWORD *)&v9->_1.byval_arg.data + v12);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ParticleDisconnector_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_31;
      this = (ParticleDisconnector_o *)UnityEngine_ParticleSystem__get_particleCount(
                                         (UnityEngine_ParticleSystem_o *)v13,
                                         0LL);
      v11 += (int)this;
    }
    LODWORD(v10) = v9->_1.namespaze;
    ++v12;
  }
  while ( (__int64)v12 < (int)v10 );
  if ( !v11 )
  {
LABEL_26:
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v4, 0LL);
  }
}


void __fastcall ParticleDisconnector___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ParticleDisconnector___c_StaticFields *static_fields; // x0

  if ( (byte_42E5A6F & 1) == 0 )
  {
    sub_B5D5C4(&ParticleDisconnector___c_TypeInfo, v1, v2, v3);
    byte_42E5A6F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ParticleDisconnector___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ParticleDisconnector___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ParticleDisconnector___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}