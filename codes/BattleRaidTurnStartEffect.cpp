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
  __int64 v14; // x1
  SimpleAnimation_o *v15; // x21
  __int64 v16; // x8
  int v17; // w26
  unsigned int v18; // w23
  __int64 v19; // x8
  int v20; // w27
  unsigned int v21; // w19
  __int64 v22; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v24; // x21
  unsigned __int64 v25; // x10
  int *p_offset; // x11
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x3
  __int64 v30; // x21
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x3
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x3
  __int64 v43; // x22
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  SimpleAnimation_State_c **v46; // x11
  __int64 v47; // x0
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  int v52; // w8
  __int64 v53; // x1
  __int64 v54; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 p_method; // x0
  __int64 v60; // x3
  System_Collections_IEnumerator_c *v61; // x8
  unsigned __int64 v62; // x10
  System_Collections_IEnumerator_c **v63; // x11
  __int64 v64; // x0
  UnityEngine_AnimationState_o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x3
  SimpleAnimation_c *v68; // x8
  SimpleAnimation_o *v69; // x20
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  int v73; // w8
  int m_Version; // w8
  SimpleAnimation_o *v75; // x19
  unsigned int v76; // w20
  __int64 v77; // x0
  _DWORD v78[2]; // [xsp+0h] [xbp-70h]
  int v79; // [xsp+8h] [xbp-68h]
  UnityEngine_Component_o *v80; // [xsp+18h] [xbp-58h]

  if ( (byte_4188528 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v11);
    byte_4188528 = 1;
  }
  v79 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v80 = (UnityEngine_Component_o *)this;
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v15 = States;
  if ( ComponentsInChildren_USTimelineContainer
    && (v16 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
  {
    if ( (int)v16 >= 1 )
    {
      v17 = 0;
      v18 = 0;
      LODWORD(v2) = 1.0;
      while ( v18 < (unsigned int)v16 )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v18];
        if ( !States )
          goto LABEL_98;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_98;
        klass = States->klass;
        v24 = States;
        if ( *(_WORD *)&States->klass->_2.bitflags1 )
        {
          v25 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v25;
            p_offset += 4;
            if ( v25 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
              goto LABEL_20;
          }
          v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_20:
          v27 = sub_AC5258(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v22);
        }
        v30 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
        if ( !v30 )
          sub_B2C434(0LL, v28);
        while ( 1 )
        {
          v31 = *(_QWORD *)v30;
          if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
          {
            v32 = 0LL;
            v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
                goto LABEL_27;
            }
            v34 = v31 + 16LL * *v33 + 312;
          }
          else
          {
LABEL_27:
            v34 = sub_AC5258(v30, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
            break;
          v36 = *(_QWORD *)v30;
          if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
          {
            v37 = 0LL;
            v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v38 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v37;
              v38 += 4;
              if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
                goto LABEL_34;
            }
            v39 = v36 + 16LL * *v38 + 312;
          }
          else
          {
LABEL_34:
            v39 = sub_AC5258(v30, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v35);
          }
          v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v30, *(_QWORD *)(v39 + 8));
          v43 = v40;
          if ( !v40 )
            sub_B2C434(0LL, v41);
          v44 = *(_QWORD *)v40;
          if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
          {
            v45 = 0LL;
            v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v44 + 176) + 8LL);
            while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v45;
              v46 += 2;
              if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
                goto LABEL_41;
            }
            v47 = v44 + 16LL * (*(_DWORD *)v46 + 8) + 312;
          }
          else
          {
LABEL_41:
            v47 = sub_AC5258(v40, SimpleAnimation_State_TypeInfo, 8LL, v42);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v47)(v43, *(_QWORD *)(v47 + 8), v2);
        }
        v78[v17] = 84;
        v17 = ++v79;
        v48 = *(_QWORD *)v30;
        if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
        {
          v49 = 0LL;
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
          {
            ++v49;
            v50 += 4;
            if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
              goto LABEL_49;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_49:
          v51 = sub_AC5258(v30, System_IDisposable_TypeInfo, 0LL, v35);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v30, *(_QWORD *)(v51 + 8));
        if ( v17 )
        {
          v52 = v17 - 1;
          if ( v78[v17 - 1] == 84 )
          {
            --v17;
            v79 = v52;
          }
        }
        LODWORD(v16) = ComponentsInChildren_USTimelineContainer->max_length;
        if ( (int)++v18 >= (int)v16 )
          goto LABEL_91;
      }
      goto LABEL_99;
    }
  }
  else if ( States )
  {
    v19 = *(_QWORD *)&States->fields.m_Graph.fields.m_Version;
    if ( v19 )
    {
      if ( (int)v19 >= 1 )
      {
        v20 = 0;
        v21 = 0;
        while ( v21 < (unsigned int)v19 )
        {
          States = (SimpleAnimation_o *)*((_QWORD *)&v15->fields.m_LayerMixer.fields.m_Version + (int)v21);
          if ( !States )
            goto LABEL_98;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_B2C434(0LL, v53);
          while ( 1 )
          {
            v56 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v57 = 0LL;
              v58 = &v56->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v57;
                v58 += 4;
                if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_67;
              }
              p_method = (__int64)&v56->vtable[*v58].method;
            }
            else
            {
LABEL_67:
              p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v54);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v61 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v62 = 0LL;
              v63 = (System_Collections_IEnumerator_c **)&v61->_1.interfaceOffsets->offset;
              while ( *(v63 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v62;
                v63 += 2;
                if ( v62 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_74;
              }
              v64 = (__int64)&v61->vtable[*(_DWORD *)v63 + 1].method;
            }
            else
            {
LABEL_74:
              v64 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v60);
            }
            v65 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v64)(
                                                    Enumerator,
                                                    *(_QWORD *)(v64 + 8));
            if ( !v65 )
              sub_B2C434(0LL, v66);
            if ( v65->klass != UnityEngine_AnimationState_TypeInfo )
            {
              States = (SimpleAnimation_o *)sub_B2C728(v65);
              goto LABEL_98;
            }
            UnityEngine_AnimationState__set_speed(v65, 1.0, 0LL);
          }
          v78[v20] = 177;
          v20 = ++v79;
          States = (SimpleAnimation_o *)sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v68 = States->klass;
            v69 = States;
            if ( *(_WORD *)&States->klass->_2.bitflags1 )
            {
              v70 = 0LL;
              v71 = &v68->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
              {
                ++v70;
                v71 += 4;
                if ( v70 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                  goto LABEL_84;
              }
              v72 = (__int64)(&v68->vtable._0_Equals.method + 2 * *v71);
            }
            else
            {
LABEL_84:
              v72 = sub_AC5258(States, System_IDisposable_TypeInfo, 0LL, v67);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v72)(
                                            v69,
                                            *(_QWORD *)(v72 + 8));
          }
          if ( v20 )
          {
            v73 = v20 - 1;
            if ( v78[v20 - 1] == 177 )
            {
              --v20;
              v79 = v73;
            }
          }
          LODWORD(v19) = v15->fields.m_Graph.fields.m_Version;
          if ( (int)++v21 >= (int)v19 )
            goto LABEL_91;
        }
