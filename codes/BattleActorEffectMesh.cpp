void __fastcall BattleActorEffectMesh___ctor(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B46F85 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17968/*"chr(Clone)"*/, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B46F85 = 1;
  }
  v6 = StringLiteral_17968/*"chr(Clone)"*/;
  this->fields.topNodeName = (struct System_String_o *)StringLiteral_17968/*"chr(Clone)"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.topNodeName, v6, v2, v3);
  v7 = (int)StringLiteral_1/*""*/;
  this->fields.meshObjName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.meshObjName, v7, v8, v9);
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
  UnityEngine_Object_o *ComponentsInParent_object__50507844; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int klass; // w8
  UnityEngine_Object_o *v11; // x20
  unsigned int v12; // w21
  UnityEngine_Object_c **v13; // x22
  UnityEngine_Object_o **v14; // x22
  UnityEngine_SkinnedMeshRenderer_o *v15; // t1
  UnityEngine_Object_o *v16; // x20
  struct UnityEngine_ParticleSystem_array *v17; // x8
  il2cpp_array_size_t v18; // w22
  il2cpp_array_size_t max_length; // w9
  int32_t type; // w8
  int v21; // w8
  UnityEngine_Object_o *v22; // x21
  unsigned int v23; // w25
  UnityEngine_Object_c **v24; // x26
  UnityEngine_SkinnedMeshRenderer_o **v25; // x26
  UnityEngine_SkinnedMeshRenderer_o *v26; // t1
  int v27; // w8
  UnityEngine_Object_o *v28; // x21
  unsigned int v29; // w25
  UnityEngine_Object_c **v30; // x26
  UnityEngine_MeshRenderer_o **v31; // x26
  UnityEngine_SkinnedMeshRenderer_o *v32; // t1
  UnityEngine_Object_o *v33; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v34; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v35; // 0:x0.8

  if ( (byte_4B46F84 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, method);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentsInParent_Transform___, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B46F84 = 1;
  }
  v33 = 0LL;
  particles = this->fields.particles;
  if ( !particles || !*(_QWORD *)&particles->max_length )
    return;
  ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInParent_object__50507844(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_302B044 *)Method_UnityEngine_Component_GetComponentsInParent_Transform___);
  if ( !ComponentsInParent_object__50507844 )
    goto LABEL_60;
  klass = (int)ComponentsInParent_object__50507844[1].klass;
  v11 = ComponentsInParent_object__50507844;
  if ( klass < 1 )
  {
LABEL_13:
    v16 = 0LL;
  }
  else
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= klass )
        goto LABEL_61;
      v13 = &v11->klass + (int)v12;
      v15 = (UnityEngine_SkinnedMeshRenderer_o *)v13[4];
      v14 = (UnityEngine_Object_o **)(v13 + 4);
      ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)v15;
      if ( !v15 )
        goto LABEL_60;
      ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                      ComponentsInParent_object__50507844,
                                                                      0LL);
      if ( !ComponentsInParent_object__50507844 )
        goto LABEL_60;
      ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)System_String__Equals_62607564(
                                                                      (System_String_o *)ComponentsInParent_object__50507844,
                                                                      this->fields.topNodeName,
                                                                      0LL);
      if ( ((unsigned __int8)ComponentsInParent_object__50507844 & 1) != 0 )
        break;
      klass = (int)v11[1].klass;
      if ( (int)++v12 >= klass )
        goto LABEL_13;
    }
    if ( v12 >= LODWORD(v11[1].klass) )
