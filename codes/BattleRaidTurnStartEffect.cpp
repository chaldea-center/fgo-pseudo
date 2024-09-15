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
  System_Object_array *ComponentsInChildren_object__48601372; // x20
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
  __int64 v23; // x1
  __int64 v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x22
  __int64 v36; // x8
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v45; // w24
  __int64 v46; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v52; // x8
  __int64 v53; // x9
  System_Collections_IEnumerator_c **v54; // x10
  __int64 v55; // x0
  UnityEngine_AnimationState_o *v56; // x0
  __int64 v57; // x1
  SimpleAnimation_c *v58; // x8
  SimpleAnimation_o *v59; // x20
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  int v63; // w8
  SimpleAnimation_o *v64; // x19
  unsigned int v65; // w20
  __int64 v66; // x0
  __int64 v67; // x20
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0

  v2 = &Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___;
  if ( (byte_4A30581 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v5);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v6);
    sub_1B761C0(&System_IDisposable_TypeInfo, v7);
    sub_1B761C0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v8);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B761C0(&SimpleAnimation_State_TypeInfo, v11);
    byte_4A30581 = 1;
  }
  ComponentsInChildren_object__48601372 = UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v15 = States;
  if ( ComponentsInChildren_object__48601372
    && (v16 = *(_QWORD *)&ComponentsInChildren_object__48601372->max_length) != 0 )
  {
    if ( (int)v16 >= 1 )
    {
      v17 = 0;
      while ( v17 < (unsigned int)v16 )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__48601372->m_Items[v17];
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
          v22 = sub_1BC81A0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v24 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
        if ( !v24 )
          sub_1B7641C(0LL, v23);
        while ( 1 )
        {
          v25 = *(_QWORD *)v24;
          v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v26;
              v27 += 4;
              if ( !v26 )
                goto LABEL_21;
            }
            v28 = v25 + 16LL * *v27 + 312;
          }
          else
          {
LABEL_21:
            v28 = sub_1BC81A0(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
            break;
          v29 = *(_QWORD *)v24;
          v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v31 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v30;
              v31 += 4;
              if ( !v30 )
                goto LABEL_28;
            }
            v32 = v29 + 16LL * *v31 + 312;
          }
          else
          {
LABEL_28:
            v32 = sub_1BC81A0(v24, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
          v35 = v33;
          if ( !v33 )
            sub_1B7641C(0LL, v34);
          v36 = *(_QWORD *)v33;
          v37 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
            while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v37;
              v38 += 2;
              if ( !v37 )
                goto LABEL_35;
            }
            v39 = v36 + 16LL * (*(_DWORD *)v38 + 8) + 312;
          }
          else
          {
LABEL_35:
            v39 = sub_1BC81A0(v33, SimpleAnimation_State_TypeInfo, 8LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v39)(v35, *(_QWORD *)(v39 + 8), 1.0);
        }
        v40 = *(_QWORD *)v24;
        v41 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_42;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_42:
          v43 = sub_1BC81A0(v24, System_IDisposable_TypeInfo, 0LL);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v24, *(_QWORD *)(v43 + 8));
        LODWORD(v16) = ComponentsInChildren_object__48601372->max_length;
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
        v45 = 0;
        while ( v45 < (unsigned int)m_CancellationTokenSource )
        {
          States = (SimpleAnimation_o *)*((_QWORD *)&v15->fields.m_Graph + (int)v45);
          if ( !States )
            goto LABEL_91;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_1B7641C(0LL, v46);
          while ( 1 )
          {
            v48 = Enumerator->klass;
            v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v50 = &v48->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v49;
                v50 += 4;
                if ( !v49 )
                  goto LABEL_59;
              }
              p_method = (__int64)&v48->vtable[*v50].method;
            }
            else
            {
LABEL_59:
              p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v52 = Enumerator->klass;
            v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v54 = (System_Collections_IEnumerator_c **)&v52->_1.interfaceOffsets->offset;
              while ( *(v54 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v53;
                v54 += 2;
                if ( !v53 )
                  goto LABEL_66;
              }
              v55 = (__int64)&v52->vtable[*(_DWORD *)v54 + 1].method;
            }
            else
            {
LABEL_66:
              v55 = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v56 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v55)(
                                                    Enumerator,
                                                    *(_QWORD *)(v55 + 8));
            if ( !v56 )
              sub_1B7641C(0LL, v57);
            if ( v56->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1B766DC(v56);
              v66 = sub_1B762FC(Enumerator, System_IDisposable_TypeInfo);
              v67 = v66;
              if ( v66 )
              {
                v68 = *(_QWORD *)v66;
                v69 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
                {
                  v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v69;
                    v70 += 4;
                    if ( !v69 )
                      goto LABEL_98;
                  }
                  v71 = v68 + 16LL * *v70 + 312;
                }
                else
                {
LABEL_98:
                  v71 = sub_1BC81A0(v66, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8));
              }
              if ( v2 )
                sub_1B76414(v2);
              sub_1C60C50();
            }
            UnityEngine_AnimationState__set_speed(v56, 1.0, 0LL);
          }
          v2 = 0LL;
          States = (SimpleAnimation_o *)sub_1B762FC(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v58 = States->klass;
            v59 = States;
            v60 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
            {
              v61 = &v58->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
              {
                --v60;
                v61 += 4;
                if ( !v60 )
                  goto LABEL_76;
              }
              v62 = (__int64)(&v58->vtable._0_Equals.method + 2 * *v61);
            }
            else
            {
LABEL_76:
              v62 = sub_1BC81A0(States, System_IDisposable_TypeInfo, 0LL);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v62)(
                                            v59,
                                            *(_QWORD *)(v62 + 8));
          }
          LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
          if ( (int)++v45 >= (int)m_CancellationTokenSource )
            goto LABEL_84;
        }
