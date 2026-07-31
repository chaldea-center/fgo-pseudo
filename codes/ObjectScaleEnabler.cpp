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
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_o *i; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  UnityEngine_Transform_c *v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  UnityEngine_Object_o *v23; // x20
  __int64 naturalAligment; // x9
  _BOOL8 v25; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  System_Collections_IEnumerator_o *v29; // x0
  __int64 v30; // x1
  System_Collections_IEnumerator_o *j; // x20
  System_Collections_IEnumerator_c *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  System_Collections_IEnumerator_c *v38; // x8
  __int64 v39; // x9
  System_Collections_IEnumerator_c **v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  UnityEngine_Transform_c *v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  UnityEngine_Object_o *v46; // x20
  __int64 v47; // x9
  _BOOL8 v48; // x0
  __int64 v49; // x1
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x21
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 v60; // x21
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x1
  Il2CppObject *Component_object; // x20
  int monitor; // w8
  Il2CppObject *v67; // x20
  __int64 v68; // x21
  System_Object_array *ComponentsInChildren_object__58647176; // x20
  Il2CppObject *v70; // x21
  il2cpp_array_size_t max_length; // x8
  __int64 v72; // x21
  int v73; // w8
  __int64 v74; // x20
  __int64 v75; // x1
  Il2CppObject *v76; // x20
  int v77; // w8
  Il2CppObject *v78; // x20
  __int64 v79; // x21
  System_Object_array *v80; // x20
  Il2CppObject *v81; // x21
  il2cpp_array_size_t v82; // x8
  __int64 v83; // x21
  int v84; // w8
  __int64 v85; // x20
  System_Collections_IEnumerator_o *v86; // [xsp+28h] [xbp-48h]
  System_Collections_IEnumerator_o *v87; // [xsp+28h] [xbp-48h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937B5A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Transform_TypeInfo);
    byte_5937B5A = 1;
  }
  visibleCheckTarget = (UnityEngine_Object_o *)this->fields.visibleCheckTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  transform = (Il2CppObject *)UnityEngine_Object__op_Implicit(visibleCheckTarget, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !visibleCheckTarget )
      goto LABEL_143;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0);
    if ( localScale.fields.z <= 0.001 && this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !transform )
          goto LABEL_143;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0);
        v86 = Enumerator;
        if ( !Enumerator )
          sub_21FFECC(Enumerator, v7);
        for ( i = Enumerator; ; i = v86 )
        {
          klass = i->klass;
          v10 = *(unsigned __int16 *)&i->klass->_2.rank;
          if ( *(_WORD *)&i->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v10;
              p_offset += 4;
              if ( !v10 )
                goto LABEL_17;
            }
            v12 = (__int64)&klass->vtable[*p_offset];
          }
          else
          {
LABEL_17:
            v12 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v13 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(i, *(_QWORD *)(v12 + 8));
          if ( (v13 & 1) == 0 )
            break;
          if ( !v86 )
            sub_21FFECC(v13, v14);
          v15 = v86->klass;
          v16 = *(unsigned __int16 *)&v86->klass->_2.rank;
          if ( *(_WORD *)&v86->klass->_2.rank )
          {
            v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
            while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v16;
              v17 += 2;
              if ( !v16 )
                goto LABEL_25;
            }
            v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1];
          }
          else
          {
LABEL_25:
            v18 = sub_2237E2C(v86, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v19 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(v86, *(_QWORD *)(v18 + 8));
          v23 = (UnityEngine_Object_o *)v19;
          if ( v19 )
          {
            v20 = UnityEngine_Transform_TypeInfo;
            naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) < (unsigned int)naturalAligment
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * naturalAligment - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_220024C(v19, UnityEngine_Transform_TypeInfo, v21, v22);
LABEL_143:
              sub_21FFECC(transform, v5);
            }
          }
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
          v25 = UnityEngine_Object__op_Equality(v23, (UnityEngine_Object_o *)this, 0);
          if ( !v25 )
          {
            if ( !v23 )
              goto LABEL_147;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0);
            if ( !gameObject )
              sub_21FFECC(0, v28);
            UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          }
        }
        v52 = sub_21FFDA4(v86, System_IDisposable_TypeInfo);
        if ( v52 )
        {
          v53 = *(_QWORD *)v52;
          v54 = v52;
          v55 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
          {
            v56 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
            {
              --v55;
              v56 += 4;
              if ( !v55 )
                goto LABEL_74;
            }
            v57 = v53 + 16LL * *v56 + 312;
          }
          else
          {
LABEL_74:
            v57 = sub_2237E2C(v52, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
        }
        goto LABEL_89;
      }
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
      transform = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_143;
        ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          0,
          0,
          Component_object->klass->vtable[8].method);
        goto LABEL_89;
      }
      transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !transform )
        goto LABEL_143;
      monitor = (int)transform[1].monitor;
      v67 = transform;
      if ( monitor < 1 )
      {
LABEL_96:
        ComponentsInChildren_object__58647176 = UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                                  (UnityEngine_Component_o *)this,
                                                  (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v70 = transform;
        if ( ComponentsInChildren_object__58647176
          && (max_length = ComponentsInChildren_object__58647176->max_length) != 0 )
        {
          if ( (int)max_length >= 1 )
          {
            v72 = 0;
            while ( (unsigned int)v72 < (unsigned int)max_length )
            {
              transform = ComponentsInChildren_object__58647176->m_Items[v72];
              if ( !transform )
                goto LABEL_143;
              SimpleAnimation__Stop((SimpleAnimation_o *)transform, 0);
              LODWORD(max_length) = ComponentsInChildren_object__58647176->max_length;
              if ( (int)++v72 >= (int)max_length )
                goto LABEL_89;
            }
            goto LABEL_145;
          }
        }
        else if ( transform )
        {
          v73 = (int)transform[1].monitor;
          if ( v73 >= 1 )
          {
            v74 = 0;
            while ( (unsigned int)v74 < v73 )
            {
              transform = (Il2CppObject *)*((_QWORD *)&v70[2].klass + v74);
              if ( !transform )
                goto LABEL_143;
              UnityEngine_Animation__Stop((UnityEngine_Animation_o *)transform, 0);
              v73 = (int)v70[1].monitor;
              if ( (int)++v74 >= v73 )
                goto LABEL_89;
            }
            goto LABEL_145;
          }
        }
LABEL_89:
        this->fields.isChildVisible = 0;
        return;
      }
      v68 = 0;
      while ( (unsigned int)v68 < monitor )
      {
        transform = (Il2CppObject *)*((_QWORD *)&v67[2].klass + v68);
        if ( !transform )
          goto LABEL_143;
        UnityEngine_ParticleSystem__Stop_83624140((UnityEngine_ParticleSystem_o *)transform, 0);
        monitor = (int)v67[1].monitor;
        if ( (int)++v68 >= monitor )
          goto LABEL_96;
      }
LABEL_145:
      sub_21FFED4(transform);
    }
    v89 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0);
    if ( v89.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !transform )
          goto LABEL_143;
        v29 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0);
        v87 = v29;
        if ( !v29 )
          sub_21FFECC(v29, v30);
        for ( j = v29; ; j = v87 )
        {
          v32 = j->klass;
          v33 = *(unsigned __int16 *)&j->klass->_2.rank;
          if ( *(_WORD *)&j->klass->_2.rank )
          {
            v34 = &v32->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v33;
              v34 += 4;
              if ( !v33 )
                goto LABEL_48;
            }
            v35 = (__int64)&v32->vtable[*v34];
          }
          else
          {
LABEL_48:
            v35 = sub_2237E2C(j, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v36 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v35)(j, *(_QWORD *)(v35 + 8));
          if ( (v36 & 1) == 0 )
            break;
          if ( !v87 )
            sub_21FFECC(v36, v37);
          v38 = v87->klass;
          v39 = *(unsigned __int16 *)&v87->klass->_2.rank;
          if ( *(_WORD *)&v87->klass->_2.rank )
          {
            v40 = (System_Collections_IEnumerator_c **)&v38->_1.interfaceOffsets->offset;
            while ( *(v40 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v39;
              v40 += 2;
              if ( !v39 )
                goto LABEL_56;
            }
            v41 = (__int64)&v38->vtable[*(_DWORD *)v40 + 1];
          }
          else
          {
LABEL_56:
            v41 = sub_2237E2C(v87, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v42 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v41)(v87, *(_QWORD *)(v41 + 8));
          v46 = (UnityEngine_Object_o *)v42;
          if ( v42 )
          {
            v43 = UnityEngine_Transform_TypeInfo;
            v47 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 304LL) < (unsigned int)v47
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * v47 - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_220024C(v42, UnityEngine_Transform_TypeInfo, v44, v45);
LABEL_147:
              sub_21FFECC(v25, v26);
            }
          }
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
          v48 = UnityEngine_Object__op_Equality(v46, (UnityEngine_Object_o *)this, 0);
          if ( !v48 )
          {
            if ( !v46 )
              sub_21FFECC(v48, v49);
            v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v46, 0);
            if ( !v50 )
              sub_21FFECC(0, v51);
            UnityEngine_GameObject__SetActive(v50, 1, 0);
          }
        }
        v58 = sub_21FFDA4(v87, System_IDisposable_TypeInfo);
        if ( v58 )
        {
          v59 = *(_QWORD *)v58;
          v60 = v58;
          v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
          {
            v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
            {
              --v61;
              v62 += 4;
              if ( !v61 )
                goto LABEL_80;
            }
            v63 = v59 + 16LL * *v62 + 312;
          }
          else
          {
LABEL_80:
            v63 = sub_2237E2C(v58, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
        }
      }
      else
      {
        v76 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75);
        transform = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v76, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v76 )
            goto LABEL_143;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v76, 0);
        }
        else
        {
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !transform )
            goto LABEL_143;
          v77 = (int)transform[1].monitor;
          v78 = transform;
          if ( v77 >= 1 )
          {
            v79 = 0;
            while ( (unsigned int)v79 < v77 )
            {
              transform = (Il2CppObject *)*((_QWORD *)&v78[2].klass + v79);
              if ( !transform )
                goto LABEL_143;
              UnityEngine_ParticleSystem__Play_83623692((UnityEngine_ParticleSystem_o *)transform, 0);
              v77 = (int)v78[1].monitor;
              if ( (int)++v79 >= v77 )
                goto LABEL_127;
            }
            goto LABEL_145;
          }
