void ObjectScaleEnabler___ctor(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.suddenDeath = 257;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ObjectScaleEnabler__OnUpdate(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *visibleCheckTarget; // x20
  Il2CppObject *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  UnityEngine_Object_o *v15; // x21
  __int64 naturalAligment; // x9
  _BOOL8 v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_IEnumerator_o *v19; // x20
  System_Collections_IEnumerator_c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  System_Collections_IEnumerator_c *v24; // x8
  __int64 v25; // x9
  System_Collections_IEnumerator_c **v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  UnityEngine_Object_o *v29; // x21
  __int64 v30; // x9
  _BOOL8 v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x20
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x20
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  Il2CppObject *Component_object; // x20
  int monitor; // w8
  Il2CppObject *v47; // x20
  unsigned int v48; // w21
  System_Object_array *ComponentsInChildren_object__51245264; // x21
  Il2CppObject *v50; // x20
  il2cpp_array_size_t max_length; // x8
  __int64 v52; // x20
  void *v53; // x8
  __int64 v54; // x21
  Il2CppObject *v55; // x20
  int v56; // w8
  Il2CppObject *v57; // x20
  unsigned int v58; // w21
  System_Object_array *v59; // x21
  Il2CppObject *v60; // x20
  il2cpp_array_size_t v61; // x8
  __int64 v62; // x20
  void *v63; // x8
  __int64 v64; // x21
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4242B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Transform_TypeInfo);
    byte_4C4242B = 1;
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
          sub_1C372B4(0);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v7;
              p_offset += 4;
              if ( !v7 )
                goto LABEL_16;
            }
            v9 = (__int64)&klass->vtable[*p_offset];
          }
          else
          {
LABEL_16:
            v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(
                  Enumerator,
                  *(_QWORD *)(v9 + 8))
              & 1) == 0 )
            break;
          v10 = Enumerator->klass;
          v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
          if ( *(_WORD *)&Enumerator->klass->_2.rank )
          {
            v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
            while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v11;
              v12 += 2;
              if ( !v11 )
                goto LABEL_23;
            }
            v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
          }
          else
          {
LABEL_23:
            v13 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v14 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                  Enumerator,
                  *(_QWORD *)(v13 + 8));
          v15 = (UnityEngine_Object_o *)v14;
          if ( v14 )
          {
            naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) < (unsigned int)naturalAligment
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_1C37574(v14);
LABEL_137:
              sub_1C372B4(transform);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v17 = UnityEngine_Object__op_Equality(v15, (UnityEngine_Object_o *)this, 0);
          if ( !v17 )
          {
            if ( !v15 )
              goto LABEL_140;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
            if ( !gameObject )
              sub_1C372B4(0);
            UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          }
        }
        v33 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
        if ( v33 )
        {
          v34 = *(_QWORD *)v33;
          v35 = v33;
          v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
            {
              --v36;
              v37 += 4;
              if ( !v36 )
                goto LABEL_66;
            }
            v38 = v34 + 16LL * *v37 + 312;
          }
          else
          {
LABEL_66:
            v38 = sub_1C87870(v33, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
        }
        goto LABEL_81;
      }
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
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
      transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !transform )
        goto LABEL_137;
      monitor = (int)transform[1].monitor;
      v47 = transform;
      if ( monitor < 1 )
      {
LABEL_88:
        ComponentsInChildren_object__51245264 = UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v50 = transform;
        if ( ComponentsInChildren_object__51245264
          && (max_length = ComponentsInChildren_object__51245264->max_length) != 0 )
        {
          if ( (int)max_length >= 1 )
          {
            v52 = 0;
            while ( (unsigned int)v52 < (unsigned int)max_length )
            {
              transform = ComponentsInChildren_object__51245264->m_Items[v52];
              if ( !transform )
                goto LABEL_137;
              SimpleAnimation__Stop((SimpleAnimation_o *)transform, 0);
              LODWORD(max_length) = ComponentsInChildren_object__51245264->max_length;
              if ( (int)++v52 >= (int)max_length )
                goto LABEL_81;
            }
            goto LABEL_138;
          }
        }
        else if ( transform )
        {
          v53 = transform[1].monitor;
          if ( v53 )
          {
            if ( (int)v53 >= 1 )
            {
              v54 = 0;
              while ( (unsigned int)v54 < (unsigned int)v53 )
              {
                transform = (Il2CppObject *)*((_QWORD *)&v50[2].klass + v54);
                if ( !transform )
                  goto LABEL_137;
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)transform, 0);
                LODWORD(v53) = v50[1].monitor;
                if ( (int)++v54 >= (int)v53 )
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
      v48 = 0;
      while ( v48 < monitor )
      {
        transform = (Il2CppObject *)*((_QWORD *)&v47[2].klass + (int)v48);
        if ( !transform )
          goto LABEL_137;
        UnityEngine_ParticleSystem__Stop_71550512((UnityEngine_ParticleSystem_o *)transform, 0);
        monitor = (int)v47[1].monitor;
        if ( (int)++v48 >= monitor )
          goto LABEL_88;
      }
LABEL_138:
      sub_1C372BC(transform);
    }
    v66 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0);
    if ( v66.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !transform )
          goto LABEL_137;
        v19 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0);
        if ( !v19 )
          sub_1C372B4(0);
        while ( 1 )
        {
          v20 = v19->klass;
          v21 = *(unsigned __int16 *)&v19->klass->_2.rank;
          if ( *(_WORD *)&v19->klass->_2.rank )
          {
            v22 = &v20->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v21;
              v22 += 4;
              if ( !v21 )
                goto LABEL_43;
            }
            v23 = (__int64)&v20->vtable[*v22];
          }
          else
          {
LABEL_43:
            v23 = sub_1C87870(v19, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8))
              & 1) == 0 )
            break;
          v24 = v19->klass;
          v25 = *(unsigned __int16 *)&v19->klass->_2.rank;
          if ( *(_WORD *)&v19->klass->_2.rank )
          {
            v26 = (System_Collections_IEnumerator_c **)&v24->_1.interfaceOffsets->offset;
            while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v25;
              v26 += 2;
              if ( !v25 )
                goto LABEL_50;
            }
            v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 1];
          }
          else
          {
LABEL_50:
            v27 = sub_1C87870(v19, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v28 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
          v29 = (UnityEngine_Object_o *)v28;
          if ( v28 )
          {
            v30 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) < (unsigned int)v30
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * v30 - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_1C37574(v28);
LABEL_140:
              sub_1C372B4(v17);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v31 = UnityEngine_Object__op_Equality(v29, (UnityEngine_Object_o *)this, 0);
          if ( !v31 )
          {
            if ( !v29 )
              sub_1C372B4(v31);
            v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0);
            if ( !v32 )
              sub_1C372B4(0);
            UnityEngine_GameObject__SetActive(v32, 1, 0);
          }
        }
        v39 = sub_1C37194(v19, System_IDisposable_TypeInfo);
        if ( v39 )
        {
          v40 = *(_QWORD *)v39;
          v41 = v39;
          v42 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
          {
            v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
            {
              --v42;
              v43 += 4;
              if ( !v42 )
                goto LABEL_72;
            }
            v44 = v40 + 16LL * *v43 + 312;
          }
          else
          {
LABEL_72:
            v44 = sub_1C87870(v39, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
        }
      }
      else
      {
        v55 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v55, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v55 )
            goto LABEL_137;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v55, 0);
        }
        else
        {
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !transform )
            goto LABEL_137;
          v56 = (int)transform[1].monitor;
          v57 = transform;
          if ( v56 >= 1 )
          {
            v58 = 0;
            while ( v58 < v56 )
            {
              transform = (Il2CppObject *)*((_QWORD *)&v57[2].klass + (int)v58);
              if ( !transform )
                goto LABEL_137;
              UnityEngine_ParticleSystem__Play_71550160((UnityEngine_ParticleSystem_o *)transform, 0);
              v56 = (int)v57[1].monitor;
              if ( (int)++v58 >= v56 )
                goto LABEL_120;
            }
            goto LABEL_138;
          }