LABEL_92:
        sub_1B76424(States, v14);
      }
    }
  }
LABEL_84:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_91:
    sub_1B7641C(States, v14);
  v63 = (int)States->fields.m_CancellationTokenSource;
  v64 = States;
  if ( v63 >= 1 )
  {
    v65 = 0;
    while ( v65 < v63 )
    {
      States = (SimpleAnimation_o *)*((_QWORD *)&v64->fields.m_Graph + (int)v65);
      if ( !States )
        goto LABEL_91;
      UnityEngine_ParticleSystem__Play_69567544((UnityEngine_ParticleSystem_o *)States, 0LL);
      v63 = (int)v64->fields.m_CancellationTokenSource;
      if ( (int)++v65 >= v63 )
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
  System_Object_array *ComponentsInChildren_object__48601372; // x20
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
  __int64 v23; // x1
  __int64 v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x22
  __int64 v36; // x8
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v45; // w24
  __int64 v46; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v52; // x8
  __int64 v53; // x9
  System_Collections_IEnumerator_c **v54; // x10
  __int64 v55; // x0
  UnityEngine_AnimationState_o *v56; // x0
  __int64 v57; // x1
  SimpleAnimation_c *v58; // x8
  SimpleAnimation_o *v59; // x20
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  int v63; // w8
  SimpleAnimation_o *v64; // x19
  unsigned int v65; // w20
  __int64 v66; // x0
  __int64 v67; // x20
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0

  if ( (byte_4A30580 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v5);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v6);
    sub_1B761C0(&System_IDisposable_TypeInfo, v7);
    sub_1B761C0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v8);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B761C0(&SimpleAnimation_State_TypeInfo, v11);
    byte_4A30580 = 1;
  }
  if ( this->fields.animeStop )
  {
    ComponentsInChildren_object__48601372 = UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v15 = States;
    if ( ComponentsInChildren_object__48601372
      && (v16 = *(_QWORD *)&ComponentsInChildren_object__48601372->max_length) != 0 )
    {
      if ( (int)v16 >= 1 )
      {
        v17 = 0;
        while ( v17 < (unsigned int)v16 )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_object__48601372->m_Items[v17];
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
            v22 = sub_1BC81A0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v24 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
          if ( !v24 )
            sub_1B7641C(0LL, v23);
          while ( 1 )
          {
            v25 = *(_QWORD *)v24;
            v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
            {
              v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v26;
                v27 += 4;
                if ( !v26 )
                  goto LABEL_22;
              }
              v28 = v25 + 16LL * *v27 + 312;
            }
            else
            {
LABEL_22:
              v28 = sub_1BC81A0(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
              break;
            v29 = *(_QWORD *)v24;
            v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
            {
              v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v31 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                --v30;
                v31 += 4;
                if ( !v30 )
                  goto LABEL_29;
              }
              v32 = v29 + 16LL * *v31 + 312;
            }
            else
            {
LABEL_29:
              v32 = sub_1BC81A0(v24, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
            }
            v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
            v35 = v33;
            if ( !v33 )
              sub_1B7641C(0LL, v34);
            v36 = *(_QWORD *)v33;
            v37 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
            {
              v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
              while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v37;
                v38 += 2;
                if ( !v37 )
                  goto LABEL_36;
              }
              v39 = v36 + 16LL * (*(_DWORD *)v38 + 8) + 312;
            }
            else
            {
LABEL_36:
              v39 = sub_1BC81A0(v33, SimpleAnimation_State_TypeInfo, 8LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v39)(v35, *(_QWORD *)(v39 + 8), 0.0);
          }
          v40 = *(_QWORD *)v24;
          v41 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
            {
              --v41;
              v42 += 4;
              if ( !v41 )
                goto LABEL_43;
            }
            v43 = v40 + 16LL * *v42 + 312;
          }
          else
          {
LABEL_43:
            v43 = sub_1BC81A0(v24, System_IDisposable_TypeInfo, 0LL);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v24, *(_QWORD *)(v43 + 8));
          LODWORD(v16) = ComponentsInChildren_object__48601372->max_length;
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
          v45 = 0;
          while ( v45 < (unsigned int)m_CancellationTokenSource )
          {
            States = (SimpleAnimation_o *)*((_QWORD *)&v15->fields.m_Graph + (int)v45);
            if ( !States )
              goto LABEL_92;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
            if ( !Enumerator )
              sub_1B7641C(0LL, v46);
            while ( 1 )
            {
              v48 = Enumerator->klass;
              v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
              {
                v50 = &v48->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v49;
                  v50 += 4;
                  if ( !v49 )
                    goto LABEL_60;
                }
                p_method = (__int64)&v48->vtable[*v50].method;
              }
              else
              {
LABEL_60:
                p_method = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v52 = Enumerator->klass;
              v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
              {
                v54 = (System_Collections_IEnumerator_c **)&v52->_1.interfaceOffsets->offset;
                while ( *(v54 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v53;
                  v54 += 2;
                  if ( !v53 )
                    goto LABEL_67;
                }
                v55 = (__int64)&v52->vtable[*(_DWORD *)v54 + 1].method;
              }
              else
              {
LABEL_67:
                v55 = sub_1BC81A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
              }
              v56 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v55)(
                                                      Enumerator,
                                                      *(_QWORD *)(v55 + 8));
              if ( !v56 )
                sub_1B7641C(0LL, v57);
              if ( v56->klass != UnityEngine_AnimationState_TypeInfo )
              {
                sub_1B766DC(v56);
                v66 = sub_1B762FC(Enumerator, System_IDisposable_TypeInfo);
                v67 = v66;
                if ( v66 )
                {
                  v68 = *(_QWORD *)v66;
                  v69 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
                  {
                    v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v69;
                      v70 += 4;
                      if ( !v69 )
                        goto LABEL_99;
                    }
                    v71 = v68 + 16LL * *v70 + 312;
                  }
                  else
                  {
LABEL_99:
                    v71 = sub_1BC81A0(v66, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8));
                }
                if ( v2 )
                  sub_1B76414(v2);
                sub_1C60C50();
              }
              UnityEngine_AnimationState__set_speed(v56, 0.0, 0LL);
            }
            v2 = 0LL;
            States = (SimpleAnimation_o *)sub_1B762FC(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v58 = States->klass;
              v59 = States;
              v60 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
              {
                v61 = &v58->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
                {
                  --v60;
                  v61 += 4;
                  if ( !v60 )
                    goto LABEL_77;
                }
                v62 = (__int64)(&v58->vtable._0_Equals.method + 2 * *v61);
              }
              else
              {
LABEL_77:
                v62 = sub_1BC81A0(States, System_IDisposable_TypeInfo, 0LL);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v62)(
                                              v59,
                                              *(_QWORD *)(v62 + 8));
            }
            LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
            if ( (int)++v45 >= (int)m_CancellationTokenSource )
              goto LABEL_85;
          }
LABEL_93:
          sub_1B76424(States, v14);
        }
      }
    }
LABEL_85:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__48601372(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_92:
      sub_1B7641C(States, v14);
    v63 = (int)States->fields.m_CancellationTokenSource;
    v64 = States;
    if ( v63 >= 1 )
    {
      v65 = 0;
      while ( v65 < v63 )
      {
        States = (SimpleAnimation_o *)*((_QWORD *)&v64->fields.m_Graph + (int)v65);
        if ( !States )
          goto LABEL_92;
        UnityEngine_ParticleSystem__Pause_69567676((UnityEngine_ParticleSystem_o *)States, 0LL);
        v63 = (int)v64->fields.m_CancellationTokenSource;
        if ( (int)++v65 >= v63 )
          return;
      }
      goto LABEL_93;
    }
  }
}