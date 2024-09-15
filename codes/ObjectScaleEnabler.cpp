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
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v19; // x8
  __int64 v20; // x9
  System_Collections_IEnumerator_c **v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  UnityEngine_Object_o *v24; // x21
  __int64 methodPtr_low; // x9
  _BOOL8 v26; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  System_Collections_IEnumerator_o *v31; // x20
  System_Collections_IEnumerator_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  System_Collections_IEnumerator_c *v36; // x8
  __int64 v37; // x9
  System_Collections_IEnumerator_c **v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  UnityEngine_Object_o *v41; // x21
  __int64 v42; // x9
  _BOOL8 v43; // x0
  __int64 v44; // x1
  UnityEngine_GameObject_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x20
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x20
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  Il2CppObject *Component_object; // x20
  int monitor; // w8
  Il2CppObject *v61; // x20
  unsigned int v62; // w21
  System_Object_array *ComponentsInChildren_object__48601372; // x21
  Il2CppObject *v64; // x20
  __int64 v65; // x8
  __int64 v66; // x20
  void *v67; // x8
  __int64 v68; // x21
  Il2CppObject *v69; // x20
  int v70; // w8
  Il2CppObject *v71; // x20
  unsigned int v72; // w21
  System_Object_array *v73; // x21
  Il2CppObject *v74; // x20
  __int64 v75; // x8
  __int64 v76; // x20
  void *v77; // x8
  __int64 v78; // x21
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A2D473 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v4);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v5);
    sub_1B761C0(&System_IDisposable_TypeInfo, v6);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&UnityEngine_Transform_TypeInfo, v9);
    byte_4A2D473 = 1;
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
          sub_1B7641C(0LL, v13);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v16;
              p_offset += 4;
              if ( !v16 )
                goto LABEL_16;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_16:
            p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v19 = Enumerator->klass;
          v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v21 = (System_Collections_IEnumerator_c **)&v19->_1.interfaceOffsets->offset;
            while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v20;
              v21 += 2;
              if ( !v20 )
                goto LABEL_23;
            }
            v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 1].method;
          }
          else
          {
LABEL_23:
            v22 = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v23 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(
                  Enumerator,
                  *(_QWORD *)(v22 + 8));
          v24 = (UnityEngine_Object_o *)v23;
          if ( v23 )
          {
            methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_1B766DC(v23);
LABEL_137:
              sub_1B7641C(transform, v12);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v26 = UnityEngine_Object__op_Equality(v24, (UnityEngine_Object_o *)this, 0LL);
          if ( !v26 )
          {
            if ( !v24 )
              goto LABEL_140;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
            if ( !gameObject )
              sub_1B7641C(0LL, v29);
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          }
        }
        v47 = sub_1B762FC(Enumerator, System_IDisposable_TypeInfo);
        if ( v47 )
        {
          v48 = *(_QWORD *)v47;
          v49 = v47;
          v50 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
          {
            v51 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
            {
              --v50;
              v51 += 4;
              if ( !v50 )
                goto LABEL_66;
            }
            v52 = v48 + 16LL * *v51 + 312;
          }
          else
          {
LABEL_66:
            v52 = sub_1BC81A0(v47, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v52)(v49, *(_QWORD *)(v52 + 8));
        }
        goto LABEL_81;
      }
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
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
      transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !transform )
        goto LABEL_137;
      monitor = (int)transform[1].monitor;
      v61 = transform;
      if ( monitor < 1 )
      {
LABEL_88:
        ComponentsInChildren_object__48601372 = UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v64 = transform;
        if ( ComponentsInChildren_object__48601372
          && (v65 = *(_QWORD *)&ComponentsInChildren_object__48601372->max_length) != 0 )
        {
          if ( (int)v65 >= 1 )
          {
            v66 = 0LL;
            while ( (unsigned int)v66 < (unsigned int)v65 )
            {
              transform = ComponentsInChildren_object__48601372->m_Items[v66];
              if ( !transform )
                goto LABEL_137;
              SimpleAnimation__Stop((SimpleAnimation_o *)transform, 0LL);
              LODWORD(v65) = ComponentsInChildren_object__48601372->max_length;
              if ( (int)++v66 >= (int)v65 )
                goto LABEL_81;
            }
            goto LABEL_138;
          }
        }
        else if ( transform )
        {
          v67 = transform[1].monitor;
          if ( v67 )
          {
            if ( (int)v67 >= 1 )
            {
              v68 = 0LL;
              while ( (unsigned int)v68 < (unsigned int)v67 )
              {
                transform = (Il2CppObject *)*((_QWORD *)&v64[2].klass + v68);
                if ( !transform )
                  goto LABEL_137;
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)transform, 0LL);
                LODWORD(v67) = v64[1].monitor;
                if ( (int)++v68 >= (int)v67 )
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
      v62 = 0;
      while ( v62 < monitor )
      {
        transform = (Il2CppObject *)*((_QWORD *)&v61[2].klass + (int)v62);
        if ( !transform )
          goto LABEL_137;
        UnityEngine_ParticleSystem__Stop_69567896((UnityEngine_ParticleSystem_o *)transform, 0LL);
        monitor = (int)v61[1].monitor;
        if ( (int)++v62 >= monitor )
          goto LABEL_88;
      }
LABEL_138:
      sub_1B76424(transform, v12);
    }
    v80 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0LL);
    if ( v80.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_137;
        v31 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
        if ( !v31 )
          sub_1B7641C(0LL, v30);
        while ( 1 )
        {
          v32 = v31->klass;
          v33 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
          {
            v34 = &v32->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v33;
              v34 += 4;
              if ( !v33 )
                goto LABEL_43;
            }
            v35 = (__int64)&v32->vtable[*v34].method;
          }
          else
          {
LABEL_43:
            v35 = sub_1BC81A0(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
            break;
          v36 = v31->klass;
          v37 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
          {
            v38 = (System_Collections_IEnumerator_c **)&v36->_1.interfaceOffsets->offset;
            while ( *(v38 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v37;
              v38 += 2;
              if ( !v37 )
                goto LABEL_50;
            }
            v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 1].method;
          }
          else
          {
LABEL_50:
            v39 = sub_1BC81A0(v31, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v40 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
          v41 = (UnityEngine_Object_o *)v40;
          if ( v40 )
          {
            v42 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v40 + 304LL) < (unsigned int)v42
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v40 + 200LL) + 8 * v42 - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_1B766DC(v40);
LABEL_140:
              sub_1B7641C(v26, v27);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v43 = UnityEngine_Object__op_Equality(v41, (UnityEngine_Object_o *)this, 0LL);
          if ( !v43 )
          {
            if ( !v41 )
              sub_1B7641C(v43, v44);
            v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v41, 0LL);
            if ( !v45 )
              sub_1B7641C(0LL, v46);
            UnityEngine_GameObject__SetActive(v45, 1, 0LL);
          }
        }
        v53 = sub_1B762FC(v31, System_IDisposable_TypeInfo);
        if ( v53 )
        {
          v54 = *(_QWORD *)v53;
          v55 = v53;
          v56 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
          {
            v57 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
            {
              --v56;
              v57 += 4;
              if ( !v56 )
                goto LABEL_72;
            }
            v58 = v54 + 16LL * *v57 + 312;
          }
          else
          {
LABEL_72:
            v58 = sub_1BC81A0(v53, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v58)(v55, *(_QWORD *)(v58 + 8));
        }
      }
      else
      {
        v69 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v69 )
            goto LABEL_137;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v69, 0LL);
        }
        else
        {
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !transform )
            goto LABEL_137;
          v70 = (int)transform[1].monitor;
          v71 = transform;
          if ( v70 >= 1 )
          {
            v72 = 0;
            while ( v72 < v70 )
            {
              transform = (Il2CppObject *)*((_QWORD *)&v71[2].klass + (int)v72);
              if ( !transform )
                goto LABEL_137;
              UnityEngine_ParticleSystem__Play_69567544((UnityEngine_ParticleSystem_o *)transform, 0LL);
              v70 = (int)v71[1].monitor;
              if ( (int)++v72 >= v70 )
                goto LABEL_120;
            }
            goto LABEL_138;
          }
LABEL_120:
          v73 = UnityEngine_Component__GetComponentsInChildren_object__48601372(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v74 = transform;
          if ( v73 && (v75 = *(_QWORD *)&v73->max_length) != 0 )
          {
            if ( (int)v75 >= 1 )
            {
              v76 = 0LL;
              while ( (unsigned int)v76 < (unsigned int)v75 )
              {
                transform = v73->m_Items[v76];
                if ( !transform )
                  goto LABEL_137;
                transform = (Il2CppObject *)SimpleAnimation__Play((SimpleAnimation_o *)transform, 0LL);
                LODWORD(v75) = v73->max_length;
                if ( (int)++v76 >= (int)v75 )
                  goto LABEL_112;
              }
              goto LABEL_138;
            }
          }
          else if ( transform )
          {
            v77 = transform[1].monitor;
            if ( v77 )
            {
              if ( (int)v77 >= 1 )
              {
                v78 = 0LL;
                while ( (unsigned int)v78 < (unsigned int)v77 )
                {
                  transform = (Il2CppObject *)*((_QWORD *)&v74[2].klass + v78);
                  if ( !transform )
                    goto LABEL_137;
                  transform = (Il2CppObject *)UnityEngine_Animation__Play((UnityEngine_Animation_o *)transform, 0LL);
                  LODWORD(v77) = v74[1].monitor;
                  if ( (int)++v78 >= (int)v77 )
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