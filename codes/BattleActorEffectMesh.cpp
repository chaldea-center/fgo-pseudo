void __fastcall BattleActorEffectMesh___ctor(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x1
  void *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B184BF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18146/*"chr(Clone)"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B184BF = 1;
  }
  v11 = StringLiteral_18146/*"chr(Clone)"*/;
  this->fields.topNodeName = (struct System_String_o *)StringLiteral_18146/*"chr(Clone)"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.topNodeName, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_1/*""*/;
  this->fields.meshObjName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.meshObjName, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorEffectMesh__OnTransformParentChanged(
        BattleActorEffectMesh_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UnityEngine_ParticleSystem_array *particles; // x8
  UnityEngine_Object_o *ComponentsInParent_object__49325076; // x0
  __int64 v12; // x1
  int klass; // w8
  UnityEngine_Object_o *v14; // x20
  unsigned int v15; // w21
  UnityEngine_Object_c **v16; // x22
  UnityEngine_Object_o **v17; // x22
  UnityEngine_SkinnedMeshRenderer_o *v18; // t1
  UnityEngine_Object_o *v19; // x20
  struct UnityEngine_ParticleSystem_array *v20; // x8
  il2cpp_array_size_t v21; // w22
  il2cpp_array_size_t max_length; // w9
  int32_t type; // w8
  int v24; // w8
  UnityEngine_Object_o *v25; // x21
  unsigned int v26; // w25
  UnityEngine_Object_c **v27; // x26
  UnityEngine_SkinnedMeshRenderer_o **v28; // x26
  UnityEngine_SkinnedMeshRenderer_o *v29; // t1
  int v30; // w8
  UnityEngine_Object_o *v31; // x21
  unsigned int v32; // w25
  UnityEngine_Object_c **v33; // x26
  UnityEngine_MeshRenderer_o **v34; // x26
  UnityEngine_SkinnedMeshRenderer_o *v35; // t1
  UnityEngine_Object_o *v36; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v37; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v38; // 0:x0.8

  if ( (byte_4B184BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInParent_Transform___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B184BE = 1;
  }
  v36 = 0LL;
  particles = this->fields.particles;
  if ( !particles || !*(_QWORD *)&particles->max_length )
    return;
  ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInParent_object__49325076(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_2F0A414 *)Method_UnityEngine_Component_GetComponentsInParent_Transform___);
  if ( !ComponentsInParent_object__49325076 )
    goto LABEL_60;
  klass = (int)ComponentsInParent_object__49325076[1].klass;
  v14 = ComponentsInParent_object__49325076;
  if ( klass < 1 )
  {
LABEL_13:
    v19 = 0LL;
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= klass )
        goto LABEL_61;
      v16 = &v14->klass + (int)v15;
      v18 = (UnityEngine_SkinnedMeshRenderer_o *)v16[4];
      v17 = (UnityEngine_Object_o **)(v16 + 4);
      ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)v18;
      if ( !v18 )
        goto LABEL_60;
      ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                      ComponentsInParent_object__49325076,
                                                                      0LL);
      if ( !ComponentsInParent_object__49325076 )
        goto LABEL_60;
      ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)System_String__Equals_62409536(
                                                                      (System_String_o *)ComponentsInParent_object__49325076,
                                                                      this->fields.topNodeName,
                                                                      0LL);
      if ( ((unsigned __int8)ComponentsInParent_object__49325076 & 1) != 0 )
        break;
      klass = (int)v14[1].klass;
      if ( (int)++v15 >= klass )
        goto LABEL_13;
    }
    if ( v15 >= LODWORD(v14[1].klass) )
