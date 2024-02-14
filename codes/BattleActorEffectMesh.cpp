void __fastcall BattleActorEffectMesh___ctor(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_Int32_array **v10; // x1
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4218473 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17477/*"chr(Clone)"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4218473 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_17477/*"chr(Clone)"*/;
  this->fields.topNodeName = (struct System_String_o *)StringLiteral_17477/*"chr(Clone)"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.topNodeName, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.meshObjName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.meshObjName, v11, v12, v13, v14, v15, v16, v17);
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
  UnityEngine_Object_o *ComponentsInParent_Transform; // x0
  int klass; // w8
  UnityEngine_Object_o *v9; // x20
  unsigned int v10; // w21
  UnityEngine_Object_c **v11; // x22
  UnityEngine_Object_o **v12; // x22
  UnityEngine_SkinnedMeshRenderer_o *v13; // t1
  UnityEngine_Object_o *v14; // x20
  struct UnityEngine_ParticleSystem_array *v15; // x8
  il2cpp_array_size_t v16; // w22
  il2cpp_array_size_t max_length; // w9
  int32_t type; // w8
  int v19; // w8
  UnityEngine_Object_o *v20; // x21
  unsigned int v21; // w25
  UnityEngine_Object_c **v22; // x26
  UnityEngine_SkinnedMeshRenderer_o **v23; // x26
  UnityEngine_SkinnedMeshRenderer_o *v24; // t1
  int v25; // w8
  UnityEngine_Object_o *v26; // x21
  unsigned int v27; // w25
  UnityEngine_Object_c **v28; // x26
  UnityEngine_MeshRenderer_o **v29; // x26
  UnityEngine_SkinnedMeshRenderer_o *v30; // t1
  __int64 v31; // x0
  UnityEngine_Object_o *v32; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v33; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v34; // 0:x0.8

  if ( (byte_4218472 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInParent_Transform___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4218472 = 1;
  }
  v32 = 0LL;
  particles = this->fields.particles;
  if ( !particles || !*(_QWORD *)&particles->max_length )
    return;
  ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInParent_Transform_(
                                                           (UnityEngine_Component_o *)this,
                                                           (const MethodInfo_170EB94 *)Method_UnityEngine_Component_GetComponentsInParent_Transform___);
  if ( !ComponentsInParent_Transform )
    goto LABEL_60;
  klass = (int)ComponentsInParent_Transform[1].klass;
  v9 = ComponentsInParent_Transform;
  if ( klass < 1 )
  {
LABEL_13:
    v14 = 0LL;
  }
  else
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= klass )
        goto LABEL_62;
      v11 = &v9->klass + (int)v10;
      v13 = (UnityEngine_SkinnedMeshRenderer_o *)v11[4];
      v12 = (UnityEngine_Object_o **)(v11 + 4);
      ComponentsInParent_Transform = (UnityEngine_Object_o *)v13;
      if ( !v13 )
        goto LABEL_60;
      ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                               ComponentsInParent_Transform,
                                                               0LL);
      if ( !ComponentsInParent_Transform )
        goto LABEL_60;
      ComponentsInParent_Transform = (UnityEngine_Object_o *)System_String__Equals_43837244(
                                                               (System_String_o *)ComponentsInParent_Transform,
                                                               this->fields.topNodeName,
                                                               0LL);
      if ( ((unsigned __int8)ComponentsInParent_Transform & 1) != 0 )
        break;
      klass = (int)v9[1].klass;
      if ( (int)++v10 >= klass )
        goto LABEL_13;
    }
    if ( v10 >= LODWORD(v9[1].klass) )
    {
LABEL_62:
      v31 = sub_B0D9A8(ComponentsInParent_Transform);
      sub_B0D948(v31, 0LL);
    }
    v14 = *v12;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInParent_Transform & 1) == 0 )
  {
    v15 = this->fields.particles;
    if ( v15 )
    {
      v16 = 0;
      do
      {
        max_length = v15->max_length;
        if ( (int)v16 >= (int)max_length )
          return;
        if ( v16 >= max_length )
          goto LABEL_62;
        ComponentsInParent_Transform = (UnityEngine_Object_o *)v15->m_Items[v16];
        if ( !ComponentsInParent_Transform )
          break;
        ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_ParticleSystem__get_shape(
                                                                 (UnityEngine_ParticleSystem_o *)ComponentsInParent_Transform,
                                                                 0LL).fields.m_ParticleSystem;
        v32 = ComponentsInParent_Transform;
        type = this->fields.type;
        if ( type == 1 )
        {
          if ( !v14 )
            break;
          ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                                   (UnityEngine_Component_o *)v14,
                                                                   (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
          if ( !ComponentsInParent_Transform )
            break;
          v25 = (int)ComponentsInParent_Transform[1].klass;
          v26 = ComponentsInParent_Transform;
          if ( v25 >= 1 )
          {
            v27 = 0;
            while ( 1 )
            {
              if ( v27 >= v25 )
                goto LABEL_62;
              v28 = &v26->klass + (int)v27;
              v30 = (UnityEngine_SkinnedMeshRenderer_o *)v28[4];
              v29 = (UnityEngine_MeshRenderer_o **)(v28 + 4);
              ComponentsInParent_Transform = (UnityEngine_Object_o *)v30;
              if ( !v30 )
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
                if ( v27 >= LODWORD(v26[1].klass) )
                  goto LABEL_62;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)*v29;
                if ( !*v29 )
                  goto LABEL_60;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                         ComponentsInParent_Transform,
                                                                         0LL);
                if ( !ComponentsInParent_Transform )
                  goto LABEL_60;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)System_String__IndexOf_43922252(
                                                                         (System_String_o *)ComponentsInParent_Transform,
                                                                         this->fields.meshObjName,
                                                                         0LL);
                if ( ((unsigned int)ComponentsInParent_Transform & 0x80000000) == 0 )
                  break;
              }
              v25 = (int)v26[1].klass;
              if ( (int)++v27 >= v25 )
                goto LABEL_59;
            }
            if ( v27 >= LODWORD(v26[1].klass) )
              goto LABEL_62;
            v34.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v32;
            UnityEngine_ParticleSystem_ShapeModule__set_meshRenderer(v34, *v29, 0LL);
          }
        }
        else if ( !type )
        {
          if ( !v14 )
            break;
          ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                                   (UnityEngine_Component_o *)v14,
                                                                   (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
          if ( !ComponentsInParent_Transform )
            break;
          v19 = (int)ComponentsInParent_Transform[1].klass;
          v20 = ComponentsInParent_Transform;
          if ( v19 >= 1 )
          {
            v21 = 0;
            while ( 1 )
            {
              if ( v21 >= v19 )
                goto LABEL_62;
              v22 = &v20->klass + (int)v21;
              v24 = (UnityEngine_SkinnedMeshRenderer_o *)v22[4];
              v23 = (UnityEngine_SkinnedMeshRenderer_o **)(v22 + 4);
              ComponentsInParent_Transform = (UnityEngine_Object_o *)v24;
              if ( !v24 )
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
                if ( v21 >= LODWORD(v20[1].klass) )
                  goto LABEL_62;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)*v23;
                if ( !*v23 )
                  goto LABEL_60;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                         ComponentsInParent_Transform,
                                                                         0LL);
                if ( !ComponentsInParent_Transform )
                  goto LABEL_60;
                ComponentsInParent_Transform = (UnityEngine_Object_o *)System_String__IndexOf_43922252(
                                                                         (System_String_o *)ComponentsInParent_Transform,
                                                                         this->fields.meshObjName,
                                                                         0LL);
                if ( ((unsigned int)ComponentsInParent_Transform & 0x80000000) == 0 )
                  break;
              }
              v19 = (int)v20[1].klass;
              if ( (int)++v21 >= v19 )
                goto LABEL_59;
            }
            if ( v21 >= LODWORD(v20[1].klass) )
              goto LABEL_62;
            v33.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v32;
            UnityEngine_ParticleSystem_ShapeModule__set_skinnedMeshRenderer(v33, *v23, 0LL);
          }
        }
LABEL_59:
        v15 = this->fields.particles;
        ++v16;
      }
      while ( v15 );
    }
LABEL_60:
    sub_B0D97C(ComponentsInParent_Transform);
  }
}