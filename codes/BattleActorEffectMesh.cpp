void BattleActorEffectMesh___ctor(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C39F98 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17960/*"chr(Clone)"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39F98 = 1;
  }
  v5 = StringLiteral_17960/*"chr(Clone)"*/;
  this->fields.topNodeName = (struct System_String_o *)StringLiteral_17960/*"chr(Clone)"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.topNodeName, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.meshObjName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.meshObjName, v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleActorEffectMesh__OnTransformParentChanged(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *particles; // x8
  UnityEngine_Object_o *ComponentsInParent_object__51202776; // x0
  int klass; // w8
  UnityEngine_Object_o *v6; // x20
  unsigned int v7; // w21
  UnityEngine_Object_c **v8; // x22
  UnityEngine_Object_o **v9; // x22
  UnityEngine_SkinnedMeshRenderer_o *v10; // t1
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_ParticleSystem_array *v12; // x8
  unsigned int v13; // w22
  unsigned int max_length; // w9
  int32_t type; // w8
  int v16; // w8
  UnityEngine_Object_o *v17; // x21
  unsigned int v18; // w25
  UnityEngine_Object_c **v19; // x26
  UnityEngine_SkinnedMeshRenderer_o **v20; // x26
  UnityEngine_SkinnedMeshRenderer_o *v21; // t1
  int v22; // w8
  UnityEngine_Object_o *v23; // x21
  unsigned int v24; // w25
  UnityEngine_Object_c **v25; // x26
  UnityEngine_MeshRenderer_o **v26; // x26
  UnityEngine_SkinnedMeshRenderer_o *v27; // t1
  UnityEngine_ParticleSystem_ShapeModule_o v28; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v29; // x0
  UnityEngine_Object_o *v30; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C39F97 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInParent_Transform___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39F97 = 1;
  }
  v30 = 0;
  particles = this->fields.particles;
  if ( !particles || !particles->max_length )
    return;
  ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInParent_object__51202776(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_30D4AD8 *)Method_UnityEngine_Component_GetComponentsInParent_Transform___);
  if ( !ComponentsInParent_object__51202776 )
    goto LABEL_60;
  klass = (int)ComponentsInParent_object__51202776[1].klass;
  v6 = ComponentsInParent_object__51202776;
  if ( klass < 1 )
  {
LABEL_13:
    v11 = 0;
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= klass )
        goto LABEL_61;
      v8 = &v6->klass + (int)v7;
      v10 = (UnityEngine_SkinnedMeshRenderer_o *)v8[4];
      v9 = (UnityEngine_Object_o **)(v8 + 4);
      ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)v10;
      if ( !v10 )
        goto LABEL_60;
      ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                      ComponentsInParent_object__51202776,
                                                                      0);
      if ( !ComponentsInParent_object__51202776 )
        goto LABEL_60;
      ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)System_String__Equals_63553848(
                                                                      (System_String_o *)ComponentsInParent_object__51202776,
                                                                      this->fields.topNodeName,
                                                                      0);
      if ( ((unsigned __int8)ComponentsInParent_object__51202776 & 1) != 0 )
        break;
      klass = (int)v6[1].klass;
      if ( (int)++v7 >= klass )
        goto LABEL_13;
    }
    if ( v7 >= LODWORD(v6[1].klass) )
LABEL_61:
      sub_1C32E84(ComponentsInParent_object__51202776);
    v11 = *v9;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v11, 0, 0);
  if ( ((unsigned __int8)ComponentsInParent_object__51202776 & 1) == 0 )
  {
    v12 = this->fields.particles;
    if ( v12 )
    {
      v13 = 0;
      do
      {
        max_length = v12->max_length;
        if ( (int)v13 >= (int)max_length )
          return;
        if ( v13 >= max_length )
          goto LABEL_61;
        ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)v12->m_Items[v13];
        if ( !ComponentsInParent_object__51202776 )
          break;
        ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_ParticleSystem__get_shape(
                                                                        (UnityEngine_ParticleSystem_o *)ComponentsInParent_object__51202776,
                                                                        0).fields.m_ParticleSystem;
        v30 = ComponentsInParent_object__51202776;
        type = this->fields.type;
        if ( type == 1 )
        {
          if ( !v11 )
            break;
          ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                                                          (UnityEngine_Component_o *)v11,
                                                                          (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
          if ( !ComponentsInParent_object__51202776 )
            break;
          v22 = (int)ComponentsInParent_object__51202776[1].klass;
          v23 = ComponentsInParent_object__51202776;
          if ( v22 >= 1 )
          {
            v24 = 0;
            while ( 1 )
            {
              if ( v24 >= v22 )
                goto LABEL_61;
              v25 = &v23->klass + (int)v24;
              v27 = (UnityEngine_SkinnedMeshRenderer_o *)v25[4];
              v26 = (UnityEngine_MeshRenderer_o **)(v25 + 4);
              ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)v27;
              if ( !v27 )
                goto LABEL_60;
              ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__51202776,
                                                                              0);
              if ( !ComponentsInParent_object__51202776 )
                goto LABEL_60;
              ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__51202776,
                                                                              0);
              if ( ((unsigned __int8)ComponentsInParent_object__51202776 & 1) != 0 )
              {
                if ( v24 >= LODWORD(v23[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)*v26;
                if ( !*v26 )
                  goto LABEL_60;
                ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__51202776,
                                                                                0);
                if ( !ComponentsInParent_object__51202776 )
                  goto LABEL_60;
                ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)System_String__IndexOf_63576920(
                                                                                (System_String_o *)ComponentsInParent_object__51202776,
                                                                                this->fields.meshObjName,
                                                                                0);
                if ( ((unsigned int)ComponentsInParent_object__51202776 & 0x80000000) == 0 )
                  break;
              }
              v22 = (int)v23[1].klass;
              if ( (int)++v24 >= v22 )
                goto LABEL_59;
            }
            if ( v24 >= LODWORD(v23[1].klass) )
              goto LABEL_61;
            v29.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v30;
            UnityEngine_ParticleSystem_ShapeModule__set_meshRenderer(v29, *v26, 0);
          }
        }
        else if ( !type )
        {
          if ( !v11 )
            break;
          ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                                                          (UnityEngine_Component_o *)v11,
                                                                          (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
          if ( !ComponentsInParent_object__51202776 )
            break;
          v16 = (int)ComponentsInParent_object__51202776[1].klass;
          v17 = ComponentsInParent_object__51202776;
          if ( v16 >= 1 )
          {
            v18 = 0;
            while ( 1 )
            {
              if ( v18 >= v16 )
                goto LABEL_61;
              v19 = &v17->klass + (int)v18;
              v21 = (UnityEngine_SkinnedMeshRenderer_o *)v19[4];
              v20 = (UnityEngine_SkinnedMeshRenderer_o **)(v19 + 4);
              ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)v21;
              if ( !v21 )
                goto LABEL_60;
              ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__51202776,
                                                                              0);
              if ( !ComponentsInParent_object__51202776 )
                goto LABEL_60;
              ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__51202776,
                                                                              0);
              if ( ((unsigned __int8)ComponentsInParent_object__51202776 & 1) != 0 )
              {
                if ( v18 >= LODWORD(v17[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)*v20;
                if ( !*v20 )
                  goto LABEL_60;
                ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__51202776,
                                                                                0);
                if ( !ComponentsInParent_object__51202776 )
                  goto LABEL_60;
                ComponentsInParent_object__51202776 = (UnityEngine_Object_o *)System_String__IndexOf_63576920(
                                                                                (System_String_o *)ComponentsInParent_object__51202776,
                                                                                this->fields.meshObjName,
                                                                                0);
                if ( ((unsigned int)ComponentsInParent_object__51202776 & 0x80000000) == 0 )
                  break;
              }
              v16 = (int)v17[1].klass;
              if ( (int)++v18 >= v16 )
                goto LABEL_59;
            }
            if ( v18 >= LODWORD(v17[1].klass) )
              goto LABEL_61;
            v28.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v30;
            UnityEngine_ParticleSystem_ShapeModule__set_skinnedMeshRenderer(v28, *v20, 0);
          }
        }
LABEL_59:
        v12 = this->fields.particles;
        ++v13;
      }
      while ( v12 );
    }
LABEL_60:
    sub_1C32E7C(ComponentsInParent_object__51202776);
  }
}