void __fastcall BattleRaidTurnStartEffect___ctor(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRaidTurnStartEffect__resumeLimitTurnEffect(
        BattleRaidTurnStartEffect_o *this,
        const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x20
  SimpleAnimation_o *States; // x0
  SimpleAnimation_o *v14; // x21
  __int64 v15; // x8
  int v16; // w26
  unsigned int v17; // w23
  __int64 v18; // x8
  int v19; // w27
  unsigned int v20; // w19
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v22; // x21
  unsigned __int64 v23; // x10
  int *p_offset; // x11
  __int64 v25; // x0
  __int64 v26; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x22
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  SimpleAnimation_State_c **v39; // x11
  __int64 v40; // x0
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  int v45; // w8
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v51; // x8
  unsigned __int64 v52; // x10
  System_Collections_IEnumerator_c **v53; // x11
  __int64 v54; // x0
  UnityEngine_AnimationState_o *v55; // x0
  SimpleAnimation_c *v56; // x8
  SimpleAnimation_o *v57; // x20
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  int v61; // w8
  int m_Version; // w8
  SimpleAnimation_o *v63; // x19
  unsigned int v64; // w20
  __int64 v65; // x0
  _DWORD v66[2]; // [xsp+0h] [xbp-70h]
  int v67; // [xsp+8h] [xbp-68h]
  UnityEngine_Component_o *v68; // [xsp+18h] [xbp-58h]

  if ( (byte_4215206 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v5);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v11);
    byte_4215206 = 1;
  }
  v67 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v68 = (UnityEngine_Component_o *)this;
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v14 = States;
  if ( ComponentsInChildren_USTimelineContainer
    && (v15 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
  {
    if ( (int)v15 >= 1 )
    {
      v16 = 0;
      v17 = 0;
      LODWORD(v2) = 1.0;
      while ( v17 < (unsigned int)v15 )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v17];
        if ( !States )
          goto LABEL_98;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_98;
        klass = States->klass;
        v22 = States;
        if ( *(_WORD *)&States->klass->_2.bitflags1 )
        {
          v23 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v23;
            p_offset += 4;
            if ( v23 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
              goto LABEL_20;
          }
          v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_20:
          v25 = sub_AA67A0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v26 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
        if ( !v26 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
          v27 = *(_QWORD *)v26;
          if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
          {
            v28 = 0LL;
            v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
                goto LABEL_27;
            }
            v30 = v27 + 16LL * *v29 + 312;
          }
          else
          {
LABEL_27:
            v30 = sub_AA67A0(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
            break;
          v31 = *(_QWORD *)v26;
          if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
          {
            v32 = 0LL;
            v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v33 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
                goto LABEL_34;
            }
            v34 = v31 + 16LL * *v33 + 312;
          }
          else
          {
LABEL_34:
            v34 = sub_AA67A0(v26, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
          v36 = v35;
          if ( !v35 )
            sub_B0D97C(0LL);
          v37 = *(_QWORD *)v35;
          if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
          {
            v38 = 0LL;
            v39 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
            while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v38;
              v39 += 2;
              if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
                goto LABEL_41;
            }
            v40 = v37 + 16LL * (*(_DWORD *)v39 + 8) + 312;
          }
          else
          {
LABEL_41:
            v40 = sub_AA67A0(v35, SimpleAnimation_State_TypeInfo, 8LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v40)(v36, *(_QWORD *)(v40 + 8), v2);
        }
        v66[v16] = 84;
        v16 = ++v67;
        v41 = *(_QWORD *)v26;
        if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
        {
          v42 = 0LL;
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
          {
            ++v42;
            v43 += 4;
            if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
              goto LABEL_49;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_49:
          v44 = sub_AA67A0(v26, System_IDisposable_TypeInfo, 0LL);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v26, *(_QWORD *)(v44 + 8));
        if ( v16 )
        {
          v45 = v16 - 1;
          if ( v66[v16 - 1] == 84 )
          {
            --v16;
            v67 = v45;
          }
        }
        LODWORD(v15) = ComponentsInChildren_USTimelineContainer->max_length;
        if ( (int)++v17 >= (int)v15 )
          goto LABEL_91;
      }
      goto LABEL_99;
    }
  }
  else if ( States )
  {
    v18 = *(_QWORD *)&States->fields.m_Graph.fields.m_Version;
    if ( v18 )
    {
      if ( (int)v18 >= 1 )
      {
        v19 = 0;
        v20 = 0;
        while ( v20 < (unsigned int)v18 )
        {
          States = (SimpleAnimation_o *)*((_QWORD *)&v14->fields.m_LayerMixer.fields.m_Version + (int)v20);
          if ( !States )
            goto LABEL_98;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_B0D97C(0LL);
          while ( 1 )
          {
            v47 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v48 = 0LL;
              v49 = &v47->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v48;
                v49 += 4;
                if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_67;
              }
              p_method = (__int64)&v47->vtable[*v49].method;
            }
            else
            {
LABEL_67:
              p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v51 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v52 = 0LL;
              v53 = (System_Collections_IEnumerator_c **)&v51->_1.interfaceOffsets->offset;
              while ( *(v53 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v52;
                v53 += 2;
                if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_74;
              }
              v54 = (__int64)&v51->vtable[*(_DWORD *)v53 + 1].method;
            }
            else
            {
LABEL_74:
              v54 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v55 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v54)(
                                                    Enumerator,
                                                    *(_QWORD *)(v54 + 8));
            if ( !v55 )
              sub_B0D97C(0LL);
            if ( v55->klass != UnityEngine_AnimationState_TypeInfo )
            {
              States = (SimpleAnimation_o *)sub_B0DC70(v55);
              goto LABEL_98;
            }
            UnityEngine_AnimationState__set_speed(v55, 1.0, 0LL);
          }
          v66[v19] = 177;
          v19 = ++v67;
          States = (SimpleAnimation_o *)sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v56 = States->klass;
            v57 = States;
            if ( *(_WORD *)&States->klass->_2.bitflags1 )
            {
              v58 = 0LL;
              v59 = &v56->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
              {
                ++v58;
                v59 += 4;
                if ( v58 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                  goto LABEL_84;
              }
              v60 = (__int64)(&v56->vtable._0_Equals.method + 2 * *v59);
            }
            else
            {
LABEL_84:
              v60 = sub_AA67A0(States, System_IDisposable_TypeInfo, 0LL);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v60)(
                                            v57,
                                            *(_QWORD *)(v60 + 8));
          }
          if ( v19 )
          {
            v61 = v19 - 1;
            if ( v66[v19 - 1] == 177 )
            {
              --v19;
              v67 = v61;
            }
          }
          LODWORD(v18) = v14->fields.m_Graph.fields.m_Version;
          if ( (int)++v20 >= (int)v18 )
            goto LABEL_91;
        }
LABEL_99:
        v65 = sub_B0D9A8(States);
        sub_B0D948(v65, 0LL);
      }
    }
  }
LABEL_91:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                  v68,
                                  (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_98:
    sub_B0D97C(States);
  m_Version = States->fields.m_Graph.fields.m_Version;
  v63 = States;
  if ( m_Version >= 1 )
  {
    v64 = 0;
    while ( v64 < m_Version )
    {
      States = (SimpleAnimation_o *)*((_QWORD *)&v63->fields.m_LayerMixer.fields.m_Version + (int)v64);
      if ( !States )
        goto LABEL_98;
      UnityEngine_ParticleSystem__Play_50661492((UnityEngine_ParticleSystem_o *)States, 0LL);
      m_Version = v63->fields.m_Graph.fields.m_Version;
      if ( (int)++v64 >= m_Version )
        return;
    }
    goto LABEL_99;
  }
}


void __fastcall BattleRaidTurnStartEffect__setStopFlg(
        BattleRaidTurnStartEffect_o *this,
        bool stopFlag,
        const MethodInfo *method)
{
  LOBYTE(this[1].klass) = stopFlag;
}


void __fastcall BattleRaidTurnStartEffect__waitLimitTurnEffect(
        BattleRaidTurnStartEffect_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x20
  SimpleAnimation_o *States; // x0
  SimpleAnimation_o *v13; // x21
  __int64 v14; // x8
  int v15; // w19
  unsigned int v16; // w23
  __int64 v17; // x8
  int v18; // w27
  unsigned int v19; // w19
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v21; // x21
  unsigned __int64 v22; // x10
  int *p_offset; // x11
  __int64 v24; // x0
  __int64 v25; // x21
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x22
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  SimpleAnimation_State_c **v38; // x11
  __int64 v39; // x0
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  int v44; // w8
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v50; // x8
  unsigned __int64 v51; // x10
  System_Collections_IEnumerator_c **v52; // x11
  __int64 v53; // x0
  UnityEngine_AnimationState_o *v54; // x0
  SimpleAnimation_c *v55; // x8
  SimpleAnimation_o *v56; // x20
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  int v60; // w8
  int m_Version; // w8
  SimpleAnimation_o *v62; // x19
  unsigned int v63; // w20
  __int64 v64; // x0
  UnityEngine_Component_o *v65; // [xsp+8h] [xbp-68h]
  _DWORD v66[2]; // [xsp+10h] [xbp-60h]
  int v67; // [xsp+18h] [xbp-58h]

  if ( (byte_4215205 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v4);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v10);
    byte_4215205 = 1;
  }
  v67 = 0;
  if ( LOBYTE(this[1].klass) )
  {
    ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    v65 = (UnityEngine_Component_o *)this;
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v13 = States;
    if ( ComponentsInChildren_USTimelineContainer
      && (v14 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
    {
      if ( (int)v14 >= 1 )
      {
        v15 = 0;
        v16 = 0;
        while ( v16 < (unsigned int)v14 )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v16];
          if ( !States )
            goto LABEL_99;
          States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
          if ( !States )
            goto LABEL_99;
          klass = States->klass;
          v21 = States;
          if ( *(_WORD *)&States->klass->_2.bitflags1 )
          {
            v22 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              ++v22;
              p_offset += 4;
              if ( v22 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                goto LABEL_21;
            }
            v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_21:
            v24 = sub_AA67A0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v25 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
          if ( !v25 )
            sub_B0D97C(0LL);
          while ( 1 )
          {
            v26 = *(_QWORD *)v25;
            if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
            {
              v27 = 0LL;
              v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v27;
                v28 += 4;
                if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                  goto LABEL_28;
              }
              v29 = v26 + 16LL * *v28 + 312;
            }
            else
            {
LABEL_28:
              v29 = sub_AA67A0(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
              break;
            v30 = *(_QWORD *)v25;
            if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
            {
              v31 = 0LL;
              v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v32 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                ++v31;
                v32 += 4;
                if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                  goto LABEL_35;
              }
              v33 = v30 + 16LL * *v32 + 312;
            }
            else
            {
LABEL_35:
              v33 = sub_AA67A0(v25, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
            }
            v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
            v35 = v34;
            if ( !v34 )
              sub_B0D97C(0LL);
            v36 = *(_QWORD *)v34;
            if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
            {
              v37 = 0LL;
              v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
              while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v37;
                v38 += 2;
                if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
                  goto LABEL_42;
              }
              v39 = v36 + 16LL * (*(_DWORD *)v38 + 8) + 312;
            }
            else
            {
LABEL_42:
              v39 = sub_AA67A0(v34, SimpleAnimation_State_TypeInfo, 8LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v39)(v35, *(_QWORD *)(v39 + 8), 0.0);
          }
          v66[v15] = 95;
          v15 = ++v67;
          v40 = *(_QWORD *)v25;
          if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
          {
            v41 = 0LL;
            v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
            {
              ++v41;
              v42 += 4;
              if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                goto LABEL_50;
            }
            v43 = v40 + 16LL * *v42 + 312;
          }
          else
          {
LABEL_50:
            v43 = sub_AA67A0(v25, System_IDisposable_TypeInfo, 0LL);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v25, *(_QWORD *)(v43 + 8));
          if ( v15 )
          {
            v44 = v15 - 1;
            if ( v66[v15 - 1] == 95 )
            {
              --v15;
              v67 = v44;
            }
          }
          LODWORD(v14) = ComponentsInChildren_USTimelineContainer->max_length;
          if ( (int)++v16 >= (int)v14 )
            goto LABEL_92;
        }
        goto LABEL_100;
      }
    }
    else if ( States )
    {
      v17 = *(_QWORD *)&States->fields.m_Graph.fields.m_Version;
      if ( v17 )
      {
        if ( (int)v17 >= 1 )
        {
          v18 = 0;
          v19 = 0;
          while ( v19 < (unsigned int)v17 )
          {
            States = (SimpleAnimation_o *)*((_QWORD *)&v13->fields.m_LayerMixer.fields.m_Version + (int)v19);
            if ( !States )
              goto LABEL_99;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
            if ( !Enumerator )
              sub_B0D97C(0LL);
            while ( 1 )
            {
              v46 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v47 = 0LL;
                v48 = &v46->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v47;
                  v48 += 4;
                  if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_68;
                }
                p_method = (__int64)&v46->vtable[*v48].method;
              }
              else
              {
LABEL_68:
                p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v50 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v51 = 0LL;
                v52 = (System_Collections_IEnumerator_c **)&v50->_1.interfaceOffsets->offset;
                while ( *(v52 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v51;
                  v52 += 2;
                  if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_75;
                }
                v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 1].method;
              }
              else
              {
LABEL_75:
                v53 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
              }
              v54 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v53)(
                                                      Enumerator,
                                                      *(_QWORD *)(v53 + 8));
              if ( !v54 )
                sub_B0D97C(0LL);
              if ( v54->klass != UnityEngine_AnimationState_TypeInfo )
              {
                States = (SimpleAnimation_o *)sub_B0DC70(v54);
                goto LABEL_99;
              }
              UnityEngine_AnimationState__set_speed(v54, 0.0, 0LL);
            }
            v66[v18] = 188;
            v18 = ++v67;
            States = (SimpleAnimation_o *)sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v55 = States->klass;
              v56 = States;
              if ( *(_WORD *)&States->klass->_2.bitflags1 )
              {
                v57 = 0LL;
                v58 = &v55->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
                {
                  ++v57;
                  v58 += 4;
                  if ( v57 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                    goto LABEL_85;
                }
                v59 = (__int64)(&v55->vtable._0_Equals.method + 2 * *v58);
              }
              else
              {
LABEL_85:
                v59 = sub_AA67A0(States, System_IDisposable_TypeInfo, 0LL);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v59)(
                                              v56,
                                              *(_QWORD *)(v59 + 8));
            }
            if ( v18 )
            {
              v60 = v18 - 1;
              if ( v66[v18 - 1] == 188 )
              {
                --v18;
                v67 = v60;
              }
            }
            LODWORD(v17) = v13->fields.m_Graph.fields.m_Version;
            if ( (int)++v19 >= (int)v17 )
              goto LABEL_92;
          }
LABEL_100:
          v64 = sub_B0D9A8(States);
          sub_B0D948(v64, 0LL);
        }
      }
    }
LABEL_92:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                    v65,
                                    (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_99:
      sub_B0D97C(States);
    m_Version = States->fields.m_Graph.fields.m_Version;
    v62 = States;
    if ( m_Version >= 1 )
    {
      v63 = 0;
      while ( v63 < m_Version )
      {
        States = (SimpleAnimation_o *)*((_QWORD *)&v62->fields.m_LayerMixer.fields.m_Version + (int)v63);
        if ( !States )
          goto LABEL_99;
        UnityEngine_ParticleSystem__Pause_50661640((UnityEngine_ParticleSystem_o *)States, 0LL);
        m_Version = v62->fields.m_Graph.fields.m_Version;
        if ( (int)++v63 >= m_Version )
          return;
      }
      goto LABEL_100;
    }
  }
}