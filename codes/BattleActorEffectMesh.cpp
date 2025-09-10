void BattleActorEffectMesh___ctor(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2988A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17956/*"chr(Clone)"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2988A = 1;
  }
  v5 = StringLiteral_17956/*"chr(Clone)"*/;
  this->fields.topNodeName = (struct System_String_o *)StringLiteral_17956/*"chr(Clone)"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.topNodeName, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.meshObjName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.meshObjName, v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleActorEffectMesh__OnTransformParentChanged(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *particles; // x8
  UnityEngine_Object_o *ComponentsInParent_object__51142712; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int klass; // w8
  UnityEngine_Object_o *v8; // x20
  unsigned int v9; // w21
  UnityEngine_Object_c **v10; // x22
  UnityEngine_Object_o **v11; // x22
  UnityEngine_SkinnedMeshRenderer_o *v12; // t1
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_ParticleSystem_array *v14; // x8
  unsigned int v15; // w22
  unsigned int max_length; // w9
  int32_t type; // w8
  int v18; // w8
  UnityEngine_Object_o *v19; // x21
  unsigned int v20; // w25
  UnityEngine_Object_c **v21; // x26
  UnityEngine_SkinnedMeshRenderer_o **v22; // x26
  UnityEngine_SkinnedMeshRenderer_o *v23; // t1
  int v24; // w8
  UnityEngine_Object_o *v25; // x21
  unsigned int v26; // w25
  UnityEngine_Object_c **v27; // x26
  UnityEngine_MeshRenderer_o **v28; // x26
  UnityEngine_SkinnedMeshRenderer_o *v29; // t1
  UnityEngine_ParticleSystem_ShapeModule_o v30; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v31; // x0
  UnityEngine_Object_o *v32; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C29889 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInParent_Transform___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29889 = 1;
  }
  v32 = 0;
  particles = this->fields.particles;
  if ( !particles || !particles->max_length )
    return;
  ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInParent_object__51142712(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_30C6038 *)Method_UnityEngine_Component_GetComponentsInParent_Transform___);
  if ( !ComponentsInParent_object__51142712 )
    goto LABEL_60;
  klass = (int)ComponentsInParent_object__51142712[1].klass;
  v8 = ComponentsInParent_object__51142712;
  if ( klass < 1 )
  {
LABEL_13:
    v13 = 0;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= klass )
        goto LABEL_61;
      v10 = &v8->klass + (int)v9;
      v12 = (UnityEngine_SkinnedMeshRenderer_o *)v10[4];
      v11 = (UnityEngine_Object_o **)(v10 + 4);
      ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)v12;
      if ( !v12 )
        goto LABEL_60;
      ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                      ComponentsInParent_object__51142712,
                                                                      0);
      if ( !ComponentsInParent_object__51142712 )
        goto LABEL_60;
      ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)System_String__Equals_63493168(
                                                                      (System_String_o *)ComponentsInParent_object__51142712,
                                                                      this->fields.topNodeName,
                                                                      0);
      if ( ((unsigned __int8)ComponentsInParent_object__51142712 & 1) != 0 )
        break;
      klass = (int)v8[1].klass;
      if ( (int)++v9 >= klass )
        goto LABEL_13;
    }
    if ( v9 >= LODWORD(v8[1].klass) )
LABEL_61:
      sub_1C2D6F4(ComponentsInParent_object__51142712, v5, v6);
    v13 = *v11;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
  if ( ((unsigned __int8)ComponentsInParent_object__51142712 & 1) == 0 )
  {
    v14 = this->fields.particles;
    if ( v14 )
    {
      v15 = 0;
      do
      {
        max_length = v14->max_length;
        if ( (int)v15 >= (int)max_length )
          return;
        if ( v15 >= max_length )
          goto LABEL_61;
        ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)v14->m_Items[v15];
        if ( !ComponentsInParent_object__51142712 )
          break;
        ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_ParticleSystem__get_shape(
                                                                        (UnityEngine_ParticleSystem_o *)ComponentsInParent_object__51142712,
                                                                        0).fields.m_ParticleSystem;
        v32 = ComponentsInParent_object__51142712;
        type = this->fields.type;
        if ( type == 1 )
        {
          if ( !v13 )
            break;
          ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                                                          (UnityEngine_Component_o *)v13,
                                                                          (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
          if ( !ComponentsInParent_object__51142712 )
            break;
          v24 = (int)ComponentsInParent_object__51142712[1].klass;
          v25 = ComponentsInParent_object__51142712;
          if ( v24 >= 1 )
          {
            v26 = 0;
            while ( 1 )
            {
              if ( v26 >= v24 )
                goto LABEL_61;
              v27 = &v25->klass + (int)v26;
              v29 = (UnityEngine_SkinnedMeshRenderer_o *)v27[4];
              v28 = (UnityEngine_MeshRenderer_o **)(v27 + 4);
              ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)v29;
              if ( !v29 )
                goto LABEL_60;
              ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__51142712,
                                                                              0);
              if ( !ComponentsInParent_object__51142712 )
                goto LABEL_60;
              ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__51142712,
                                                                              0);
              if ( ((unsigned __int8)ComponentsInParent_object__51142712 & 1) != 0 )
              {
                if ( v26 >= LODWORD(v25[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)*v28;
                if ( !*v28 )
                  goto LABEL_60;
                ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__51142712,
                                                                                0);
                if ( !ComponentsInParent_object__51142712 )
                  goto LABEL_60;
                ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)System_String__IndexOf_63516240(
                                                                                (System_String_o *)ComponentsInParent_object__51142712,
                                                                                this->fields.meshObjName,
                                                                                0);
                if ( ((unsigned int)ComponentsInParent_object__51142712 & 0x80000000) == 0 )
                  break;
              }
              v24 = (int)v25[1].klass;
              if ( (int)++v26 >= v24 )
                goto LABEL_59;
            }
            if ( v26 >= LODWORD(v25[1].klass) )
              goto LABEL_61;
            v31.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v32;
            UnityEngine_ParticleSystem_ShapeModule__set_meshRenderer(v31, *v28, 0);
          }
        }
        else if ( !type )
        {
          if ( !v13 )
            break;
          ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                                                          (UnityEngine_Component_o *)v13,
                                                                          (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
          if ( !ComponentsInParent_object__51142712 )
            break;
          v18 = (int)ComponentsInParent_object__51142712[1].klass;
          v19 = ComponentsInParent_object__51142712;
          if ( v18 >= 1 )
          {
            v20 = 0;
            while ( 1 )
            {
              if ( v20 >= v18 )
                goto LABEL_61;
              v21 = &v19->klass + (int)v20;
              v23 = (UnityEngine_SkinnedMeshRenderer_o *)v21[4];
              v22 = (UnityEngine_SkinnedMeshRenderer_o **)(v21 + 4);
              ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)v23;
              if ( !v23 )
                goto LABEL_60;
              ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__51142712,
                                                                              0);
              if ( !ComponentsInParent_object__51142712 )
                goto LABEL_60;
              ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__51142712,
                                                                              0);
              if ( ((unsigned __int8)ComponentsInParent_object__51142712 & 1) != 0 )
              {
                if ( v20 >= LODWORD(v19[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)*v22;
                if ( !*v22 )
                  goto LABEL_60;
                ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__51142712,
                                                                                0);
                if ( !ComponentsInParent_object__51142712 )
                  goto LABEL_60;
                ComponentsInParent_object__51142712 = (UnityEngine_Object_o *)System_String__IndexOf_63516240(
                                                                                (System_String_o *)ComponentsInParent_object__51142712,
                                                                                this->fields.meshObjName,
                                                                                0);
                if ( ((unsigned int)ComponentsInParent_object__51142712 & 0x80000000) == 0 )
                  break;
              }
              v18 = (int)v19[1].klass;
              if ( (int)++v20 >= v18 )
                goto LABEL_59;
            }
            if ( v20 >= LODWORD(v19[1].klass) )
              goto LABEL_61;
            v30.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v32;
            UnityEngine_ParticleSystem_ShapeModule__set_skinnedMeshRenderer(v30, *v22, 0);
          }
        }
LABEL_59:
        v14 = this->fields.particles;
        ++v15;
      }
      while ( v14 );
    }
LABEL_60:
    sub_1C2D6EC(ComponentsInParent_object__51142712, v5);
  }
}