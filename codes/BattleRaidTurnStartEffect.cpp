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
  __int64 v14; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v16; // x21
  unsigned __int64 v17; // x10
  int *p_offset; // x11
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  __int64 v22; // x21
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x3
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x3
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
  __int64 v45; // x1
  __int64 v46; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 p_method; // x0
  __int64 v52; // x3
  System_Collections_IEnumerator_c *v53; // x8
  unsigned __int64 v54; // x10
  System_Collections_IEnumerator_c **v55; // x11
  __int64 v56; // x0
  UnityEngine_AnimationState_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x3
  SimpleAnimation_c *v60; // x8
  SimpleAnimation_o *v61; // x20
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  int v65; // w8
  int m_Version; // w8
  SimpleAnimation_o *v67; // x19
  unsigned int v68; // w20
  __int64 v69; // x0
  _DWORD v70[2]; // [xsp+0h] [xbp-70h]
  int v71; // [xsp+8h] [xbp-68h]
  UnityEngine_Component_o *v72; // [xsp+18h] [xbp-58h]

  if ( (byte_42B09ED & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AnimationState_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B09ED = 1;
  }
  v71 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v72 = (UnityEngine_Component_o *)this;
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
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
        v16 = States;
        if ( *(_WORD *)&States->klass->_2.bitflags1 )
        {
          v17 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v17;
            p_offset += 4;
            if ( v17 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
              goto LABEL_20;
          }
          v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_20:
          v19 = sub_AEB880(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v14);
        }
        v22 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
        if ( !v22 )
          sub_B52A5C(0LL, v20);
        while ( 1 )
        {
          v23 = *(_QWORD *)v22;
          if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
          {
            v24 = 0LL;
            v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v24;
              v25 += 4;
              if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
                goto LABEL_27;
            }
            v26 = v23 + 16LL * *v25 + 312;
          }
          else
          {
LABEL_27:
            v26 = sub_AEB880(v22, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
            break;
          v28 = *(_QWORD *)v22;
          if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
          {
            v29 = 0LL;
            v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v30 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
                goto LABEL_34;
            }
            v31 = v28 + 16LL * *v30 + 312;
          }
          else
          {
LABEL_34:
            v31 = sub_AEB880(v22, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v27);
          }
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v22, *(_QWORD *)(v31 + 8));
          v35 = v32;
          if ( !v32 )
            sub_B52A5C(0LL, v33);
          v36 = *(_QWORD *)v32;
          if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
          {
            v37 = 0LL;
            v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
            while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v37;
              v38 += 2;
              if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
                goto LABEL_41;
            }
            v39 = v36 + 16LL * (*(_DWORD *)v38 + 8) + 312;
          }
          else
          {
LABEL_41:
            v39 = sub_AEB880(v32, SimpleAnimation_State_TypeInfo, 8LL, v34);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v39)(v35, *(_QWORD *)(v39 + 8), v2);
        }
        v70[v9] = 84;
        v9 = ++v71;
        v40 = *(_QWORD *)v22;
        if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
        {
          v41 = 0LL;
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
          {
            ++v41;
            v42 += 4;
            if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
              goto LABEL_49;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_49:
          v43 = sub_AEB880(v22, System_IDisposable_TypeInfo, 0LL, v27);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v22, *(_QWORD *)(v43 + 8));
        if ( v9 )
        {
          v44 = v9 - 1;
          if ( v70[v9 - 1] == 84 )
          {
            --v9;
            v71 = v44;
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
            sub_B52A5C(0LL, v45);
          while ( 1 )
          {
            v48 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v49 = 0LL;
              v50 = &v48->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v49;
                v50 += 4;
                if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_67;
              }
              p_method = (__int64)&v48->vtable[*v50].method;
            }
            else
            {
LABEL_67:
              p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v46);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v53 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v54 = 0LL;
              v55 = (System_Collections_IEnumerator_c **)&v53->_1.interfaceOffsets->offset;
              while ( *(v55 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v54;
                v55 += 2;
                if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_74;
              }
              v56 = (__int64)&v53->vtable[*(_DWORD *)v55 + 1].method;
            }
            else
            {
LABEL_74:
              v56 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v52);
            }
            v57 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v56)(
                                                    Enumerator,
                                                    *(_QWORD *)(v56 + 8));
            if ( !v57 )
              sub_B52A5C(0LL, v58);
            if ( v57->klass != UnityEngine_AnimationState_TypeInfo )
            {
              States = (SimpleAnimation_o *)sub_B52D50(v57);
              goto LABEL_98;
            }
            UnityEngine_AnimationState__set_speed(v57, 1.0, 0LL);
          }
          v70[v12] = 177;
          v12 = ++v71;
          States = (SimpleAnimation_o *)sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v60 = States->klass;
            v61 = States;
            if ( *(_WORD *)&States->klass->_2.bitflags1 )
            {
              v62 = 0LL;
              v63 = &v60->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
              {
                ++v62;
                v63 += 4;
                if ( v62 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                  goto LABEL_84;
              }
              v64 = (__int64)(&v60->vtable._0_Equals.method + 2 * *v63);
            }
            else
            {
LABEL_84:
              v64 = sub_AEB880(States, System_IDisposable_TypeInfo, 0LL, v59);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v64)(
                                            v61,
                                            *(_QWORD *)(v64 + 8));
          }
          if ( v12 )
          {
            v65 = v12 - 1;
            if ( v70[v12 - 1] == 177 )
            {
              --v12;
              v71 = v65;
            }
          }
          LODWORD(v11) = v7->fields.m_Graph.fields.m_Version;
          if ( (int)++v13 >= (int)v11 )
            goto LABEL_91;
        }
