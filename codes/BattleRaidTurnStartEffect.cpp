void BattleRaidTurnStartEffect___ctor(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleRaidTurnStartEffect__resumeLimitTurnEffect(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  __int64 *v2; // x22
  System_Object_array *ComponentsInChildren_object__51142088; // x20
  SimpleAnimation_o *States; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  SimpleAnimation_o *v8; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned int v10; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v12; // x21
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x21
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x22
  __int64 v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v38; // w24
  __int64 v39; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  System_Collections_IEnumerator_c *v45; // x8
  __int64 v46; // x9
  System_Collections_IEnumerator_c **v47; // x10
  __int64 v48; // x0
  UnityEngine_AnimationState_o *v49; // x0
  __int64 v50; // x1
  SimpleAnimation_c *v51; // x8
  SimpleAnimation_o *v52; // x20
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  int v56; // w8
  SimpleAnimation_o *v57; // x19
  unsigned int v58; // w20
  __int64 v59; // x0
  __int64 v60; // x20
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0

  v2 = &Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___;
  if ( (byte_4C29DF7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_AnimationState_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C29DF7 = 1;
  }
  ComponentsInChildren_object__51142088 = UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v8 = States;
  if ( ComponentsInChildren_object__51142088 && (max_length = ComponentsInChildren_object__51142088->max_length) != 0 )
  {
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      while ( v10 < (unsigned int)max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__51142088->m_Items[v10];
        if ( !States )
          goto LABEL_91;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0);
        if ( !States )
          goto LABEL_91;
        klass = States->klass;
        v12 = States;
        v13 = *(unsigned __int16 *)&States->klass->_2.rank;
        if ( *(_WORD *)&States->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v13;
            p_offset += 4;
            if ( !v13 )
              goto LABEL_14;
          }
          v15 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_14:
          v15 = sub_1C7DCA8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v17 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
        if ( !v17 )
          sub_1C2D6EC(0, v16);
        while ( 1 )
        {
          v18 = *(_QWORD *)v17;
          v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
          {
            v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v19;
              v20 += 4;
              if ( !v19 )
                goto LABEL_21;
            }
            v21 = v18 + 16LL * *v20 + 312;
          }
          else
          {
LABEL_21:
            v21 = sub_1C7DCA8(v17, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
            break;
          v22 = *(_QWORD *)v17;
          v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
          {
            v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v24 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v23;
              v24 += 4;
              if ( !v23 )
                goto LABEL_28;
            }
            v25 = v22 + 16LL * *v24 + 312;
          }
          else
          {
LABEL_28:
            v25 = sub_1C7DCA8(v17, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
          v28 = v26;
          if ( !v26 )
            sub_1C2D6EC(0, v27);
          v29 = *(_QWORD *)v26;
          v30 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
          {
            v31 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v30;
              v31 += 2;
              if ( !v30 )
                goto LABEL_35;
            }
            v32 = v29 + 16LL * (*(_DWORD *)v31 + 8) + 312;
          }
          else
          {
LABEL_35:
            v32 = sub_1C7DCA8(v26, SimpleAnimation_State_TypeInfo, 8);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 1.0);
        }
        v33 = *(_QWORD *)v17;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
        {
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
          {
            --v34;
            v35 += 4;
            if ( !v34 )
              goto LABEL_42;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_42:
          v36 = sub_1C7DCA8(v17, System_IDisposable_TypeInfo, 0);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v17, *(_QWORD *)(v36 + 8));
        LODWORD(max_length) = ComponentsInChildren_object__51142088->max_length;
        if ( (int)++v10 >= (int)max_length )
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
        v38 = 0;
        while ( v38 < (unsigned int)m_CancellationTokenSource )
        {
          States = (SimpleAnimation_o *)*(&v8->fields.m_Graph.fields.m_Handle + (int)v38);
          if ( !States )
            goto LABEL_91;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
          if ( !Enumerator )
            sub_1C2D6EC(0, v39);
          while ( 1 )
          {
            v41 = Enumerator->klass;
            v42 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v43 = &v41->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v42;
                v43 += 4;
                if ( !v42 )
                  goto LABEL_59;
              }
              v44 = (__int64)&v41->vtable[*v43];
            }
            else
            {
LABEL_59:
              v44 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v44)(
                    Enumerator,
                    *(_QWORD *)(v44 + 8))
                & 1) == 0 )
              break;
            v45 = Enumerator->klass;
            v46 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v47 = (System_Collections_IEnumerator_c **)&v45->_1.interfaceOffsets->offset;
              while ( *(v47 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v46;
                v47 += 2;
                if ( !v46 )
                  goto LABEL_66;
              }
              v48 = (__int64)&v45->vtable[*(_DWORD *)v47 + 1];
            }
            else
            {
LABEL_66:
              v48 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
            }
            v49 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v48)(
                                                    Enumerator,
                                                    *(_QWORD *)(v48 + 8));
            if ( !v49 )
              sub_1C2D6EC(0, v50);
            if ( v49->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1C2D9AC(v49);
              v59 = sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
              v60 = v59;
              if ( v59 )
              {
                v61 = *(_QWORD *)v59;
                v62 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
                {
                  v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v62;
                    v63 += 4;
                    if ( !v62 )
                      goto LABEL_98;
                  }
                  v64 = v61 + 16LL * *v63 + 312;
                }
                else
                {
LABEL_98:
                  v64 = sub_1C7DCA8(v59, System_IDisposable_TypeInfo, 0);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v64)(v60, *(_QWORD *)(v64 + 8));
              }
              if ( v2 )
                sub_1C2D6E4(v2);
              sub_1D165C4();
            }
            UnityEngine_AnimationState__set_speed(v49, 1.0, 0);
          }
          v2 = 0;
          States = (SimpleAnimation_o *)sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v51 = States->klass;
            v52 = States;
            v53 = *(unsigned __int16 *)&States->klass->_2.rank;
            if ( *(_WORD *)&States->klass->_2.rank )
            {
              v54 = &v51->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
              {
                --v53;
                v54 += 4;
                if ( !v53 )
                  goto LABEL_76;
              }
              v55 = (__int64)&v51->vtable + 16 * *v54;
            }
            else
            {
LABEL_76:
              v55 = sub_1C7DCA8(States, System_IDisposable_TypeInfo, 0);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v55)(
                                            v52,
                                            *(_QWORD *)(v55 + 8));
          }
          LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
          if ( (int)++v38 >= (int)m_CancellationTokenSource )
            goto LABEL_84;
        }
