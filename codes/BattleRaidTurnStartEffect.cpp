void __fastcall BattleRaidTurnStartEffect___ctor(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleRaidTurnStartEffect__resumeLimitTurnEffect(
        BattleRaidTurnStartEffect_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  long double v4; // q8
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x20
  SimpleAnimation_o *States; // x0
  __int64 v32; // x1
  SimpleAnimation_o *v33; // x21
  __int64 v34; // x8
  int v35; // w26
  unsigned int v36; // w23
  __int64 v37; // x8
  int v38; // w27
  unsigned int v39; // w19
  __int64 v40; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v42; // x21
  unsigned __int64 v43; // x10
  int *p_offset; // x11
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x3
  __int64 v48; // x21
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x3
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x3
  __int64 v61; // x22
  __int64 v62; // x8
  unsigned __int64 v63; // x10
  SimpleAnimation_State_c **v64; // x11
  __int64 v65; // x0
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  int v70; // w8
  __int64 v71; // x1
  __int64 v72; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v74; // x8
  unsigned __int64 v75; // x10
  int32_t *v76; // x11
  __int64 p_method; // x0
  __int64 v78; // x3
  System_Collections_IEnumerator_c *v79; // x8
  unsigned __int64 v80; // x10
  System_Collections_IEnumerator_c **v81; // x11
  __int64 v82; // x0
  UnityEngine_AnimationState_o *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x3
  SimpleAnimation_c *v86; // x8
  SimpleAnimation_o *v87; // x20
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  int v91; // w8
  int m_Version; // w8
  SimpleAnimation_o *v93; // x19
  unsigned int v94; // w20
  __int64 v95; // x0
  _DWORD v96[2]; // [xsp+0h] [xbp-70h]
  int v97; // [xsp+8h] [xbp-68h]
  UnityEngine_Component_o *v98; // [xsp+18h] [xbp-58h]

  if ( (byte_42E9612 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationState_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v27, v28, v29);
    byte_42E9612 = 1;
  }
  v97 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v98 = (UnityEngine_Component_o *)this;
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v33 = States;
  if ( ComponentsInChildren_USTimelineContainer
    && (v34 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
  {
    if ( (int)v34 >= 1 )
    {
      v35 = 0;
      v36 = 0;
      LODWORD(v4) = 1.0;
      while ( v36 < (unsigned int)v34 )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v36];
        if ( !States )
          goto LABEL_98;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_98;
        klass = States->klass;
        v42 = States;
        if ( *(_WORD *)&States->klass->_2.bitflags1 )
        {
          v43 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v43;
            p_offset += 4;
            if ( v43 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
              goto LABEL_20;
          }
          v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_20:
          v45 = sub_AF54C0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v40);
        }
        v48 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
        if ( !v48 )
          sub_B5D69C(0LL, v46);
        while ( 1 )
        {
          v49 = *(_QWORD *)v48;
          if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
          {
            v50 = 0LL;
            v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v50;
              v51 += 4;
              if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
                goto LABEL_27;
            }
            v52 = v49 + 16LL * *v51 + 312;
          }
          else
          {
LABEL_27:
            v52 = sub_AF54C0(v48, System_Collections_IEnumerator_TypeInfo, 0LL, v47);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
            break;
          v54 = *(_QWORD *)v48;
          if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
          {
            v55 = 0LL;
            v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v56 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v55;
              v56 += 4;
              if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
                goto LABEL_34;
            }
            v57 = v54 + 16LL * *v56 + 312;
          }
          else
          {
LABEL_34:
            v57 = sub_AF54C0(v48, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v53);
          }
          v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v48, *(_QWORD *)(v57 + 8));
          v61 = v58;
          if ( !v58 )
            sub_B5D69C(0LL, v59);
          v62 = *(_QWORD *)v58;
          if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
          {
            v63 = 0LL;
            v64 = (SimpleAnimation_State_c **)(*(_QWORD *)(v62 + 176) + 8LL);
            while ( *(v64 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v63;
              v64 += 2;
              if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
                goto LABEL_41;
            }
            v65 = v62 + 16LL * (*(_DWORD *)v64 + 8) + 312;
          }
          else
          {
LABEL_41:
            v65 = sub_AF54C0(v58, SimpleAnimation_State_TypeInfo, 8LL, v60);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v65)(v61, *(_QWORD *)(v65 + 8), v4);
        }
        v96[v35] = 84;
        v35 = ++v97;
        v66 = *(_QWORD *)v48;
        if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
        {
          v67 = 0LL;
          v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
          {
            ++v67;
            v68 += 4;
            if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
              goto LABEL_49;
          }
          v69 = v66 + 16LL * *v68 + 312;
        }
        else
        {
LABEL_49:
          v69 = sub_AF54C0(v48, System_IDisposable_TypeInfo, 0LL, v53);
        }
        States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v48, *(_QWORD *)(v69 + 8));
        if ( v35 )
        {
          v70 = v35 - 1;
          if ( v96[v35 - 1] == 84 )
          {
            --v35;
            v97 = v70;
          }
        }
        LODWORD(v34) = ComponentsInChildren_USTimelineContainer->max_length;
        if ( (int)++v36 >= (int)v34 )
          goto LABEL_91;
      }
      goto LABEL_99;
    }
  }
  else if ( States )
  {
    v37 = *(_QWORD *)&States->fields.m_Graph.fields.m_Version;
    if ( v37 )
    {
      if ( (int)v37 >= 1 )
      {
        v38 = 0;
        v39 = 0;
        while ( v39 < (unsigned int)v37 )
        {
          States = (SimpleAnimation_o *)*((_QWORD *)&v33->fields.m_LayerMixer.fields.m_Version + (int)v39);
          if ( !States )
            goto LABEL_98;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_B5D69C(0LL, v71);
          while ( 1 )
          {
            v74 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v75 = 0LL;
              v76 = &v74->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v76 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v75;
                v76 += 4;
                if ( v75 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_67;
              }
              p_method = (__int64)&v74->vtable[*v76].method;
            }
            else
            {
LABEL_67:
              p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v72);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v79 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v80 = 0LL;
              v81 = (System_Collections_IEnumerator_c **)&v79->_1.interfaceOffsets->offset;
              while ( *(v81 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v80;
                v81 += 2;
                if ( v80 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_74;
              }
              v82 = (__int64)&v79->vtable[*(_DWORD *)v81 + 1].method;
            }
            else
            {
LABEL_74:
              v82 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v78);
            }
            v83 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v82)(
                                                    Enumerator,
                                                    *(_QWORD *)(v82 + 8));
            if ( !v83 )
              sub_B5D69C(0LL, v84);
            if ( v83->klass != UnityEngine_AnimationState_TypeInfo )
            {
              States = (SimpleAnimation_o *)sub_B5D990(v83);
              goto LABEL_98;
            }
            UnityEngine_AnimationState__set_speed(v83, 1.0, 0LL);
          }
          v96[v38] = 177;
          v38 = ++v97;
          States = (SimpleAnimation_o *)sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
          if ( States )
          {
            v86 = States->klass;
            v87 = States;
            if ( *(_WORD *)&States->klass->_2.bitflags1 )
            {
              v88 = 0LL;
              v89 = &v86->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v89 - 1) != System_IDisposable_TypeInfo )
              {
                ++v88;
                v89 += 4;
                if ( v88 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                  goto LABEL_84;
              }
              v90 = (__int64)(&v86->vtable._0_Equals.method + 2 * *v89);
            }
            else
            {
LABEL_84:
              v90 = sub_AF54C0(States, System_IDisposable_TypeInfo, 0LL, v85);
            }
            States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v90)(
                                            v87,
                                            *(_QWORD *)(v90 + 8));
          }
          if ( v38 )
          {
            v91 = v38 - 1;
            if ( v96[v38 - 1] == 177 )
            {
              --v38;
              v97 = v91;
            }
          }
          LODWORD(v37) = v33->fields.m_Graph.fields.m_Version;
          if ( (int)++v39 >= (int)v37 )
            goto LABEL_91;
        }
