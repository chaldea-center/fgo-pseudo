void ObjectScaleEnabler___ctor(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.suddenDeath = 257;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ObjectScaleEnabler__OnUpdate(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *visibleCheckTarget; // x20
  Il2CppObject *transform; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  UnityEngine_Object_o *v17; // x21
  __int64 naturalAligment; // x9
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_IEnumerator_o *v24; // x20
  System_Collections_IEnumerator_c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  System_Collections_IEnumerator_c *v29; // x8
  __int64 v30; // x9
  System_Collections_IEnumerator_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  UnityEngine_Object_o *v34; // x21
  __int64 v35; // x9
  _BOOL8 v36; // x0
  __int64 v37; // x1
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x20
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x20
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  Il2CppObject *Component_object; // x20
  int monitor; // w8
  Il2CppObject *v54; // x20
  unsigned int v55; // w21
  System_Object_array *ComponentsInChildren_object__51318504; // x21
  Il2CppObject *v57; // x20
  il2cpp_array_size_t max_length; // x8
  __int64 v59; // x20
  void *v60; // x8
  __int64 v61; // x21
  Il2CppObject *v62; // x20
  int v63; // w8
  Il2CppObject *v64; // x20
  unsigned int v65; // w21
  System_Object_array *v66; // x21
  Il2CppObject *v67; // x20
  il2cpp_array_size_t v68; // x8
  __int64 v69; // x20
  void *v70; // x8
  __int64 v71; // x21
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C561D4 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    byte_4C561D4 = 1;
  }
  visibleCheckTarget = (UnityEngine_Object_o *)this->fields.visibleCheckTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (Il2CppObject *)UnityEngine_Object__op_Implicit(visibleCheckTarget, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !visibleCheckTarget )
      goto LABEL_137;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0);
    if ( localScale.fields.z <= 0.001 && this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !transform )
          goto LABEL_137;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0);
        if ( !Enumerator )
          sub_1C3E7C0(0, v6);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v9;
              p_offset += 4;
              if ( !v9 )
                goto LABEL_16;
            }
            v11 = (__int64)&klass->vtable[*p_offset];
          }
          else
          {
LABEL_16:
            v11 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(
                  Enumerator,
                  *(_QWORD *)(v11 + 8))
              & 1) == 0 )
            break;
          v12 = Enumerator->klass;
          v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
            while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v13;
              v14 += 2;
              if ( !v13 )
                goto LABEL_23;
            }
            v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
          }
          else
          {
LABEL_23:
            v15 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v16 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                  Enumerator,
                  *(_QWORD *)(v15 + 8));
          v17 = (UnityEngine_Object_o *)v16;
          if ( v16 )
          {
            naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 304LL) < (unsigned int)naturalAligment
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_1C3EA80(v16);
LABEL_137:
              sub_1C3E7C0(transform, v5);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v19 = UnityEngine_Object__op_Equality(v17, (UnityEngine_Object_o *)this, 0);
          if ( !v19 )
          {
            if ( !v17 )
              goto LABEL_140;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0);
            if ( !gameObject )
              sub_1C3E7C0(0, v22);
            UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          }
        }
        v40 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
        if ( v40 )
        {
          v41 = *(_QWORD *)v40;
          v42 = v40;
          v43 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
          {
            v44 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
            {
              --v43;
              v44 += 4;
              if ( !v43 )
                goto LABEL_66;
            }
            v45 = v41 + 16LL * *v44 + 312;
          }
          else
          {
LABEL_66:
            v45 = sub_1C8ED7C(v40, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
        }
        goto LABEL_81;
      }
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_137;
        ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          0,
          0,
          Component_object->klass->vtable[8].method);
        goto LABEL_81;
      }
      transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__51318504(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !transform )
        goto LABEL_137;
      monitor = (int)transform[1].monitor;
      v54 = transform;
      if ( monitor < 1 )
      {
LABEL_88:
        ComponentsInChildren_object__51318504 = UnityEngine_Component__GetComponentsInChildren_object__51318504(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__51318504(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v57 = transform;
        if ( ComponentsInChildren_object__51318504
          && (max_length = ComponentsInChildren_object__51318504->max_length) != 0 )
        {
          if ( (int)max_length >= 1 )
          {
            v59 = 0;
            while ( (unsigned int)v59 < (unsigned int)max_length )
            {
              transform = ComponentsInChildren_object__51318504->m_Items[v59];
              if ( !transform )
                goto LABEL_137;
              SimpleAnimation__Stop((SimpleAnimation_o *)transform, 0);
              LODWORD(max_length) = ComponentsInChildren_object__51318504->max_length;
              if ( (int)++v59 >= (int)max_length )
                goto LABEL_81;
            }
            goto LABEL_138;
          }
        }
        else if ( transform )
        {
          v60 = transform[1].monitor;
          if ( v60 )
          {
            if ( (int)v60 >= 1 )
            {
              v61 = 0;
              while ( (unsigned int)v61 < (unsigned int)v60 )
              {
                transform = (Il2CppObject *)*((_QWORD *)&v57[2].klass + v61);
                if ( !transform )
                  goto LABEL_137;
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)transform, 0);
                LODWORD(v60) = v57[1].monitor;
                if ( (int)++v61 >= (int)v60 )
                  goto LABEL_81;
              }
              goto LABEL_138;
            }
          }
        }
LABEL_81:
        this->fields.isChildVisible = 0;
        return;
      }
      v55 = 0;
      while ( v55 < monitor )
      {
        transform = (Il2CppObject *)*((_QWORD *)&v54[2].klass + (int)v55);
        if ( !transform )
          goto LABEL_137;
        UnityEngine_ParticleSystem__Stop_71625324((UnityEngine_ParticleSystem_o *)transform, 0);
        monitor = (int)v54[1].monitor;
        if ( (int)++v55 >= monitor )
          goto LABEL_88;
      }
