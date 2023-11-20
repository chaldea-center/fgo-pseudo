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
  WellFired_USTimelineContainer_array *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  WellFired_USTimelineContainer_array *v16; // x21
  __int64 v17; // x8
  int v18; // w26
  unsigned int v19; // w23
  __int64 v20; // x8
  int v21; // w27
  unsigned int v22; // w19
  SimpleAnimation_o *v23; // x0
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *States; // x0
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__c *klass; // x8
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *v26; // x21
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v30; // x21
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x22
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  SimpleAnimation_State_c **v43; // x11
  __int64 v44; // x0
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  int v49; // w8
  UnityEngine_Animation_o *v50; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *v54; // x11
  __int64 v55; // x0
  System_Collections_IEnumerator_c *v56; // x8
  unsigned __int64 v57; // x10
  System_Collections_IEnumerator_c **v58; // x11
  __int64 v59; // x0
  UnityEngine_AnimationState_o *v60; // x0
  Il2CppClass *v61; // x8
  WellFired_USTimelineContainer_array *v62; // x20
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  int v66; // w8
  int max_length; // w8
  WellFired_USTimelineContainer_array *v68; // x19
  unsigned int v69; // w20
  UnityEngine_ParticleSystem_o *v70; // x0
  _DWORD v71[2]; // [xsp+0h] [xbp-70h]
  int v72; // [xsp+8h] [xbp-68h]
  UnityEngine_Component_o *v73; // [xsp+18h] [xbp-58h]

  if ( (byte_40FA8BB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v11);
    byte_40FA8BB = 1;
  }
  v72 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v73 = (UnityEngine_Component_o *)this;
  v13 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v16 = v13;
  if ( ComponentsInChildren_USTimelineContainer
    && (v17 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
  {
    if ( (int)v17 >= 1 )
    {
      v18 = 0;
      v19 = 0;
      LODWORD(v2) = 1.0;
      while ( v19 < (unsigned int)v17 )
      {
        v23 = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v19];
        if ( !v23 )
          goto LABEL_98;
        States = SimpleAnimation__GetStates(v23, 0LL);
        if ( !States )
          goto LABEL_98;
        klass = States->klass;
        v26 = States;
        if ( *(_WORD *)&States->klass->_2.bitflags1 )
        {
          v27 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v27;
            p_offset += 4;
            if ( v27 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
              goto LABEL_20;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_20:
          p_method = sub_AAFEF8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *, _QWORD))p_method)(
                v26,
                *(_QWORD *)(p_method + 8));
        if ( !v30 )
          sub_B170D4();
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
            v34 = sub_AAFEF8(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
            break;
          v35 = *(_QWORD *)v30;
          if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
          {
            v36 = 0LL;
            v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v37 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v36;
              v37 += 4;
              if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
                goto LABEL_34;
            }
            v38 = v35 + 16LL * *v37 + 312;
          }
          else
          {
LABEL_34:
            v38 = sub_AAFEF8(v30, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
          v40 = v39;
          if ( !v39 )
            sub_B170D4();
          v41 = *(_QWORD *)v39;
          if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
          {
            v42 = 0LL;
            v43 = (SimpleAnimation_State_c **)(*(_QWORD *)(v41 + 176) + 8LL);
            while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v42;
              v43 += 2;
              if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
                goto LABEL_41;
            }
            v44 = v41 + 16LL * (*(_DWORD *)v43 + 8) + 312;
          }
          else
          {
LABEL_41:
            v44 = sub_AAFEF8(v39, SimpleAnimation_State_TypeInfo, 8LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v44)(v40, *(_QWORD *)(v44 + 8), v2);
        }
        v71[v18] = 84;
        v18 = ++v72;
        v45 = *(_QWORD *)v30;
        if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
        {
          v46 = 0LL;
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
          {
            ++v46;
            v47 += 4;
            if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
              goto LABEL_49;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_49:
          v48 = sub_AAFEF8(v30, System_IDisposable_TypeInfo, 0LL);
        }
        v13 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(
                                                       v30,
                                                       *(_QWORD *)(v48 + 8));
        if ( v18 )
        {
          v49 = v18 - 1;
          if ( v71[v18 - 1] == 84 )
          {
            --v18;
            v72 = v49;
          }
        }
        LODWORD(v17) = ComponentsInChildren_USTimelineContainer->max_length;
        if ( (int)++v19 >= (int)v17 )
          goto LABEL_91;
      }
      goto LABEL_99;
    }
  }
  else if ( v13 )
  {
    v20 = *(_QWORD *)&v13->max_length;
    if ( v20 )
    {
      if ( (int)v20 >= 1 )
      {
        v21 = 0;
        v22 = 0;
        while ( v22 < (unsigned int)v20 )
        {
          v50 = (UnityEngine_Animation_o *)v16->m_Items[v22];
          if ( !v50 )
            goto LABEL_98;
          Enumerator = UnityEngine_Animation__GetEnumerator(v50, 0LL);
          if ( !Enumerator )
            sub_B170D4();
          while ( 1 )
          {
            v52 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v53 = 0LL;
              v54 = &v52->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v53;
                v54 += 4;
                if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_67;
              }
              v55 = (__int64)&v52->vtable[*v54].method;
            }
            else
            {
LABEL_67:
              v55 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v55)(
                    Enumerator,
                    *(_QWORD *)(v55 + 8)) & 1) == 0 )
              break;
            v56 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v57 = 0LL;
              v58 = (System_Collections_IEnumerator_c **)&v56->_1.interfaceOffsets->offset;
              while ( *(v58 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v57;
                v58 += 2;
                if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_74;
              }
              v59 = (__int64)&v56->vtable[*(_DWORD *)v58 + 1].method;
            }
            else
            {
LABEL_74:
              v59 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v60 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v59)(
                                                    Enumerator,
                                                    *(_QWORD *)(v59 + 8));
            if ( !v60 )
              sub_B170D4();
            if ( v60->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_B173C8(v60);
              goto LABEL_98;
            }
            UnityEngine_AnimationState__set_speed(v60, 1.0, 0LL);
          }
          v71[v21] = 177;
          v21 = ++v72;
          v13 = (WellFired_USTimelineContainer_array *)sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
          if ( v13 )
          {
            v61 = v13->obj.klass;
            v62 = v13;
            if ( *(_WORD *)&v13->obj.klass->_2.bitflags1 )
            {
              v63 = 0LL;
              v64 = &v61->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
              {
                ++v63;
                v64 += 4;
                if ( v63 >= *(unsigned __int16 *)&v13->obj.klass->_2.bitflags1 )
                  goto LABEL_84;
              }
              v65 = (__int64)&v61->vtable[*v64].method;
            }
            else
            {
LABEL_84:
              v65 = sub_AAFEF8(v13, System_IDisposable_TypeInfo, 0LL);
            }
            v13 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(WellFired_USTimelineContainer_array *, _QWORD))v65)(
                                                           v62,
                                                           *(_QWORD *)(v65 + 8));
          }
          if ( v21 )
          {
            v66 = v21 - 1;
            if ( v71[v21 - 1] == 177 )
            {
              --v21;
              v72 = v66;
            }
          }
          LODWORD(v20) = v16->max_length;
          if ( (int)++v22 >= (int)v20 )
            goto LABEL_91;
        }
