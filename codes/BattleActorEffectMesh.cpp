void __fastcall BattleActorEffectMesh___ctor(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BDE8CD & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18268/*"chr(Clone)"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDE8CD = 1;
  }
  v9 = StringLiteral_18268/*"chr(Clone)"*/;
  this->fields.topNodeName = (struct System_String_o *)StringLiteral_18268/*"chr(Clone)"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.topNodeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.meshObjName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.meshObjName, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorEffectMesh__OnTransformParentChanged(
        BattleActorEffectMesh_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *particles; // x8
  UnityEngine_Object_o *ComponentsInParent_object__49968520; // x0
  __int64 v5; // x1
  int klass; // w8
  UnityEngine_Object_o *v7; // x20
  unsigned int v8; // w21
  UnityEngine_Object_c **v9; // x22
  UnityEngine_Object_o **v10; // x22
  UnityEngine_SkinnedMeshRenderer_o *v11; // t1
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_ParticleSystem_array *v13; // x8
  il2cpp_array_size_t v14; // w22
  il2cpp_array_size_t max_length; // w9
  int32_t type; // w8
  int v17; // w8
  UnityEngine_Object_o *v18; // x21
  unsigned int v19; // w25
  UnityEngine_Object_c **v20; // x26
  UnityEngine_SkinnedMeshRenderer_o **v21; // x26
  UnityEngine_SkinnedMeshRenderer_o *v22; // t1
  int v23; // w8
  UnityEngine_Object_o *v24; // x21
  unsigned int v25; // w25
  UnityEngine_Object_c **v26; // x26
  UnityEngine_MeshRenderer_o **v27; // x26
  UnityEngine_SkinnedMeshRenderer_o *v28; // t1
  UnityEngine_Object_o *v29; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v30; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v31; // 0:x0.8

  if ( (byte_4BDE8CC & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInParent_Transform___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE8CC = 1;
  }
  v29 = 0LL;
  particles = this->fields.particles;
  if ( !particles || !*(_QWORD *)&particles->max_length )
    return;
  ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInParent_object__49968520(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_2FA7588 *)Method_UnityEngine_Component_GetComponentsInParent_Transform___);
  if ( !ComponentsInParent_object__49968520 )
    goto LABEL_60;
  klass = (int)ComponentsInParent_object__49968520[1].klass;
  v7 = ComponentsInParent_object__49968520;
  if ( klass < 1 )
  {
LABEL_13:
    v12 = 0LL;
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= klass )
        goto LABEL_61;
      v9 = &v7->klass + (int)v8;
      v11 = (UnityEngine_SkinnedMeshRenderer_o *)v9[4];
      v10 = (UnityEngine_Object_o **)(v9 + 4);
      ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)v11;
      if ( !v11 )
        goto LABEL_60;
      ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                      ComponentsInParent_object__49968520,
                                                                      0LL);
      if ( !ComponentsInParent_object__49968520 )
        goto LABEL_60;
      ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)System_String__Equals_63123792(
                                                                      (System_String_o *)ComponentsInParent_object__49968520,
                                                                      this->fields.topNodeName,
                                                                      0LL);
      if ( ((unsigned __int8)ComponentsInParent_object__49968520 & 1) != 0 )
        break;
      klass = (int)v7[1].klass;
      if ( (int)++v8 >= klass )
        goto LABEL_13;
    }
    if ( v8 >= LODWORD(v7[1].klass) )
LABEL_61:
      sub_1C2209C(ComponentsInParent_object__49968520, v5);
    v12 = *v10;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInParent_object__49968520 & 1) == 0 )
  {
    v13 = this->fields.particles;
    if ( v13 )
    {
      v14 = 0;
      do
      {
        max_length = v13->max_length;
        if ( (int)v14 >= (int)max_length )
          return;
        if ( v14 >= max_length )
          goto LABEL_61;
        ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)v13->m_Items[v14];
        if ( !ComponentsInParent_object__49968520 )
          break;
        ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_ParticleSystem__get_shape(
                                                                        (UnityEngine_ParticleSystem_o *)ComponentsInParent_object__49968520,
                                                                        0LL).fields.m_ParticleSystem;
        v29 = ComponentsInParent_object__49968520;
        type = this->fields.type;
        if ( type == 1 )
        {
          if ( !v12 )
            break;
          ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                                                          (UnityEngine_Component_o *)v12,
                                                                          (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
          if ( !ComponentsInParent_object__49968520 )
            break;
          v23 = (int)ComponentsInParent_object__49968520[1].klass;
          v24 = ComponentsInParent_object__49968520;
          if ( v23 >= 1 )
          {
            v25 = 0;
            while ( 1 )
            {
              if ( v25 >= v23 )
                goto LABEL_61;
              v26 = &v24->klass + (int)v25;
              v28 = (UnityEngine_SkinnedMeshRenderer_o *)v26[4];
              v27 = (UnityEngine_MeshRenderer_o **)(v26 + 4);
              ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)v28;
              if ( !v28 )
                goto LABEL_60;
              ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__49968520,
                                                                              0LL);
              if ( !ComponentsInParent_object__49968520 )
                goto LABEL_60;
              ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__49968520,
                                                                              0LL);
              if ( ((unsigned __int8)ComponentsInParent_object__49968520 & 1) != 0 )
              {
                if ( v25 >= LODWORD(v24[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)*v27;
                if ( !*v27 )
                  goto LABEL_60;
                ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__49968520,
                                                                                0LL);
                if ( !ComponentsInParent_object__49968520 )
                  goto LABEL_60;
                ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)System_String__IndexOf_63147052(
                                                                                (System_String_o *)ComponentsInParent_object__49968520,
                                                                                this->fields.meshObjName,
                                                                                0LL);
                if ( ((unsigned int)ComponentsInParent_object__49968520 & 0x80000000) == 0 )
                  break;
              }
              v23 = (int)v24[1].klass;
              if ( (int)++v25 >= v23 )
                goto LABEL_59;
            }
            if ( v25 >= LODWORD(v24[1].klass) )
              goto LABEL_61;
            v31.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v29;
            UnityEngine_ParticleSystem_ShapeModule__set_meshRenderer(v31, *v27, 0LL);
          }
        }
        else if ( !type )
        {
          if ( !v12 )
            break;
          ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                                                          (UnityEngine_Component_o *)v12,
                                                                          (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
          if ( !ComponentsInParent_object__49968520 )
            break;
          v17 = (int)ComponentsInParent_object__49968520[1].klass;
          v18 = ComponentsInParent_object__49968520;
          if ( v17 >= 1 )
          {
            v19 = 0;
            while ( 1 )
            {
              if ( v19 >= v17 )
                goto LABEL_61;
              v20 = &v18->klass + (int)v19;
              v22 = (UnityEngine_SkinnedMeshRenderer_o *)v20[4];
              v21 = (UnityEngine_SkinnedMeshRenderer_o **)(v20 + 4);
              ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)v22;
              if ( !v22 )
                goto LABEL_60;
              ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__49968520,
                                                                              0LL);
              if ( !ComponentsInParent_object__49968520 )
                goto LABEL_60;
              ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__49968520,
                                                                              0LL);
              if ( ((unsigned __int8)ComponentsInParent_object__49968520 & 1) != 0 )
              {
                if ( v19 >= LODWORD(v18[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)*v21;
                if ( !*v21 )
                  goto LABEL_60;
                ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__49968520,
                                                                                0LL);
                if ( !ComponentsInParent_object__49968520 )
                  goto LABEL_60;
                ComponentsInParent_object__49968520 = (UnityEngine_Object_o *)System_String__IndexOf_63147052(
                                                                                (System_String_o *)ComponentsInParent_object__49968520,
                                                                                this->fields.meshObjName,
                                                                                0LL);
                if ( ((unsigned int)ComponentsInParent_object__49968520 & 0x80000000) == 0 )
                  break;
              }
              v17 = (int)v18[1].klass;
              if ( (int)++v19 >= v17 )
                goto LABEL_59;
            }
            if ( v19 >= LODWORD(v18[1].klass) )
              goto LABEL_61;
            v30.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v29;
            UnityEngine_ParticleSystem_ShapeModule__set_skinnedMeshRenderer(v30, *v21, 0LL);
          }
        }
LABEL_59:
        v13 = this->fields.particles;
        ++v14;
      }
      while ( v13 );
    }
LABEL_60:
    sub_1C22094(ComponentsInParent_object__49968520, v5);
  }
}