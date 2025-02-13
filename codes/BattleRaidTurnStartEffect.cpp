void __fastcall BattleRaidTurnStartEffect___ctor(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRaidTurnStartEffect__resumeLimitTurnEffect(
        BattleRaidTurnStartEffect_o *this,
        const MethodInfo *method)
{
  __int64 *v2; // x22
  System_Object_array *ComponentsInChildren_object__49967896; // x20
  SimpleAnimation_o *States; // x0
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x21
  __int64 v8; // x8
  unsigned int v9; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x22
  __int64 v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v37; // w24
  __int64 v38; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v44; // x8
  __int64 v45; // x9
  System_Collections_IEnumerator_c **v46; // x10
  __int64 v47; // x0
  UnityEngine_AnimationState_o *v48; // x0
  __int64 v49; // x1
  SimpleAnimation_c *v50; // x8
  SimpleAnimation_o *v51; // x20
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  int v55; // w8
  SimpleAnimation_o *v56; // x19
  unsigned int v57; // w20
  __int64 v58; // x0
  __int64 v59; // x20
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0

  v2 = &Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___;
  if ( (byte_4BDECBF & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_AnimationState_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    byte_4BDECBF = 1;
  }
  ComponentsInChildren_object__49967896 = UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v7 = States;
  if ( ComponentsInChildren_object__49967896
    && (v8 = *(_QWORD *)&ComponentsInChildren_object__49967896->max_length) != 0 )
  {
    if ( (int)v8 >= 1 )
    {
      v9 = 0;
      while ( v9 < (unsigned int)v8 )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__49967896->m_Items[v9];
        if ( !States )
          goto LABEL_91;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_91;
        klass = States->klass;
        v11 = States;
        v12 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v12;
            p_offset += 4;
            if ( !v12 )
              goto LABEL_14;
          }
          v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v14 = sub_1C73E18(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v16 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
        if ( !v16 )
          sub_1C22094(0LL, v15);
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
          {
            v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v18;
              v19 += 4;
              if ( !v18 )
                goto LABEL_21;
            }
            v20 = v17 + 16LL * *v19 + 312;
          }
          else
          {
LABEL_21:
            v20 = sub_1C73E18(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
            break;
          v21 = *(_QWORD *)v16;
          v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
          {
            v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v23 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v22;
              v23 += 4;
              if ( !v22 )
                goto LABEL_28;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_28:
            v24 = sub_1C73E18(v16, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
          v27 = v25;
          if ( !v25 )
            sub_1C22094(0LL, v26);
          v28 = *(_QWORD *)v25;
          v29 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
          {
            v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v29;
              v30 += 2;
              if ( !v29 )
                goto LABEL_35;
            }
            v31 = v28 + 16LL * (*(_DWORD *)v30 + 8) + 312;
          }
          else
          {
LABEL_35:
            v31 = sub_1C73E18(v25, SimpleAnimation_State_TypeInfo, 8LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v31)(v27, *(_QWORD *)(v31 + 8), 1.0);
        }
        v32 = *(_QWORD *)v16;
        v33 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
        {
          v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
          {
            --v33;
            v34 += 4;
            if ( !v33 )
              goto LABEL_42;
          }
          v35 = v32 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_42:
          v35 = sub_1C73E18(v16, System_IDisposable_TypeInfo, 0LL);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v16, *(_QWORD *)(v35 + 8));
        LODWORD(v8) = ComponentsInChildren_object__49967896->max_length;
        if ( (int)++v9 >= (int)v8 )
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
        v37 = 0;
        while ( v37 < (unsigned int)m_CancellationTokenSource )
        {
          States = (SimpleAnimation_o *)*((_QWORD *)&v7->fields.m_Graph + (int)v37);
          if ( !States )
            goto LABEL_91;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_1C22094(0LL, v38);
          while ( 1 )
          {
            v40 = Enumerator->klass;
            v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v42 = &v40->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v41;
                v42 += 4;
                if ( !v41 )
                  goto LABEL_59;
              }
              p_method = (__int64)&v40->vtable[*v42].method;
            }
            else
            {
LABEL_59:
              p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v44 = Enumerator->klass;
            v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v46 = (System_Collections_IEnumerator_c **)&v44->_1.interfaceOffsets->offset;
              while ( *(v46 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v45;
                v46 += 2;
                if ( !v45 )
                  goto LABEL_66;
              }
              v47 = (__int64)&v44->vtable[*(_DWORD *)v46 + 1].method;
            }
            else
            {
LABEL_66:
              v47 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v48 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v47)(
                                                    Enumerator,
                                                    *(_QWORD *)(v47 + 8));
            if ( !v48 )
              sub_1C22094(0LL, v49);
            if ( v48->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1C22354(v48);
              v58 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
              v59 = v58;
              if ( v58 )
              {
                v60 = *(_QWORD *)v58;
                v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
                {
                  v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v61;
                    v62 += 4;
                    if ( !v61 )
                      goto LABEL_98;
                  }
                  v63 = v60 + 16LL * *v62 + 312;
                }
                else
                {
LABEL_98:
                  v63 = sub_1C73E18(v58, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8));
              }
              if ( v2 )
                sub_1C2208C(v2);
              sub_1D0C8C8();
            }
            UnityEngine_AnimationState__set_speed(v48, 1.0, 0LL);
          }
          v2 = 0LL;
          States = (SimpleAnimation_o *)sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v50 = States->klass;
            v51 = States;
            v52 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
            {
              v53 = &v50->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
              {
                --v52;
                v53 += 4;
                if ( !v52 )
                  goto LABEL_76;
              }
              v54 = (__int64)(&v50->vtable._0_Equals.method + 2 * *v53);
            }
            else
            {
LABEL_76:
              v54 = sub_1C73E18(States, System_IDisposable_TypeInfo, 0LL);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v54)(
                                            v51,
                                            *(_QWORD *)(v54 + 8));
          }
          LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
          if ( (int)++v37 >= (int)m_CancellationTokenSource )
            goto LABEL_84;
        }
LABEL_92:
        sub_1C2209C(States, v6);
      }
    }
  }
LABEL_84:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_91:
    sub_1C22094(States, v6);
  v55 = (int)States->fields.m_CancellationTokenSource;
  v56 = States;
  if ( v55 >= 1 )
  {
    v57 = 0;
    while ( v57 < v55 )
    {
      States = (SimpleAnimation_o *)*((_QWORD *)&v56->fields.m_Graph + (int)v57);
      if ( !States )
        goto LABEL_91;
      UnityEngine_ParticleSystem__Play_71149876((UnityEngine_ParticleSystem_o *)States, 0LL);
      v55 = (int)v56->fields.m_CancellationTokenSource;
      if ( (int)++v57 >= v55 )
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
  System_Object_array *ComponentsInChildren_object__49967896; // x20
  SimpleAnimation_o *States; // x0
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x21
  __int64 v8; // x8
  unsigned int v9; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x22
  __int64 v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v37; // w24
  __int64 v38; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v44; // x8
  __int64 v45; // x9
  System_Collections_IEnumerator_c **v46; // x10
  __int64 v47; // x0
  UnityEngine_AnimationState_o *v48; // x0
  __int64 v49; // x1
  SimpleAnimation_c *v50; // x8
  SimpleAnimation_o *v51; // x20
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  int v55; // w8
  SimpleAnimation_o *v56; // x19
  unsigned int v57; // w20
  __int64 v58; // x0
  __int64 v59; // x20
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0

  if ( (byte_4BDECBE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_AnimationState_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    byte_4BDECBE = 1;
  }
  if ( this->fields.animeStop )
  {
    ComponentsInChildren_object__49967896 = UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v7 = States;
    if ( ComponentsInChildren_object__49967896
      && (v8 = *(_QWORD *)&ComponentsInChildren_object__49967896->max_length) != 0 )
    {
      if ( (int)v8 >= 1 )
      {
        v9 = 0;
        while ( v9 < (unsigned int)v8 )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_object__49967896->m_Items[v9];
          if ( !States )
            goto LABEL_92;
          States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
          if ( !States )
            goto LABEL_92;
          klass = States->klass;
          v11 = States;
          v12 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              --v12;
              p_offset += 4;
              if ( !v12 )
                goto LABEL_15;
            }
            v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_15:
            v14 = sub_1C73E18(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v16 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
          if ( !v16 )
            sub_1C22094(0LL, v15);
          while ( 1 )
          {
            v17 = *(_QWORD *)v16;
            v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
            {
              v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v18;
                v19 += 4;
                if ( !v18 )
                  goto LABEL_22;
              }
              v20 = v17 + 16LL * *v19 + 312;
            }
            else
            {
LABEL_22:
              v20 = sub_1C73E18(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
              break;
            v21 = *(_QWORD *)v16;
            v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
            {
              v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v23 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                --v22;
                v23 += 4;
                if ( !v22 )
                  goto LABEL_29;
              }
              v24 = v21 + 16LL * *v23 + 312;
            }
            else
            {
LABEL_29:
              v24 = sub_1C73E18(v16, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
            }
            v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
            v27 = v25;
            if ( !v25 )
              sub_1C22094(0LL, v26);
            v28 = *(_QWORD *)v25;
            v29 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
            {
              v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v28 + 176) + 8LL);
              while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v29;
                v30 += 2;
                if ( !v29 )
                  goto LABEL_36;
              }
              v31 = v28 + 16LL * (*(_DWORD *)v30 + 8) + 312;
            }
            else
            {
LABEL_36:
              v31 = sub_1C73E18(v25, SimpleAnimation_State_TypeInfo, 8LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v31)(v27, *(_QWORD *)(v31 + 8), 0.0);
          }
          v32 = *(_QWORD *)v16;
          v33 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
          {
            v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
            {
              --v33;
              v34 += 4;
              if ( !v33 )
                goto LABEL_43;
            }
            v35 = v32 + 16LL * *v34 + 312;
          }
          else
          {
LABEL_43:
            v35 = sub_1C73E18(v16, System_IDisposable_TypeInfo, 0LL);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v16, *(_QWORD *)(v35 + 8));
          LODWORD(v8) = ComponentsInChildren_object__49967896->max_length;
          if ( (int)++v9 >= (int)v8 )
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
          v37 = 0;
          while ( v37 < (unsigned int)m_CancellationTokenSource )
          {
            States = (SimpleAnimation_o *)*((_QWORD *)&v7->fields.m_Graph + (int)v37);
            if ( !States )
              goto LABEL_92;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
            if ( !Enumerator )
              sub_1C22094(0LL, v38);
            while ( 1 )
            {
              v40 = Enumerator->klass;
              v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
              {
                v42 = &v40->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v41;
                  v42 += 4;
                  if ( !v41 )
                    goto LABEL_60;
                }
                p_method = (__int64)&v40->vtable[*v42].method;
              }
              else
              {
LABEL_60:
                p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v44 = Enumerator->klass;
              v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
              {
                v46 = (System_Collections_IEnumerator_c **)&v44->_1.interfaceOffsets->offset;
                while ( *(v46 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v45;
                  v46 += 2;
                  if ( !v45 )
                    goto LABEL_67;
                }
                v47 = (__int64)&v44->vtable[*(_DWORD *)v46 + 1].method;
              }
              else
              {
LABEL_67:
                v47 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
              }
              v48 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v47)(
                                                      Enumerator,
                                                      *(_QWORD *)(v47 + 8));
              if ( !v48 )
                sub_1C22094(0LL, v49);
              if ( v48->klass != UnityEngine_AnimationState_TypeInfo )
              {
                sub_1C22354(v48);
                v58 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
                v59 = v58;
                if ( v58 )
                {
                  v60 = *(_QWORD *)v58;
                  v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
                  {
                    v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v61;
                      v62 += 4;
                      if ( !v61 )
                        goto LABEL_99;
                    }
                    v63 = v60 + 16LL * *v62 + 312;
                  }
                  else
                  {
LABEL_99:
                    v63 = sub_1C73E18(v58, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8));
                }
                if ( v2 )
                  sub_1C2208C(v2);
                sub_1D0C8C8();
              }
              UnityEngine_AnimationState__set_speed(v48, 0.0, 0LL);
            }
            v2 = 0LL;
            States = (SimpleAnimation_o *)sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v50 = States->klass;
              v51 = States;
              v52 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
              {
                v53 = &v50->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
                {
                  --v52;
                  v53 += 4;
                  if ( !v52 )
                    goto LABEL_77;
                }
                v54 = (__int64)(&v50->vtable._0_Equals.method + 2 * *v53);
              }
              else
              {
LABEL_77:
                v54 = sub_1C73E18(States, System_IDisposable_TypeInfo, 0LL);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v54)(
                                              v51,
                                              *(_QWORD *)(v54 + 8));
            }
            LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
            if ( (int)++v37 >= (int)m_CancellationTokenSource )
              goto LABEL_85;
          }
LABEL_93:
          sub_1C2209C(States, v6);
        }
      }
    }
LABEL_85:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_92:
      sub_1C22094(States, v6);
    v55 = (int)States->fields.m_CancellationTokenSource;
    v56 = States;
    if ( v55 >= 1 )
    {
      v57 = 0;
      while ( v57 < v55 )
      {
        States = (SimpleAnimation_o *)*((_QWORD *)&v56->fields.m_Graph + (int)v57);
        if ( !States )
          goto LABEL_92;
        UnityEngine_ParticleSystem__Pause_71150008((UnityEngine_ParticleSystem_o *)States, 0LL);
        v55 = (int)v56->fields.m_CancellationTokenSource;
        if ( (int)++v57 >= v55 )
          return;
      }
      goto LABEL_93;
    }
  }
}