LABEL_61:
      sub_1BDBADC(ComponentsInParent_object__50507844, v8, v9);
    v16 = *v14;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInParent_object__50507844 & 1) == 0 )
  {
    v17 = this->fields.particles;
    if ( v17 )
    {
      v18 = 0;
      do
      {
        max_length = v17->max_length;
        if ( (int)v18 >= (int)max_length )
          return;
        if ( v18 >= max_length )
          goto LABEL_61;
        ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)v17->m_Items[v18];
        if ( !ComponentsInParent_object__50507844 )
          break;
        ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_ParticleSystem__get_shape(
                                                                        (UnityEngine_ParticleSystem_o *)ComponentsInParent_object__50507844,
                                                                        0LL).fields.m_ParticleSystem;
        v33 = ComponentsInParent_object__50507844;
        type = this->fields.type;
        if ( type == 1 )
        {
          if ( !v16 )
            break;
          ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__50507220(
                                                                          (UnityEngine_Component_o *)v16,
                                                                          (const MethodInfo_302ADD4 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
          if ( !ComponentsInParent_object__50507844 )
            break;
          v27 = (int)ComponentsInParent_object__50507844[1].klass;
          v28 = ComponentsInParent_object__50507844;
          if ( v27 >= 1 )
          {
            v29 = 0;
            while ( 1 )
            {
              if ( v29 >= v27 )
                goto LABEL_61;
              v30 = &v28->klass + (int)v29;
              v32 = (UnityEngine_SkinnedMeshRenderer_o *)v30[4];
              v31 = (UnityEngine_MeshRenderer_o **)(v30 + 4);
              ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)v32;
              if ( !v32 )
                goto LABEL_60;
              ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__50507844,
                                                                              0LL);
              if ( !ComponentsInParent_object__50507844 )
                goto LABEL_60;
              ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__50507844,
                                                                              0LL);
              if ( ((unsigned __int8)ComponentsInParent_object__50507844 & 1) != 0 )
              {
                if ( v29 >= LODWORD(v28[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)*v31;
                if ( !*v31 )
                  goto LABEL_60;
                ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__50507844,
                                                                                0LL);
                if ( !ComponentsInParent_object__50507844 )
                  goto LABEL_60;
                ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)System_String__IndexOf_62630756(
                                                                                (System_String_o *)ComponentsInParent_object__50507844,
                                                                                this->fields.meshObjName,
                                                                                0LL);
                if ( ((unsigned int)ComponentsInParent_object__50507844 & 0x80000000) == 0 )
                  break;
              }
              v27 = (int)v28[1].klass;
              if ( (int)++v29 >= v27 )
                goto LABEL_59;
            }
            if ( v29 >= LODWORD(v28[1].klass) )
              goto LABEL_61;
            v35.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v33;
            UnityEngine_ParticleSystem_ShapeModule__set_meshRenderer(v35, *v31, 0LL);
          }
        }
        else if ( !type )
        {
          if ( !v16 )
            break;
          ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__50507220(
                                                                          (UnityEngine_Component_o *)v16,
                                                                          (const MethodInfo_302ADD4 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
          if ( !ComponentsInParent_object__50507844 )
            break;
          v21 = (int)ComponentsInParent_object__50507844[1].klass;
          v22 = ComponentsInParent_object__50507844;
          if ( v21 >= 1 )
          {
            v23 = 0;
            while ( 1 )
            {
              if ( v23 >= v21 )
                goto LABEL_61;
              v24 = &v22->klass + (int)v23;
              v26 = (UnityEngine_SkinnedMeshRenderer_o *)v24[4];
              v25 = (UnityEngine_SkinnedMeshRenderer_o **)(v24 + 4);
              ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)v26;
              if ( !v26 )
                goto LABEL_60;
              ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__50507844,
                                                                              0LL);
              if ( !ComponentsInParent_object__50507844 )
                goto LABEL_60;
              ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__50507844,
                                                                              0LL);
              if ( ((unsigned __int8)ComponentsInParent_object__50507844 & 1) != 0 )
              {
                if ( v23 >= LODWORD(v22[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)*v25;
                if ( !*v25 )
                  goto LABEL_60;
                ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__50507844,
                                                                                0LL);
                if ( !ComponentsInParent_object__50507844 )
                  goto LABEL_60;
                ComponentsInParent_object__50507844 = (UnityEngine_Object_o *)System_String__IndexOf_62630756(
                                                                                (System_String_o *)ComponentsInParent_object__50507844,
                                                                                this->fields.meshObjName,
                                                                                0LL);
                if ( ((unsigned int)ComponentsInParent_object__50507844 & 0x80000000) == 0 )
                  break;
              }
              v21 = (int)v22[1].klass;
              if ( (int)++v23 >= v21 )
                goto LABEL_59;
            }
            if ( v23 >= LODWORD(v22[1].klass) )
              goto LABEL_61;
            v34.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v33;
            UnityEngine_ParticleSystem_ShapeModule__set_skinnedMeshRenderer(v34, *v25, 0LL);
          }
        }
LABEL_59:
        v17 = this->fields.particles;
        ++v18;
      }
      while ( v17 );
    }
LABEL_60:
    sub_1BDBAD4(ComponentsInParent_object__50507844, v8);
  }
}