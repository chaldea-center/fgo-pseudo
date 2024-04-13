void __fastcall ObjectScaleEnabler___ctor(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.suddenDeath = 257;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ObjectScaleEnabler__OnUpdate(ObjectScaleEnabler_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UnityEngine_Object_o *visibleCheckTarget; // x20
  __int64 transform; // x0
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x3
  System_Collections_IEnumerator_c *v37; // x8
  unsigned __int64 v38; // x10
  System_Collections_IEnumerator_c **v39; // x11
  __int64 v40; // x0
  __int64 v41; // x0
  UnityEngine_Object_o *v42; // x21
  __int64 v43; // x9
  _BOOL8 v44; // x0
  __int64 v45; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x3
  System_Collections_IEnumerator_o *v50; // x20
  System_Collections_IEnumerator_c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x3
  System_Collections_IEnumerator_c *v56; // x8
  unsigned __int64 v57; // x10
  System_Collections_IEnumerator_c **v58; // x11
  __int64 v59; // x0
  __int64 v60; // x0
  UnityEngine_Object_o *v61; // x21
  __int64 v62; // x9
  __int64 v63; // x0
  __int64 v64; // x1
  UnityEngine_GameObject_o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x0
  __int64 v68; // x3
  __int64 v69; // x8
  __int64 v70; // x20
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x3
  __int64 v76; // x8
  __int64 v77; // x20
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  int v82; // w8
  __int64 v83; // x20
  unsigned int v84; // w21
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x21
  __int64 v86; // x20
  __int64 v87; // x8
  __int64 v88; // x20
  __int64 v89; // x8
  __int64 v90; // x21
  UnityEngine_Object_o *v91; // x20
  int v92; // w8
  __int64 v93; // x20
  unsigned int v94; // w21
  WellFired_USTimelineContainer_array *v95; // x21
  __int64 v96; // x20
  __int64 v97; // x8
  __int64 v98; // x20
  __int64 v99; // x8
  __int64 v100; // x21
  __int64 v101; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E62A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v11, v12, v13);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v23, v24, v25);
    byte_42E62A9 = 1;
  }
  visibleCheckTarget = (UnityEngine_Object_o *)this->fields.visibleCheckTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Implicit(visibleCheckTarget, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !visibleCheckTarget )
      goto LABEL_142;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0LL);
    if ( localScale.fields.z <= 0.001 && this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_142;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
        if ( !Enumerator )
          sub_B5D69C(0LL, v29);
        while ( 1 )
        {
          klass = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v33 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v33;
              p_offset += 4;
              if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_17;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_17:
            p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v30);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v37 = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v38 = 0LL;
            v39 = (System_Collections_IEnumerator_c **)&v37->_1.interfaceOffsets->offset;
            while ( *(v39 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v38;
              v39 += 2;
              if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_24;
            }
            v40 = (__int64)&v37->vtable[*(_DWORD *)v39 + 1].method;
          }
          else
          {
LABEL_24:
            v40 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v36);
          }
          v41 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v40)(
                  Enumerator,
                  *(_QWORD *)(v40 + 8));
          v42 = (UnityEngine_Object_o *)v41;
          if ( v41 )
          {
            v43 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 300LL) < (unsigned int)v43
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * v43 - 8) != UnityEngine_Transform_TypeInfo )
            {
              transform = sub_B5D990(v41);
LABEL_142:
              sub_B5D69C(transform, v28);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v44 = UnityEngine_Object__op_Equality(v42, (UnityEngine_Object_o *)this, 0LL);
          if ( !v44 )
          {
            if ( !v42 )
              sub_B5D69C(v44, v45);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0LL);
            if ( !gameObject )
              sub_B5D69C(0LL, v47);
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          }
        }
        v67 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
        if ( v67 )
        {
          v69 = *(_QWORD *)v67;
          v70 = v67;
          if ( *(_WORD *)(*(_QWORD *)v67 + 298LL) )
          {
            v71 = 0LL;
            v72 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
            {
              ++v71;
              v72 += 4;
              if ( v71 >= *(unsigned __int16 *)(*(_QWORD *)v67 + 298LL) )
                goto LABEL_69;
            }
            v73 = v69 + 16LL * *v72 + 312;
          }
          else
          {
LABEL_69:
            v73 = sub_AF54C0(v67, System_IDisposable_TypeInfo, 0LL, v68);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
        }
        goto LABEL_85;
      }
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !Component_WebViewObject )
          goto LABEL_142;
        ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, _QWORD, Il2CppClass *))Component_WebViewObject->klass[1]._1.castClass)(
          Component_WebViewObject,
          0LL,
          0LL,
          Component_WebViewObject->klass[1]._1.declaringType);
        goto LABEL_85;
      }
      transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                             (UnityEngine_Component_o *)this,
                             (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !transform )
        goto LABEL_142;
      v82 = *(_DWORD *)(transform + 24);
      v83 = transform;
      if ( v82 < 1 )
      {
LABEL_92:
        ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v86 = transform;
        if ( ComponentsInChildren_USTimelineContainer
          && (v87 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
        {
          if ( (int)v87 >= 1 )
          {
            v88 = 0LL;
            while ( (unsigned int)v88 < (unsigned int)v87 )
            {
              transform = (__int64)ComponentsInChildren_USTimelineContainer->m_Items[v88];
              if ( !transform )
                goto LABEL_142;
              SimpleAnimation__Stop((SimpleAnimation_o *)transform, 0LL);
              LODWORD(v87) = ComponentsInChildren_USTimelineContainer->max_length;
              if ( (int)++v88 >= (int)v87 )
                goto LABEL_85;
            }
            goto LABEL_143;
          }
        }
        else if ( transform )
        {
          v89 = *(_QWORD *)(transform + 24);
          if ( v89 )
          {
            if ( (int)v89 >= 1 )
            {
              v90 = 0LL;
              while ( (unsigned int)v90 < (unsigned int)v89 )
              {
                transform = *(_QWORD *)(v86 + 32 + 8 * v90);
                if ( !transform )
                  goto LABEL_142;
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)transform, 0LL);
                LODWORD(v89) = *(_DWORD *)(v86 + 24);
                if ( (int)++v90 >= (int)v89 )
                  goto LABEL_85;
              }
              goto LABEL_143;
            }
          }
        }
LABEL_85:
        this->fields.isChildVisible = 0;
        return;
      }
      v84 = 0;
      while ( v84 < v82 )
      {
        transform = *(_QWORD *)(v83 + 8LL * (int)v84 + 32);
        if ( !transform )
          goto LABEL_142;
        UnityEngine_ParticleSystem__Stop_51307044((UnityEngine_ParticleSystem_o *)transform, 0LL);
        v82 = *(_DWORD *)(v83 + 24);
        if ( (int)++v84 >= v82 )
          goto LABEL_92;
      }
