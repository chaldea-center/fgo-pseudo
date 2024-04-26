void __fastcall BattleRaidTurnStartEffect___ctor(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRaidTurnStartEffect__resumeLimitTurnEffect(
        BattleRaidTurnStartEffect_o *this,
        const MethodInfo *method)
{
  long double v2; // q8
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x20
  SimpleAnimation_o *States; // x0
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x21
  __int64 v8; // x8
  int v9; // w26
  unsigned int v10; // w23
  __int64 v11; // x8
  int v12; // w27
  unsigned int v13; // w19
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v15; // x21
  unsigned __int64 v16; // x10
  int *p_offset; // x11
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x22
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  SimpleAnimation_State_c **v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  int v40; // w8
  __int64 v41; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v47; // x8
  unsigned __int64 v48; // x10
  System_Collections_IEnumerator_c **v49; // x11
  __int64 v50; // x0
  UnityEngine_AnimationState_o *v51; // x0
  __int64 v52; // x1
  SimpleAnimation_c *v53; // x8
  SimpleAnimation_o *v54; // x20
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  int v58; // w8
  int m_Version; // w8
  SimpleAnimation_o *v60; // x19
  unsigned int v61; // w20
  __int64 v62; // x0
  _DWORD v63[2]; // [xsp+0h] [xbp-70h]
  int v64; // [xsp+8h] [xbp-68h]
  UnityEngine_Component_o *v65; // [xsp+18h] [xbp-58h]

  if ( (byte_4351D9D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_AnimationState_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_4351D9D = 1;
  }
  v64 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1BE43FC *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v65 = (UnityEngine_Component_o *)this;
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1BE43FC *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v7 = States;
  if ( ComponentsInChildren_USTimelineContainer
    && (v8 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
  {
    if ( (int)v8 >= 1 )
    {
      v9 = 0;
      v10 = 0;
      LODWORD(v2) = 1.0;
      while ( v10 < (unsigned int)v8 )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v10];
        if ( !States )
          goto LABEL_98;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_98;
        klass = States->klass;
        v15 = States;
        if ( *(_WORD *)&States->klass->_2.bitflags1 )
        {
          v16 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v16;
            p_offset += 4;
            if ( v16 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
              goto LABEL_20;
          }
          v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_20:
          v18 = sub_B08590(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v20 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
        if ( !v20 )
          sub_B7076C(0LL, v19);
        while ( 1 )
        {
          v21 = *(_QWORD *)v20;
          if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
          {
            v22 = 0LL;
            v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v22;
              v23 += 4;
              if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
                goto LABEL_27;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_27:
            v24 = sub_B08590(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
            break;
          v25 = *(_QWORD *)v20;
          if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
          {
            v26 = 0LL;
            v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v27 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
                goto LABEL_34;
            }
            v28 = v25 + 16LL * *v27 + 312;
          }
          else
          {
LABEL_34:
            v28 = sub_B08590(v20, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
          v31 = v29;
          if ( !v29 )
            sub_B7076C(0LL, v30);
          v32 = *(_QWORD *)v29;
          if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
          {
            v33 = 0LL;
            v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v33;
              v34 += 2;
              if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
                goto LABEL_41;
            }
            v35 = v32 + 16LL * (*(_DWORD *)v34 + 8) + 312;
          }
          else
          {
LABEL_41:
            v35 = sub_B08590(v29, SimpleAnimation_State_TypeInfo, 8LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v35)(v31, *(_QWORD *)(v35 + 8), v2);
        }
        v63[v9] = 84;
        v9 = ++v64;
        v36 = *(_QWORD *)v20;
        if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
        {
          v37 = 0LL;
          v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
          {
            ++v37;
            v38 += 4;
            if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
              goto LABEL_49;
          }
          v39 = v36 + 16LL * *v38 + 312;
        }
        else
        {
LABEL_49:
          v39 = sub_B08590(v20, System_IDisposable_TypeInfo, 0LL);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v20, *(_QWORD *)(v39 + 8));
        if ( v9 )
        {
          v40 = v9 - 1;
          if ( v63[v9 - 1] == 84 )
          {
            --v9;
            v64 = v40;
          }
        }
        LODWORD(v8) = ComponentsInChildren_USTimelineContainer->max_length;
        if ( (int)++v10 >= (int)v8 )
          goto LABEL_91;
      }
      goto LABEL_99;
    }
  }
  else if ( States )
  {
    v11 = *(_QWORD *)&States->fields.m_Graph.fields.m_Version;
    if ( v11 )
    {
      if ( (int)v11 >= 1 )
      {
        v12 = 0;
        v13 = 0;
        while ( v13 < (unsigned int)v11 )
        {
          States = (SimpleAnimation_o *)*((_QWORD *)&v7->fields.m_LayerMixer.fields.m_Version + (int)v13);
          if ( !States )
            goto LABEL_98;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_B7076C(0LL, v41);
          while ( 1 )
          {
            v43 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v44 = 0LL;
              v45 = &v43->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v44;
                v45 += 4;
                if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_67;
              }
              p_method = (__int64)&v43->vtable[*v45].method;
            }
            else
            {
LABEL_67:
              p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v47 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v48 = 0LL;
              v49 = (System_Collections_IEnumerator_c **)&v47->_1.interfaceOffsets->offset;
              while ( *(v49 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v48;
                v49 += 2;
                if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_74;
              }
              v50 = (__int64)&v47->vtable[*(_DWORD *)v49 + 1].method;
            }
            else
            {
LABEL_74:
              v50 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v51 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v50)(
                                                    Enumerator,
                                                    *(_QWORD *)(v50 + 8));
            if ( !v51 )
              sub_B7076C(0LL, v52);
            if ( v51->klass != UnityEngine_AnimationState_TypeInfo )
            {
              States = (SimpleAnimation_o *)sub_B70A60(v51);
              goto LABEL_98;
            }
            UnityEngine_AnimationState__set_speed(v51, 1.0, 0LL);
          }
          v63[v12] = 177;
          v12 = ++v64;
          States = (SimpleAnimation_o *)sub_B70754(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v53 = States->klass;
            v54 = States;
            if ( *(_WORD *)&States->klass->_2.bitflags1 )
            {
              v55 = 0LL;
              v56 = &v53->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
              {
                ++v55;
                v56 += 4;
                if ( v55 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                  goto LABEL_84;
              }
              v57 = (__int64)(&v53->vtable._0_Equals.method + 2 * *v56);
            }
            else
            {
LABEL_84:
              v57 = sub_B08590(States, System_IDisposable_TypeInfo, 0LL);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v57)(
                                            v54,
                                            *(_QWORD *)(v57 + 8));
          }
          if ( v12 )
          {
            v58 = v12 - 1;
            if ( v63[v12 - 1] == 177 )
            {
              --v12;
              v64 = v58;
            }
          }
          LODWORD(v11) = v7->fields.m_Graph.fields.m_Version;
          if ( (int)++v13 >= (int)v11 )
            goto LABEL_91;
        }
LABEL_99:
        v62 = sub_B70798(States);
        sub_B70738(v62, 0LL);
      }
    }
  }
LABEL_91:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                  v65,
                                  (const MethodInfo_1BE43FC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_98:
    sub_B7076C(States, v6);
  m_Version = States->fields.m_Graph.fields.m_Version;
  v60 = States;
  if ( m_Version >= 1 )
  {
    v61 = 0;
    while ( v61 < m_Version )
    {
      States = (SimpleAnimation_o *)*((_QWORD *)&v60->fields.m_LayerMixer.fields.m_Version + (int)v61);
      if ( !States )
        goto LABEL_98;
      UnityEngine_ParticleSystem__Play_51599716((UnityEngine_ParticleSystem_o *)States, 0LL);
      m_Version = v60->fields.m_Graph.fields.m_Version;
      if ( (int)++v61 >= m_Version )
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
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x20
  SimpleAnimation_o *States; // x0
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x21
  __int64 v7; // x8
  int v8; // w19
  unsigned int v9; // w23
  __int64 v10; // x8
  int v11; // w27
  unsigned int v12; // w19
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v14; // x21
  unsigned __int64 v15; // x10
  int *p_offset; // x11
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x22
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **v33; // x11
  __int64 v34; // x0
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  int v39; // w8
  __int64 v40; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v46; // x8
  unsigned __int64 v47; // x10
  System_Collections_IEnumerator_c **v48; // x11
  __int64 v49; // x0
  UnityEngine_AnimationState_o *v50; // x0
  __int64 v51; // x1
  SimpleAnimation_c *v52; // x8
  SimpleAnimation_o *v53; // x20
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  int v57; // w8
  int m_Version; // w8
  SimpleAnimation_o *v59; // x19
  unsigned int v60; // w20
  __int64 v61; // x0
  UnityEngine_Component_o *v62; // [xsp+8h] [xbp-68h]
  _DWORD v63[2]; // [xsp+10h] [xbp-60h]
  int v64; // [xsp+18h] [xbp-58h]

  if ( (byte_4351D9C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_AnimationState_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_4351D9C = 1;
  }
  v64 = 0;
  if ( LOBYTE(this[1].klass) )
  {
    ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_1BE43FC *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    v62 = (UnityEngine_Component_o *)this;
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_1BE43FC *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v6 = States;
    if ( ComponentsInChildren_USTimelineContainer
      && (v7 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
    {
      if ( (int)v7 >= 1 )
      {
        v8 = 0;
        v9 = 0;
        while ( v9 < (unsigned int)v7 )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v9];
          if ( !States )
            goto LABEL_99;
          States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
          if ( !States )
            goto LABEL_99;
          klass = States->klass;
          v14 = States;
          if ( *(_WORD *)&States->klass->_2.bitflags1 )
          {
            v15 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              ++v15;
              p_offset += 4;
              if ( v15 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                goto LABEL_21;
            }
            v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_21:
            v17 = sub_B08590(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v19 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v17)(v14, *(_QWORD *)(v17 + 8));
          if ( !v19 )
            sub_B7076C(0LL, v18);
          while ( 1 )
          {
            v20 = *(_QWORD *)v19;
            if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
            {
              v21 = 0LL;
              v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v21;
                v22 += 4;
                if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
                  goto LABEL_28;
              }
              v23 = v20 + 16LL * *v22 + 312;
            }
            else
            {
LABEL_28:
              v23 = sub_B08590(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
              break;
            v24 = *(_QWORD *)v19;
            if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
            {
              v25 = 0LL;
              v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v26 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                ++v25;
                v26 += 4;
                if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
                  goto LABEL_35;
              }
              v27 = v24 + 16LL * *v26 + 312;
            }
            else
            {
LABEL_35:
              v27 = sub_B08590(v19, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
            }
            v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
            v30 = v28;
            if ( !v28 )
              sub_B7076C(0LL, v29);
            v31 = *(_QWORD *)v28;
            if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
            {
              v32 = 0LL;
              v33 = (SimpleAnimation_State_c **)(*(_QWORD *)(v31 + 176) + 8LL);
              while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v32;
                v33 += 2;
                if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
                  goto LABEL_42;
              }
              v34 = v31 + 16LL * (*(_DWORD *)v33 + 8) + 312;
            }
            else
            {
LABEL_42:
              v34 = sub_B08590(v28, SimpleAnimation_State_TypeInfo, 8LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v34)(v30, *(_QWORD *)(v34 + 8), 0.0);
          }
          v63[v8] = 95;
          v8 = ++v64;
          v35 = *(_QWORD *)v19;
          if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
          {
            v36 = 0LL;
            v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
            {
              ++v36;
              v37 += 4;
              if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
                goto LABEL_50;
            }
            v38 = v35 + 16LL * *v37 + 312;
          }
          else
          {
LABEL_50:
            v38 = sub_B08590(v19, System_IDisposable_TypeInfo, 0LL);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v19, *(_QWORD *)(v38 + 8));
          if ( v8 )
          {
            v39 = v8 - 1;
            if ( v63[v8 - 1] == 95 )
            {
              --v8;
              v64 = v39;
            }
          }
          LODWORD(v7) = ComponentsInChildren_USTimelineContainer->max_length;
          if ( (int)++v9 >= (int)v7 )
            goto LABEL_92;
        }
        goto LABEL_100;
      }
    }
    else if ( States )
    {
      v10 = *(_QWORD *)&States->fields.m_Graph.fields.m_Version;
      if ( v10 )
      {
        if ( (int)v10 >= 1 )
        {
          v11 = 0;
          v12 = 0;
          while ( v12 < (unsigned int)v10 )
          {
            States = (SimpleAnimation_o *)*((_QWORD *)&v6->fields.m_LayerMixer.fields.m_Version + (int)v12);
            if ( !States )
              goto LABEL_99;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
            if ( !Enumerator )
              sub_B7076C(0LL, v40);
            while ( 1 )
            {
              v42 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v43 = 0LL;
                v44 = &v42->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v43;
                  v44 += 4;
                  if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_68;
                }
                p_method = (__int64)&v42->vtable[*v44].method;
              }
              else
              {
LABEL_68:
                p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v46 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v47 = 0LL;
                v48 = (System_Collections_IEnumerator_c **)&v46->_1.interfaceOffsets->offset;
                while ( *(v48 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v47;
                  v48 += 2;
                  if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_75;
                }
                v49 = (__int64)&v46->vtable[*(_DWORD *)v48 + 1].method;
              }
              else
              {
LABEL_75:
                v49 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
              }
              v50 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v49)(
                                                      Enumerator,
                                                      *(_QWORD *)(v49 + 8));
              if ( !v50 )
                sub_B7076C(0LL, v51);
              if ( v50->klass != UnityEngine_AnimationState_TypeInfo )
              {
                States = (SimpleAnimation_o *)sub_B70A60(v50);
                goto LABEL_99;
              }
              UnityEngine_AnimationState__set_speed(v50, 0.0, 0LL);
            }
            v63[v11] = 188;
            v11 = ++v64;
            States = (SimpleAnimation_o *)sub_B70754(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v52 = States->klass;
              v53 = States;
              if ( *(_WORD *)&States->klass->_2.bitflags1 )
              {
                v54 = 0LL;
                v55 = &v52->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
                {
                  ++v54;
                  v55 += 4;
                  if ( v54 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                    goto LABEL_85;
                }
                v56 = (__int64)(&v52->vtable._0_Equals.method + 2 * *v55);
              }
              else
              {
LABEL_85:
                v56 = sub_B08590(States, System_IDisposable_TypeInfo, 0LL);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v56)(
                                              v53,
                                              *(_QWORD *)(v56 + 8));
            }
            if ( v11 )
            {
              v57 = v11 - 1;
              if ( v63[v11 - 1] == 188 )
              {
                --v11;
                v64 = v57;
              }
            }
            LODWORD(v10) = v6->fields.m_Graph.fields.m_Version;
            if ( (int)++v12 >= (int)v10 )
              goto LABEL_92;
          }
LABEL_100:
          v61 = sub_B70798(States);
          sub_B70738(v61, 0LL);
        }
      }
    }
LABEL_92:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                    v62,
                                    (const MethodInfo_1BE43FC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_99:
      sub_B7076C(States, v5);
    m_Version = States->fields.m_Graph.fields.m_Version;
    v59 = States;
    if ( m_Version >= 1 )
    {
      v60 = 0;
      while ( v60 < m_Version )
      {
        States = (SimpleAnimation_o *)*((_QWORD *)&v59->fields.m_LayerMixer.fields.m_Version + (int)v60);
        if ( !States )
          goto LABEL_99;
        UnityEngine_ParticleSystem__Pause_51599864((UnityEngine_ParticleSystem_o *)States, 0LL);
        m_Version = v59->fields.m_Graph.fields.m_Version;
        if ( (int)++v60 >= m_Version )
          return;
      }
      goto LABEL_100;
    }
  }
}