LABEL_120:
          v59 = UnityEngine_Component__GetComponentsInChildren_object__51245264(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v60 = transform;
          if ( v59 && (v61 = v59->max_length) != 0 )
          {
            if ( (int)v61 >= 1 )
            {
              v62 = 0;
              while ( (unsigned int)v62 < (unsigned int)v61 )
              {
                transform = v59->m_Items[v62];
                if ( !transform )
                  goto LABEL_137;
                transform = (Il2CppObject *)SimpleAnimation__Play((SimpleAnimation_o *)transform, 0);
                LODWORD(v61) = v59->max_length;
                if ( (int)++v62 >= (int)v61 )
                  goto LABEL_112;
              }
              goto LABEL_138;
            }
          }
          else if ( transform )
          {
            v63 = transform[1].monitor;
            if ( v63 )
            {
              if ( (int)v63 >= 1 )
              {
                v64 = 0;
                while ( (unsigned int)v64 < (unsigned int)v63 )
                {
                  transform = (Il2CppObject *)*((_QWORD *)&v60[2].klass + v64);
                  if ( !transform )
                    goto LABEL_137;
                  transform = (Il2CppObject *)UnityEngine_Animation__Play((UnityEngine_Animation_o *)transform, 0);
                  LODWORD(v63) = v60[1].monitor;
                  if ( (int)++v64 >= (int)v63 )
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