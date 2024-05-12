void __fastcall ObjectScaleEnabler___ctor(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.suddenDeath = 257;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ObjectScaleEnabler__OnUpdate(ObjectScaleEnabler_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *visibleCheckTarget; // x20
  __int64 transform; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  UnityEngine_Object_o *v17; // x21
  __int64 v18; // x9
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_IEnumerator_o *v24; // x20
  System_Collections_IEnumerator_c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  System_Collections_IEnumerator_c *v29; // x8
  unsigned __int64 v30; // x10
  System_Collections_IEnumerator_c **v31; // x11
  __int64 v32; // x0
  __int64 v33; // x0
  UnityEngine_Object_o *v34; // x21
  __int64 v35; // x9
  __int64 v36; // x0
  __int64 v37; // x1
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x20
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x20
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  int v53; // w8
  __int64 v54; // x20
  unsigned int v55; // w21
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x21
  __int64 v57; // x20
  __int64 v58; // x8
  __int64 v59; // x20
  __int64 v60; // x8
  __int64 v61; // x21
  UnityEngine_Object_o *v62; // x20
  int v63; // w8
  __int64 v64; // x20
  unsigned int v65; // w21
  WellFired_USTimelineContainer_array *v66; // x21
  __int64 v67; // x20
  __int64 v68; // x8
  __int64 v69; // x20
  __int64 v70; // x8
  __int64 v71; // x21
  __int64 v72; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438A24D & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_Transform_TypeInfo);
    byte_438A24D = 1;
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
          sub_B7769C(0LL, v6);
        while ( 1 )
        {
          klass = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v9 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v9;
              p_offset += 4;
              if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_17;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_17:
            p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v12 = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v13 = 0LL;
            v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
            while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v13;
              v14 += 2;
              if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_24;
            }
            v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
          }
          else
          {
LABEL_24:
            v15 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v16 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                  Enumerator,
                  *(_QWORD *)(v15 + 8));
          v17 = (UnityEngine_Object_o *)v16;
          if ( v16 )
          {
            v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v18
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v18 - 8) != UnityEngine_Transform_TypeInfo )
            {
              transform = sub_B77990(v16);
LABEL_142:
              sub_B7769C(transform, v5);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v19 = UnityEngine_Object__op_Equality(v17, (UnityEngine_Object_o *)this, 0LL);
          if ( !v19 )
          {
            if ( !v17 )
              sub_B7769C(v19, v20);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
            if ( !gameObject )
              sub_B7769C(0LL, v22);
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          }
        }
        v40 = sub_B77684(Enumerator, System_IDisposable_TypeInfo);
        if ( v40 )
        {
          v41 = *(_QWORD *)v40;
          v42 = v40;
          if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
          {
            v43 = 0LL;
            v44 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
            {
              ++v43;
              v44 += 4;
              if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
                goto LABEL_69;
            }
            v45 = v41 + 16LL * *v44 + 312;
          }
          else
          {
LABEL_69:
            v45 = sub_B0F4C0(v40, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
        }
        goto LABEL_85;
      }
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
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
                             (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !transform )
        goto LABEL_142;
      v53 = *(_DWORD *)(transform + 24);
      v54 = transform;
      if ( v53 < 1 )
      {
LABEL_92:
        ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v57 = transform;
        if ( ComponentsInChildren_USTimelineContainer
          && (v58 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
        {
          if ( (int)v58 >= 1 )
          {
            v59 = 0LL;
            while ( (unsigned int)v59 < (unsigned int)v58 )
            {
              transform = (__int64)ComponentsInChildren_USTimelineContainer->m_Items[v59];
              if ( !transform )
                goto LABEL_142;
              SimpleAnimation__Stop((SimpleAnimation_o *)transform, 0LL);
              LODWORD(v58) = ComponentsInChildren_USTimelineContainer->max_length;
              if ( (int)++v59 >= (int)v58 )
                goto LABEL_85;
            }
            goto LABEL_143;
          }
        }
        else if ( transform )
        {
          v60 = *(_QWORD *)(transform + 24);
          if ( v60 )
          {
            if ( (int)v60 >= 1 )
            {
              v61 = 0LL;
              while ( (unsigned int)v61 < (unsigned int)v60 )
              {
                transform = *(_QWORD *)(v57 + 32 + 8 * v61);
                if ( !transform )
                  goto LABEL_142;
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)transform, 0LL);
                LODWORD(v60) = *(_DWORD *)(v57 + 24);
                if ( (int)++v61 >= (int)v60 )
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
      v55 = 0;
      while ( v55 < v53 )
      {
        transform = *(_QWORD *)(v54 + 8LL * (int)v55 + 32);
        if ( !transform )
          goto LABEL_142;
        UnityEngine_ParticleSystem__Stop_51807992((UnityEngine_ParticleSystem_o *)transform, 0LL);
        v53 = *(_DWORD *)(v54 + 24);
        if ( (int)++v55 >= v53 )
          goto LABEL_92;
      }
LABEL_143:
      v72 = sub_B776C8(transform);
      sub_B77668(v72, 0LL);
    }
    v74 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0LL);
    if ( v74.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_142;
        v24 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
        if ( !v24 )
          sub_B7769C(0LL, v23);
        while ( 1 )
        {
          v25 = v24->klass;
          if ( *(_WORD *)&v24->klass->_2.bitflags1 )
          {
            v26 = 0LL;
            v27 = &v25->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
                goto LABEL_45;
            }
            v28 = (__int64)&v25->vtable[*v27].method;
          }
          else
          {
LABEL_45:
            v28 = sub_B0F4C0(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
            break;
          v29 = v24->klass;
          if ( *(_WORD *)&v24->klass->_2.bitflags1 )
          {
            v30 = 0LL;
            v31 = (System_Collections_IEnumerator_c **)&v29->_1.interfaceOffsets->offset;
            while ( *(v31 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v30;
              v31 += 2;
              if ( v30 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
                goto LABEL_52;
            }
            v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 1].method;
          }
          else
          {
LABEL_52:
            v32 = sub_B0F4C0(v24, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v33 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
          v34 = (UnityEngine_Object_o *)v33;
          if ( v33 )
          {
            v35 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 300LL) < (unsigned int)v35
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * v35 - 8) != UnityEngine_Transform_TypeInfo )
            {
              v36 = sub_B77990(v33);
LABEL_147:
              sub_B7769C(v36, v37);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v36 = UnityEngine_Object__op_Equality(v34, (UnityEngine_Object_o *)this, 0LL);
          if ( (v36 & 1) == 0 )
          {
            if ( !v34 )
              goto LABEL_147;
            v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
            if ( !v38 )
              sub_B7769C(0LL, v39);
            UnityEngine_GameObject__SetActive(v38, 1, 0LL);
          }
        }
        v46 = sub_B77684(v24, System_IDisposable_TypeInfo);
        if ( v46 )
        {
          v47 = *(_QWORD *)v46;
          v48 = v46;
          if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
          {
            v49 = 0LL;
            v50 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
            {
              ++v49;
              v50 += 4;
              if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
                goto LABEL_75;
            }
            v51 = v47 + 16LL * *v50 + 312;
          }
          else
          {
LABEL_75:
            v51 = sub_B0F4C0(v46, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v51)(v48, *(_QWORD *)(v51 + 8));
        }
      }
      else
      {
        v62 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          if ( !v62 )
            goto LABEL_142;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v62, 0LL);
        }
        else
        {
          transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !transform )
            goto LABEL_142;
          v63 = *(_DWORD *)(transform + 24);
          v64 = transform;
          if ( v63 >= 1 )
          {
            v65 = 0;
            while ( v65 < v63 )
            {
              transform = *(_QWORD *)(v64 + 8LL * (int)v65 + 32);
              if ( !transform )
                goto LABEL_142;
              UnityEngine_ParticleSystem__Play_51807604((UnityEngine_ParticleSystem_o *)transform, 0LL);
              v63 = *(_DWORD *)(v64 + 24);
              if ( (int)++v65 >= v63 )
                goto LABEL_125;
            }
            goto LABEL_143;
          }
LABEL_125:
          v66 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v67 = transform;
          if ( v66 && (v68 = *(_QWORD *)&v66->max_length) != 0 )
          {
            if ( (int)v68 >= 1 )
            {
              v69 = 0LL;
              while ( (unsigned int)v69 < (unsigned int)v68 )
              {
                transform = (__int64)v66->m_Items[v69];
                if ( !transform )
                  goto LABEL_142;
                transform = SimpleAnimation__Play((SimpleAnimation_o *)transform, 0LL);
                LODWORD(v68) = v66->max_length;
                if ( (int)++v69 >= (int)v68 )
                  goto LABEL_117;
              }
              goto LABEL_143;
            }
          }
          else if ( transform )
          {
            v70 = *(_QWORD *)(transform + 24);
            if ( v70 )
            {
              if ( (int)v70 >= 1 )
              {
                v71 = 0LL;
                while ( (unsigned int)v71 < (unsigned int)v70 )
                {
                  transform = *(_QWORD *)(v67 + 32 + 8 * v71);
                  if ( !transform )
                    goto LABEL_142;
                  transform = UnityEngine_Animation__Play((UnityEngine_Animation_o *)transform, 0LL);
                  LODWORD(v70) = *(_DWORD *)(v67 + 24);
                  if ( (int)++v71 >= (int)v70 )
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