LABEL_138:
      sub_1C3E7C8(transform, v5);
    }
    v73 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0);
    if ( v73.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !transform )
          goto LABEL_137;
        v24 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0);
        if ( !v24 )
          sub_1C3E7C0(0, v23);
        while ( 1 )
        {
          v25 = v24->klass;
          v26 = *(unsigned __int16 *)&v24->klass->_2.rank;
          if ( *(_WORD *)&v24->klass->_2.rank )
          {
            v27 = &v25->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v26;
              v27 += 4;
              if ( !v26 )
                goto LABEL_43;
            }
            v28 = (__int64)&v25->vtable[*v27];
          }
          else
          {
LABEL_43:
            v28 = sub_1C8ED7C(v24, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8))
              & 1) == 0 )
            break;
          v29 = v24->klass;
          v30 = *(unsigned __int16 *)&v24->klass->_2.rank;
          if ( *(_WORD *)&v24->klass->_2.rank )
          {
            v31 = (System_Collections_IEnumerator_c **)&v29->_1.interfaceOffsets->offset;
            while ( *(v31 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v30;
              v31 += 2;
              if ( !v30 )
                goto LABEL_50;
            }
            v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 1];
          }
          else
          {
LABEL_50:
            v32 = sub_1C8ED7C(v24, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v33 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
          v34 = (UnityEngine_Object_o *)v33;
          if ( v33 )
          {
            v35 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)v35
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * v35 - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_1C3EA80(v33);
LABEL_140:
              sub_1C3E7C0(v19, v20);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v36 = UnityEngine_Object__op_Equality(v34, (UnityEngine_Object_o *)this, 0);
          if ( !v36 )
          {
            if ( !v34 )
              sub_1C3E7C0(v36, v37);
            v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0);
            if ( !v38 )
              sub_1C3E7C0(0, v39);
            UnityEngine_GameObject__SetActive(v38, 1, 0);
          }
        }
        v46 = sub_1C3E6A0(v24, System_IDisposable_TypeInfo);
        if ( v46 )
        {
          v47 = *(_QWORD *)v46;
          v48 = v46;
          v49 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
          {
            v50 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
            {
              --v49;
              v50 += 4;
              if ( !v49 )
                goto LABEL_72;
            }
            v51 = v47 + 16LL * *v50 + 312;
          }
          else
          {
LABEL_72:
            v51 = sub_1C8ED7C(v46, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v51)(v48, *(_QWORD *)(v51 + 8));
        }
      }
      else
      {
        v62 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v62, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v62 )
            goto LABEL_137;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v62, 0);
        }
        else
        {
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__51318504(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !transform )
            goto LABEL_137;
          v63 = (int)transform[1].monitor;
          v64 = transform;
          if ( v63 >= 1 )
          {
            v65 = 0;
            while ( v65 < v63 )
            {
              transform = (Il2CppObject *)*((_QWORD *)&v64[2].klass + (int)v65);
              if ( !transform )
                goto LABEL_137;
              UnityEngine_ParticleSystem__Play_71624972((UnityEngine_ParticleSystem_o *)transform, 0);
              v63 = (int)v64[1].monitor;
              if ( (int)++v65 >= v63 )
                goto LABEL_120;
            }
            goto LABEL_138;
          }
LABEL_120:
          v66 = UnityEngine_Component__GetComponentsInChildren_object__51318504(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__51318504(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v67 = transform;
          if ( v66 && (v68 = v66->max_length) != 0 )
          {
            if ( (int)v68 >= 1 )
            {
              v69 = 0;
              while ( (unsigned int)v69 < (unsigned int)v68 )
              {
                transform = v66->m_Items[v69];
                if ( !transform )
                  goto LABEL_137;
                transform = (Il2CppObject *)SimpleAnimation__Play((SimpleAnimation_o *)transform, 0);
                LODWORD(v68) = v66->max_length;
                if ( (int)++v69 >= (int)v68 )
                  goto LABEL_112;
              }
              goto LABEL_138;
            }
          }
          else if ( transform )
          {
            v70 = transform[1].monitor;
            if ( v70 )
            {
              if ( (int)v70 >= 1 )
              {
                v71 = 0;
                while ( (unsigned int)v71 < (unsigned int)v70 )
                {
                  transform = (Il2CppObject *)*((_QWORD *)&v67[2].klass + v71);
                  if ( !transform )
                    goto LABEL_137;
                  transform = (Il2CppObject *)UnityEngine_Animation__Play((UnityEngine_Animation_o *)transform, 0);
                  LODWORD(v70) = v67[1].monitor;
                  if ( (int)++v71 >= (int)v70 )
                    goto LABEL_112;
                }
                goto LABEL_138;
              }
            }
          }
        }
      }
LABEL_112:
      this->fields.isChildVisible = 1;
    }
  }
}


void ObjectScaleEnabler__Start(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  this->fields.isChildVisible = 1;
}