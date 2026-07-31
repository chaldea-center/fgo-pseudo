void BattleActorEffectMesh___ctor(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593AF2E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18717/*"chr(Clone)"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593AF2E = 1;
  }
  v9 = StringLiteral_18717/*"chr(Clone)"*/;
  this->fields.topNodeName = (struct System_String_o *)StringLiteral_18717/*"chr(Clone)"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.topNodeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.meshObjName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.meshObjName, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleActorEffectMesh__OnTransformParentChanged(BattleActorEffectMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_ParticleSystem_array *particles; // x8
  UnityEngine_Object_o *ComponentsInParent_object__58647800; // x0
  __int64 v5; // x1
  int klass; // w8
  UnityEngine_Object_o *v7; // x20
  __int64 v8; // x21
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_ParticleSystem_array *v10; // x8
  unsigned int v11; // w24
  unsigned int max_length; // w9
  int32_t type; // w8
  int v14; // w8
  UnityEngine_Object_o *v15; // x21
  unsigned int v16; // w25
  UnityEngine_Object_c **v17; // x26
  UnityEngine_SkinnedMeshRenderer_o **v18; // x26
  UnityEngine_SkinnedMeshRenderer_o *v19; // t1
  int v20; // w8
  UnityEngine_Object_o *v21; // x21
  unsigned int v22; // w25
  UnityEngine_Object_c **v23; // x26
  UnityEngine_MeshRenderer_o **v24; // x26
  UnityEngine_SkinnedMeshRenderer_o *v25; // t1
  UnityEngine_ParticleSystem_ShapeModule_o v26; // x0
  UnityEngine_ParticleSystem_ShapeModule_o v27; // x0
  UnityEngine_Object_o *v28; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593AF2D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInParent_Transform___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593AF2D = 1;
  }
  particles = this->fields.particles;
  v28 = 0;
  if ( !particles || !particles->max_length )
    return;
  ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInParent_object__58647800(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_37EE4F8 *)Method_UnityEngine_Component_GetComponentsInParent_Transform___);
  if ( !ComponentsInParent_object__58647800 )
    goto LABEL_60;
  klass = (int)ComponentsInParent_object__58647800[1].klass;
  v7 = ComponentsInParent_object__58647800;
  if ( klass < 1 )
  {
LABEL_13:
    v9 = 0;
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= klass )
        goto LABEL_61;
      ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)*((_QWORD *)&v7[1].monitor + v8);
      if ( !ComponentsInParent_object__58647800 )
        goto LABEL_60;
      ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                      ComponentsInParent_object__58647800,
                                                                      0);
      if ( !ComponentsInParent_object__58647800 )
        goto LABEL_60;
      ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)System_String__Equals_75473208(
                                                                      (System_String_o *)ComponentsInParent_object__58647800,
                                                                      this->fields.topNodeName,
                                                                      0);
      if ( ((unsigned __int8)ComponentsInParent_object__58647800 & 1) != 0 )
        break;
      klass = (int)v7[1].klass;
      if ( (int)++v8 >= klass )
        goto LABEL_13;
    }
    if ( (unsigned int)v8 >= LODWORD(v7[1].klass) )
LABEL_61:
      sub_21FFED4(ComponentsInParent_object__58647800);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&v7[1].monitor + v8);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( ((unsigned __int8)ComponentsInParent_object__58647800 & 1) == 0 )
  {
    v10 = this->fields.particles;
    if ( v10 )
    {
      v11 = 0;
      do
      {
        max_length = v10->max_length;
        if ( (int)v11 >= (int)max_length )
          return;
        if ( v11 >= max_length )
          goto LABEL_61;
        ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)v10->m_Items[v11];
        if ( !ComponentsInParent_object__58647800 )
          break;
        ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_ParticleSystem__get_shape(
                                                                        (UnityEngine_ParticleSystem_o *)ComponentsInParent_object__58647800,
                                                                        0).fields.m_ParticleSystem;
        type = this->fields.type;
        v28 = ComponentsInParent_object__58647800;
        if ( type == 1 )
        {
          if ( !v9 )
            break;
          ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                                                          (UnityEngine_Component_o *)v9,
                                                                          (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
          if ( !ComponentsInParent_object__58647800 )
            break;
          v20 = (int)ComponentsInParent_object__58647800[1].klass;
          v21 = ComponentsInParent_object__58647800;
          if ( v20 >= 1 )
          {
            v22 = 0;
            while ( 1 )
            {
              if ( v22 >= v20 )
                goto LABEL_61;
              v23 = &v21->klass + (int)v22;
              v25 = (UnityEngine_SkinnedMeshRenderer_o *)v23[4];
              v24 = (UnityEngine_MeshRenderer_o **)(v23 + 4);
              ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)v25;
              if ( !v25 )
                goto LABEL_60;
              ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__58647800,
                                                                              0);
              if ( !ComponentsInParent_object__58647800 )
                goto LABEL_60;
              ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__58647800,
                                                                              0);
              if ( ((unsigned __int8)ComponentsInParent_object__58647800 & 1) != 0 )
              {
                if ( v22 >= LODWORD(v21[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)*v24;
                if ( !*v24 )
                  goto LABEL_60;
                ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__58647800,
                                                                                0);
                if ( !ComponentsInParent_object__58647800 )
                  goto LABEL_60;
                ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)System_String__IndexOf_75501892(
                                                                                (System_String_o *)ComponentsInParent_object__58647800,
                                                                                this->fields.meshObjName,
                                                                                0);
                if ( ((unsigned int)ComponentsInParent_object__58647800 & 0x80000000) == 0 )
                  break;
              }
              v20 = (int)v21[1].klass;
              if ( (int)++v22 >= v20 )
                goto LABEL_59;
            }
            if ( v22 >= LODWORD(v21[1].klass) )
              goto LABEL_61;
            v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v28;
            UnityEngine_ParticleSystem_ShapeModule__set_meshRenderer(v27, *v24, 0);
          }
        }
        else if ( !type )
        {
          if ( !v9 )
            break;
          ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                                                          (UnityEngine_Component_o *)v9,
                                                                          (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
          if ( !ComponentsInParent_object__58647800 )
            break;
          v14 = (int)ComponentsInParent_object__58647800[1].klass;
          v15 = ComponentsInParent_object__58647800;
          if ( v14 >= 1 )
          {
            v16 = 0;
            while ( 1 )
            {
              if ( v16 >= v14 )
                goto LABEL_61;
              v17 = &v15->klass + (int)v16;
              v19 = (UnityEngine_SkinnedMeshRenderer_o *)v17[4];
              v18 = (UnityEngine_SkinnedMeshRenderer_o **)(v17 + 4);
              ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)v19;
              if ( !v19 )
                goto LABEL_60;
              ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)ComponentsInParent_object__58647800,
                                                                              0);
              if ( !ComponentsInParent_object__58647800 )
                goto LABEL_60;
              ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_GameObject__get_activeSelf(
                                                                              (UnityEngine_GameObject_o *)ComponentsInParent_object__58647800,
                                                                              0);
              if ( ((unsigned __int8)ComponentsInParent_object__58647800 & 1) != 0 )
              {
                if ( v16 >= LODWORD(v15[1].klass) )
                  goto LABEL_61;
                ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)*v18;
                if ( !*v18 )
                  goto LABEL_60;
                ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)UnityEngine_Object__get_name(
                                                                                ComponentsInParent_object__58647800,
                                                                                0);
                if ( !ComponentsInParent_object__58647800 )
                  goto LABEL_60;
                ComponentsInParent_object__58647800 = (UnityEngine_Object_o *)System_String__IndexOf_75501892(
                                                                                (System_String_o *)ComponentsInParent_object__58647800,
                                                                                this->fields.meshObjName,
                                                                                0);
                if ( ((unsigned int)ComponentsInParent_object__58647800 & 0x80000000) == 0 )
                  break;
              }
              v14 = (int)v15[1].klass;
              if ( (int)++v16 >= v14 )
                goto LABEL_59;
            }
            if ( v16 >= LODWORD(v15[1].klass) )
              goto LABEL_61;
            v26.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v28;
            UnityEngine_ParticleSystem_ShapeModule__set_skinnedMeshRenderer(v26, *v18, 0);
          }
        }
LABEL_59:
        v10 = this->fields.particles;
        ++v11;
      }
      while ( v10 );
    }
LABEL_60:
    sub_21FFECC(ComponentsInParent_object__58647800, v5);
  }
}