LABEL_99:
        v69 = sub_B52A88(States);
        sub_B52A28(v69, 0LL);
      }
    }
  }
LABEL_91:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                  v72,
                                  (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_98:
    sub_B52A5C(States, v6);
  m_Version = States->fields.m_Graph.fields.m_Version;
  v67 = States;
  if ( m_Version >= 1 )
  {
    v68 = 0;
    while ( v68 < m_Version )
    {
      States = (SimpleAnimation_o *)*((_QWORD *)&v67->fields.m_LayerMixer.fields.m_Version + (int)v68);
      if ( !States )
        goto LABEL_98;
      UnityEngine_ParticleSystem__Play_51149900((UnityEngine_ParticleSystem_o *)States, 0LL);
      m_Version = v67->fields.m_Graph.fields.m_Version;
      if ( (int)++v68 >= m_Version )
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
  __int64 v13; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v15; // x21
  unsigned __int64 v16; // x10
  int *p_offset; // x11
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  __int64 v21; // x21
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x3
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x3
  __int64 v34; // x22
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  SimpleAnimation_State_c **v37; // x11
  __int64 v38; // x0
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  int v43; // w8
  __int64 v44; // x1
  __int64 v45; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 p_method; // x0
  __int64 v51; // x3
  System_Collections_IEnumerator_c *v52; // x8
  unsigned __int64 v53; // x10
  System_Collections_IEnumerator_c **v54; // x11
  __int64 v55; // x0
  UnityEngine_AnimationState_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x3
  SimpleAnimation_c *v59; // x8
  SimpleAnimation_o *v60; // x20
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0
  int v64; // w8
  int m_Version; // w8
  SimpleAnimation_o *v66; // x19
  unsigned int v67; // w20
  __int64 v68; // x0
  UnityEngine_Component_o *v69; // [xsp+8h] [xbp-68h]
  _DWORD v70[2]; // [xsp+10h] [xbp-60h]
  int v71; // [xsp+18h] [xbp-58h]

  if ( (byte_42B09EC & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AnimationState_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B09EC = 1;
  }
  v71 = 0;
  if ( LOBYTE(this[1].klass) )
  {
    ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    v69 = (UnityEngine_Component_o *)this;
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
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
                goto LABEL_21;
            }
            v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_21:
            v18 = sub_AEB880(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v13);
          }
          v21 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
          if ( !v21 )
            sub_B52A5C(0LL, v19);
          while ( 1 )
          {
            v22 = *(_QWORD *)v21;
            if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
            {
              v23 = 0LL;
              v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v23;
                v24 += 4;
                if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
                  goto LABEL_28;
              }
              v25 = v22 + 16LL * *v24 + 312;
            }
            else
            {
LABEL_28:
              v25 = sub_AEB880(v21, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
              break;
            v27 = *(_QWORD *)v21;
            if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
            {
              v28 = 0LL;
              v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v29 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                ++v28;
                v29 += 4;
                if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
                  goto LABEL_35;
              }
              v30 = v27 + 16LL * *v29 + 312;
            }
            else
            {
LABEL_35:
              v30 = sub_AEB880(v21, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v26);
            }
            v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v21, *(_QWORD *)(v30 + 8));
            v34 = v31;
            if ( !v31 )
              sub_B52A5C(0LL, v32);
            v35 = *(_QWORD *)v31;
            if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
            {
              v36 = 0LL;
              v37 = (SimpleAnimation_State_c **)(*(_QWORD *)(v35 + 176) + 8LL);
              while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v36;
                v37 += 2;
                if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
                  goto LABEL_42;
              }
              v38 = v35 + 16LL * (*(_DWORD *)v37 + 8) + 312;
            }
            else
            {
LABEL_42:
              v38 = sub_AEB880(v31, SimpleAnimation_State_TypeInfo, 8LL, v33);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v38)(v34, *(_QWORD *)(v38 + 8), 0.0);
          }
          v70[v8] = 95;
          v8 = ++v71;
          v39 = *(_QWORD *)v21;
          if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
          {
            v40 = 0LL;
            v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
            {
              ++v40;
              v41 += 4;
              if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
                goto LABEL_50;
            }
            v42 = v39 + 16LL * *v41 + 312;
          }
          else
          {
LABEL_50:
            v42 = sub_AEB880(v21, System_IDisposable_TypeInfo, 0LL, v26);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v21, *(_QWORD *)(v42 + 8));
          if ( v8 )
          {
            v43 = v8 - 1;
            if ( v70[v8 - 1] == 95 )
            {
              --v8;
              v71 = v43;
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
              sub_B52A5C(0LL, v44);
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
                    goto LABEL_68;
                }
                p_method = (__int64)&v47->vtable[*v49].method;
              }
              else
              {
LABEL_68:
                p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v45);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v52 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v53 = 0LL;
                v54 = (System_Collections_IEnumerator_c **)&v52->_1.interfaceOffsets->offset;
                while ( *(v54 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v53;
                  v54 += 2;
                  if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_75;
                }
                v55 = (__int64)&v52->vtable[*(_DWORD *)v54 + 1].method;
              }
              else
              {
LABEL_75:
                v55 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v51);
              }
              v56 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v55)(
                                                      Enumerator,
                                                      *(_QWORD *)(v55 + 8));
              if ( !v56 )
                sub_B52A5C(0LL, v57);
              if ( v56->klass != UnityEngine_AnimationState_TypeInfo )
              {
                States = (SimpleAnimation_o *)sub_B52D50(v56);
                goto LABEL_99;
              }
              UnityEngine_AnimationState__set_speed(v56, 0.0, 0LL);
            }
            v70[v11] = 188;
            v11 = ++v71;
            States = (SimpleAnimation_o *)sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v59 = States->klass;
              v60 = States;
              if ( *(_WORD *)&States->klass->_2.bitflags1 )
              {
                v61 = 0LL;
                v62 = &v59->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
                {
                  ++v61;
                  v62 += 4;
                  if ( v61 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                    goto LABEL_85;
                }
                v63 = (__int64)(&v59->vtable._0_Equals.method + 2 * *v62);
              }
              else
              {
LABEL_85:
                v63 = sub_AEB880(States, System_IDisposable_TypeInfo, 0LL, v58);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v63)(
                                              v60,
                                              *(_QWORD *)(v63 + 8));
            }
            if ( v11 )
            {
              v64 = v11 - 1;
              if ( v70[v11 - 1] == 188 )
              {
                --v11;
                v71 = v64;
              }
            }
            LODWORD(v10) = v6->fields.m_Graph.fields.m_Version;
            if ( (int)++v12 >= (int)v10 )
              goto LABEL_92;
          }
LABEL_100:
          v68 = sub_B52A88(States);
          sub_B52A28(v68, 0LL);
        }
      }
    }
LABEL_92:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                    v69,
                                    (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_99:
      sub_B52A5C(States, v5);
    m_Version = States->fields.m_Graph.fields.m_Version;
    v66 = States;
    if ( m_Version >= 1 )
    {
      v67 = 0;
      while ( v67 < m_Version )
      {
        States = (SimpleAnimation_o *)*((_QWORD *)&v66->fields.m_LayerMixer.fields.m_Version + (int)v67);
        if ( !States )
          goto LABEL_99;
        UnityEngine_ParticleSystem__Pause_51150048((UnityEngine_ParticleSystem_o *)States, 0LL);
        m_Version = v66->fields.m_Graph.fields.m_Version;
        if ( (int)++v67 >= m_Version )
          return;
      }
      goto LABEL_100;
    }
  }
}