LABEL_61:
      sub_1BCAA44(ComponentsInParent_object__49325076, v12);
    v19 = *v17;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInParent_object__49325076 & 1) == 0 )
  {
    v20 = this->fields.particles;
    if ( v20 )
    {
      v21 = 0;
      do
      {
        max_length = v20->max_length;
        if ( (int)v21 >= (int)max_length )
          return;
        if ( v21 >= max_length )
          goto LABEL_61;
        ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)v20->m_Items[v21];
        if ( !ComponentsInParent_object__49325076 )
          break;
        ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_ParticleSystem__get_shape(
                                                                        (UnityEngine_ParticleSystem_o *)ComponentsInParent_object__49325076,
                                                                        0LL).fields.m_ParticleSystem;
        v36 = ComponentsInParent_object__49325076;
        type = this->fields.type;
        if ( type == 1 )
        {
          if ( !v19 )
            break;
          ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                                                          (UnityEngine_Component_o *)v19,
                                                                          (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
          if ( !ComponentsInParent_object__49325076 )
            break;
          v30 = (int)ComponentsInParent_object__49325076[1].klass;
          v31 = ComponentsInParent_object__49325076;
          if ( v30 >= 1 )
          {
            v32 = 0;
            while ( 1 )
            {
              if ( v32 >= v30 )
                goto LABEL_61;
              v33 = &v31->klass + (int)v32;
              v35 = (UnityEngine_SkinnedMeshRenderer_o *)v33[4];
              v34 = (UnityEngine_MeshRenderer_o **)(v33 + 4);
              ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)v35;
              if ( !v35 )
                goto LABEL_60;
              ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__49325076,
                                                                              0LL);
              if ( !ComponentsInParent_object__49325076 )
                goto LABEL_60;
              ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__49325076,
                                                                              0LL);
              if ( ((unsigned __int8)ComponentsInParent_object__49325076 & 1) != 0 )
              {
                if ( v32 >= LODWORD(v31[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)*v34;
                if ( !*v34 )
                  goto LABEL_60;
                ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__49325076,
                                                                                0LL);
                if ( !ComponentsInParent_object__49325076 )
                  goto LABEL_60;
                ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)System_String__IndexOf_62432796(
                                                                                (System_String_o *)ComponentsInParent_object__49325076,
                                                                                this->fields.meshObjName,
                                                                                0LL);
                if ( ((unsigned int)ComponentsInParent_object__49325076 & 0x80000000) == 0 )
                  break;
              }
              v30 = (int)v31[1].klass;
              if ( (int)++v32 >= v30 )
                goto LABEL_59;
            }
            if ( v32 >= LODWORD(v31[1].klass) )
              goto LABEL_61;
            v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v36;
            UnityEngine_ParticleSystem_ShapeModule__set_meshRenderer(v38, *v34, 0LL);
          }
        }
        else if ( !type )
        {
          if ( !v19 )
            break;
          ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                                                          (UnityEngine_Component_o *)v19,
                                                                          (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
          if ( !ComponentsInParent_object__49325076 )
            break;
          v24 = (int)ComponentsInParent_object__49325076[1].klass;
          v25 = ComponentsInParent_object__49325076;
          if ( v24 >= 1 )
          {
            v26 = 0;
            while ( 1 )
            {
              if ( v26 >= v24 )
                goto LABEL_61;
              v27 = &v25->klass + (int)v26;
              v29 = (UnityEngine_SkinnedMeshRenderer_o *)v27[4];
              v28 = (UnityEngine_SkinnedMeshRenderer_o **)(v27 + 4);
              ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)v29;
              if ( !v29 )
                goto LABEL_60;
              ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__49325076,
                                                                              0LL);
              if ( !ComponentsInParent_object__49325076 )
                goto LABEL_60;
              ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__49325076,
                                                                              0LL);
              if ( ((unsigned __int8)ComponentsInParent_object__49325076 & 1) != 0 )
              {
                if ( v26 >= LODWORD(v25[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)*v28;
                if ( !*v28 )
                  goto LABEL_60;
                ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__49325076,
                                                                                0LL);
                if ( !ComponentsInParent_object__49325076 )
                  goto LABEL_60;
                ComponentsInParent_object__49325076 = (UnityEngine_Object_o *)System_String__IndexOf_62432796(
                                                                                (System_String_o *)ComponentsInParent_object__49325076,
                                                                                this->fields.meshObjName,
                                                                                0LL);
                if ( ((unsigned int)ComponentsInParent_object__49325076 & 0x80000000) == 0 )
                  break;
              }
              v24 = (int)v25[1].klass;
              if ( (int)++v26 >= v24 )
                goto LABEL_59;
            }
            if ( v26 >= LODWORD(v25[1].klass) )
              goto LABEL_61;
            v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v36;
            UnityEngine_ParticleSystem_ShapeModule__set_skinnedMeshRenderer(v37, *v28, 0LL);
          }
        }
LABEL_59:
        v20 = this->fields.particles;
        ++v21;
      }
      while ( v20 );
    }
LABEL_60:
    sub_1BCAA3C(ComponentsInParent_object__49325076, v12);
  }
}