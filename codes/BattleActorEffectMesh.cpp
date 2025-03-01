void __fastcall BattleActorEffectMesh___ctor(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  int64_t v10; // x1
  void *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BFFB21 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_18278/*"chr(Clone)"*/, method);
    sub_1C2E12C(&StringLiteral_1/*""*/, v9);
    byte_4BFFB21 = 1;
  }
  v10 = StringLiteral_18278/*"chr(Clone)"*/;
  this->fields.topNodeName = (struct System_String_o *)StringLiteral_18278/*"chr(Clone)"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.topNodeName, v10, v2, v3, v4, v5, v6, v7);
  v11 = StringLiteral_1/*""*/;
  this->fields.meshObjName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.meshObjName, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorEffectMesh__OnTransformParentChanged(
        BattleActorEffectMesh_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_ParticleSystem_array *particles; // x8
  UnityEngine_Object_o *ComponentsInParent_object__50106292; // x0
  __int64 v8; // x1
  int klass; // w8
  UnityEngine_Object_o *v10; // x20
  unsigned int v11; // w21
  UnityEngine_Object_c **v12; // x22
  UnityEngine_Object_o **v13; // x22
  UnityEngine_SkinnedMeshRenderer_o *v14; // t1
  UnityEngine_Object_o *v15; // x20
  struct UnityEngine_ParticleSystem_array *v16; // x8
  il2cpp_array_size_t v17; // w22
  il2cpp_array_size_t max_length; // w9
  int32_t type; // w8
  int v20; // w8
  UnityEngine_Object_o *v21; // x21
  unsigned int v22; // w25
  UnityEngine_Object_c **v23; // x26
  UnityEngine_SkinnedMeshRenderer_o **v24; // x26
  UnityEngine_SkinnedMeshRenderer_o *v25; // t1
  int v26; // w8
  UnityEngine_Object_o *v27; // x21
  unsigned int v28; // w25
  UnityEngine_Object_c **v29; // x26
  UnityEngine_MeshRenderer_o **v30; // x26
  UnityEngine_SkinnedMeshRenderer_o *v31; // t1
  UnityEngine_Object_o *v32; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v33; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v34; // 0:x0.8

  if ( (byte_4BFFB20 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, method);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInParent_Transform___, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4BFFB20 = 1;
  }
  v32 = 0LL;
  particles = this->fields.particles;
  if ( !particles || !*(_QWORD *)&particles->max_length )
    return;
  ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInParent_object__50106292(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_2FC8FB4 *)Method_UnityEngine_Component_GetComponentsInParent_Transform___);
  if ( !ComponentsInParent_object__50106292 )
    goto LABEL_60;
  klass = (int)ComponentsInParent_object__50106292[1].klass;
  v10 = ComponentsInParent_object__50106292;
  if ( klass < 1 )
  {
LABEL_13:
    v15 = 0LL;
  }
  else
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= klass )
        goto LABEL_61;
      v12 = &v10->klass + (int)v11;
      v14 = (UnityEngine_SkinnedMeshRenderer_o *)v12[4];
      v13 = (UnityEngine_Object_o **)(v12 + 4);
      ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)v14;
      if ( !v14 )
        goto LABEL_60;
      ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                      ComponentsInParent_object__50106292,
                                                                      0LL);
      if ( !ComponentsInParent_object__50106292 )
        goto LABEL_60;
      ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)System_String__Equals_63243900(
                                                                      (System_String_o *)ComponentsInParent_object__50106292,
                                                                      this->fields.topNodeName,
                                                                      0LL);
      if ( ((unsigned __int8)ComponentsInParent_object__50106292 & 1) != 0 )
        break;
      klass = (int)v10[1].klass;
      if ( (int)++v11 >= klass )
        goto LABEL_13;
    }
    if ( v11 >= LODWORD(v10[1].klass) )