LABEL_127:
          v80 = UnityEngine_Component__GetComponentsInChildren_object__58647176(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          transform = (Il2CppObject *)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v81 = transform;
          if ( v80 && (v82 = v80->max_length) != 0 )
          {
            if ( (int)v82 >= 1 )
            {
              v83 = 0;
              while ( (unsigned int)v83 < (unsigned int)v82 )
              {
                transform = v80->m_Items[v83];
                if ( !transform )
                  goto LABEL_143;
                transform = (Il2CppObject *)SimpleAnimation__Play((SimpleAnimation_o *)transform, 0);
                LODWORD(v82) = v80->max_length;
                if ( (int)++v83 >= (int)v82 )
                  goto LABEL_119;
              }
              goto LABEL_145;
            }
          }
          else if ( transform )
          {
            v84 = (int)transform[1].monitor;
            if ( v84 >= 1 )
            {
              v85 = 0;
              while ( (unsigned int)v85 < v84 )
              {
                transform = (Il2CppObject *)*((_QWORD *)&v81[2].klass + v85);
                if ( !transform )
                  goto LABEL_143;
                transform = (Il2CppObject *)UnityEngine_Animation__Play((UnityEngine_Animation_o *)transform, 0);
                v84 = (int)v81[1].monitor;
                if ( (int)++v85 >= v84 )
                  goto LABEL_119;
              }
              goto LABEL_145;
            }
          }
        }
      }
LABEL_119:
      this->fields.isChildVisible = 1;
    }
  }
}


void ObjectScaleEnabler__Start(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  this->fields.isChildVisible = 1;
}