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
  System_Object_array *ComponentsInChildren_object__48433408; // x20
  SimpleAnimation_o *States; // x0
  __int64 v14; // x1
  SimpleAnimation_o *v15; // x21
  __int64 v16; // x8
  unsigned int v17; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v19; // x21
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x21
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x22
  __int64 v34; // x8
  __int64 v35; // x9
  SimpleAnimation_State_c **v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v43; // w24
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v49; // x8
  __int64 v50; // x9
  System_Collections_IEnumerator_c **v51; // x10
  __int64 v52; // x0
  UnityEngine_AnimationState_o *v53; // x0
  SimpleAnimation_c *v54; // x8
  SimpleAnimation_o *v55; // x20
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  int v59; // w8
  SimpleAnimation_o *v60; // x19
  unsigned int v61; // w20
  __int64 v62; // x0
  __int64 v63; // x20
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0

  v2 = &Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___;
  if ( (byte_49FEB0D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v5);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v11);
    byte_49FEB0D = 1;
  }
  ComponentsInChildren_object__48433408 = UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v15 = States;
  if ( ComponentsInChildren_object__48433408
    && (v16 = *(_QWORD *)&ComponentsInChildren_object__48433408->max_length) != 0 )
  {
    if ( (int)v16 >= 1 )
    {
      v17 = 0;
      while ( v17 < (unsigned int)v16 )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__48433408->m_Items[v17];
        if ( !States )
          goto LABEL_91;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_91;
        klass = States->klass;
        v19 = States;
        v20 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v20;
            p_offset += 4;
            if ( !v20 )
              goto LABEL_14;
          }
          v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v22 = sub_1BB60A8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v23 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
        if ( !v23 )
          sub_1B64324(0LL);
        while ( 1 )
        {
          v24 = *(_QWORD *)v23;
          v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v25;
              v26 += 4;
              if ( !v25 )
                goto LABEL_21;
            }
            v27 = v24 + 16LL * *v26 + 312;
          }
          else
          {
LABEL_21:
            v27 = sub_1BB60A8(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
            break;
          v28 = *(_QWORD *)v23;
          v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v30 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v29;
              v30 += 4;
              if ( !v29 )
                goto LABEL_28;
            }
            v31 = v28 + 16LL * *v30 + 312;
          }
          else
          {
LABEL_28:
            v31 = sub_1BB60A8(v23, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
          v33 = v32;
          if ( !v32 )
            sub_1B64324(0LL);
          v34 = *(_QWORD *)v32;
          v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
          {
            v36 = (SimpleAnimation_State_c **)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v35;
              v36 += 2;
              if ( !v35 )
                goto LABEL_35;
            }
            v37 = v34 + 16LL * (*(_DWORD *)v36 + 8) + 312;
          }
          else
          {
LABEL_35:
            v37 = sub_1BB60A8(v32, SimpleAnimation_State_TypeInfo, 8LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v37)(v33, *(_QWORD *)(v37 + 8), 1.0);
        }
        v38 = *(_QWORD *)v23;
        v39 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
        {
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
          {
            --v39;
            v40 += 4;
            if ( !v39 )
              goto LABEL_42;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_42:
          v41 = sub_1BB60A8(v23, System_IDisposable_TypeInfo, 0LL);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v23, *(_QWORD *)(v41 + 8));
        LODWORD(v16) = ComponentsInChildren_object__48433408->max_length;
        if ( (int)++v17 >= (int)v16 )
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
        v43 = 0;
        while ( v43 < (unsigned int)m_CancellationTokenSource )
        {
          States = (SimpleAnimation_o *)*((_QWORD *)&v15->fields.m_Graph + (int)v43);
          if ( !States )
            goto LABEL_91;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_1B64324(0LL);
          while ( 1 )
          {
            v45 = Enumerator->klass;
            v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v47 = &v45->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v46;
                v47 += 4;
                if ( !v46 )
                  goto LABEL_59;
              }
              p_method = (__int64)&v45->vtable[*v47].method;
            }
            else
            {
LABEL_59:
              p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v49 = Enumerator->klass;
            v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v51 = (System_Collections_IEnumerator_c **)&v49->_1.interfaceOffsets->offset;
              while ( *(v51 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v50;
                v51 += 2;
                if ( !v50 )
                  goto LABEL_66;
              }
              v52 = (__int64)&v49->vtable[*(_DWORD *)v51 + 1].method;
            }
            else
            {
LABEL_66:
              v52 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v53 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v52)(
                                                    Enumerator,
                                                    *(_QWORD *)(v52 + 8));
            if ( !v53 )
              sub_1B64324(0LL);
            if ( v53->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1B645E4(v53);
              v62 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
              v63 = v62;
              if ( v62 )
              {
                v64 = *(_QWORD *)v62;
                v65 = *(unsigned __int16 *)(*(_QWORD *)v62 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v62 + 302LL) )
                {
                  v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v65;
                    v66 += 4;
                    if ( !v65 )
                      goto LABEL_98;
                  }
                  v67 = v64 + 16LL * *v66 + 312;
                }
                else
                {
LABEL_98:
                  v67 = sub_1BB60A8(v62, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8));
              }
              if ( v2 )
                sub_1B6431C(v2);
              sub_1C4EB58();
            }
            UnityEngine_AnimationState__set_speed(v53, 1.0, 0LL);
          }
          v2 = 0LL;
          States = (SimpleAnimation_o *)sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v54 = States->klass;
            v55 = States;
            v56 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
            {
              v57 = &v54->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
              {
                --v56;
                v57 += 4;
                if ( !v56 )
                  goto LABEL_76;
              }
              v58 = (__int64)(&v54->vtable._0_Equals.method + 2 * *v57);
            }
            else
            {
LABEL_76:
              v58 = sub_1BB60A8(States, System_IDisposable_TypeInfo, 0LL);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v58)(
                                            v55,
                                            *(_QWORD *)(v58 + 8));
          }
          LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
          if ( (int)++v43 >= (int)m_CancellationTokenSource )
            goto LABEL_84;
        }
