void __fastcall ObjectScaleEnabler___ctor(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.suddenDeath = 257;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ObjectScaleEnabler__OnUpdate(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *visibleCheckTarget; // x20
  Il2CppObject *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  UnityEngine_Object_o *v22; // x21
  __int64 methodPtr_low; // x9
  _BOOL8 v24; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_IEnumerator_o *v26; // x20
  System_Collections_IEnumerator_c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  System_Collections_IEnumerator_c *v31; // x8
  __int64 v32; // x9
  System_Collections_IEnumerator_c **v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  UnityEngine_Object_o *v36; // x21
  __int64 v37; // x9
  _BOOL8 v38; // x0
  UnityEngine_GameObject_o *v39; // x0
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
  __int64 v53; // x1
  int monitor; // w8
  Il2CppObject *v55; // x20
  unsigned int v56; // w21
  System_Object_array *ComponentsInChildren_object__48433408; // x21
  Il2CppObject *v58; // x20
  __int64 v59; // x8
  __int64 v60; // x20
  void *v61; // x8
  __int64 v62; // x21
  Il2CppObject *v63; // x20
  int v64; // w8
  Il2CppObject *v65; // x20
  unsigned int v66; // w21
  System_Object_array *v67; // x21
  Il2CppObject *v68; // x20
  __int64 v69; // x8
  __int64 v70; // x20
  void *v71; // x8
  __int64 v72; // x21
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB959 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v4);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v9);
    byte_49FB959 = 1;
  }
  visibleCheckTarget = (UnityEngine_Object_o *)this->fields.visibleCheckTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (Il2CppObject *)UnityEngine_Object__op_Implicit(visibleCheckTarget, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !visibleCheckTarget )
      goto LABEL_137;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0LL);
    if ( localScale.fields.z <= 0.001 && this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_137;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
        if ( !Enumerator )
          sub_1B64324(0LL);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v14;
              p_offset += 4;
              if ( !v14 )
                goto LABEL_16;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_16:
            p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v17 = Enumerator->klass;
          v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
            while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v18;
              v19 += 2;
              if ( !v18 )
                goto LABEL_23;
            }
            v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
          }
          else
          {
LABEL_23:
            v20 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v21 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                  Enumerator,
                  *(_QWORD *)(v20 + 8));
          v22 = (UnityEngine_Object_o *)v21;
          if ( v21 )
          {
            methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) < (unsigned int)methodPtr_low
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_1B645E4(v21);
LABEL_137:
              sub_1B64324(transform);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v24 = UnityEngine_Object__op_Equality(v22, (UnityEngine_Object_o *)this, 0LL);
          if ( !v24 )
          {
            if ( !v22 )
              goto LABEL_140;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
            if ( !gameObject )
              sub_1B64324(0LL);
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          }
        }
        v40 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
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
            v45 = sub_1BB60A8(v40, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
        }
        goto LABEL_81;
      }
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_137;
        ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))Component_object->klass->vtable[8].method)(
          Component_object,
          0LL,
          0LL,
          Component_object->klass->vtable[9].methodPtr);
        goto LABEL_81;
      }
      transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !transform )
        goto LABEL_137;
      monitor = (int)transform[1].monitor;
      v55 = transform;
      if ( monitor < 1 )
      {
LABEL_88:
        ComponentsInChildren_object__48433408 = UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v58 = transform;
        if ( ComponentsInChildren_object__48433408
          && (v59 = *(_QWORD *)&ComponentsInChildren_object__48433408->max_length) != 0 )
        {
          if ( (int)v59 >= 1 )
          {
            v60 = 0LL;
            while ( (unsigned int)v60 < (unsigned int)v59 )
            {
              transform = ComponentsInChildren_object__48433408->m_Items[v60];
              if ( !transform )
                goto LABEL_137;
              SimpleAnimation__Stop((SimpleAnimation_o *)transform, 0LL);
              LODWORD(v59) = ComponentsInChildren_object__48433408->max_length;
              if ( (int)++v60 >= (int)v59 )
                goto LABEL_81;
            }
            goto LABEL_138;
          }
        }
        else if ( transform )
        {
          v61 = transform[1].monitor;
          if ( v61 )
          {
            if ( (int)v61 >= 1 )
            {
              v62 = 0LL;
              while ( (unsigned int)v62 < (unsigned int)v61 )
              {
                transform = (Il2CppObject *)*((_QWORD *)&v58[2].klass + v62);
                if ( !transform )
                  goto LABEL_137;
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)transform, 0LL);
                LODWORD(v61) = v58[1].monitor;
                if ( (int)++v62 >= (int)v61 )
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
      v56 = 0;
      while ( v56 < monitor )
      {
        transform = (Il2CppObject *)*((_QWORD *)&v55[2].klass + (int)v56);
        if ( !transform )
          goto LABEL_137;
        UnityEngine_ParticleSystem__Stop_69408224((UnityEngine_ParticleSystem_o *)transform, 0LL);
        monitor = (int)v55[1].monitor;
        if ( (int)++v56 >= monitor )
          goto LABEL_88;
      }
LABEL_138:
      sub_1B6432C(transform, v53);
    }
    v74 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0LL);
    if ( v74.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_137;
        v26 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
        if ( !v26 )
          sub_1B64324(0LL);
        while ( 1 )
        {
          v27 = v26->klass;
          v28 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
          {
            v29 = &v27->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v28;
              v29 += 4;
              if ( !v28 )
                goto LABEL_43;
            }
            v30 = (__int64)&v27->vtable[*v29].method;
          }
          else
          {
LABEL_43:
            v30 = sub_1BB60A8(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
            break;
          v31 = v26->klass;
          v32 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
          {
            v33 = (System_Collections_IEnumerator_c **)&v31->_1.interfaceOffsets->offset;
            while ( *(v33 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v32;
              v33 += 2;
              if ( !v32 )
                goto LABEL_50;
            }
            v34 = (__int64)&v31->vtable[*(_DWORD *)v33 + 1].method;
          }
          else
          {
LABEL_50:
            v34 = sub_1BB60A8(v26, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v35 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
          v36 = (UnityEngine_Object_o *)v35;
          if ( v35 )
          {
            v37 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) < (unsigned int)v37
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v37 - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_1B645E4(v35);
LABEL_140:
              sub_1B64324(v24);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v38 = UnityEngine_Object__op_Equality(v36, (UnityEngine_Object_o *)this, 0LL);
          if ( !v38 )
          {
            if ( !v36 )
              sub_1B64324(v38);
            v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v36, 0LL);
            if ( !v39 )
              sub_1B64324(0LL);
            UnityEngine_GameObject__SetActive(v39, 1, 0LL);
          }
        }
        v46 = sub_1B64204(v26, System_IDisposable_TypeInfo);
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
            v51 = sub_1BB60A8(v46, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v51)(v48, *(_QWORD *)(v51 + 8));
        }
      }
      else
      {
        v63 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v63, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v63 )
            goto LABEL_137;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v63, 0LL);
        }
        else
        {
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !transform )
            goto LABEL_137;
          v64 = (int)transform[1].monitor;
          v65 = transform;
          if ( v64 >= 1 )
          {
            v66 = 0;
            while ( v66 < v64 )
            {
              transform = (Il2CppObject *)*((_QWORD *)&v65[2].klass + (int)v66);
              if ( !transform )
                goto LABEL_137;
              UnityEngine_ParticleSystem__Play_69407872((UnityEngine_ParticleSystem_o *)transform, 0LL);
              v64 = (int)v65[1].monitor;
              if ( (int)++v66 >= v64 )
                goto LABEL_120;
            }
            goto LABEL_138;
          }
LABEL_120:
          v67 = UnityEngine_Component__GetComponentsInChildren_object__48433408(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v68 = transform;
          if ( v67 && (v69 = *(_QWORD *)&v67->max_length) != 0 )
          {
            if ( (int)v69 >= 1 )
            {
              v70 = 0LL;
              while ( (unsigned int)v70 < (unsigned int)v69 )
              {
                transform = v67->m_Items[v70];
                if ( !transform )
                  goto LABEL_137;
                transform = (Il2CppObject *)SimpleAnimation__Play((SimpleAnimation_o *)transform, 0LL);
                LODWORD(v69) = v67->max_length;
                if ( (int)++v70 >= (int)v69 )
                  goto LABEL_112;
              }
              goto LABEL_138;
            }
          }
          else if ( transform )
          {
            v71 = transform[1].monitor;
            if ( v71 )
            {
              if ( (int)v71 >= 1 )
              {
                v72 = 0LL;
                while ( (unsigned int)v72 < (unsigned int)v71 )
                {
                  transform = (Il2CppObject *)*((_QWORD *)&v68[2].klass + v72);
                  if ( !transform )
                    goto LABEL_137;
                  transform = (Il2CppObject *)UnityEngine_Animation__Play((UnityEngine_Animation_o *)transform, 0LL);
                  LODWORD(v71) = v68[1].monitor;
                  if ( (int)++v72 >= (int)v71 )
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


void __fastcall ObjectScaleEnabler__Start(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  this->fields.isChildVisible = 1;
}