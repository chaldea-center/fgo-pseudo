void BattleRaidTurnStartEffect___ctor(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleRaidTurnStartEffect__resumeLimitTurnEffect(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  __int64 *v2; // x22
  System_Object_array *ComponentsInChildren_object__51202152; // x20
  SimpleAnimation_o *States; // x0
  SimpleAnimation_o *v6; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned int v8; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x22
  __int64 v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v34; // w24
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  System_Collections_IEnumerator_c *v40; // x8
  __int64 v41; // x9
  System_Collections_IEnumerator_c **v42; // x10
  __int64 v43; // x0
  UnityEngine_AnimationState_o *v44; // x0
  SimpleAnimation_c *v45; // x8
  SimpleAnimation_o *v46; // x20
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  int v50; // w8
  SimpleAnimation_o *v51; // x19
  unsigned int v52; // w20
  __int64 v53; // x0
  __int64 v54; // x20
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0

  v2 = &Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___;
  if ( (byte_4C3A509 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationState_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3A509 = 1;
  }
  ComponentsInChildren_object__51202152 = UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v6 = States;
  if ( ComponentsInChildren_object__51202152 && (max_length = ComponentsInChildren_object__51202152->max_length) != 0 )
  {
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      while ( v8 < (unsigned int)max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__51202152->m_Items[v8];
        if ( !States )
          goto LABEL_91;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0);
        if ( !States )
          goto LABEL_91;
        klass = States->klass;
        v10 = States;
        v11 = *(unsigned __int16 *)&States->klass->_2.rank;
        if ( *(_WORD *)&States->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v11;
            p_offset += 4;
            if ( !v11 )
              goto LABEL_14;
          }
          v13 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_14:
          v13 = sub_1C83438(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v14 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
        if ( !v14 )
          sub_1C32E7C(0);
        while ( 1 )
        {
          v15 = *(_QWORD *)v14;
          v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
          {
            v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v16;
              v17 += 4;
              if ( !v16 )
                goto LABEL_21;
            }
            v18 = v15 + 16LL * *v17 + 312;
          }
          else
          {
LABEL_21:
            v18 = sub_1C83438(v14, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
            break;
          v19 = *(_QWORD *)v14;
          v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
          {
            v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v21 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v20;
              v21 += 4;
              if ( !v20 )
                goto LABEL_28;
            }
            v22 = v19 + 16LL * *v21 + 312;
          }
          else
          {
LABEL_28:
            v22 = sub_1C83438(v14, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
          v24 = v23;
          if ( !v23 )
            sub_1C32E7C(0);
          v25 = *(_QWORD *)v23;
          v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v27 = (SimpleAnimation_State_c **)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v26;
              v27 += 2;
              if ( !v26 )
                goto LABEL_35;
            }
            v28 = v25 + 16LL * (*(_DWORD *)v27 + 8) + 312;
          }
          else
          {
LABEL_35:
            v28 = sub_1C83438(v23, SimpleAnimation_State_TypeInfo, 8);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v28)(v24, *(_QWORD *)(v28 + 8), 1.0);
        }
        v29 = *(_QWORD *)v14;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_42;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_42:
          v32 = sub_1C83438(v14, System_IDisposable_TypeInfo, 0);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v14, *(_QWORD *)(v32 + 8));
        LODWORD(max_length) = ComponentsInChildren_object__51202152->max_length;
        if ( (int)++v8 >= (int)max_length )
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
        v34 = 0;
        while ( v34 < (unsigned int)m_CancellationTokenSource )
        {
          States = (SimpleAnimation_o *)*(&v6->fields.m_Graph.fields.m_Handle + (int)v34);
          if ( !States )
            goto LABEL_91;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
          if ( !Enumerator )
            sub_1C32E7C(0);
          while ( 1 )
          {
            v36 = Enumerator->klass;
            v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v38 = &v36->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v37;
                v38 += 4;
                if ( !v37 )
                  goto LABEL_59;
              }
              v39 = (__int64)&v36->vtable[*v38];
            }
            else
            {
LABEL_59:
              v39 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v39)(
                    Enumerator,
                    *(_QWORD *)(v39 + 8))
                & 1) == 0 )
              break;
            v40 = Enumerator->klass;
            v41 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v42 = (System_Collections_IEnumerator_c **)&v40->_1.interfaceOffsets->offset;
              while ( *(v42 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v41;
                v42 += 2;
                if ( !v41 )
                  goto LABEL_66;
              }
              v43 = (__int64)&v40->vtable[*(_DWORD *)v42 + 1];
            }
            else
            {
LABEL_66:
              v43 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
            }
            v44 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v43)(
                                                    Enumerator,
                                                    *(_QWORD *)(v43 + 8));
            if ( !v44 )
              sub_1C32E7C(0);
            if ( v44->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1C3313C(v44);
              v53 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
              v54 = v53;
              if ( v53 )
              {
                v55 = *(_QWORD *)v53;
                v56 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
                {
                  v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v56;
                    v57 += 4;
                    if ( !v56 )
                      goto LABEL_98;
                  }
                  v58 = v55 + 16LL * *v57 + 312;
                }
                else
                {
LABEL_98:
                  v58 = sub_1C83438(v53, System_IDisposable_TypeInfo, 0);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8));
              }
              if ( v2 )
                sub_1C32E74(v2);
              sub_1D1BD54();
            }
            UnityEngine_AnimationState__set_speed(v44, 1.0, 0);
          }
          v2 = 0;
          States = (SimpleAnimation_o *)sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v45 = States->klass;
            v46 = States;
            v47 = *(unsigned __int16 *)&States->klass->_2.rank;
            if ( *(_WORD *)&States->klass->_2.rank )
            {
              v48 = &v45->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
              {
                --v47;
                v48 += 4;
                if ( !v47 )
                  goto LABEL_76;
              }
              v49 = (__int64)&v45->vtable + 16 * *v48;
            }
            else
            {
LABEL_76:
              v49 = sub_1C83438(States, System_IDisposable_TypeInfo, 0);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v49)(
                                            v46,
                                            *(_QWORD *)(v49 + 8));
          }
          LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
          if ( (int)++v34 >= (int)m_CancellationTokenSource )
            goto LABEL_84;
        }