LABEL_99:
        v95 = sub_B5D6C8(States);
        sub_B5D668(v95, 0LL);
      }
    }
  }
LABEL_91:
  States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                  v98,
                                  (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_98:
    sub_B5D69C(States, v32);
  m_Version = States->fields.m_Graph.fields.m_Version;
  v93 = States;
  if ( m_Version >= 1 )
  {
    v94 = 0;
    while ( v94 < m_Version )
    {
      States = (SimpleAnimation_o *)*((_QWORD *)&v93->fields.m_LayerMixer.fields.m_Version + (int)v94);
      if ( !States )
        goto LABEL_98;
      UnityEngine_ParticleSystem__Play_51306656((UnityEngine_ParticleSystem_o *)States, 0LL);
      m_Version = v93->fields.m_Graph.fields.m_Version;
      if ( (int)++v94 >= m_Version )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x20
  SimpleAnimation_o *States; // x0
  __int64 v31; // x1
  SimpleAnimation_o *v32; // x21
  __int64 v33; // x8
  int v34; // w19
  unsigned int v35; // w23
  __int64 v36; // x8
  int v37; // w27
  unsigned int v38; // w19
  __int64 v39; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v41; // x21
  unsigned __int64 v42; // x10
  int *p_offset; // x11
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x3
  __int64 v47; // x21
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x3
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x3
  __int64 v60; // x22
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  SimpleAnimation_State_c **v63; // x11
  __int64 v64; // x0
  __int64 v65; // x8
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  int v69; // w8
  __int64 v70; // x1
  __int64 v71; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v73; // x8
  unsigned __int64 v74; // x10
  int32_t *v75; // x11
  __int64 p_method; // x0
  __int64 v77; // x3
  System_Collections_IEnumerator_c *v78; // x8
  unsigned __int64 v79; // x10
  System_Collections_IEnumerator_c **v80; // x11
  __int64 v81; // x0
  UnityEngine_AnimationState_o *v82; // x0
  __int64 v83; // x1
  __int64 v84; // x3
  SimpleAnimation_c *v85; // x8
  SimpleAnimation_o *v86; // x20
  unsigned __int64 v87; // x10
  int *v88; // x11
  __int64 v89; // x0
  int v90; // w8
  int m_Version; // w8
  SimpleAnimation_o *v92; // x19
  unsigned int v93; // w20
  __int64 v94; // x0
  UnityEngine_Component_o *v95; // [xsp+8h] [xbp-68h]
  _DWORD v96[2]; // [xsp+10h] [xbp-60h]
  int v97; // [xsp+18h] [xbp-58h]

  if ( (byte_42E9611 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationState_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v11, v12, v13);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v26, v27, v28);
    byte_42E9611 = 1;
  }
  v97 = 0;
  if ( LOBYTE(this[1].klass) )
  {
    ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    v95 = (UnityEngine_Component_o *)this;
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v32 = States;
    if ( ComponentsInChildren_USTimelineContainer
      && (v33 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
    {
      if ( (int)v33 >= 1 )
      {
        v34 = 0;
        v35 = 0;
        while ( v35 < (unsigned int)v33 )
        {
          States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v35];
          if ( !States )
            goto LABEL_99;
          States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
          if ( !States )
            goto LABEL_99;
          klass = States->klass;
          v41 = States;
          if ( *(_WORD *)&States->klass->_2.bitflags1 )
          {
            v42 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              ++v42;
              p_offset += 4;
              if ( v42 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                goto LABEL_21;
            }
            v44 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_21:
            v44 = sub_AF54C0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v39);
          }
          v47 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
          if ( !v47 )
            sub_B5D69C(0LL, v45);
          while ( 1 )
          {
            v48 = *(_QWORD *)v47;
            if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
            {
              v49 = 0LL;
              v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v49;
                v50 += 4;
                if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
                  goto LABEL_28;
              }
              v51 = v48 + 16LL * *v50 + 312;
            }
            else
            {
LABEL_28:
              v51 = sub_AF54C0(v47, System_Collections_IEnumerator_TypeInfo, 0LL, v46);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
              break;
            v53 = *(_QWORD *)v47;
            if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
            {
              v54 = 0LL;
              v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v55 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                ++v54;
                v55 += 4;
                if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
                  goto LABEL_35;
              }
              v56 = v53 + 16LL * *v55 + 312;
            }
            else
            {
LABEL_35:
              v56 = sub_AF54C0(v47, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v52);
            }
            v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v47, *(_QWORD *)(v56 + 8));
            v60 = v57;
            if ( !v57 )
              sub_B5D69C(0LL, v58);
            v61 = *(_QWORD *)v57;
            if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
            {
              v62 = 0LL;
              v63 = (SimpleAnimation_State_c **)(*(_QWORD *)(v61 + 176) + 8LL);
              while ( *(v63 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v62;
                v63 += 2;
                if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
                  goto LABEL_42;
              }
              v64 = v61 + 16LL * (*(_DWORD *)v63 + 8) + 312;
            }
            else
            {
LABEL_42:
              v64 = sub_AF54C0(v57, SimpleAnimation_State_TypeInfo, 8LL, v59);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v64)(v60, *(_QWORD *)(v64 + 8), 0.0);
          }
          v96[v34] = 95;
          v34 = ++v97;
          v65 = *(_QWORD *)v47;
          if ( *(_WORD *)(*(_QWORD *)v47 + 298LL) )
          {
            v66 = 0LL;
            v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
            {
              ++v66;
              v67 += 4;
              if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v47 + 298LL) )
                goto LABEL_50;
            }
            v68 = v65 + 16LL * *v67 + 312;
          }
          else
          {
LABEL_50:
            v68 = sub_AF54C0(v47, System_IDisposable_TypeInfo, 0LL, v52);
          }
          States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v47, *(_QWORD *)(v68 + 8));
          if ( v34 )
          {
            v69 = v34 - 1;
            if ( v96[v34 - 1] == 95 )
            {
              --v34;
              v97 = v69;
            }
          }
          LODWORD(v33) = ComponentsInChildren_USTimelineContainer->max_length;
          if ( (int)++v35 >= (int)v33 )
            goto LABEL_92;
        }
        goto LABEL_100;
      }
    }
    else if ( States )
    {
      v36 = *(_QWORD *)&States->fields.m_Graph.fields.m_Version;
      if ( v36 )
      {
        if ( (int)v36 >= 1 )
        {
          v37 = 0;
          v38 = 0;
          while ( v38 < (unsigned int)v36 )
          {
            States = (SimpleAnimation_o *)*((_QWORD *)&v32->fields.m_LayerMixer.fields.m_Version + (int)v38);
            if ( !States )
              goto LABEL_99;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
            if ( !Enumerator )
              sub_B5D69C(0LL, v70);
            while ( 1 )
            {
              v73 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v74 = 0LL;
                v75 = &v73->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v75 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v74;
                  v75 += 4;
                  if ( v74 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_68;
                }
                p_method = (__int64)&v73->vtable[*v75].method;
              }
              else
              {
LABEL_68:
                p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v71);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v78 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v79 = 0LL;
                v80 = (System_Collections_IEnumerator_c **)&v78->_1.interfaceOffsets->offset;
                while ( *(v80 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v79;
                  v80 += 2;
                  if ( v79 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_75;
                }
                v81 = (__int64)&v78->vtable[*(_DWORD *)v80 + 1].method;
              }
              else
              {
LABEL_75:
                v81 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v77);
              }
              v82 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v81)(
                                                      Enumerator,
                                                      *(_QWORD *)(v81 + 8));
              if ( !v82 )
                sub_B5D69C(0LL, v83);
              if ( v82->klass != UnityEngine_AnimationState_TypeInfo )
              {
                States = (SimpleAnimation_o *)sub_B5D990(v82);
                goto LABEL_99;
              }
              UnityEngine_AnimationState__set_speed(v82, 0.0, 0LL);
            }
            v96[v37] = 188;
            v37 = ++v97;
            States = (SimpleAnimation_o *)sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
            if ( States )
            {
              v85 = States->klass;
              v86 = States;
              if ( *(_WORD *)&States->klass->_2.bitflags1 )
              {
                v87 = 0LL;
                v88 = &v85->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
                {
                  ++v87;
                  v88 += 4;
                  if ( v87 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                    goto LABEL_85;
                }
                v89 = (__int64)(&v85->vtable._0_Equals.method + 2 * *v88);
              }
              else
              {
LABEL_85:
                v89 = sub_AF54C0(States, System_IDisposable_TypeInfo, 0LL, v84);
              }
              States = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v89)(
                                              v86,
                                              *(_QWORD *)(v89 + 8));
            }
            if ( v37 )
            {
              v90 = v37 - 1;
              if ( v96[v37 - 1] == 188 )
              {
                --v37;
                v97 = v90;
              }
            }
            LODWORD(v36) = v32->fields.m_Graph.fields.m_Version;
            if ( (int)++v38 >= (int)v36 )
              goto LABEL_92;
          }
LABEL_100:
          v94 = sub_B5D6C8(States);
          sub_B5D668(v94, 0LL);
        }
      }
    }
LABEL_92:
    States = (SimpleAnimation_o *)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                    v95,
                                    (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_99:
      sub_B5D69C(States, v31);
    m_Version = States->fields.m_Graph.fields.m_Version;
    v92 = States;
    if ( m_Version >= 1 )
    {
      v93 = 0;
      while ( v93 < m_Version )
      {
        States = (SimpleAnimation_o *)*((_QWORD *)&v92->fields.m_LayerMixer.fields.m_Version + (int)v93);
        if ( !States )
          goto LABEL_99;
        UnityEngine_ParticleSystem__Pause_51306804((UnityEngine_ParticleSystem_o *)States, 0LL);
        m_Version = v92->fields.m_Graph.fields.m_Version;
        if ( (int)++v93 >= m_Version )
          return;
      }
      goto LABEL_100;
    }
  }
}