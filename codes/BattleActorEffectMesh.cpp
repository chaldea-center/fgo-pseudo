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

  if ( (byte_40FDB18 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17355, method);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40FDB18 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_17355;
  this->fields.topNodeName = (struct System_String_o *)StringLiteral_17355;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.topNodeName, v10, v2, v3, v4, v5, v6, v7);
  v11 = (System_Int32_array **)StringLiteral_1;
  this->fields.meshObjName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.meshObjName, v11, v12, v13, v14, v15, v16, v17);
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
  __int64 ComponentsInParent_Transform; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int v10; // w8
  __int64 v11; // x20
  unsigned int v12; // w21
  __int64 v13; // x22
  UnityEngine_Object_o *v14; // x0
  UnityEngine_Object_o **v15; // x22
  UnityEngine_Object_o *v16; // t1
  System_String_o *name; // x0
  UnityEngine_Object_o *v18; // x20
  struct UnityEngine_ParticleSystem_array *v19; // x8
  il2cpp_array_size_t v20; // w22
  il2cpp_array_size_t max_length; // w9
  UnityEngine_ParticleSystem_o *v22; // x0
  int32_t type; // w8
  int v24; // w8
  __int64 v25; // x21
  unsigned int v26; // w25
  __int64 v27; // x26
  UnityEngine_Component_o *v28; // x0
  UnityEngine_Object_o **v29; // x26
  UnityEngine_Component_o *v30; // t1
  UnityEngine_GameObject_o *v31; // x0
  System_String_o *v32; // x0
  int v33; // w8
  __int64 v34; // x21
  unsigned int v35; // w25
  __int64 v36; // x26
  UnityEngine_Component_o *v37; // x0
  UnityEngine_Object_o **v38; // x26
  UnityEngine_Component_o *v39; // t1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v41; // x0
  __int64 v42; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_ShapeModule_o v43; // 0:x0.8
  UnityEngine_ParticleSystem_ShapeModule_o v44; // 0:x0.8

  if ( (byte_40FDB17 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInParent_Transform___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FDB17 = 1;
  }
  v42 = 0LL;
  particles = this->fields.particles;
  if ( !particles || !*(_QWORD *)&particles->max_length )
    return;
  ComponentsInParent_Transform = (__int64)UnityEngine_Component__GetComponentsInParent_Transform_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_18BD918 *)Method_UnityEngine_Component_GetComponentsInParent_Transform___);
  if ( !ComponentsInParent_Transform )
    goto LABEL_60;
  v10 = *(_DWORD *)(ComponentsInParent_Transform + 24);
  v11 = ComponentsInParent_Transform;
  if ( v10 < 1 )
  {
LABEL_13:
    v18 = 0LL;
  }
  else
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        goto LABEL_62;
      v13 = v11 + 8LL * (int)v12;
      v16 = *(UnityEngine_Object_o **)(v13 + 32);
      v15 = (UnityEngine_Object_o **)(v13 + 32);
      v14 = v16;
      if ( !v16 )
        goto LABEL_60;
      name = UnityEngine_Object__get_name(v14, 0LL);
      if ( !name )
        goto LABEL_60;
      ComponentsInParent_Transform = System_String__Equals_43731072(name, this->fields.topNodeName, 0LL);
      if ( (ComponentsInParent_Transform & 1) != 0 )
        break;
      v10 = *(_DWORD *)(v11 + 24);
      if ( (int)++v12 >= v10 )
        goto LABEL_13;
    }
    if ( v12 >= *(_DWORD *)(v11 + 24) )
    {
LABEL_62:
      sub_B17100(ComponentsInParent_Transform, v8, v9);
      sub_B170A0();
    }
    v18 = *v15;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ComponentsInParent_Transform = UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
  if ( (ComponentsInParent_Transform & 1) == 0 )
  {
    v19 = this->fields.particles;
    if ( v19 )
    {
      v20 = 0;
      do
      {
        max_length = v19->max_length;
        if ( (int)v20 >= (int)max_length )
          return;
        if ( v20 >= max_length )
          goto LABEL_62;
        v22 = v19->m_Items[v20];
        if ( !v22 )
          break;
        ComponentsInParent_Transform = (__int64)UnityEngine_ParticleSystem__get_shape(v22, 0LL).fields.m_ParticleSystem;
        v42 = ComponentsInParent_Transform;
        type = this->fields.type;
        if ( type == 1 )
        {
          if ( !v18 )
            break;
          ComponentsInParent_Transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                    (UnityEngine_Component_o *)v18,
                                                    (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
          if ( !ComponentsInParent_Transform )
            break;
          v33 = *(_DWORD *)(ComponentsInParent_Transform + 24);
          v34 = ComponentsInParent_Transform;
          if ( v33 >= 1 )
          {
            v35 = 0;
            while ( 1 )
            {
              if ( v35 >= v33 )
                goto LABEL_62;
              v36 = v34 + 8LL * (int)v35;
              v39 = *(UnityEngine_Component_o **)(v36 + 32);
              v38 = (UnityEngine_Object_o **)(v36 + 32);
              v37 = v39;
              if ( !v39 )
                goto LABEL_60;
              gameObject = UnityEngine_Component__get_gameObject(v37, 0LL);
              if ( !gameObject )
                goto LABEL_60;
              ComponentsInParent_Transform = UnityEngine_GameObject__get_active(gameObject, 0LL);
              if ( (ComponentsInParent_Transform & 1) != 0 )
              {
                if ( v35 >= *(_DWORD *)(v34 + 24) )
                  goto LABEL_62;
                if ( !*v38 )
                  goto LABEL_60;
                v41 = UnityEngine_Object__get_name(*v38, 0LL);
                if ( !v41 )
                  goto LABEL_60;
                ComponentsInParent_Transform = System_String__IndexOf_43816080(v41, this->fields.meshObjName, 0LL);
                if ( (ComponentsInParent_Transform & 0x80000000) == 0 )
                  break;
              }
              v33 = *(_DWORD *)(v34 + 24);
              if ( (int)++v35 >= v33 )
                goto LABEL_59;
            }
            if ( v35 >= *(_DWORD *)(v34 + 24) )
              goto LABEL_62;
            v44.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v42;
            UnityEngine_ParticleSystem_ShapeModule__set_meshRenderer(v44, (UnityEngine_MeshRenderer_o *)*v38, 0LL);
          }
        }
        else if ( !type )
        {
          if ( !v18 )
            break;
          ComponentsInParent_Transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                    (UnityEngine_Component_o *)v18,
                                                    (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
          if ( !ComponentsInParent_Transform )
            break;
          v24 = *(_DWORD *)(ComponentsInParent_Transform + 24);
          v25 = ComponentsInParent_Transform;
          if ( v24 >= 1 )
          {
            v26 = 0;
            while ( 1 )
            {
              if ( v26 >= v24 )
                goto LABEL_62;
              v27 = v25 + 8LL * (int)v26;
              v30 = *(UnityEngine_Component_o **)(v27 + 32);
              v29 = (UnityEngine_Object_o **)(v27 + 32);
              v28 = v30;
              if ( !v30 )
                goto LABEL_60;
              v31 = UnityEngine_Component__get_gameObject(v28, 0LL);
              if ( !v31 )
                goto LABEL_60;
              ComponentsInParent_Transform = UnityEngine_GameObject__get_active(v31, 0LL);
              if ( (ComponentsInParent_Transform & 1) != 0 )
              {
                if ( v26 >= *(_DWORD *)(v25 + 24) )
                  goto LABEL_62;
                if ( !*v29 )
                  goto LABEL_60;
                v32 = UnityEngine_Object__get_name(*v29, 0LL);
                if ( !v32 )
                  goto LABEL_60;
                ComponentsInParent_Transform = System_String__IndexOf_43816080(v32, this->fields.meshObjName, 0LL);
                if ( (ComponentsInParent_Transform & 0x80000000) == 0 )
                  break;
              }
              v24 = *(_DWORD *)(v25 + 24);
              if ( (int)++v26 >= v24 )
                goto LABEL_59;
            }
            if ( v26 >= *(_DWORD *)(v25 + 24) )
              goto LABEL_62;
            v43.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v42;
            UnityEngine_ParticleSystem_ShapeModule__set_skinnedMeshRenderer(
              v43,
              (UnityEngine_SkinnedMeshRenderer_o *)*v29,
              0LL);
          }
        }
LABEL_59:
        v19 = this->fields.particles;
        ++v20;
      }
      while ( v19 );
    }
LABEL_60:
    sub_B170D4();
  }
}