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
  __int64 v7; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x3
  System_Collections_IEnumerator_c *v14; // x8
  unsigned __int64 v15; // x10
  System_Collections_IEnumerator_c **v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  UnityEngine_Object_o *v19; // x21
  __int64 v20; // x9
  _BOOL8 v21; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x3
  System_Collections_IEnumerator_o *v27; // x20
  System_Collections_IEnumerator_c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x3
  System_Collections_IEnumerator_c *v33; // x8
  unsigned __int64 v34; // x10
  System_Collections_IEnumerator_c **v35; // x11
  __int64 v36; // x0
  __int64 v37; // x0
  UnityEngine_Object_o *v38; // x21
  __int64 v39; // x9
  __int64 v40; // x0
  __int64 v41; // x1
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x0
  __int64 v45; // x3
  __int64 v46; // x8
  __int64 v47; // x20
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x3
  __int64 v53; // x8
  __int64 v54; // x20
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  int v59; // w8
  __int64 v60; // x20
  unsigned int v61; // w21
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x21
  __int64 v63; // x20
  __int64 v64; // x8
  __int64 v65; // x20
  __int64 v66; // x8
  __int64 v67; // x21
  UnityEngine_Object_o *v68; // x20
  int v69; // w8
  __int64 v70; // x20
  unsigned int v71; // w21
  WellFired_USTimelineContainer_array *v72; // x21
  __int64 v73; // x20
  __int64 v74; // x8
  __int64 v75; // x20
  __int64 v76; // x8
  __int64 v77; // x21
  __int64 v78; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADB12 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    byte_42ADB12 = 1;
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
          sub_B52A5C(0LL, v6);
        while ( 1 )
        {
          klass = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v10 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v10;
              p_offset += 4;
              if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_17;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_17:
            p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v14 = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v15 = 0LL;
            v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
            while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v15;
              v16 += 2;
              if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_24;
            }
            v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
          }
          else
          {
LABEL_24:
            v17 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v13);
          }
          v18 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                  Enumerator,
                  *(_QWORD *)(v17 + 8));
          v19 = (UnityEngine_Object_o *)v18;
          if ( v18 )
          {
            v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v20
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v20 - 8) != UnityEngine_Transform_TypeInfo )
            {
              transform = sub_B52D50(v18);
LABEL_142:
              sub_B52A5C(transform, v5);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v21 = UnityEngine_Object__op_Equality(v19, (UnityEngine_Object_o *)this, 0LL);
          if ( !v21 )
          {
            if ( !v19 )
              sub_B52A5C(v21, v22);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
            if ( !gameObject )
              sub_B52A5C(0LL, v24);
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          }
        }
        v44 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
        if ( v44 )
        {
          v46 = *(_QWORD *)v44;
          v47 = v44;
          if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
          {
            v48 = 0LL;
            v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
            {
              ++v48;
              v49 += 4;
              if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
                goto LABEL_69;
            }
            v50 = v46 + 16LL * *v49 + 312;
          }
          else
          {
LABEL_69:
            v50 = sub_AEB880(v44, System_IDisposable_TypeInfo, 0LL, v45);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
        }
        goto LABEL_85;
      }
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
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
                             (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !transform )
        goto LABEL_142;
      v59 = *(_DWORD *)(transform + 24);
      v60 = transform;
      if ( v59 < 1 )
      {
LABEL_92:
        ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v63 = transform;
        if ( ComponentsInChildren_USTimelineContainer
          && (v64 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
        {
          if ( (int)v64 >= 1 )
          {
            v65 = 0LL;
            while ( (unsigned int)v65 < (unsigned int)v64 )
            {
              transform = (__int64)ComponentsInChildren_USTimelineContainer->m_Items[v65];
              if ( !transform )
                goto LABEL_142;
              SimpleAnimation__Stop((SimpleAnimation_o *)transform, 0LL);
              LODWORD(v64) = ComponentsInChildren_USTimelineContainer->max_length;
              if ( (int)++v65 >= (int)v64 )
                goto LABEL_85;
            }
            goto LABEL_143;
          }
        }
        else if ( transform )
        {
          v66 = *(_QWORD *)(transform + 24);
          if ( v66 )
          {
            if ( (int)v66 >= 1 )
            {
              v67 = 0LL;
              while ( (unsigned int)v67 < (unsigned int)v66 )
              {
                transform = *(_QWORD *)(v63 + 32 + 8 * v67);
                if ( !transform )
                  goto LABEL_142;
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)transform, 0LL);
                LODWORD(v66) = *(_DWORD *)(v63 + 24);
                if ( (int)++v67 >= (int)v66 )
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
      v61 = 0;
      while ( v61 < v59 )
      {
        transform = *(_QWORD *)(v60 + 8LL * (int)v61 + 32);
        if ( !transform )
          goto LABEL_142;
        UnityEngine_ParticleSystem__Stop_51150288((UnityEngine_ParticleSystem_o *)transform, 0LL);
        v59 = *(_DWORD *)(v60 + 24);
        if ( (int)++v61 >= v59 )
          goto LABEL_92;
      }
LABEL_143:
      v78 = sub_B52A88(transform);
      sub_B52A28(v78, 0LL);
    }
    v80 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)visibleCheckTarget, 0LL);
    if ( v80.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_142;
        v27 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)transform, 0LL);
        if ( !v27 )
          sub_B52A5C(0LL, v25);
        while ( 1 )
        {
          v28 = v27->klass;
          if ( *(_WORD *)&v27->klass->_2.bitflags1 )
          {
            v29 = 0LL;
            v30 = &v28->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
                goto LABEL_45;
            }
            v31 = (__int64)&v28->vtable[*v30].method;
          }
          else
          {
LABEL_45:
            v31 = sub_AEB880(v27, System_Collections_IEnumerator_TypeInfo, 0LL, v26);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
            break;
          v33 = v27->klass;
          if ( *(_WORD *)&v27->klass->_2.bitflags1 )
          {
            v34 = 0LL;
            v35 = (System_Collections_IEnumerator_c **)&v33->_1.interfaceOffsets->offset;
            while ( *(v35 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v34;
              v35 += 2;
              if ( v34 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
                goto LABEL_52;
            }
            v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 1].method;
          }
          else
          {
LABEL_52:
            v36 = sub_AEB880(v27, System_Collections_IEnumerator_TypeInfo, 1LL, v32);
          }
          v37 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v36)(v27, *(_QWORD *)(v36 + 8));
          v38 = (UnityEngine_Object_o *)v37;
          if ( v37 )
          {
            v39 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) < (unsigned int)v39
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v39 - 8) != UnityEngine_Transform_TypeInfo )
            {
              v40 = sub_B52D50(v37);
LABEL_147:
              sub_B52A5C(v40, v41);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v40 = UnityEngine_Object__op_Equality(v38, (UnityEngine_Object_o *)this, 0LL);
          if ( (v40 & 1) == 0 )
          {
            if ( !v38 )
              goto LABEL_147;
            v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v38, 0LL);
            if ( !v42 )
              sub_B52A5C(0LL, v43);
            UnityEngine_GameObject__SetActive(v42, 1, 0LL);
          }
        }
        v51 = sub_B52A44(v27, System_IDisposable_TypeInfo);
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
                goto LABEL_75;
            }
            v57 = v53 + 16LL * *v56 + 312;
          }
          else
          {
LABEL_75:
            v57 = sub_AEB880(v51, System_IDisposable_TypeInfo, 0LL, v52);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
        }
      }
      else
      {
        v68 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                        (UnityEngine_Component_o *)this,
                                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v68, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          if ( !v68 )
            goto LABEL_142;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v68, 0LL);
        }
        else
        {
          transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !transform )
            goto LABEL_142;
          v69 = *(_DWORD *)(transform + 24);
          v70 = transform;
          if ( v69 >= 1 )
          {
            v71 = 0;
            while ( v71 < v69 )
            {
              transform = *(_QWORD *)(v70 + 8LL * (int)v71 + 32);
              if ( !transform )
                goto LABEL_142;
              UnityEngine_ParticleSystem__Play_51149900((UnityEngine_ParticleSystem_o *)transform, 0LL);
              v69 = *(_DWORD *)(v70 + 24);
              if ( (int)++v71 >= v69 )
                goto LABEL_125;
            }
            goto LABEL_143;
          }
