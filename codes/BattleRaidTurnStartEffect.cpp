void __fastcall BattleRaidTurnStartEffect___ctor(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRaidTurnStartEffect__resumeLimitTurnEffect(
        BattleRaidTurnStartEffect_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 *v3; // x22
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Object_array *ComponentsInChildren_object__49324452; // x20
  SimpleAnimation_o *States; // x0
  __int64 v23; // x1
  SimpleAnimation_o *v24; // x21
  __int64 v25; // x8
  unsigned int v26; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v28; // x21
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x21
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x22
  __int64 v45; // x8
  __int64 v46; // x9
  SimpleAnimation_State_c **v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v54; // w24
  __int64 v55; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v61; // x8
  __int64 v62; // x9
  System_Collections_IEnumerator_c **v63; // x10
  __int64 v64; // x0
  UnityEngine_AnimationState_o *v65; // x0
  __int64 v66; // x1
  SimpleAnimation_c *v67; // x8
  SimpleAnimation_o *v68; // x20
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  int v72; // w8
  SimpleAnimation_o *v73; // x19
  unsigned int v74; // w20
  __int64 v75; // x0
  __int64 v76; // x20
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0

  v3 = &Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___;
  if ( (byte_4B188A4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v19, v20);
    byte_4B188A4 = 1;
  }
  ComponentsInChildren_object__49324452 = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v24 = States;
  if ( ComponentsInChildren_object__49324452
    && (v25 = *(_QWORD *)&ComponentsInChildren_object__49324452->max_length) != 0 )
  {
    if ( (int)v25 >= 1 )
    {
      v26 = 0;
      while ( v26 < (unsigned int)v25 )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__49324452->m_Items[v26];
        if ( !States )
          goto LABEL_91;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_91;
        klass = States->klass;
        v28 = States;
        v29 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v29;
            p_offset += 4;
            if ( !v29 )
              goto LABEL_14;
          }
          v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v31 = sub_1C1C7C0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v33 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
        if ( !v33 )
          sub_1BCAA3C(0LL, v32);
        while ( 1 )
        {
          v34 = *(_QWORD *)v33;
          v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v35;
              v36 += 4;
              if ( !v35 )
                goto LABEL_21;
            }
            v37 = v34 + 16LL * *v36 + 312;
          }
          else
          {
LABEL_21:
            v37 = sub_1C1C7C0(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
            break;
          v38 = *(_QWORD *)v33;
          v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v40 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v39;
              v40 += 4;
              if ( !v39 )
                goto LABEL_28;
            }
            v41 = v38 + 16LL * *v40 + 312;
          }
          else
          {
LABEL_28:
            v41 = sub_1C1C7C0(v33, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
          v44 = v42;
          if ( !v42 )
            sub_1BCAA3C(0LL, v43);
          v45 = *(_QWORD *)v42;
          v46 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
          {
            v47 = (SimpleAnimation_State_c **)(*(_QWORD *)(v45 + 176) + 8LL);
            while ( *(v47 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v46;
              v47 += 2;
              if ( !v46 )
                goto LABEL_35;
            }
            v48 = v45 + 16LL * (*(_DWORD *)v47 + 8) + 312;
          }
          else
          {
LABEL_35:
            v48 = sub_1C1C7C0(v42, SimpleAnimation_State_TypeInfo, 8LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v48)(v44, *(_QWORD *)(v48 + 8), 1.0);
        }
        v49 = *(_QWORD *)v33;
        v50 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
          {
            --v50;
            v51 += 4;
            if ( !v50 )
              goto LABEL_42;
          }
          v52 = v49 + 16LL * *v51 + 312;
        }
        else
        {
LABEL_42:
          v52 = sub_1C1C7C0(v33, System_IDisposable_TypeInfo, 0LL);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v33, *(_QWORD *)(v52 + 8));
        LODWORD(v25) = ComponentsInChildren_object__49324452->max_length;
        if ( (int)++v26 >= (int)v25 )
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
        v54 = 0;
        while ( v54 < (unsigned int)m_CancellationTokenSource )
        {
          States = (SimpleAnimation_o *)*((_QWORD *)&v24->fields.m_Graph + (int)v54);
          if ( !States )
            goto LABEL_91;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_1BCAA3C(0LL, v55);
          while ( 1 )
          {
            v57 = Enumerator->klass;
            v58 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v59 = &v57->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v59 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v58;
                v59 += 4;
                if ( !v58 )
                  goto LABEL_59;
              }
              p_method = (__int64)&v57->vtable[*v59].method;
            }
            else
            {
LABEL_59:
              p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v61 = Enumerator->klass;
            v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v63 = (System_Collections_IEnumerator_c **)&v61->_1.interfaceOffsets->offset;
              while ( *(v63 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v62;
                v63 += 2;
                if ( !v62 )
                  goto LABEL_66;
              }
              v64 = (__int64)&v61->vtable[*(_DWORD *)v63 + 1].method;
            }
            else
            {
LABEL_66:
              v64 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v65 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v64)(
                                                    Enumerator,
                                                    *(_QWORD *)(v64 + 8));
            if ( !v65 )
              sub_1BCAA3C(0LL, v66);
            if ( v65->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1BCACFC(v65);
              v75 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
              v76 = v75;
              if ( v75 )
              {
                v77 = *(_QWORD *)v75;
                v78 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
                {
                  v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v78;
                    v79 += 4;
                    if ( !v78 )
                      goto LABEL_98;
                  }
                  v80 = v77 + 16LL * *v79 + 312;
                }
                else
                {
LABEL_98:
                  v80 = sub_1C1C7C0(v75, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8));
              }
              if ( v3 )
                sub_1BCAA34(v3);
              sub_1CB5270();
            }
            UnityEngine_AnimationState__set_speed(v65, 1.0, 0LL);
          }
          v3 = 0LL;
          States = (SimpleAnimation_o *)sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v67 = States->klass;
            v68 = States;
            v69 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
            {
              v70 = &v67->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
              {
                --v69;
                v70 += 4;
                if ( !v69 )
                  goto LABEL_76;
              }
              v71 = (__int64)(&v67->vtable._0_Equals.method + 2 * *v70);
            }
            else
            {
LABEL_76:
              v71 = sub_1C1C7C0(States, System_IDisposable_TypeInfo, 0LL);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v71)(
                                            v68,
                                            *(_QWORD *)(v71 + 8));
          }
          LODWORD(m_CancellationTokenSource) = v24->fields.m_CancellationTokenSource;
          if ( (int)++v54 >= (int)m_CancellationTokenSource )
            goto LABEL_84;
        }
LABEL_92:
        sub_1BCAA44(States, v23);
      }
    }
  }