LABEL_143:
      v101 = sub_B5D6C8(transform);
      sub_B5D668(v101, 0LL);
    }
    v103 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0LL);
    if ( v103.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_142;
        v50 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
        if ( !v50 )
          sub_B5D69C(0LL, v48);
        while ( 1 )
        {
          v51 = v50->klass;
          if ( *(_WORD *)&v50->klass->_2.bitflags1 )
          {
            v52 = 0LL;
            v53 = &v51->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v52;
              v53 += 4;
              if ( v52 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
                goto LABEL_45;
            }
            v54 = (__int64)&v51->vtable[*v53].method;
          }
          else
          {
LABEL_45:
            v54 = sub_AF54C0(v50, System_Collections_IEnumerator_TypeInfo, 0LL, v49);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
            break;
          v56 = v50->klass;
          if ( *(_WORD *)&v50->klass->_2.bitflags1 )
          {
            v57 = 0LL;
            v58 = (System_Collections_IEnumerator_c **)&v56->_1.interfaceOffsets->offset;
            while ( *(v58 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v57;
              v58 += 2;
              if ( v57 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
                goto LABEL_52;
            }
            v59 = (__int64)&v56->vtable[*(_DWORD *)v58 + 1].method;
          }
          else
          {
LABEL_52:
            v59 = sub_AF54C0(v50, System_Collections_IEnumerator_TypeInfo, 1LL, v55);
          }
          v60 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v59)(v50, *(_QWORD *)(v59 + 8));
          v61 = (UnityEngine_Object_o *)v60;
          if ( v60 )
          {
            v62 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v60 + 300LL) < (unsigned int)v62
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v60 + 200LL) + 8 * v62 - 8) != UnityEngine_Transform_TypeInfo )
            {
              v63 = sub_B5D990(v60);
LABEL_147:
              sub_B5D69C(v63, v64);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v63 = UnityEngine_Object__op_Equality(v61, (UnityEngine_Object_o *)this, 0LL);
          if ( (v63 & 1) == 0 )
          {
            if ( !v61 )
              goto LABEL_147;
            v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v61, 0LL);
            if ( !v65 )
              sub_B5D69C(0LL, v66);
            UnityEngine_GameObject__SetActive(v65, 1, 0LL);
          }
        }
        v74 = sub_B5D684(v50, System_IDisposable_TypeInfo);
        if ( v74 )
        {
          v76 = *(_QWORD *)v74;
          v77 = v74;
          if ( *(_WORD *)(*(_QWORD *)v74 + 298LL) )
          {
            v78 = 0LL;
            v79 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
            {
              ++v78;
              v79 += 4;
              if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v74 + 298LL) )
                goto LABEL_75;
            }
            v80 = v76 + 16LL * *v79 + 312;
          }
          else
          {
LABEL_75:
            v80 = sub_AF54C0(v74, System_IDisposable_TypeInfo, 0LL, v75);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v80)(v77, *(_QWORD *)(v80 + 8));
        }
      }
      else
      {
        v91 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v91, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          if ( !v91 )
            goto LABEL_142;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v91, 0LL);
        }
        else
        {
          transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !transform )
            goto LABEL_142;
          v92 = *(_DWORD *)(transform + 24);
          v93 = transform;
          if ( v92 >= 1 )
          {
            v94 = 0;
            while ( v94 < v92 )
            {
              transform = *(_QWORD *)(v93 + 8LL * (int)v94 + 32);
              if ( !transform )
                goto LABEL_142;
              UnityEngine_ParticleSystem__Play_51306656((UnityEngine_ParticleSystem_o *)transform, 0LL);
              v92 = *(_DWORD *)(v93 + 24);
              if ( (int)++v94 >= v92 )
                goto LABEL_125;
            }
            goto LABEL_143;
          }