LABEL_92:
        sub_1B6432C(States, v14);
      }
    }
  }
LABEL_84:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_91:
    sub_1B64324(States);
  v59 = (int)States->fields.m_CancellationTokenSource;
  v60 = States;
  if ( v59 >= 1 )
  {
    v61 = 0;
    while ( v61 < v59 )
    {
      States = (SimpleAnimation_o *)*((_QWORD *)&v60->fields.m_Graph + (int)v61);
      if ( !States )
        goto LABEL_91;
      UnityEngine_ParticleSystem__Play_69407872((UnityEngine_ParticleSystem_o *)States, 0LL);
      v59 = (int)v60->fields.m_CancellationTokenSource;
      if ( (int)++v61 >= v59 )
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
  System_Object_array *ComponentsInChildren_object__48433408; // x20
  SimpleAnimation_o *States; // x0
  __int64 v14; // x1
  SimpleAnimation_o *v15; // x21
  __int64 v16; // x8
  unsigned int v17; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v19; // x21
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x21
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x22
  __int64 v34; // x8
  __int64 v35; // x9
  SimpleAnimation_State_c **v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v43; // w24
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v49; // x8
  __int64 v50; // x9
  System_Collections_IEnumerator_c **v51; // x10
  __int64 v52; // x0
  UnityEngine_AnimationState_o *v53; // x0
  SimpleAnimation_c *v54; // x8
  SimpleAnimation_o *v55; // x20
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  int v59; // w8
  SimpleAnimation_o *v60; // x19
  unsigned int v61; // w20
  __int64 v62; // x0
  __int64 v63; // x20
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0

  if ( (byte_49FEB0C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v5);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v11);
    byte_49FEB0C = 1;
  }
  if ( this->fields.animeStop )
  {
    ComponentsInChildren_object__48433408 = UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v15 = States;
    if ( ComponentsInChildren_object__48433408
      && (v16 = *(_QWORD *)&ComponentsInChildren_object__48433408->max_length) != 0 )
    {
      if ( (int)v16 >= 1 )
      {
        v17 = 0;
        while ( v17 < (unsigned int)v16 )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_object__48433408->m_Items[v17];
          if ( !States )
            goto LABEL_92;
          States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
          if ( !States )
            goto LABEL_92;
          klass = States->klass;
          v19 = States;
          v20 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              --v20;
              p_offset += 4;
              if ( !v20 )
                goto LABEL_15;
            }
            v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_15:
            v22 = sub_1BB60A8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v23 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
          if ( !v23 )
            sub_1B64324(0LL);
          while ( 1 )
          {
            v24 = *(_QWORD *)v23;
            v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
            {
              v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v25;
                v26 += 4;
                if ( !v25 )
                  goto LABEL_22;
              }
              v27 = v24 + 16LL * *v26 + 312;
            }
            else
            {
LABEL_22:
              v27 = sub_1BB60A8(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
              break;
            v28 = *(_QWORD *)v23;
            v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
            {
              v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v30 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                --v29;
                v30 += 4;
                if ( !v29 )
                  goto LABEL_29;
              }
              v31 = v28 + 16LL * *v30 + 312;
            }
            else
            {
LABEL_29:
              v31 = sub_1BB60A8(v23, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
            }
            v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
            v33 = v32;
            if ( !v32 )
              sub_1B64324(0LL);
            v34 = *(_QWORD *)v32;
            v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
            {
              v36 = (SimpleAnimation_State_c **)(*(_QWORD *)(v34 + 176) + 8LL);
              while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v35;
                v36 += 2;
                if ( !v35 )
                  goto LABEL_36;
              }
              v37 = v34 + 16LL * (*(_DWORD *)v36 + 8) + 312;
            }
            else
            {
LABEL_36:
              v37 = sub_1BB60A8(v32, SimpleAnimation_State_TypeInfo, 8LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v37)(v33, *(_QWORD *)(v37 + 8), 0.0);
          }
          v38 = *(_QWORD *)v23;
          v39 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
            {
              --v39;
              v40 += 4;
              if ( !v39 )
                goto LABEL_43;
            }
            v41 = v38 + 16LL * *v40 + 312;
          }
          else
          {
LABEL_43:
            v41 = sub_1BB60A8(v23, System_IDisposable_TypeInfo, 0LL);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v23, *(_QWORD *)(v41 + 8));
          LODWORD(v16) = ComponentsInChildren_object__48433408->max_length;
          if ( (int)++v17 >= (int)v16 )
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
          v43 = 0;
          while ( v43 < (unsigned int)m_CancellationTokenSource )
          {
            States = (SimpleAnimation_o *)*((_QWORD *)&v15->fields.m_Graph + (int)v43);
            if ( !States )
              goto LABEL_92;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
            if ( !Enumerator )
              sub_1B64324(0LL);
            while ( 1 )
            {
              v45 = Enumerator->klass;
              v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
              {
                v47 = &v45->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v46;
                  v47 += 4;
                  if ( !v46 )
                    goto LABEL_60;
                }
                p_method = (__int64)&v45->vtable[*v47].method;
              }
              else
              {
LABEL_60:
                p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v49 = Enumerator->klass;
              v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
              {
                v51 = (System_Collections_IEnumerator_c **)&v49->_1.interfaceOffsets->offset;
                while ( *(v51 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v50;
                  v51 += 2;
                  if ( !v50 )
                    goto LABEL_67;
                }
                v52 = (__int64)&v49->vtable[*(_DWORD *)v51 + 1].method;
              }
              else
              {
LABEL_67:
                v52 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
              }
              v53 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v52)(
                                                      Enumerator,
                                                      *(_QWORD *)(v52 + 8));
              if ( !v53 )
                sub_1B64324(0LL);
              if ( v53->klass != UnityEngine_AnimationState_TypeInfo )
              {
                sub_1B645E4(v53);
                v62 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
                v63 = v62;
                if ( v62 )
                {
                  v64 = *(_QWORD *)v62;
                  v65 = *(unsigned __int16 *)(*(_QWORD *)v62 + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)v62 + 302LL) )
                  {
                    v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v65;
                      v66 += 4;
                      if ( !v65 )
                        goto LABEL_99;
                    }
                    v67 = v64 + 16LL * *v66 + 312;
                  }
                  else
                  {
LABEL_99:
                    v67 = sub_1BB60A8(v62, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8));
                }
                if ( v2 )
                  sub_1B6431C(v2);
                sub_1C4EB58();
              }
              UnityEngine_AnimationState__set_speed(v53, 0.0, 0LL);
            }
            v2 = 0LL;
            States = (SimpleAnimation_o *)sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v54 = States->klass;
              v55 = States;
              v56 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
              {
                v57 = &v54->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
                {
                  --v56;
                  v57 += 4;
                  if ( !v56 )
                    goto LABEL_77;
                }
                v58 = (__int64)(&v54->vtable._0_Equals.method + 2 * *v57);
              }
              else
              {
LABEL_77:
                v58 = sub_1BB60A8(States, System_IDisposable_TypeInfo, 0LL);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v58)(
                                              v55,
                                              *(_QWORD *)(v58 + 8));
            }
            LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
            if ( (int)++v43 >= (int)m_CancellationTokenSource )
              goto LABEL_85;
          }
LABEL_93:
          sub_1B6432C(States, v14);
        }
      }
    }
LABEL_85:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_92:
      sub_1B64324(States);
    v59 = (int)States->fields.m_CancellationTokenSource;
    v60 = States;
    if ( v59 >= 1 )
    {
      v61 = 0;
      while ( v61 < v59 )
      {
        States = (SimpleAnimation_o *)*((_QWORD *)&v60->fields.m_Graph + (int)v61);
        if ( !States )
          goto LABEL_92;
        UnityEngine_ParticleSystem__Pause_69408004((UnityEngine_ParticleSystem_o *)States, 0LL);
        v59 = (int)v60->fields.m_CancellationTokenSource;
        if ( (int)++v61 >= v59 )
          return;
      }
      goto LABEL_93;
    }
  }
}