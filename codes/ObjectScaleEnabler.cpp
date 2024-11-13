void __fastcall ObjectScaleEnabler___ctor(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.suddenDeath = 257;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ObjectScaleEnabler__OnUpdate(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *visibleCheckTarget; // x20
  Il2CppObject *transform; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v27; // x8
  __int64 v28; // x9
  System_Collections_IEnumerator_c **v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  UnityEngine_Transform_c *v32; // x1
  UnityEngine_Object_o *v33; // x21
  __int64 methodPtr_low; // x9
  _BOOL8 v35; // x0
  __int64 v36; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  __int64 v39; // x1
  System_Collections_IEnumerator_o *v40; // x20
  System_Collections_IEnumerator_c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  System_Collections_IEnumerator_c *v45; // x8
  __int64 v46; // x9
  System_Collections_IEnumerator_c **v47; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  UnityEngine_Transform_c *v50; // x1
  UnityEngine_Object_o *v51; // x21
  __int64 v52; // x9
  _BOOL8 v53; // x0
  __int64 v54; // x1
  UnityEngine_GameObject_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x20
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x20
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x1
  Il2CppObject *Component_object; // x20
  int monitor; // w8
  Il2CppObject *v72; // x20
  unsigned int v73; // w21
  System_Object_array *ComponentsInChildren_object__49324452; // x21
  Il2CppObject *v75; // x20
  __int64 v76; // x8
  __int64 v77; // x20
  void *v78; // x8
  __int64 v79; // x21
  __int64 v80; // x1
  Il2CppObject *v81; // x20
  int v82; // w8
  Il2CppObject *v83; // x20
  unsigned int v84; // w21
  System_Object_array *v85; // x21
  Il2CppObject *v86; // x20
  __int64 v87; // x8
  __int64 v88; // x20
  void *v89; // x8
  __int64 v90; // x21
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B156FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v16, v17);
    byte_4B156FB = 1;
  }
  visibleCheckTarget = (UnityEngine_Object_o *)this->fields.visibleCheckTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
          sub_1BCAA3C(0LL, v21);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v24;
              p_offset += 4;
              if ( !v24 )
                goto LABEL_16;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_16:
            p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v27 = Enumerator->klass;
          v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v29 = (System_Collections_IEnumerator_c **)&v27->_1.interfaceOffsets->offset;
            while ( *(v29 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v28;
              v29 += 2;
              if ( !v28 )
                goto LABEL_23;
            }
            v30 = (__int64)&v27->vtable[*(_DWORD *)v29 + 1].method;
          }
          else
          {
LABEL_23:
            v30 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v31 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v30)(
                  Enumerator,
                  *(_QWORD *)(v30 + 8));
          v33 = (UnityEngine_Object_o *)v31;
          if ( v31 )
          {
            v32 = UnityEngine_Transform_TypeInfo;
            methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)methodPtr_low
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_1BCACFC(v31);
LABEL_137:
              sub_1BCAA3C(transform, v20);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
          v35 = UnityEngine_Object__op_Equality(v33, (UnityEngine_Object_o *)this, 0LL);
          if ( !v35 )
          {
            if ( !v33 )
              goto LABEL_140;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v33, 0LL);
            if ( !gameObject )
              sub_1BCAA3C(0LL, v38);
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          }
        }
        v57 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
        if ( v57 )
        {
          v58 = *(_QWORD *)v57;
          v59 = v57;
          v60 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
          {
            v61 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
            {
              --v60;
              v61 += 4;
              if ( !v60 )
                goto LABEL_66;
            }
            v62 = v58 + 16LL * *v61 + 312;
          }
          else
          {
LABEL_66:
            v62 = sub_1C1C7C0(v57, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
        }
        goto LABEL_81;
      }
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69);
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
      transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !transform )
        goto LABEL_137;
      monitor = (int)transform[1].monitor;
      v72 = transform;
      if ( monitor < 1 )
      {
LABEL_88:
        ComponentsInChildren_object__49324452 = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v75 = transform;
        if ( ComponentsInChildren_object__49324452
          && (v76 = *(_QWORD *)&ComponentsInChildren_object__49324452->max_length) != 0 )
        {
          if ( (int)v76 >= 1 )
          {
            v77 = 0LL;
            while ( (unsigned int)v77 < (unsigned int)v76 )
            {
              transform = ComponentsInChildren_object__49324452->m_Items[v77];
              if ( !transform )
                goto LABEL_137;
              SimpleAnimation__Stop((SimpleAnimation_o *)transform, 0LL);
              LODWORD(v76) = ComponentsInChildren_object__49324452->max_length;
              if ( (int)++v77 >= (int)v76 )
                goto LABEL_81;
            }
            goto LABEL_138;
          }
        }
        else if ( transform )
        {
          v78 = transform[1].monitor;
          if ( v78 )
          {
            if ( (int)v78 >= 1 )
            {
              v79 = 0LL;
              while ( (unsigned int)v79 < (unsigned int)v78 )
              {
                transform = (Il2CppObject *)*((_QWORD *)&v75[2].klass + v79);
                if ( !transform )
                  goto LABEL_137;
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)transform, 0LL);
                LODWORD(v78) = v75[1].monitor;
                if ( (int)++v79 >= (int)v78 )
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
      v73 = 0;
      while ( v73 < monitor )
      {
        transform = (Il2CppObject *)*((_QWORD *)&v72[2].klass + (int)v73);
        if ( !transform )
          goto LABEL_137;
        UnityEngine_ParticleSystem__Stop_70434692((UnityEngine_ParticleSystem_o *)transform, 0LL);
        monitor = (int)v72[1].monitor;
        if ( (int)++v73 >= monitor )
          goto LABEL_88;
      }
LABEL_138:
      sub_1BCAA44(transform, v20);
    }
    v92 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0LL);
    if ( v92.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_137;
        v40 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
        if ( !v40 )
          sub_1BCAA3C(0LL, v39);
        while ( 1 )
        {
          v41 = v40->klass;
          v42 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
          {
            v43 = &v41->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v42;
              v43 += 4;
              if ( !v42 )
                goto LABEL_43;
            }
            v44 = (__int64)&v41->vtable[*v43].method;
          }
          else
          {
LABEL_43:
            v44 = sub_1C1C7C0(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
            break;
          v45 = v40->klass;
          v46 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
          {
            v47 = (System_Collections_IEnumerator_c **)&v45->_1.interfaceOffsets->offset;
            while ( *(v47 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v46;
              v47 += 2;
              if ( !v46 )
                goto LABEL_50;
            }
            v48 = (__int64)&v45->vtable[*(_DWORD *)v47 + 1].method;
          }
          else
          {
LABEL_50:
            v48 = sub_1C1C7C0(v40, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v49 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v48)(v40, *(_QWORD *)(v48 + 8));
          v51 = (UnityEngine_Object_o *)v49;
          if ( v49 )
          {
            v50 = UnityEngine_Transform_TypeInfo;
            v52 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v49 + 304LL) < (unsigned int)v52
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v49 + 200LL) + 8 * v52 - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_1BCACFC(v49);
LABEL_140:
              sub_1BCAA3C(v35, v36);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
          v53 = UnityEngine_Object__op_Equality(v51, (UnityEngine_Object_o *)this, 0LL);
          if ( !v53 )
          {
            if ( !v51 )
              sub_1BCAA3C(v53, v54);
            v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v51, 0LL);
            if ( !v55 )
              sub_1BCAA3C(0LL, v56);
            UnityEngine_GameObject__SetActive(v55, 1, 0LL);
          }
        }
        v63 = sub_1BCA91C(v40, System_IDisposable_TypeInfo);
        if ( v63 )
        {
          v64 = *(_QWORD *)v63;
          v65 = v63;
          v66 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
          {
            v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
            {
              --v66;
              v67 += 4;
              if ( !v66 )
                goto LABEL_72;
            }
            v68 = v64 + 16LL * *v67 + 312;
          }
          else
          {
LABEL_72:
            v68 = sub_1C1C7C0(v63, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
        }
      }
      else
      {
        v81 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
        transform = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v81, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v81 )
            goto LABEL_137;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v81, 0LL);
        }
        else
        {
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !transform )
            goto LABEL_137;
          v82 = (int)transform[1].monitor;
          v83 = transform;
          if ( v82 >= 1 )
          {
            v84 = 0;
            while ( v84 < v82 )
            {
              transform = (Il2CppObject *)*((_QWORD *)&v83[2].klass + (int)v84);
              if ( !transform )
                goto LABEL_137;
              UnityEngine_ParticleSystem__Play_70434340((UnityEngine_ParticleSystem_o *)transform, 0LL);
              v82 = (int)v83[1].monitor;
              if ( (int)++v84 >= v82 )
                goto LABEL_120;
            }
            goto LABEL_138;
          }
LABEL_120:
          v85 = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v86 = transform;
          if ( v85 && (v87 = *(_QWORD *)&v85->max_length) != 0 )
          {
            if ( (int)v87 >= 1 )
            {
              v88 = 0LL;
              while ( (unsigned int)v88 < (unsigned int)v87 )
              {
                transform = v85->m_Items[v88];
                if ( !transform )
                  goto LABEL_137;
                transform = (Il2CppObject *)SimpleAnimation__Play((SimpleAnimation_o *)transform, 0LL);
                LODWORD(v87) = v85->max_length;
                if ( (int)++v88 >= (int)v87 )
                  goto LABEL_112;
              }
              goto LABEL_138;
            }
          }
          else if ( transform )
          {
            v89 = transform[1].monitor;
            if ( v89 )
            {
              if ( (int)v89 >= 1 )
              {
                v90 = 0LL;
                while ( (unsigned int)v90 < (unsigned int)v89 )
                {
                  transform = (Il2CppObject *)*((_QWORD *)&v86[2].klass + v90);
                  if ( !transform )
                    goto LABEL_137;
                  transform = (Il2CppObject *)UnityEngine_Animation__Play((UnityEngine_Animation_o *)transform, 0LL);
                  LODWORD(v89) = v86[1].monitor;
                  if ( (int)++v90 >= (int)v89 )
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