LABEL_99:
        v77 = sub_B2C460(States);
        sub_B2C400(v77, 0LL);
      }
    }
  }
LABEL_91:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                  v80,
                                  (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_98:
    sub_B2C434(States, v14);
  m_Version = States->fields.m_Graph.fields.m_Version;
  v75 = States;
  if ( m_Version >= 1 )
  {
    v76 = 0;
    while ( v76 < m_Version )
    {
      States = (SimpleAnimation_o *)*((_QWORD *)&v75->fields.m_LayerMixer.fields.m_Version + (int)v76);
      if ( !States )
        goto LABEL_98;
      UnityEngine_ParticleSystem__Play_50259112((UnityEngine_ParticleSystem_o *)States, 0LL);
      m_Version = v75->fields.m_Graph.fields.m_Version;
      if ( (int)++v76 >= m_Version )
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
  __int64 v13; // x1
  SimpleAnimation_o *v14; // x21
  __int64 v15; // x8
  int v16; // w19
  unsigned int v17; // w23
  __int64 v18; // x8
  int v19; // w27
  unsigned int v20; // w19
  __int64 v21; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v23; // x21
  unsigned __int64 v24; // x10
  int *p_offset; // x11
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  __int64 v29; // x21
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x3
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x3
  __int64 v42; // x22
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  SimpleAnimation_State_c **v45; // x11
  __int64 v46; // x0
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  int v51; // w8
  __int64 v52; // x1
  __int64 v53; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 p_method; // x0
  __int64 v59; // x3
  System_Collections_IEnumerator_c *v60; // x8
  unsigned __int64 v61; // x10
  System_Collections_IEnumerator_c **v62; // x11
  __int64 v63; // x0
  UnityEngine_AnimationState_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x3
  SimpleAnimation_c *v67; // x8
  SimpleAnimation_o *v68; // x20
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  int v72; // w8
  int m_Version; // w8
  SimpleAnimation_o *v74; // x19
  unsigned int v75; // w20
  __int64 v76; // x0
  UnityEngine_Component_o *v77; // [xsp+8h] [xbp-68h]
  _DWORD v78[2]; // [xsp+10h] [xbp-60h]
  int v79; // [xsp+18h] [xbp-58h]

  if ( (byte_4188527 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v4);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v10);
    byte_4188527 = 1;
  }
  v79 = 0;
  if ( LOBYTE(this[1].klass) )
  {
    ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    v77 = (UnityEngine_Component_o *)this;
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v14 = States;
    if ( ComponentsInChildren_USTimelineContainer
      && (v15 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
    {
      if ( (int)v15 >= 1 )
      {
        v16 = 0;
        v17 = 0;
        while ( v17 < (unsigned int)v15 )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v17];
          if ( !States )
            goto LABEL_99;
          States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
          if ( !States )
            goto LABEL_99;
          klass = States->klass;
          v23 = States;
          if ( *(_WORD *)&States->klass->_2.bitflags1 )
          {
            v24 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              ++v24;
              p_offset += 4;
              if ( v24 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                goto LABEL_21;
            }
            v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_21:
            v26 = sub_AC5258(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v21);
          }
          v29 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
          if ( !v29 )
            sub_B2C434(0LL, v27);
          while ( 1 )
          {
            v30 = *(_QWORD *)v29;
            if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
            {
              v31 = 0LL;
              v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v31;
                v32 += 4;
                if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
                  goto LABEL_28;
              }
              v33 = v30 + 16LL * *v32 + 312;
            }
            else
            {
LABEL_28:
              v33 = sub_AC5258(v29, System_Collections_IEnumerator_TypeInfo, 0LL, v28);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
              break;
            v35 = *(_QWORD *)v29;
            if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
            {
              v36 = 0LL;
              v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v37 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                ++v36;
                v37 += 4;
                if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
                  goto LABEL_35;
              }
              v38 = v35 + 16LL * *v37 + 312;
            }
            else
            {
LABEL_35:
              v38 = sub_AC5258(v29, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v34);
            }
            v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v29, *(_QWORD *)(v38 + 8));
            v42 = v39;
            if ( !v39 )
              sub_B2C434(0LL, v40);
            v43 = *(_QWORD *)v39;
            if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
            {
              v44 = 0LL;
              v45 = (SimpleAnimation_State_c **)(*(_QWORD *)(v43 + 176) + 8LL);
              while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v44;
                v45 += 2;
                if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
                  goto LABEL_42;
              }
              v46 = v43 + 16LL * (*(_DWORD *)v45 + 8) + 312;
            }
            else
            {
LABEL_42:
              v46 = sub_AC5258(v39, SimpleAnimation_State_TypeInfo, 8LL, v41);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v46)(v42, *(_QWORD *)(v46 + 8), 0.0);
          }
          v78[v16] = 95;
          v16 = ++v79;
          v47 = *(_QWORD *)v29;
          if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
          {
            v48 = 0LL;
            v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
            {
              ++v48;
              v49 += 4;
              if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
                goto LABEL_50;
            }
            v50 = v47 + 16LL * *v49 + 312;
          }
          else
          {
LABEL_50:
            v50 = sub_AC5258(v29, System_IDisposable_TypeInfo, 0LL, v34);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v29, *(_QWORD *)(v50 + 8));
          if ( v16 )
          {
            v51 = v16 - 1;
            if ( v78[v16 - 1] == 95 )
            {
              --v16;
              v79 = v51;
            }
          }
          LODWORD(v15) = ComponentsInChildren_USTimelineContainer->max_length;
          if ( (int)++v17 >= (int)v15 )
            goto LABEL_92;
        }
        goto LABEL_100;
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
              goto LABEL_99;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
            if ( !Enumerator )
              sub_B2C434(0LL, v52);
            while ( 1 )
            {
              v55 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v56 = 0LL;
                v57 = &v55->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v56;
                  v57 += 4;
                  if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_68;
                }
                p_method = (__int64)&v55->vtable[*v57].method;
              }
              else
              {
LABEL_68:
                p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v53);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v60 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v61 = 0LL;
                v62 = (System_Collections_IEnumerator_c **)&v60->_1.interfaceOffsets->offset;
                while ( *(v62 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v61;
                  v62 += 2;
                  if ( v61 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_75;
                }
                v63 = (__int64)&v60->vtable[*(_DWORD *)v62 + 1].method;
              }
              else
              {
LABEL_75:
                v63 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v59);
              }
              v64 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v63)(
                                                      Enumerator,
                                                      *(_QWORD *)(v63 + 8));
              if ( !v64 )
                sub_B2C434(0LL, v65);
              if ( v64->klass != UnityEngine_AnimationState_TypeInfo )
              {
                States = (SimpleAnimation_o *)sub_B2C728(v64);
                goto LABEL_99;
              }
              UnityEngine_AnimationState__set_speed(v64, 0.0, 0LL);
            }
            v78[v19] = 188;
            v19 = ++v79;
            States = (SimpleAnimation_o *)sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v67 = States->klass;
              v68 = States;
              if ( *(_WORD *)&States->klass->_2.bitflags1 )
              {
                v69 = 0LL;
                v70 = &v67->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
                {
                  ++v69;
                  v70 += 4;
                  if ( v69 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                    goto LABEL_85;
                }
                v71 = (__int64)(&v67->vtable._0_Equals.method + 2 * *v70);
              }
              else
              {
LABEL_85:
                v71 = sub_AC5258(States, System_IDisposable_TypeInfo, 0LL, v66);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v71)(
                                              v68,
                                              *(_QWORD *)(v71 + 8));
            }
            if ( v19 )
            {
              v72 = v19 - 1;
              if ( v78[v19 - 1] == 188 )
              {
                --v19;
                v79 = v72;
              }
            }
            LODWORD(v18) = v14->fields.m_Graph.fields.m_Version;
            if ( (int)++v20 >= (int)v18 )
              goto LABEL_92;
          }
LABEL_100:
          v76 = sub_B2C460(States);
          sub_B2C400(v76, 0LL);
        }
      }
    }
LABEL_92:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                    v77,
                                    (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_99:
      sub_B2C434(States, v13);
    m_Version = States->fields.m_Graph.fields.m_Version;
    v74 = States;
    if ( m_Version >= 1 )
    {
      v75 = 0;
      while ( v75 < m_Version )
      {
        States = (SimpleAnimation_o *)*((_QWORD *)&v74->fields.m_LayerMixer.fields.m_Version + (int)v75);
        if ( !States )
          goto LABEL_99;
        UnityEngine_ParticleSystem__Pause_50259260((UnityEngine_ParticleSystem_o *)States, 0LL);
        m_Version = v74->fields.m_Graph.fields.m_Version;
        if ( (int)++v75 >= m_Version )
          return;
      }
      goto LABEL_100;
    }
  }
}