LABEL_125:
          v95 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v96 = transform;
          if ( v95 && (v97 = *(_QWORD *)&v95->max_length) != 0 )
          {
            if ( (int)v97 >= 1 )
            {
              v98 = 0LL;
              while ( (unsigned int)v98 < (unsigned int)v97 )
              {
                transform = (__int64)v95->m_Items[v98];
                if ( !transform )
                  goto LABEL_142;
                transform = SimpleAnimation__Play((SimpleAnimation_o *)transform, 0LL);
                LODWORD(v97) = v95->max_length;
                if ( (int)++v98 >= (int)v97 )
                  goto LABEL_117;
              }
              goto LABEL_143;
            }
          }
          else if ( transform )
          {
            v99 = *(_QWORD *)(transform + 24);
            if ( v99 )
            {
              if ( (int)v99 >= 1 )
              {
                v100 = 0LL;
                while ( (unsigned int)v100 < (unsigned int)v99 )
                {
                  transform = *(_QWORD *)(v96 + 32 + 8 * v100);
                  if ( !transform )
                    goto LABEL_142;
                  transform = UnityEngine_Animation__Play((UnityEngine_Animation_o *)transform, 0LL);
                  LODWORD(v99) = *(_DWORD *)(v96 + 24);
                  if ( (int)++v100 >= (int)v99 )
                    goto LABEL_117;
                }
                goto LABEL_143;
              }
            }
          }
        }
      }
LABEL_117:
      this->fields.isChildVisible = 1;
    }
  }
}


void __fastcall ObjectScaleEnabler__Start(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  this->fields.isChildVisible = 1;
}