LABEL_99:
        sub_B17100(v13, v14, v15);
        sub_B170A0();
      }
    }
  }
LABEL_91:
  v13 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
          v73,
          (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !v13 )
LABEL_98:
    sub_B170D4();
  max_length = v13->max_length;
  v68 = v13;
  if ( max_length >= 1 )
  {
    v69 = 0;
    while ( v69 < max_length )
    {
      v70 = (UnityEngine_ParticleSystem_o *)v68->m_Items[v69];
      if ( !v70 )
        goto LABEL_98;
      UnityEngine_ParticleSystem__Play_49805208(v70, 0LL);
      max_length = v68->max_length;
      if ( (int)++v69 >= max_length )
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
  WellFired_USTimelineContainer_array *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  WellFired_USTimelineContainer_array *v15; // x21
  __int64 v16; // x8
  int v17; // w19
  unsigned int v18; // w23
  __int64 v19; // x8
  int v20; // w27
  unsigned int v21; // w19
  SimpleAnimation_o *v22; // x0
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *States; // x0
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__c *klass; // x8
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *v25; // x21
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x21
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x22
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  SimpleAnimation_State_c **v42; // x11
  __int64 v43; // x0
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  int v48; // w8
  UnityEngine_Animation_o *v49; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  System_Collections_IEnumerator_c *v55; // x8
  unsigned __int64 v56; // x10
  System_Collections_IEnumerator_c **v57; // x11
  __int64 v58; // x0
  UnityEngine_AnimationState_o *v59; // x0
  Il2CppClass *v60; // x8
  WellFired_USTimelineContainer_array *v61; // x20
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 v64; // x0
  int v65; // w8
  int max_length; // w8
  WellFired_USTimelineContainer_array *v67; // x19
  unsigned int v68; // w20
  UnityEngine_ParticleSystem_o *v69; // x0
  UnityEngine_Component_o *v70; // [xsp+8h] [xbp-68h]
  _DWORD v71[2]; // [xsp+10h] [xbp-60h]
  int v72; // [xsp+18h] [xbp-58h]

  if ( (byte_40FA8BA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v4);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v10);
    byte_40FA8BA = 1;
  }
  v72 = 0;
  if ( LOBYTE(this[1].klass) )
  {
    ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    v70 = (UnityEngine_Component_o *)this;
    v12 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v15 = v12;
    if ( ComponentsInChildren_USTimelineContainer
      && (v16 = *(_QWORD *)&ComponentsInChildren_USTimelineContainer->max_length) != 0 )
    {
      if ( (int)v16 >= 1 )
      {
        v17 = 0;
        v18 = 0;
        while ( v18 < (unsigned int)v16 )
        {
          v22 = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v18];
          if ( !v22 )
            goto LABEL_99;
          States = SimpleAnimation__GetStates(v22, 0LL);
          if ( !States )
            goto LABEL_99;
          klass = States->klass;
          v25 = States;
          if ( *(_WORD *)&States->klass->_2.bitflags1 )
          {
            v26 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              ++v26;
              p_offset += 4;
              if ( v26 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
                goto LABEL_21;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_21:
            p_method = sub_AAFEF8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *, _QWORD))p_method)(
                  v25,
                  *(_QWORD *)(p_method + 8));
          if ( !v29 )
            sub_B170D4();
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
              v33 = sub_AAFEF8(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
              break;
            v34 = *(_QWORD *)v29;
            if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
            {
              v35 = 0LL;
              v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v36 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                ++v35;
                v36 += 4;
                if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
                  goto LABEL_35;
              }
              v37 = v34 + 16LL * *v36 + 312;
            }
            else
            {
LABEL_35:
              v37 = sub_AAFEF8(v29, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
            }
            v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
            v39 = v38;
            if ( !v38 )
              sub_B170D4();
            v40 = *(_QWORD *)v38;
            if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
            {
              v41 = 0LL;
              v42 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
              while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v41;
                v42 += 2;
                if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                  goto LABEL_42;
              }
              v43 = v40 + 16LL * (*(_DWORD *)v42 + 8) + 312;
            }
            else
            {
LABEL_42:
              v43 = sub_AAFEF8(v38, SimpleAnimation_State_TypeInfo, 8LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD, float))v43)(v39, *(_QWORD *)(v43 + 8), 0.0);
          }
          v71[v17] = 95;
          v17 = ++v72;
          v44 = *(_QWORD *)v29;
          if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
          {
            v45 = 0LL;
            v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
            {
              ++v45;
              v46 += 4;
              if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
                goto LABEL_50;
            }
            v47 = v44 + 16LL * *v46 + 312;
          }
          else
          {
LABEL_50:
            v47 = sub_AAFEF8(v29, System_IDisposable_TypeInfo, 0LL);
          }
          v12 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(
                                                         v29,
                                                         *(_QWORD *)(v47 + 8));
          if ( v17 )
          {
            v48 = v17 - 1;
            if ( v71[v17 - 1] == 95 )
            {
              --v17;
              v72 = v48;
            }
          }
          LODWORD(v16) = ComponentsInChildren_USTimelineContainer->max_length;
          if ( (int)++v18 >= (int)v16 )
            goto LABEL_92;
        }
        goto LABEL_100;
      }
    }
    else if ( v12 )
    {
      v19 = *(_QWORD *)&v12->max_length;
      if ( v19 )
      {
        if ( (int)v19 >= 1 )
        {
          v20 = 0;
          v21 = 0;
          while ( v21 < (unsigned int)v19 )
          {
            v49 = (UnityEngine_Animation_o *)v15->m_Items[v21];
            if ( !v49 )
              goto LABEL_99;
            Enumerator = UnityEngine_Animation__GetEnumerator(v49, 0LL);
            if ( !Enumerator )
              sub_B170D4();
            while ( 1 )
            {
              v51 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v52 = 0LL;
                v53 = &v51->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v52;
                  v53 += 4;
                  if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_68;
                }
                v54 = (__int64)&v51->vtable[*v53].method;
              }
              else
              {
LABEL_68:
                v54 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v54)(
                      Enumerator,
                      *(_QWORD *)(v54 + 8)) & 1) == 0 )
                break;
              v55 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v56 = 0LL;
                v57 = (System_Collections_IEnumerator_c **)&v55->_1.interfaceOffsets->offset;
                while ( *(v57 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v56;
                  v57 += 2;
                  if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_75;
                }
                v58 = (__int64)&v55->vtable[*(_DWORD *)v57 + 1].method;
              }
              else
              {
LABEL_75:
                v58 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
              }
              v59 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v58)(
                                                      Enumerator,
                                                      *(_QWORD *)(v58 + 8));
              if ( !v59 )
                sub_B170D4();
              if ( v59->klass != UnityEngine_AnimationState_TypeInfo )
              {
                sub_B173C8(v59);
                goto LABEL_99;
              }
              UnityEngine_AnimationState__set_speed(v59, 0.0, 0LL);
            }
            v71[v20] = 188;
            v20 = ++v72;
            v12 = (WellFired_USTimelineContainer_array *)sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
            if ( v12 )
            {
              v60 = v12->obj.klass;
              v61 = v12;
              if ( *(_WORD *)&v12->obj.klass->_2.bitflags1 )
              {
                v62 = 0LL;
                v63 = &v60->_1.interfaceOffsets->offset;
                while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
                {
                  ++v62;
                  v63 += 4;
                  if ( v62 >= *(unsigned __int16 *)&v12->obj.klass->_2.bitflags1 )
                    goto LABEL_85;
                }
                v64 = (__int64)&v60->vtable[*v63].method;
              }
              else
              {
LABEL_85:
                v64 = sub_AAFEF8(v12, System_IDisposable_TypeInfo, 0LL);
              }
              v12 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(WellFired_USTimelineContainer_array *, _QWORD))v64)(
                                                             v61,
                                                             *(_QWORD *)(v64 + 8));
            }
            if ( v20 )
            {
              v65 = v20 - 1;
              if ( v71[v20 - 1] == 188 )
              {
                --v20;
                v72 = v65;
              }
            }
            LODWORD(v19) = v15->max_length;
            if ( (int)++v21 >= (int)v19 )
              goto LABEL_92;
          }
LABEL_100:
          sub_B17100(v12, v13, v14);
          sub_B170A0();
        }
      }
    }
LABEL_92:
    v12 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
            v70,
            (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !v12 )
LABEL_99:
      sub_B170D4();
    max_length = v12->max_length;
    v67 = v12;
    if ( max_length >= 1 )
    {
      v68 = 0;
      while ( v68 < max_length )
      {
        v69 = (UnityEngine_ParticleSystem_o *)v67->m_Items[v68];
        if ( !v69 )
          goto LABEL_99;
        UnityEngine_ParticleSystem__Pause_49805356(v69, 0LL);
        max_length = v67->max_length;
        if ( (int)++v68 >= max_length )
          return;
      }
      goto LABEL_100;
    }
  }
}