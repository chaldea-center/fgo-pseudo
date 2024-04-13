void __fastcall BattleActorEffectMesh___ctor(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42EC0E6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17640/*"chr(Clone)"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EC0E6 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_17640/*"chr(Clone)"*/;
  this->fields.topNodeName = (struct System_String_o *)StringLiteral_17640/*"chr(Clone)"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.topNodeName, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.meshObjName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.meshObjName, v13, v14, v15, v16, v17, v18, v19);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorEffectMesh__OnTransformParentChanged(
        BattleActorEffectMesh_o *this,
        const MethodInfo *method)
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
  struct UnityEngine_ParticleSystem_array *particles; // x8
  UnityEngine_Object_o *ComponentsInParent_Transform; // x0
  __int64 v16; // x1
  int klass; // w8
  UnityEngine_Object_o *v18; // x20
  unsigned int v19; // w21
  UnityEngine_Object_c **v20; // x22
  UnityEngine_Object_o **v21; // x22
  UnityEngine_SkinnedMeshRenderer_o *v22; // t1
  UnityEngine_Object_o *v23; // x20
  struct UnityEngine_ParticleSystem_array *v24; // x8
  il2cpp_array_size_t v25; // w22
  il2cpp_array_size_t max_length; // w9
  int32_t type; // w8
  int v28; // w8
  UnityEngine_Object_o *v29; // x21
  unsigned int v30; // w25
  UnityEngine_Object_c **v31; // x26
  UnityEngine_SkinnedMeshRenderer_o **v32; // x26
  UnityEngine_SkinnedMeshRenderer_o *v33; // t1
  int v34; // w8
  UnityEngine_Object_o *v35; // x21
  unsigned int v36; // w25
  UnityEngine_Object_c **v37; // x26
  UnityEngine_MeshRenderer_o **v38; // x26
  UnityEngine_SkinnedMeshRenderer_o *v39; // t1
  __int64 v40; // x0
  UnityEngine_Object_o *v41; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v42; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v43; // 0:x0.8

  if ( (byte_42EC0E5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInParent_Transform___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EC0E5 = 1;
  }
  v41 = 0LL;
  particles = this->fields.particles;
  if ( !particles || !*(_QWORD *)&particles->max_length )
    return;
  ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInParent_Transform_(
                                                           (UnityEngine_Component_o *)this,
                                                           (const MethodInfo_1ADE790 *)Method_UnityEngine_Component_GetComponentsInParent_Transform___);
  if ( !ComponentsInParent_Transform )
    goto LABEL_60;
  klass = (int)ComponentsInParent_Transform[1].klass;
  v18 = ComponentsInParent_Transform;
  if ( klass < 1 )
  {
LABEL_13:
    v23 = 0LL;
  }
  else
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= klass )
        goto LABEL_62;
      v20 = &v18->klass + (int)v19;
      v22 = (UnityEngine_SkinnedMeshRenderer_o *)v20[4];
      v21 = (UnityEngine_Object_o **)(v20 + 4);
      ComponentsInParent_Transform = (UnityEngine_Object_o *)v22;
      if ( !v22 )
        goto LABEL_60;
      ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                               ComponentsInParent_Transform,
                                                               0LL);
      if ( !ComponentsInParent_Transform )
        goto LABEL_60;
      ComponentsInParent_Transform = (UnityEngine_Object_o *)System_String__Equals_44565128(
                                                               (System_String_o *)ComponentsInParent_Transform,
                                                               this->fields.topNodeName,
                                                               0LL);
      if ( ((unsigned __int8)ComponentsInParent_Transform & 1) != 0 )
        break;
      klass = (int)v18[1].klass;
      if ( (int)++v19 >= klass )
        goto LABEL_13;
    }
    if ( v19 >= LODWORD(v18[1].klass) )
    {
LABEL_62:
      v40 = sub_B5D6C8(ComponentsInParent_Transform);
      sub_B5D668(v40, 0LL);
    }
    v23 = *v21;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInParent_Transform & 1) == 0 )
  {
    v24 = this->fields.particles;
    if ( v24 )
    {
      v25 = 0;
      do
      {
        max_length = v24->max_length;
        if ( (int)v25 >= (int)max_length )
          return;
        if ( v25 >= max_length )
          goto LABEL_62;
        ComponentsInParent_Transform = (UnityEngine_Object_o *)v24->m_Items[v25];
        if ( !ComponentsInParent_Transform )
          break;
        ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_ParticleSystem__get_shape(
                                                                 (UnityEngine_ParticleSystem_o *)ComponentsInParent_Transform,
                                                                 0LL).fields.m_ParticleSystem;
        v41 = ComponentsInParent_Transform;
        type = this->fields.type;
        if ( type == 1 )
        {
          if ( !v23 )
            break;
          ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                                   (UnityEngine_Component_o *)v23,
                                                                   (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
          if ( !ComponentsInParent_Transform )
            break;
          v34 = (int)ComponentsInParent_Transform[1].klass;
          v35 = ComponentsInParent_Transform;
          if ( v34 >= 1 )
          {
            v36 = 0;
            while ( 1 )
            {
              if ( v36 >= v34 )
                goto LABEL_62;
              v37 = &v35->klass + (int)v36;
              v39 = (UnityEngine_SkinnedMeshRenderer_o *)v37[4];
              v38 = (UnityEngine_MeshRenderer_o **)(v37 + 4);
              ComponentsInParent_Transform = (UnityEngine_Object_o *)v39;
              if ( !v39 )
                goto LABEL_60;
              ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)ComponentsInParent_Transform,
                                                                       0LL);
              if ( !ComponentsInParent_Transform )
                goto LABEL_60;
              ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_active(
                                                                       (UnityEngine_GameObject_o *)ComponentsInParent_Transform,
                                                                       0LL);
              if ( ((unsigned __int8)ComponentsInParent_Transform & 1) != 0 )
              {
                if ( v36 >= LODWORD(v35[1].klass) )
                  goto LABEL_62;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)*v38;
                if ( !*v38 )
                  goto LABEL_60;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                         ComponentsInParent_Transform,
                                                                         0LL);
                if ( !ComponentsInParent_Transform )
                  goto LABEL_60;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)System_String__IndexOf_44650136(
                                                                         (System_String_o *)ComponentsInParent_Transform,
                                                                         this->fields.meshObjName,
                                                                         0LL);
                if ( ((unsigned int)ComponentsInParent_Transform & 0x80000000) == 0 )
                  break;
              }
              v34 = (int)v35[1].klass;
              if ( (int)++v36 >= v34 )
                goto LABEL_59;
            }
            if ( v36 >= LODWORD(v35[1].klass) )
              goto LABEL_62;
            v43.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v41;
            UnityEngine_ParticleSystem_ShapeModule__set_meshRenderer(v43, *v38, 0LL);
          }
        }
        else if ( !type )
        {
          if ( !v23 )
            break;
          ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                                   (UnityEngine_Component_o *)v23,
                                                                   (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
          if ( !ComponentsInParent_Transform )
            break;
          v28 = (int)ComponentsInParent_Transform[1].klass;
          v29 = ComponentsInParent_Transform;
          if ( v28 >= 1 )
          {
            v30 = 0;
            while ( 1 )
            {
              if ( v30 >= v28 )
                goto LABEL_62;
              v31 = &v29->klass + (int)v30;
              v33 = (UnityEngine_SkinnedMeshRenderer_o *)v31[4];
              v32 = (UnityEngine_SkinnedMeshRenderer_o **)(v31 + 4);
              ComponentsInParent_Transform = (UnityEngine_Object_o *)v33;
              if ( !v33 )
                goto LABEL_60;
              ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)ComponentsInParent_Transform,
                                                                       0LL);
              if ( !ComponentsInParent_Transform )
                goto LABEL_60;
              ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_active(
                                                                       (UnityEngine_GameObject_o *)ComponentsInParent_Transform,
                                                                       0LL);
              if ( ((unsigned __int8)ComponentsInParent_Transform & 1) != 0 )
              {
                if ( v30 >= LODWORD(v29[1].klass) )
                  goto LABEL_62;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)*v32;
                if ( !*v32 )
                  goto LABEL_60;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                         ComponentsInParent_Transform,
                                                                         0LL);
                if ( !ComponentsInParent_Transform )
                  goto LABEL_60;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)System_String__IndexOf_44650136(
                                                                         (System_String_o *)ComponentsInParent_Transform,
                                                                         this->fields.meshObjName,
                                                                         0LL);
                if ( ((unsigned int)ComponentsInParent_Transform & 0x80000000) == 0 )
                  break;
              }
              v28 = (int)v29[1].klass;
              if ( (int)++v30 >= v28 )
                goto LABEL_59;
            }
            if ( v30 >= LODWORD(v29[1].klass) )
              goto LABEL_62;
            v42.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v41;
            UnityEngine_ParticleSystem_ShapeModule__set_skinnedMeshRenderer(v42, *v32, 0LL);
          }
        }
LABEL_59:
        v24 = this->fields.particles;
        ++v25;
      }
      while ( v24 );
    }
LABEL_60:
    sub_B5D69C(ComponentsInParent_Transform, v16);
  }
}