LABEL_61:
      sub_1C2E390(ComponentsInParent_object__50106292, v8);
    v15 = *v13;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInParent_object__50106292 & 1) == 0 )
  {
    v16 = this->fields.particles;
    if ( v16 )
    {
      v17 = 0;
      do
      {
        max_length = v16->max_length;
        if ( (int)v17 >= (int)max_length )
          return;
        if ( v17 >= max_length )
          goto LABEL_61;
        ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)v16->m_Items[v17];
        if ( !ComponentsInParent_object__50106292 )
          break;
        ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_ParticleSystem__get_shape(
                                                                        (UnityEngine_ParticleSystem_o *)ComponentsInParent_object__50106292,
                                                                        0LL).fields.m_ParticleSystem;
        v32 = ComponentsInParent_object__50106292;
        type = this->fields.type;
        if ( type == 1 )
        {
          if ( !v15 )
            break;
          ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__50105668(
                                                                          (UnityEngine_Component_o *)v15,
                                                                          (const MethodInfo_2FC8D44 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
          if ( !ComponentsInParent_object__50106292 )
            break;
          v26 = (int)ComponentsInParent_object__50106292[1].klass;
          v27 = ComponentsInParent_object__50106292;
          if ( v26 >= 1 )
          {
            v28 = 0;
            while ( 1 )
            {
              if ( v28 >= v26 )
                goto LABEL_61;
              v29 = &v27->klass + (int)v28;
              v31 = (UnityEngine_SkinnedMeshRenderer_o *)v29[4];
              v30 = (UnityEngine_MeshRenderer_o **)(v29 + 4);
              ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)v31;
              if ( !v31 )
                goto LABEL_60;
              ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__50106292,
                                                                              0LL);
              if ( !ComponentsInParent_object__50106292 )
                goto LABEL_60;
              ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__50106292,
                                                                              0LL);
              if ( ((unsigned __int8)ComponentsInParent_object__50106292 & 1) != 0 )
              {
                if ( v28 >= LODWORD(v27[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)*v30;
                if ( !*v30 )
                  goto LABEL_60;
                ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__50106292,
                                                                                0LL);
                if ( !ComponentsInParent_object__50106292 )
                  goto LABEL_60;
                ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)System_String__IndexOf_63267160(
                                                                                (System_String_o *)ComponentsInParent_object__50106292,
                                                                                this->fields.meshObjName,
                                                                                0LL);
                if ( ((unsigned int)ComponentsInParent_object__50106292 & 0x80000000) == 0 )
                  break;
              }
              v26 = (int)v27[1].klass;
              if ( (int)++v28 >= v26 )
                goto LABEL_59;
            }
            if ( v28 >= LODWORD(v27[1].klass) )
              goto LABEL_61;
            v34.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v32;
            UnityEngine_ParticleSystem_ShapeModule__set_meshRenderer(v34, *v30, 0LL);
          }
        }
        else if ( !type )
        {
          if ( !v15 )
            break;
          ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__50105668(
                                                                          (UnityEngine_Component_o *)v15,
                                                                          (const MethodInfo_2FC8D44 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
          if ( !ComponentsInParent_object__50106292 )
            break;
          v20 = (int)ComponentsInParent_object__50106292[1].klass;
          v21 = ComponentsInParent_object__50106292;
          if ( v20 >= 1 )
          {
            v22 = 0;
            while ( 1 )
            {
              if ( v22 >= v20 )
                goto LABEL_61;
              v23 = &v21->klass + (int)v22;
              v25 = (UnityEngine_SkinnedMeshRenderer_o *)v23[4];
              v24 = (UnityEngine_SkinnedMeshRenderer_o **)(v23 + 4);
              ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)v25;
              if ( !v25 )
                goto LABEL_60;
              ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__50106292,
                                                                              0LL);
              if ( !ComponentsInParent_object__50106292 )
                goto LABEL_60;
              ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__50106292,
                                                                              0LL);
              if ( ((unsigned __int8)ComponentsInParent_object__50106292 & 1) != 0 )
              {
                if ( v22 >= LODWORD(v21[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)*v24;
                if ( !*v24 )
                  goto LABEL_60;
                ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__50106292,
                                                                                0LL);
                if ( !ComponentsInParent_object__50106292 )
                  goto LABEL_60;
                ComponentsInParent_object__50106292 = (UnityEngine_Object_o *)System_String__IndexOf_63267160(
                                                                                (System_String_o *)ComponentsInParent_object__50106292,
                                                                                this->fields.meshObjName,
                                                                                0LL);
                if ( ((unsigned int)ComponentsInParent_object__50106292 & 0x80000000) == 0 )
                  break;
              }
              v20 = (int)v21[1].klass;
              if ( (int)++v22 >= v20 )
                goto LABEL_59;
            }
            if ( v22 >= LODWORD(v21[1].klass) )
              goto LABEL_61;
            v33.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v32;
            UnityEngine_ParticleSystem_ShapeModule__set_skinnedMeshRenderer(v33, *v24, 0LL);
          }
        }
LABEL_59:
        v16 = this->fields.particles;
        ++v17;
      }
      while ( v16 );
    }
LABEL_60:
    sub_1C2E388(ComponentsInParent_object__50106292, v8);
  }
}