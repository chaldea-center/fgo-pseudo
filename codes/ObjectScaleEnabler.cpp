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
  UnityEngine_Transform_o *visibleCheckTarget; // x20
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  unsigned __int64 v18; // x10
  System_Collections_IEnumerator_c **v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  UnityEngine_Component_o *v22; // x21
  __int64 v23; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v25; // x0
  System_Collections_IEnumerator_o *v26; // x20
  System_Collections_IEnumerator_c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  System_Collections_IEnumerator_c *v31; // x8
  unsigned __int64 v32; // x10
  System_Collections_IEnumerator_c **v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  UnityEngine_Component_o *v36; // x21
  __int64 v37; // x9
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x20
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x20
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  int max_length; // w8
  WellFired_USTimelineContainer_array *v56; // x20
  unsigned int v57; // w21
  UnityEngine_ParticleSystem_o *v58; // x0
  WellFired_USTimelineContainer_array *v59; // x21
  WellFired_USTimelineContainer_array *v60; // x20
  __int64 v61; // x8
  __int64 v62; // x20
  SimpleAnimation_o *v63; // x0
  __int64 v64; // x8
  __int64 v65; // x21
  UnityEngine_Animation_o *v66; // x0
  WebViewObject_o *v67; // x20
  int v68; // w8
  WellFired_USTimelineContainer_array *v69; // x20
  unsigned int v70; // w21
  UnityEngine_ParticleSystem_o *v71; // x0
  WellFired_USTimelineContainer_array *v72; // x21
  WellFired_USTimelineContainer_array *v73; // x20
  __int64 v74; // x8
  __int64 v75; // x20
  SimpleAnimation_o *v76; // x0
  __int64 v77; // x8
  __int64 v78; // x21
  UnityEngine_Animation_o *v79; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7F3F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v4);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v9);
    byte_40F7F3F = 1;
  }
  visibleCheckTarget = this->fields.visibleCheckTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)visibleCheckTarget, 0LL) )
  {
    if ( !visibleCheckTarget )
      goto LABEL_142;
    localScale = UnityEngine_Transform__get_localScale(visibleCheckTarget, 0LL);
    if ( localScale.fields.z <= 0.001 && this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !transform )
          goto LABEL_142;
        Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
        if ( !Enumerator )
          sub_B170D4();
        while ( 1 )
        {
          klass = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v14 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v14;
              p_offset += 4;
              if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_17;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_17:
            p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v17 = Enumerator->klass;
          if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
          {
            v18 = 0LL;
            v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
            while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v18;
              v19 += 2;
              if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                goto LABEL_24;
            }
            v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
          }
          else
          {
LABEL_24:
            v20 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v21 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                  Enumerator,
                  *(_QWORD *)(v20 + 8));
          v22 = (UnityEngine_Component_o *)v21;
          if ( v21 )
          {
            v23 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v23
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v23 - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_B173C8(v21);
LABEL_142:
              sub_B170D4();
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v22, (UnityEngine_Object_o *)this, 0LL) )
          {
            if ( !v22 )
              sub_B170D4();
            gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
            if ( !gameObject )
              sub_B170D4();
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          }
        }
        v39 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
        if ( v39 )
        {
          v40 = *(_QWORD *)v39;
          v41 = v39;
          if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
          {
            v42 = 0LL;
            v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
            {
              ++v42;
              v43 += 4;
              if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
                goto LABEL_69;
            }
            v44 = v40 + 16LL * *v43 + 312;
          }
          else
          {
LABEL_69:
            v44 = sub_AAFEF8(v39, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
        }
        goto LABEL_85;
      }
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
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
      ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
      if ( !ComponentsInChildren_USTimelineContainer )
        goto LABEL_142;
      max_length = ComponentsInChildren_USTimelineContainer->max_length;
      v56 = ComponentsInChildren_USTimelineContainer;
      if ( max_length < 1 )
      {
LABEL_92:
        v59 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
        ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
        v60 = ComponentsInChildren_USTimelineContainer;
        if ( v59 && (v61 = *(_QWORD *)&v59->max_length) != 0 )
        {
          if ( (int)v61 >= 1 )
          {
            v62 = 0LL;
            while ( (unsigned int)v62 < (unsigned int)v61 )
            {
              v63 = (SimpleAnimation_o *)v59->m_Items[v62];
              if ( !v63 )
                goto LABEL_142;
              SimpleAnimation__Stop(v63, 0LL);
              LODWORD(v61) = v59->max_length;
              if ( (int)++v62 >= (int)v61 )
                goto LABEL_85;
            }
            goto LABEL_143;
          }
        }
        else if ( ComponentsInChildren_USTimelineContainer )
        {
          v64 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length;
          if ( v64 )
          {
            if ( (int)v64 >= 1 )
            {
              v65 = 0LL;
              while ( (unsigned int)v65 < (unsigned int)v64 )
              {
                v66 = (UnityEngine_Animation_o *)v60->m_Items[v65];
                if ( !v66 )
                  goto LABEL_142;
                UnityEngine_Animation__Stop(v66, 0LL);
                LODWORD(v64) = v60->max_length;
                if ( (int)++v65 >= (int)v64 )
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
      v57 = 0;
      while ( v57 < max_length )
      {
        v58 = (UnityEngine_ParticleSystem_o *)v56->m_Items[v57];
        if ( !v58 )
          goto LABEL_142;
        UnityEngine_ParticleSystem__Stop_49805596(v58, 0LL);
        max_length = v56->max_length;
        if ( (int)++v57 >= max_length )
          goto LABEL_92;
      }
LABEL_143:
      sub_B17100(ComponentsInChildren_USTimelineContainer, v53, v54);
      sub_B170A0();
    }
    v81 = UnityEngine_Transform__get_localScale(visibleCheckTarget, 0LL);
    if ( v81.fields.z >= 1.0 && !this->fields.isChildVisible )
    {
      if ( this->fields.suddenDeath )
      {
        v25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !v25 )
          goto LABEL_142;
        v26 = UnityEngine_Transform__GetEnumerator(v25, 0LL);
        if ( !v26 )
          sub_B170D4();
        while ( 1 )
        {
          v27 = v26->klass;
          if ( *(_WORD *)&v26->klass->_2.bitflags1 )
          {
            v28 = 0LL;
            v29 = &v27->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
                goto LABEL_45;
            }
            v30 = (__int64)&v27->vtable[*v29].method;
          }
          else
          {
LABEL_45:
            v30 = sub_AAFEF8(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
            break;
          v31 = v26->klass;
          if ( *(_WORD *)&v26->klass->_2.bitflags1 )
          {
            v32 = 0LL;
            v33 = (System_Collections_IEnumerator_c **)&v31->_1.interfaceOffsets->offset;
            while ( *(v33 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v32;
              v33 += 2;
              if ( v32 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
                goto LABEL_52;
            }
            v34 = (__int64)&v31->vtable[*(_DWORD *)v33 + 1].method;
          }
          else
          {
LABEL_52:
            v34 = sub_AAFEF8(v26, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v35 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
          v36 = (UnityEngine_Component_o *)v35;
          if ( v35 )
          {
            v37 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v35 + 300LL) < (unsigned int)v37
              || *(UnityEngine_Transform_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v37 - 8) != UnityEngine_Transform_TypeInfo )
            {
              sub_B173C8(v35);
LABEL_147:
              sub_B170D4();
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v36, (UnityEngine_Object_o *)this, 0LL) )
          {
            if ( !v36 )
              goto LABEL_147;
            v38 = UnityEngine_Component__get_gameObject(v36, 0LL);
            if ( !v38 )
              sub_B170D4();
            UnityEngine_GameObject__SetActive(v38, 1, 0LL);
          }
        }
        v45 = sub_B170BC(v26, System_IDisposable_TypeInfo);
        if ( v45 )
        {
          v46 = *(_QWORD *)v45;
          v47 = v45;
          if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
          {
            v48 = 0LL;
            v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
            {
              ++v48;
              v49 += 4;
              if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
                goto LABEL_75;
            }
            v50 = v46 + 16LL * *v49 + 312;
          }
          else
          {
LABEL_75:
            v50 = sub_AAFEF8(v45, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
        }
      }
      else
      {
        v67 = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)this,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v67, 0LL, 0LL) )
        {
          if ( !v67 )
            goto LABEL_142;
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)v67, 0LL);
        }
        else
        {
          ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
          if ( !ComponentsInChildren_USTimelineContainer )
            goto LABEL_142;
          v68 = ComponentsInChildren_USTimelineContainer->max_length;
          v69 = ComponentsInChildren_USTimelineContainer;
          if ( v68 >= 1 )
          {
            v70 = 0;
            while ( v70 < v68 )
            {
              v71 = (UnityEngine_ParticleSystem_o *)v69->m_Items[v70];
              if ( !v71 )
                goto LABEL_142;
              UnityEngine_ParticleSystem__Play_49805208(v71, 0LL);
              v68 = v69->max_length;
              if ( (int)++v70 >= v68 )
                goto LABEL_125;
            }
            goto LABEL_143;
          }
LABEL_125:
          v72 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
          ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
          v73 = ComponentsInChildren_USTimelineContainer;
          if ( v72 && (v74 = *(_QWORD *)&v72->max_length) != 0 )
          {
            if ( (int)v74 >= 1 )
            {
              v75 = 0LL;
              while ( (unsigned int)v75 < (unsigned int)v74 )
              {
                v76 = (SimpleAnimation_o *)v72->m_Items[v75];
                if ( !v76 )
                  goto LABEL_142;
                ComponentsInChildren_USTimelineContainer = (WellFired_USTimelineContainer_array *)SimpleAnimation__Play(
                                                                                                    v76,
                                                                                                    0LL);
                LODWORD(v74) = v72->max_length;
                if ( (int)++v75 >= (int)v74 )
                  goto LABEL_117;
              }
              goto LABEL_143;
            }
          }
          else if ( ComponentsInChildren_USTimelineContainer )
          {
            v77 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length;
            if ( v77 )
            {
              if ( (int)v77 >= 1 )
              {
                v78 = 0LL;
                while ( (unsigned int)v78 < (unsigned int)v77 )
                {
                  v79 = (UnityEngine_Animation_o *)v73->m_Items[v78];
                  if ( !v79 )
                    goto LABEL_142;
                  ComponentsInChildren_USTimelineContainer = (WellFired_USTimelineContainer_array *)UnityEngine_Animation__Play(v79, 0LL);
                  LODWORD(v77) = v73->max_length;
                  if ( (int)++v78 >= (int)v77 )
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