LABEL_125:
          v72 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          transform = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v73 = transform;
          if ( v72 && (v74 = *(_QWORD *)&v72->max_length) != 0 )
          {
            if ( (int)v74 >= 1 )
            {
              v75 = 0LL;
              while ( (unsigned int)v75 < (unsigned int)v74 )
              {
                transform = (__int64)v72->m_Items[v75];
                if ( !transform )
                  goto LABEL_142;
                transform = SimpleAnimation__Play((SimpleAnimation_o *)transform, 0LL);
                LODWORD(v74) = v72->max_length;
                if ( (int)++v75 >= (int)v74 )
                  goto LABEL_117;
              }
              goto LABEL_143;
            }
          }
          else if ( transform )
          {
            v76 = *(_QWORD *)(transform + 24);
            if ( v76 )
            {
              if ( (int)v76 >= 1 )
              {
                v77 = 0LL;
                while ( (unsigned int)v77 < (unsigned int)v76 )
                {
                  transform = *(_QWORD *)(v73 + 32 + 8 * v77);
                  if ( !transform )
                    goto LABEL_142;
                  transform = UnityEngine_Animation__Play((UnityEngine_Animation_o *)transform, 0LL);
                  LODWORD(v76) = *(_DWORD *)(v73 + 24);
                  if ( (int)++v77 >= (int)v76 )
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