LABEL_92:
        sub_1C2D6F4(States, v6, v7);
      }
    }
  }
LABEL_84:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_91:
    sub_1C2D6EC(States, v6);
  v56 = (int)States->fields.m_CancellationTokenSource;
  v57 = States;
  if ( v56 >= 1 )
  {
    v58 = 0;
    while ( v58 < v56 )
    {
      States = (SimpleAnimation_o *)*(&v57->fields.m_Graph.fields.m_Handle + (int)v58);
      if ( !States )
        goto LABEL_91;
      UnityEngine_ParticleSystem__Play_71447112((UnityEngine_ParticleSystem_o *)States, 0);
      v56 = (int)v57->fields.m_CancellationTokenSource;
      if ( (int)++v58 >= v56 )
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
  System_Object_array *ComponentsInChildren_object__51142088; // x20
  SimpleAnimation_o *States; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  SimpleAnimation_o *v8; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned int v10; // w24
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v12; // x21
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x21
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x22
  __int64 v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned int v38; // w24
  __int64 v39; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  System_Collections_IEnumerator_c *v45; // x8
  __int64 v46; // x9
  System_Collections_IEnumerator_c **v47; // x10
  __int64 v48; // x0
  UnityEngine_AnimationState_o *v49; // x0
  __int64 v50; // x1
  SimpleAnimation_c *v51; // x8
  SimpleAnimation_o *v52; // x20
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  int v56; // w8
  SimpleAnimation_o *v57; // x19
  unsigned int v58; // w20
  __int64 v59; // x0
  __int64 v60; // x20
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0

  if ( (byte_4C29DF6 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_AnimationState_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C29DF6 = 1;
  }
  if ( this->fields.animeStop )
  {
    ComponentsInChildren_object__51142088 = UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v8 = States;
    if ( ComponentsInChildren_object__51142088 && (max_length = ComponentsInChildren_object__51142088->max_length) != 0 )
    {
      if ( (int)max_length >= 1 )
      {
        v10 = 0;
        while ( v10 < (unsigned int)max_length )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_object__51142088->m_Items[v10];
          if ( !States )
            goto LABEL_92;
          States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0);
          if ( !States )
            goto LABEL_92;
          klass = States->klass;
          v12 = States;
          v13 = *(unsigned __int16 *)&States->klass->_2.rank;
          if ( *(_WORD *)&States->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              --v13;
              p_offset += 4;
              if ( !v13 )
                goto LABEL_15;
            }
            v15 = (__int64)&klass->vtable + 16 * *p_offset;
          }
          else
          {
LABEL_15:
            v15 = sub_1C7DCA8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
          }
          v17 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
          if ( !v17 )
            sub_1C2D6EC(0, v16);
          while ( 1 )
          {
            v18 = *(_QWORD *)v17;
            v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
            {
              v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v19;
                v20 += 4;
                if ( !v19 )
                  goto LABEL_22;
              }
              v21 = v18 + 16LL * *v20 + 312;
            }
            else
            {
LABEL_22:
              v21 = sub_1C7DCA8(v17, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
              break;
            v22 = *(_QWORD *)v17;
            v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
            {
              v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v24 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                --v23;
                v24 += 4;
                if ( !v23 )
                  goto LABEL_29;
              }
              v25 = v22 + 16LL * *v24 + 312;
            }
            else
            {
LABEL_29:
              v25 = sub_1C7DCA8(v17, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
            }
            v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
            v28 = v26;
            if ( !v26 )
              sub_1C2D6EC(0, v27);
            v29 = *(_QWORD *)v26;
            v30 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
            {
              v31 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
              while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v30;
                v31 += 2;
                if ( !v30 )
                  goto LABEL_36;
              }
              v32 = v29 + 16LL * (*(_DWORD *)v31 + 8) + 312;
            }
            else
            {
LABEL_36:
              v32 = sub_1C7DCA8(v26, SimpleAnimation_State_TypeInfo, 8);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 0.0);
          }
          v33 = *(_QWORD *)v17;
          v34 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
          {
            v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
            {
              --v34;
              v35 += 4;
              if ( !v34 )
                goto LABEL_43;
            }
            v36 = v33 + 16LL * *v35 + 312;
          }
          else
          {
LABEL_43:
            v36 = sub_1C7DCA8(v17, System_IDisposable_TypeInfo, 0);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v17, *(_QWORD *)(v36 + 8));
          LODWORD(max_length) = ComponentsInChildren_object__51142088->max_length;
          if ( (int)++v10 >= (int)max_length )
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
          v38 = 0;
          while ( v38 < (unsigned int)m_CancellationTokenSource )
          {
            States = (SimpleAnimation_o *)*(&v8->fields.m_Graph.fields.m_Handle + (int)v38);
            if ( !States )
              goto LABEL_92;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
            if ( !Enumerator )
              sub_1C2D6EC(0, v39);
            while ( 1 )
            {
              v41 = Enumerator->klass;
              v42 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
              if ( *(_WORD *)&Enumerator->klass->_2.rank )
              {
                v43 = &v41->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v42;
                  v43 += 4;
                  if ( !v42 )
                    goto LABEL_60;
                }
                v44 = (__int64)&v41->vtable[*v43];
              }
              else
              {
LABEL_60:
                v44 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v44)(
                      Enumerator,
                      *(_QWORD *)(v44 + 8))
                  & 1) == 0 )
                break;
              v45 = Enumerator->klass;
              v46 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
              if ( *(_WORD *)&Enumerator->klass->_2.rank )
              {
                v47 = (System_Collections_IEnumerator_c **)&v45->_1.interfaceOffsets->offset;
                while ( *(v47 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v46;
                  v47 += 2;
                  if ( !v46 )
                    goto LABEL_67;
                }
                v48 = (__int64)&v45->vtable[*(_DWORD *)v47 + 1];
              }
              else
              {
LABEL_67:
                v48 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
              }
              v49 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v48)(
                                                      Enumerator,
                                                      *(_QWORD *)(v48 + 8));
              if ( !v49 )
                sub_1C2D6EC(0, v50);
              if ( v49->klass != UnityEngine_AnimationState_TypeInfo )
              {
                sub_1C2D9AC(v49);
                v59 = sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
                v60 = v59;
                if ( v59 )
                {
                  v61 = *(_QWORD *)v59;
                  v62 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
                  {
                    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v62;
                      v63 += 4;
                      if ( !v62 )
                        goto LABEL_99;
                    }
                    v64 = v61 + 16LL * *v63 + 312;
                  }
                  else
                  {
LABEL_99:
                    v64 = sub_1C7DCA8(v59, System_IDisposable_TypeInfo, 0);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v64)(v60, *(_QWORD *)(v64 + 8));
                }
                if ( v2 )
                  sub_1C2D6E4(v2);
                sub_1D165C4();
              }
              UnityEngine_AnimationState__set_speed(v49, 0.0, 0);
            }
            v2 = 0;
            States = (SimpleAnimation_o *)sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v51 = States->klass;
              v52 = States;
              v53 = *(unsigned __int16 *)&States->klass->_2.rank;
              if ( *(_WORD *)&States->klass->_2.rank )
              {
                v54 = &v51->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
                {
                  --v53;
                  v54 += 4;
                  if ( !v53 )
                    goto LABEL_77;
                }
                v55 = (__int64)&v51->vtable + 16 * *v54;
              }
              else
              {
LABEL_77:
                v55 = sub_1C7DCA8(States, System_IDisposable_TypeInfo, 0);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v55)(
                                              v52,
                                              *(_QWORD *)(v55 + 8));
            }
            LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
            if ( (int)++v38 >= (int)m_CancellationTokenSource )
              goto LABEL_85;
          }
LABEL_93:
          sub_1C2D6F4(States, v6, v7);
        }
      }
    }
LABEL_85:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_92:
      sub_1C2D6EC(States, v6);
    v56 = (int)States->fields.m_CancellationTokenSource;
    v57 = States;
    if ( v56 >= 1 )
    {
      v58 = 0;
      while ( v58 < v56 )
      {
        States = (SimpleAnimation_o *)*(&v57->fields.m_Graph.fields.m_Handle + (int)v58);
        if ( !States )
          goto LABEL_92;
        UnityEngine_ParticleSystem__Pause_71447244((UnityEngine_ParticleSystem_o *)States, 0);
        v56 = (int)v57->fields.m_CancellationTokenSource;
        if ( (int)++v58 >= v56 )
          return;
      }
      goto LABEL_93;
    }
  }
}