LABEL_92:
        sub_1C32E84(States);
      }
    }
  }
LABEL_84:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_91:
    sub_1C32E7C(States);
  v50 = (int)States->fields.m_CancellationTokenSource;
  v51 = States;
  if ( v50 >= 1 )
  {
    v52 = 0;
    while ( v52 < v50 )
    {
      States = (SimpleAnimation_o *)*(&v51->fields.m_Graph.fields.m_Handle + (int)v52);
      if ( !States )
        goto LABEL_91;
      UnityEngine_ParticleSystem__Play_71507048((UnityEngine_ParticleSystem_o *)States, 0);
      v50 = (int)v51->fields.m_CancellationTokenSource;
      if ( (int)++v52 >= v50 )
        return;
    }
    goto LABEL_92;
  }
}


void BattleRaidTurnStartEffect__setStopFlg(BattleRaidTurnStartEffect_o *this, bool stopFlag, const MethodInfo *method)
{
  this->fields.animeStop = stopFlag;
}


void BattleRaidTurnStartEffect__waitLimitTurnEffect(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x22
  System_Object_array *ComponentsInChildren_object__51202152; // x20
  SimpleAnimation_o *States; // x0
  SimpleAnimation_o *v6; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned int v8; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x22
  __int64 v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v34; // w24
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  System_Collections_IEnumerator_c *v40; // x8
  __int64 v41; // x9
  System_Collections_IEnumerator_c **v42; // x10
  __int64 v43; // x0
  UnityEngine_AnimationState_o *v44; // x0
  SimpleAnimation_c *v45; // x8
  SimpleAnimation_o *v46; // x20
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  int v50; // w8
  SimpleAnimation_o *v51; // x19
  unsigned int v52; // w20
  __int64 v53; // x0
  __int64 v54; // x20
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0

  if ( (byte_4C3A508 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationState_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3A508 = 1;
  }
  if ( this->fields.animeStop )
  {
    ComponentsInChildren_object__51202152 = UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v6 = States;
    if ( ComponentsInChildren_object__51202152 && (max_length = ComponentsInChildren_object__51202152->max_length) != 0 )
    {
      if ( (int)max_length >= 1 )
      {
        v8 = 0;
        while ( v8 < (unsigned int)max_length )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_object__51202152->m_Items[v8];
          if ( !States )
            goto LABEL_92;
          States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0);
          if ( !States )
            goto LABEL_92;
          klass = States->klass;
          v10 = States;
          v11 = *(unsigned __int16 *)&States->klass->_2.rank;
          if ( *(_WORD *)&States->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              --v11;
              p_offset += 4;
              if ( !v11 )
                goto LABEL_15;
            }
            v13 = (__int64)&klass->vtable + 16 * *p_offset;
          }
          else
          {
LABEL_15:
            v13 = sub_1C83438(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
          }
          v14 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
          if ( !v14 )
            sub_1C32E7C(0);
          while ( 1 )
          {
            v15 = *(_QWORD *)v14;
            v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
            {
              v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v16;
                v17 += 4;
                if ( !v16 )
                  goto LABEL_22;
              }
              v18 = v15 + 16LL * *v17 + 312;
            }
            else
            {
LABEL_22:
              v18 = sub_1C83438(v14, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
              break;
            v19 = *(_QWORD *)v14;
            v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
            {
              v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v21 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                --v20;
                v21 += 4;
                if ( !v20 )
                  goto LABEL_29;
              }
              v22 = v19 + 16LL * *v21 + 312;
            }
            else
            {
LABEL_29:
              v22 = sub_1C83438(v14, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
            }
            v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
            v24 = v23;
            if ( !v23 )
              sub_1C32E7C(0);
            v25 = *(_QWORD *)v23;
            v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
            {
              v27 = (SimpleAnimation_State_c **)(*(_QWORD *)(v25 + 176) + 8LL);
              while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v26;
                v27 += 2;
                if ( !v26 )
                  goto LABEL_36;
              }
              v28 = v25 + 16LL * (*(_DWORD *)v27 + 8) + 312;
            }
            else
            {
LABEL_36:
              v28 = sub_1C83438(v23, SimpleAnimation_State_TypeInfo, 8);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v28)(v24, *(_QWORD *)(v28 + 8), 0.0);
          }
          v29 = *(_QWORD *)v14;
          v30 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
          {
            v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
            {
              --v30;
              v31 += 4;
              if ( !v30 )
                goto LABEL_43;
            }
            v32 = v29 + 16LL * *v31 + 312;
          }
          else
          {
LABEL_43:
            v32 = sub_1C83438(v14, System_IDisposable_TypeInfo, 0);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v14, *(_QWORD *)(v32 + 8));
          LODWORD(max_length) = ComponentsInChildren_object__51202152->max_length;
          if ( (int)++v8 >= (int)max_length )
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
          v34 = 0;
          while ( v34 < (unsigned int)m_CancellationTokenSource )
          {
            States = (SimpleAnimation_o *)*(&v6->fields.m_Graph.fields.m_Handle + (int)v34);
            if ( !States )
              goto LABEL_92;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
            if ( !Enumerator )
              sub_1C32E7C(0);
            while ( 1 )
            {
              v36 = Enumerator->klass;
              v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
              if ( *(_WORD *)&Enumerator->klass->_2.rank )
              {
                v38 = &v36->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v37;
                  v38 += 4;
                  if ( !v37 )
                    goto LABEL_60;
                }
                v39 = (__int64)&v36->vtable[*v38];
              }
              else
              {
LABEL_60:
                v39 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v39)(
                      Enumerator,
                      *(_QWORD *)(v39 + 8))
                  & 1) == 0 )
                break;
              v40 = Enumerator->klass;
              v41 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
              if ( *(_WORD *)&Enumerator->klass->_2.rank )
              {
                v42 = (System_Collections_IEnumerator_c **)&v40->_1.interfaceOffsets->offset;
                while ( *(v42 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v41;
                  v42 += 2;
                  if ( !v41 )
                    goto LABEL_67;
                }
                v43 = (__int64)&v40->vtable[*(_DWORD *)v42 + 1];
              }
              else
              {
LABEL_67:
                v43 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
              }
              v44 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v43)(
                                                      Enumerator,
                                                      *(_QWORD *)(v43 + 8));
              if ( !v44 )
                sub_1C32E7C(0);
              if ( v44->klass != UnityEngine_AnimationState_TypeInfo )
              {
                sub_1C3313C(v44);
                v53 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
                v54 = v53;
                if ( v53 )
                {
                  v55 = *(_QWORD *)v53;
                  v56 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
                  {
                    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v56;
                      v57 += 4;
                      if ( !v56 )
                        goto LABEL_99;
                    }
                    v58 = v55 + 16LL * *v57 + 312;
                  }
                  else
                  {
LABEL_99:
                    v58 = sub_1C83438(v53, System_IDisposable_TypeInfo, 0);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8));
                }
                if ( v2 )
                  sub_1C32E74(v2);
                sub_1D1BD54();
              }
              UnityEngine_AnimationState__set_speed(v44, 0.0, 0);
            }
            v2 = 0;
            States = (SimpleAnimation_o *)sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v45 = States->klass;
              v46 = States;
              v47 = *(unsigned __int16 *)&States->klass->_2.rank;
              if ( *(_WORD *)&States->klass->_2.rank )
              {
                v48 = &v45->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
                {
                  --v47;
                  v48 += 4;
                  if ( !v47 )
                    goto LABEL_77;
                }
                v49 = (__int64)&v45->vtable + 16 * *v48;
              }
              else
              {
LABEL_77:
                v49 = sub_1C83438(States, System_IDisposable_TypeInfo, 0);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v49)(
                                              v46,
                                              *(_QWORD *)(v49 + 8));
            }
            LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
            if ( (int)++v34 >= (int)m_CancellationTokenSource )
              goto LABEL_85;
          }
LABEL_93:
          sub_1C32E84(States);
        }
      }
    }
LABEL_85:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_92:
      sub_1C32E7C(States);
    v50 = (int)States->fields.m_CancellationTokenSource;
    v51 = States;
    if ( v50 >= 1 )
    {
      v52 = 0;
      while ( v52 < v50 )
      {
        States = (SimpleAnimation_o *)*(&v51->fields.m_Graph.fields.m_Handle + (int)v52);
        if ( !States )
          goto LABEL_92;
        UnityEngine_ParticleSystem__Pause_71507180((UnityEngine_ParticleSystem_o *)States, 0);
        v50 = (int)v51->fields.m_CancellationTokenSource;
        if ( (int)++v52 >= v50 )
          return;
      }
      goto LABEL_93;
    }
  }
}