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
  __int64 transform; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_IEnumerator_c *v21; // x8
  unsigned __int64 v22; // x10
  System_Collections_IEnumerator_c **v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  UnityEngine_Object_o *v26; // x21
  __int64 v27; // x9
  _BOOL8 v28; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_IEnumerator_o *v34; // x20
  System_Collections_IEnumerator_c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x3
  System_Collections_IEnumerator_c *v40; // x8
  unsigned __int64 v41; // x10
  System_Collections_IEnumerator_c **v42; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  UnityEngine_Object_o *v45; // x21
  __int64 v46; // x9
  __int64 v47; // x0
  __int64 v48; // x1
  UnityEngine_GameObject_o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x0
  __int64 v52; // x3
  __int64 v53; // x8
  __int64 v54; // x20
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x8
  __int64 v61; // x20
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  int v66; // w8
  __int64 v67; // x20
  unsigned int v68; // w21
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x21
  __int64 v70; // x20
  __int64 v71; // x8
  __int64 v72; // x20
  __int64 v73; // x8
  __int64 v74; // x21
  UnityEngine_Object_o *v75; // x20
  int v76; // w8
  __int64 v77; // x20
  unsigned int v78; // w21
  WellFired_USTimelineContainer_array *v79; // x21
  __int64 v80; // x20
  __int64 v81; // x8
  __int64 v82; // x20
  __int64 v83; // x8
  __int64 v84; // x21
  __int64 v85; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185122 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v4);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v9);
    byte_4185122 = 1;
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
          sub_B2C434(0LL, v13);
        while ( 1 )
        {
          klass = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v17 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v17;
              p_offset += 4;
              if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_17;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_17:
            p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v21 = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v22 = 0LL;
            v23 = (System_Collections_IEnumerator_c **)&v21->_1.interfaceOffsets->offset;
            while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v22;
              v23 += 2;
              if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_24;
            }
            v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1].method;
          }
          else
          {
LABEL_24:
            v24 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v20);
          }
          v25 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v24)(
                  Enumerator,
                  *(_QWORD *)(v24 + 8));
          v26 = (UnityEngine_Object_o *)v25;
          if ( v25 )
          {
            v27 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v27
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v27 - 8) != UnityEngine_Transform_TypeInfo )
            {
              transform = sub_B2C728(v25);
LABEL_142:
              sub_B2C434(transform, v12);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v28 = UnityEngine_Object__op_Equality(v26, (UnityEngine_Object_o *)this, 0LL);
          if ( !v28 )
          {
            if ( !v26 )
              sub_B2C434(v28, v29);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0LL);
            if ( !gameObject )
              sub_B2C434(0LL, v31);
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          }
        }
        v51 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
        if ( v51 )
        {
          v53 = *(_QWORD *)v51;
          v54 = v51;
          if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
          {
            v55 = 0LL;
            v56 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
            {
              ++v55;
              v56 += 4;
              if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
                goto LABEL_69;
            }
            v57 = v53 + 16LL * *v56 + 312;
          }
          else
          {
LABEL_69:
            v57 = sub_AC5258(v51, System_IDisposable_TypeInfo, 0LL, v52);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
        }
        goto LABEL_85;
      }
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
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
                             (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !transform )
        goto LABEL_142;
      v66 = *(_DWORD *)(transform + 24);
      v67 = transform;
      if ( v66 < 1 )
      {
LABEL_92:
        ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v70 = transform;
        if ( ComponentsInChildren_USTimelineContainer
          && (v71 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
        {
          if ( (int)v71 >= 1 )
          {
            v72 = 0LL;
            while ( (unsigned int)v72 < (unsigned int)v71 )
            {
              transform = (__int64)ComponentsInChildren_USTimelineContainer->m_Items[v72];
              if ( !transform )
                goto LABEL_142;
              SimpleAnimation__Stop((SimpleAnimation_o *)transform, 0LL);
              LODWORD(v71) = ComponentsInChildren_USTimelineContainer->max_length;
              if ( (int)++v72 >= (int)v71 )
                goto LABEL_85;
            }
            goto LABEL_143;
          }
        }
        else if ( transform )
        {
          v73 = *(_QWORD *)(transform + 24);
          if ( v73 )
          {
            if ( (int)v73 >= 1 )
            {
              v74 = 0LL;
              while ( (unsigned int)v74 < (unsigned int)v73 )
              {
                transform = *(_QWORD *)(v70 + 32 + 8 * v74);
                if ( !transform )
                  goto LABEL_142;
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)transform, 0LL);
                LODWORD(v73) = *(_DWORD *)(v70 + 24);
                if ( (int)++v74 >= (int)v73 )
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
      v68 = 0;
      while ( v68 < v66 )
      {
        transform = *(_QWORD *)(v67 + 8LL * (int)v68 + 32);
        if ( !transform )
          goto LABEL_142;
        UnityEngine_ParticleSystem__Stop_50259500((UnityEngine_ParticleSystem_o *)transform, 0LL);
        v66 = *(_DWORD *)(v67 + 24);
        if ( (int)++v68 >= v66 )
          goto LABEL_92;
      }
LABEL_143:
      v85 = sub_B2C460(transform);
      sub_B2C400(v85, 0LL);
    }
    v87 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0LL);
    if ( v87.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_142;
        v34 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
        if ( !v34 )
          sub_B2C434(0LL, v32);
        while ( 1 )
        {
          v35 = v34->klass;
          if ( *(_WORD *)&v34->klass->_2.bitflags1 )
          {
            v36 = 0LL;
            v37 = &v35->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v36;
              v37 += 4;
              if ( v36 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
                goto LABEL_45;
            }
            v38 = (__int64)&v35->vtable[*v37].method;
          }
          else
          {
LABEL_45:
            v38 = sub_AC5258(v34, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
            break;
          v40 = v34->klass;
          if ( *(_WORD *)&v34->klass->_2.bitflags1 )
          {
            v41 = 0LL;
            v42 = (System_Collections_IEnumerator_c **)&v40->_1.interfaceOffsets->offset;
            while ( *(v42 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v41;
              v42 += 2;
              if ( v41 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
                goto LABEL_52;
            }
            v43 = (__int64)&v40->vtable[*(_DWORD *)v42 + 1].method;
          }
          else
          {
LABEL_52:
            v43 = sub_AC5258(v34, System_Collections_IEnumerator_TypeInfo, 1LL, v39);
          }
          v44 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v43)(v34, *(_QWORD *)(v43 + 8));
          v45 = (UnityEngine_Object_o *)v44;
          if ( v44 )
          {
            v46 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 300LL) < (unsigned int)v46
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v46 - 8) != UnityEngine_Transform_TypeInfo )
            {
              v47 = sub_B2C728(v44);
LABEL_147:
              sub_B2C434(v47, v48);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v47 = UnityEngine_Object__op_Equality(v45, (UnityEngine_Object_o *)this, 0LL);
          if ( (v47 & 1) == 0 )
          {
            if ( !v45 )
              goto LABEL_147;
            v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v45, 0LL);
            if ( !v49 )
              sub_B2C434(0LL, v50);
            UnityEngine_GameObject__SetActive(v49, 1, 0LL);
          }
        }
        v58 = sub_B2C41C(v34, System_IDisposable_TypeInfo);
        if ( v58 )
        {
          v60 = *(_QWORD *)v58;
          v61 = v58;
          if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
          {
            v62 = 0LL;
            v63 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
            {
              ++v62;
              v63 += 4;
              if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
                goto LABEL_75;
            }
            v64 = v60 + 16LL * *v63 + 312;
          }
          else
          {
LABEL_75:
            v64 = sub_AC5258(v58, System_IDisposable_TypeInfo, 0LL, v59);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v64)(v61, *(_QWORD *)(v64 + 8));
        }
      }
      else
      {
        v75 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v75, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          if ( !v75 )
            goto LABEL_142;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v75, 0LL);
        }
        else
        {
          transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !transform )
            goto LABEL_142;
          v76 = *(_DWORD *)(transform + 24);
          v77 = transform;
          if ( v76 >= 1 )
          {
            v78 = 0;
            while ( v78 < v76 )
            {
              transform = *(_QWORD *)(v77 + 8LL * (int)v78 + 32);
              if ( !transform )
                goto LABEL_142;
              UnityEngine_ParticleSystem__Play_50259112((UnityEngine_ParticleSystem_o *)transform, 0LL);
              v76 = *(_DWORD *)(v77 + 24);
              if ( (int)++v78 >= v76 )
                goto LABEL_125;
            }
            goto LABEL_143;
          }
LABEL_125:
          v79 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v80 = transform;
          if ( v79 && (v81 = *(_QWORD *)&v79->max_length) != 0 )
          {
            if ( (int)v81 >= 1 )
            {
              v82 = 0LL;
              while ( (unsigned int)v82 < (unsigned int)v81 )
              {
                transform = (__int64)v79->m_Items[v82];
                if ( !transform )
                  goto LABEL_142;
                transform = SimpleAnimation__Play((SimpleAnimation_o *)transform, 0LL);
                LODWORD(v81) = v79->max_length;
                if ( (int)++v82 >= (int)v81 )
                  goto LABEL_117;
              }
              goto LABEL_143;
            }
          }
          else if ( transform )
          {
            v83 = *(_QWORD *)(transform + 24);
            if ( v83 )
            {
              if ( (int)v83 >= 1 )
              {
                v84 = 0LL;
                while ( (unsigned int)v84 < (unsigned int)v83 )
                {
                  transform = *(_QWORD *)(v80 + 32 + 8 * v84);
                  if ( !transform )
                    goto LABEL_142;
                  transform = UnityEngine_Animation__Play((UnityEngine_Animation_o *)transform, 0LL);
                  LODWORD(v83) = *(_DWORD *)(v80 + 24);
                  if ( (int)++v84 >= (int)v83 )
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