LABEL_84:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_91:
    sub_1BCAA3C(States, v23);
  v72 = (int)States->fields.m_CancellationTokenSource;
  v73 = States;
  if ( v72 >= 1 )
  {
    v74 = 0;
    while ( v74 < v72 )
    {
      States = (SimpleAnimation_o *)*((_QWORD *)&v73->fields.m_Graph + (int)v74);
      if ( !States )
        goto LABEL_91;
      UnityEngine_ParticleSystem__Play_70434340((UnityEngine_ParticleSystem_o *)States, 0LL);
      v72 = (int)v73->fields.m_CancellationTokenSource;
      if ( (int)++v74 >= v72 )
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
  __int64 v2; // x2
  __int64 v3; // x22
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Object_array *ComponentsInChildren_object__49324452; // x20
  SimpleAnimation_o *States; // x0
  __int64 v23; // x1
  SimpleAnimation_o *v24; // x21
  __int64 v25; // x8
  unsigned int v26; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v28; // x21
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x21
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x22
  __int64 v45; // x8
  __int64 v46; // x9
  SimpleAnimation_State_c **v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v54; // w24
  __int64 v55; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v61; // x8
  __int64 v62; // x9
  System_Collections_IEnumerator_c **v63; // x10
  __int64 v64; // x0
  UnityEngine_AnimationState_o *v65; // x0
  __int64 v66; // x1
  SimpleAnimation_c *v67; // x8
  SimpleAnimation_o *v68; // x20
  __int64 v69; // x9
  int32_t *v70; // x10
  __int64 v71; // x0
  int v72; // w8
  SimpleAnimation_o *v73; // x19
  unsigned int v74; // w20
  __int64 v75; // x0
  __int64 v76; // x20
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0

  if ( (byte_4B188A3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v19, v20);
    byte_4B188A3 = 1;
  }
  if ( this->fields.animeStop )
  {
    ComponentsInChildren_object__49324452 = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v24 = States;
    if ( ComponentsInChildren_object__49324452
      && (v25 = *(_QWORD *)&ComponentsInChildren_object__49324452->max_length) != 0 )
    {
      if ( (int)v25 >= 1 )
      {
        v26 = 0;
        while ( v26 < (unsigned int)v25 )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_object__49324452->m_Items[v26];
          if ( !States )
            goto LABEL_92;
          States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
          if ( !States )
            goto LABEL_92;
          klass = States->klass;
          v28 = States;
          v29 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              --v29;
              p_offset += 4;
              if ( !v29 )
                goto LABEL_15;
            }
            v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_15:
            v31 = sub_1C1C7C0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v33 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
          if ( !v33 )
            sub_1BCAA3C(0LL, v32);
          while ( 1 )
          {
            v34 = *(_QWORD *)v33;
            v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
            {
              v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v35;
                v36 += 4;
                if ( !v35 )
                  goto LABEL_22;
              }
              v37 = v34 + 16LL * *v36 + 312;
            }
            else
            {
LABEL_22:
              v37 = sub_1C1C7C0(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
              break;
            v38 = *(_QWORD *)v33;
            v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
            {
              v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v40 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                --v39;
                v40 += 4;
                if ( !v39 )
                  goto LABEL_29;
              }
              v41 = v38 + 16LL * *v40 + 312;
            }
            else
            {
LABEL_29:
              v41 = sub_1C1C7C0(v33, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
            }
            v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
            v44 = v42;
            if ( !v42 )
              sub_1BCAA3C(0LL, v43);
            v45 = *(_QWORD *)v42;
            v46 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
            {
              v47 = (SimpleAnimation_State_c **)(*(_QWORD *)(v45 + 176) + 8LL);
              while ( *(v47 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v46;
                v47 += 2;
                if ( !v46 )
                  goto LABEL_36;
              }
              v48 = v45 + 16LL * (*(_DWORD *)v47 + 8) + 312;
            }
            else
            {
LABEL_36:
              v48 = sub_1C1C7C0(v42, SimpleAnimation_State_TypeInfo, 8LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v48)(v44, *(_QWORD *)(v48 + 8), 0.0);
          }
          v49 = *(_QWORD *)v33;
          v50 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
            {
              --v50;
              v51 += 4;
              if ( !v50 )
                goto LABEL_43;
            }
            v52 = v49 + 16LL * *v51 + 312;
          }
          else
          {
LABEL_43:
            v52 = sub_1C1C7C0(v33, System_IDisposable_TypeInfo, 0LL);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v33, *(_QWORD *)(v52 + 8));
          LODWORD(v25) = ComponentsInChildren_object__49324452->max_length;
          if ( (int)++v26 >= (int)v25 )
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
          v54 = 0;
          while ( v54 < (unsigned int)m_CancellationTokenSource )
          {
            States = (SimpleAnimation_o *)*((_QWORD *)&v24->fields.m_Graph + (int)v54);
            if ( !States )
              goto LABEL_92;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
            if ( !Enumerator )
              sub_1BCAA3C(0LL, v55);
            while ( 1 )
            {
              v57 = Enumerator->klass;
              v58 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
              {
                v59 = &v57->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v59 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v58;
                  v59 += 4;
                  if ( !v58 )
                    goto LABEL_60;
                }
                p_method = (__int64)&v57->vtable[*v59].method;
              }
              else
              {
LABEL_60:
                p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v61 = Enumerator->klass;
              v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
              {
                v63 = (System_Collections_IEnumerator_c **)&v61->_1.interfaceOffsets->offset;
                while ( *(v63 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v62;
                  v63 += 2;
                  if ( !v62 )
                    goto LABEL_67;
                }
                v64 = (__int64)&v61->vtable[*(_DWORD *)v63 + 1].method;
              }
              else
              {
LABEL_67:
                v64 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
              }
              v65 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v64)(
                                                      Enumerator,
                                                      *(_QWORD *)(v64 + 8));
              if ( !v65 )
                sub_1BCAA3C(0LL, v66);
              if ( v65->klass != UnityEngine_AnimationState_TypeInfo )
              {
                sub_1BCACFC(v65);
                v75 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
                v76 = v75;
                if ( v75 )
                {
                  v77 = *(_QWORD *)v75;
                  v78 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
                  {
                    v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v78;
                      v79 += 4;
                      if ( !v78 )
                        goto LABEL_99;
                    }
                    v80 = v77 + 16LL * *v79 + 312;
                  }
                  else
                  {
LABEL_99:
                    v80 = sub_1C1C7C0(v75, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8));
                }
                if ( v3 )
                  sub_1BCAA34(v3);
                sub_1CB5270();
              }
              UnityEngine_AnimationState__set_speed(v65, 0.0, 0LL);
            }
            v3 = 0LL;
            States = (SimpleAnimation_o *)sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v67 = States->klass;
              v68 = States;
              v69 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
              {
                v70 = &v67->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
                {
                  --v69;
                  v70 += 4;
                  if ( !v69 )
                    goto LABEL_77;
                }
                v71 = (__int64)(&v67->vtable._0_Equals.method + 2 * *v70);
              }
              else
              {
LABEL_77:
                v71 = sub_1C1C7C0(States, System_IDisposable_TypeInfo, 0LL);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v71)(
                                              v68,
                                              *(_QWORD *)(v71 + 8));
            }
            LODWORD(m_CancellationTokenSource) = v24->fields.m_CancellationTokenSource;
            if ( (int)++v54 >= (int)m_CancellationTokenSource )
              goto LABEL_85;
          }
LABEL_93:
          sub_1BCAA44(States, v23);
        }
      }
    }
LABEL_85:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_92:
      sub_1BCAA3C(States, v23);
    v72 = (int)States->fields.m_CancellationTokenSource;
    v73 = States;
    if ( v72 >= 1 )
    {
      v74 = 0;
      while ( v74 < v72 )
      {
        States = (SimpleAnimation_o *)*((_QWORD *)&v73->fields.m_Graph + (int)v74);
        if ( !States )
          goto LABEL_92;
        UnityEngine_ParticleSystem__Pause_70434472((UnityEngine_ParticleSystem_o *)States, 0LL);
        v72 = (int)v73->fields.m_CancellationTokenSource;
        if ( (int)++v74 >= v72 )
          return;
      }
      goto LABEL_93;
    }
  }
}