void __fastcall BattleRaidTurnStartEffect___ctor(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRaidTurnStartEffect__resumeLimitTurnEffect(
        BattleRaidTurnStartEffect_o *this,
        const MethodInfo *method)
{
  __int64 *v2; // x22
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Object_array *ComponentsInChildren_object__50303708; // x20
  SimpleAnimation_o *States; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  SimpleAnimation_o *v16; // x21
  __int64 v17; // x8
  unsigned int v18; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v20; // x21
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x22
  __int64 v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v46; // w24
  __int64 v47; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v53; // x8
  __int64 v54; // x9
  System_Collections_IEnumerator_c **v55; // x10
  __int64 v56; // x0
  UnityEngine_AnimationState_o *v57; // x0
  __int64 v58; // x1
  SimpleAnimation_c *v59; // x8
  SimpleAnimation_o *v60; // x20
  __int64 v61; // x9
  int32_t *v62; // x10
  __int64 v63; // x0
  int v64; // w8
  SimpleAnimation_o *v65; // x19
  unsigned int v66; // w20
  __int64 v67; // x0
  __int64 v68; // x20
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0

  v2 = &Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___;
  if ( (byte_4B04979 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v5);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v6);
    sub_1BC3008(&System_IDisposable_TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v11);
    byte_4B04979 = 1;
  }
  ComponentsInChildren_object__50303708 = UnityEngine_Component__GetComponentsInChildren_object__50303708(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2FF92DC *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__50303708(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2FF92DC *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v16 = States;
  if ( ComponentsInChildren_object__50303708
    && (v17 = *(_QWORD *)&ComponentsInChildren_object__50303708->max_length) != 0 )
  {
    if ( (int)v17 >= 1 )
    {
      v18 = 0;
      while ( v18 < (unsigned int)v17 )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__50303708->m_Items[v18];
        if ( !States )
          goto LABEL_91;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_91;
        klass = States->klass;
        v20 = States;
        v21 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v21;
            p_offset += 4;
            if ( !v21 )
              goto LABEL_14;
          }
          v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v23 = sub_1C13570(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v25 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
        if ( !v25 )
          sub_1BC3264(0LL, v24);
        while ( 1 )
        {
          v26 = *(_QWORD *)v25;
          v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
          {
            v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v27;
              v28 += 4;
              if ( !v27 )
                goto LABEL_21;
            }
            v29 = v26 + 16LL * *v28 + 312;
          }
          else
          {
LABEL_21:
            v29 = sub_1C13570(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
            break;
          v30 = *(_QWORD *)v25;
          v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
          {
            v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v32 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v31;
              v32 += 4;
              if ( !v31 )
                goto LABEL_28;
            }
            v33 = v30 + 16LL * *v32 + 312;
          }
          else
          {
LABEL_28:
            v33 = sub_1C13570(v25, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
          v36 = v34;
          if ( !v34 )
            sub_1BC3264(0LL, v35);
          v37 = *(_QWORD *)v34;
          v38 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
          {
            v39 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
            while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v38;
              v39 += 2;
              if ( !v38 )
                goto LABEL_35;
            }
            v40 = v37 + 16LL * (*(_DWORD *)v39 + 8) + 312;
          }
          else
          {
LABEL_35:
            v40 = sub_1C13570(v34, SimpleAnimation_State_TypeInfo, 8LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v40)(v36, *(_QWORD *)(v40 + 8), 1.0);
        }
        v41 = *(_QWORD *)v25;
        v42 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
        {
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_42;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_42:
          v44 = sub_1C13570(v25, System_IDisposable_TypeInfo, 0LL);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v25, *(_QWORD *)(v44 + 8));
        LODWORD(v17) = ComponentsInChildren_object__50303708->max_length;
        if ( (int)++v18 >= (int)v17 )
          goto LABEL_84;
      }
      goto LABEL_92;
    }
  }
  else if ( States )
  {
    m_CancellationTokenSource = States->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( (int)m_CancellationTokenSource >= 1 )
      {
        v46 = 0;
        while ( v46 < (unsigned int)m_CancellationTokenSource )
        {
          States = (SimpleAnimation_o *)*((_QWORD *)&v16->fields.m_Graph + (int)v46);
          if ( !States )
            goto LABEL_91;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_1BC3264(0LL, v47);
          while ( 1 )
          {
            v49 = Enumerator->klass;
            v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v51 = &v49->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v50;
                v51 += 4;
                if ( !v50 )
                  goto LABEL_59;
              }
              p_method = (__int64)&v49->vtable[*v51].method;
            }
            else
            {
LABEL_59:
              p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v53 = Enumerator->klass;
            v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v55 = (System_Collections_IEnumerator_c **)&v53->_1.interfaceOffsets->offset;
              while ( *(v55 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v54;
                v55 += 2;
                if ( !v54 )
                  goto LABEL_66;
              }
              v56 = (__int64)&v53->vtable[*(_DWORD *)v55 + 1].method;
            }
            else
            {
LABEL_66:
              v56 = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v57 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v56)(
                                                    Enumerator,
                                                    *(_QWORD *)(v56 + 8));
            if ( !v57 )
              sub_1BC3264(0LL, v58);
            if ( v57->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1BC3524(v57);
              v67 = sub_1BC3144(Enumerator, System_IDisposable_TypeInfo);
              v68 = v67;
              if ( v67 )
              {
                v69 = *(_QWORD *)v67;
                v70 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
                {
                  v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v70;
                    v71 += 4;
                    if ( !v70 )
                      goto LABEL_98;
                  }
                  v72 = v69 + 16LL * *v71 + 312;
                }
                else
                {
LABEL_98:
                  v72 = sub_1C13570(v67, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
              }
              if ( v2 )
                sub_1BC325C(v2);
              sub_1CABD50();
            }
            UnityEngine_AnimationState__set_speed(v57, 1.0, 0LL);
          }
          v2 = 0LL;
          States = (SimpleAnimation_o *)sub_1BC3144(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v59 = States->klass;
            v60 = States;
            v61 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
            {
              v62 = &v59->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
              {
                --v61;
                v62 += 4;
                if ( !v61 )
                  goto LABEL_76;
              }
              v63 = (__int64)(&v59->vtable._0_Equals.method + 2 * *v62);
            }
            else
            {
LABEL_76:
              v63 = sub_1C13570(States, System_IDisposable_TypeInfo, 0LL);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v63)(
                                            v60,
                                            *(_QWORD *)(v63 + 8));
          }
          LODWORD(m_CancellationTokenSource) = v16->fields.m_CancellationTokenSource;
          if ( (int)++v46 >= (int)m_CancellationTokenSource )
            goto LABEL_84;
        }
LABEL_92:
        sub_1BC326C(States, v14, v15);
      }
    }
  }
LABEL_84:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__50303708(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2FF92DC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_91:
    sub_1BC3264(States, v14);
  v64 = (int)States->fields.m_CancellationTokenSource;
  v65 = States;
  if ( v64 >= 1 )
  {
    v66 = 0;
    while ( v66 < v64 )
    {
      States = (SimpleAnimation_o *)*((_QWORD *)&v65->fields.m_Graph + (int)v66);
      if ( !States )
        goto LABEL_91;
      UnityEngine_ParticleSystem__Play_70317708((UnityEngine_ParticleSystem_o *)States, 0LL);
      v64 = (int)v65->fields.m_CancellationTokenSource;
      if ( (int)++v66 >= v64 )
        return;
    }
    goto LABEL_92;
  }
}


void __fastcall BattleRaidTurnStartEffect__setStopFlg(
        BattleRaidTurnStartEffect_o *this,
        bool stopFlag,
        const MethodInfo *method)
{
  this->fields.animeStop = stopFlag;
}


void __fastcall BattleRaidTurnStartEffect__waitLimitTurnEffect(
        BattleRaidTurnStartEffect_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x22
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Object_array *ComponentsInChildren_object__50303708; // x20
  SimpleAnimation_o *States; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  SimpleAnimation_o *v16; // x21
  __int64 v17; // x8
  unsigned int v18; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v20; // x21
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x22
  __int64 v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v46; // w24
  __int64 v47; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v53; // x8
  __int64 v54; // x9
  System_Collections_IEnumerator_c **v55; // x10
  __int64 v56; // x0
  UnityEngine_AnimationState_o *v57; // x0
  __int64 v58; // x1
  SimpleAnimation_c *v59; // x8
  SimpleAnimation_o *v60; // x20
  __int64 v61; // x9
  int32_t *v62; // x10
  __int64 v63; // x0
  int v64; // w8
  SimpleAnimation_o *v65; // x19
  unsigned int v66; // w20
  __int64 v67; // x0
  __int64 v68; // x20
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0

  if ( (byte_4B04978 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v5);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v6);
    sub_1BC3008(&System_IDisposable_TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BC3008(&SimpleAnimation_State_TypeInfo, v11);
    byte_4B04978 = 1;
  }
  if ( this->fields.animeStop )
  {
    ComponentsInChildren_object__50303708 = UnityEngine_Component__GetComponentsInChildren_object__50303708(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_2FF92DC *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__50303708(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2FF92DC *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v16 = States;
    if ( ComponentsInChildren_object__50303708
      && (v17 = *(_QWORD *)&ComponentsInChildren_object__50303708->max_length) != 0 )
    {
      if ( (int)v17 >= 1 )
      {
        v18 = 0;
        while ( v18 < (unsigned int)v17 )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_object__50303708->m_Items[v18];
          if ( !States )
            goto LABEL_92;
          States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
          if ( !States )
            goto LABEL_92;
          klass = States->klass;
          v20 = States;
          v21 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              --v21;
              p_offset += 4;
              if ( !v21 )
                goto LABEL_15;
            }
            v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_15:
            v23 = sub_1C13570(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v25 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
          if ( !v25 )
            sub_1BC3264(0LL, v24);
          while ( 1 )
          {
            v26 = *(_QWORD *)v25;
            v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
            {
              v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v27;
                v28 += 4;
                if ( !v27 )
                  goto LABEL_22;
              }
              v29 = v26 + 16LL * *v28 + 312;
            }
            else
            {
LABEL_22:
              v29 = sub_1C13570(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
              break;
            v30 = *(_QWORD *)v25;
            v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
            {
              v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v32 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                --v31;
                v32 += 4;
                if ( !v31 )
                  goto LABEL_29;
              }
              v33 = v30 + 16LL * *v32 + 312;
            }
            else
            {
LABEL_29:
              v33 = sub_1C13570(v25, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
            }
            v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
            v36 = v34;
            if ( !v34 )
              sub_1BC3264(0LL, v35);
            v37 = *(_QWORD *)v34;
            v38 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
            {
              v39 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
              while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v38;
                v39 += 2;
                if ( !v38 )
                  goto LABEL_36;
              }
              v40 = v37 + 16LL * (*(_DWORD *)v39 + 8) + 312;
            }
            else
            {
LABEL_36:
              v40 = sub_1C13570(v34, SimpleAnimation_State_TypeInfo, 8LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v40)(v36, *(_QWORD *)(v40 + 8), 0.0);
          }
          v41 = *(_QWORD *)v25;
          v42 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
          {
            v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
            {
              --v42;
              v43 += 4;
              if ( !v42 )
                goto LABEL_43;
            }
            v44 = v41 + 16LL * *v43 + 312;
          }
          else
          {
LABEL_43:
            v44 = sub_1C13570(v25, System_IDisposable_TypeInfo, 0LL);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v25, *(_QWORD *)(v44 + 8));
          LODWORD(v17) = ComponentsInChildren_object__50303708->max_length;
          if ( (int)++v18 >= (int)v17 )
            goto LABEL_85;
        }
        goto LABEL_93;
      }
    }
    else if ( States )
    {
      m_CancellationTokenSource = States->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        if ( (int)m_CancellationTokenSource >= 1 )
        {
          v46 = 0;
          while ( v46 < (unsigned int)m_CancellationTokenSource )
          {
            States = (SimpleAnimation_o *)*((_QWORD *)&v16->fields.m_Graph + (int)v46);
            if ( !States )
              goto LABEL_92;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
            if ( !Enumerator )
              sub_1BC3264(0LL, v47);
            while ( 1 )
            {
              v49 = Enumerator->klass;
              v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
              {
                v51 = &v49->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v50;
                  v51 += 4;
                  if ( !v50 )
                    goto LABEL_60;
                }
                p_method = (__int64)&v49->vtable[*v51].method;
              }
              else
              {
LABEL_60:
                p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v53 = Enumerator->klass;
              v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
              {
                v55 = (System_Collections_IEnumerator_c **)&v53->_1.interfaceOffsets->offset;
                while ( *(v55 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v54;
                  v55 += 2;
                  if ( !v54 )
                    goto LABEL_67;
                }
                v56 = (__int64)&v53->vtable[*(_DWORD *)v55 + 1].method;
              }
              else
              {
LABEL_67:
                v56 = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
              }
              v57 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v56)(
                                                      Enumerator,
                                                      *(_QWORD *)(v56 + 8));
              if ( !v57 )
                sub_1BC3264(0LL, v58);
              if ( v57->klass != UnityEngine_AnimationState_TypeInfo )
              {
                sub_1BC3524(v57);
                v67 = sub_1BC3144(Enumerator, System_IDisposable_TypeInfo);
                v68 = v67;
                if ( v67 )
                {
                  v69 = *(_QWORD *)v67;
                  v70 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
                  {
                    v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v70;
                      v71 += 4;
                      if ( !v70 )
                        goto LABEL_99;
                    }
                    v72 = v69 + 16LL * *v71 + 312;
                  }
                  else
                  {
LABEL_99:
                    v72 = sub_1C13570(v67, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
                }
                if ( v2 )
                  sub_1BC325C(v2);
                sub_1CABD50();
              }
              UnityEngine_AnimationState__set_speed(v57, 0.0, 0LL);
            }
            v2 = 0LL;
            States = (SimpleAnimation_o *)sub_1BC3144(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v59 = States->klass;
              v60 = States;
              v61 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
              {
                v62 = &v59->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
                {
                  --v61;
                  v62 += 4;
                  if ( !v61 )
                    goto LABEL_77;
                }
                v63 = (__int64)(&v59->vtable._0_Equals.method + 2 * *v62);
              }
              else
              {
LABEL_77:
                v63 = sub_1C13570(States, System_IDisposable_TypeInfo, 0LL);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v63)(
                                              v60,
                                              *(_QWORD *)(v63 + 8));
            }
            LODWORD(m_CancellationTokenSource) = v16->fields.m_CancellationTokenSource;
            if ( (int)++v46 >= (int)m_CancellationTokenSource )
              goto LABEL_85;
          }
LABEL_93:
          sub_1BC326C(States, v14, v15);
        }
      }
    }
LABEL_85:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__50303708(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2FF92DC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_92:
      sub_1BC3264(States, v14);
    v64 = (int)States->fields.m_CancellationTokenSource;
    v65 = States;
    if ( v64 >= 1 )
    {
      v66 = 0;
      while ( v66 < v64 )
      {
        States = (SimpleAnimation_o *)*((_QWORD *)&v65->fields.m_Graph + (int)v66);
        if ( !States )
          goto LABEL_92;
        UnityEngine_ParticleSystem__Pause_70317840((UnityEngine_ParticleSystem_o *)States, 0LL);
        v64 = (int)v65->fields.m_CancellationTokenSource;
        if ( (int)++v66 >= v64 )
          return;
      }
      goto LABEL_93;
    }
  }
}