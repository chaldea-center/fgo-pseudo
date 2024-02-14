void __fastcall BattleNoSynchroAnime___ctor(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNoSynchroAnime__Start(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x19
  WellFired_USTimelineContainer_array *v11; // x0
  int max_length; // w8
  int v13; // w28
  unsigned int v14; // w22
  WellFired_USTimelineContainer_array *v15; // x20
  int v16; // w8
  int v17; // w27
  unsigned int v18; // w22
  SimpleAnimation_o *States; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v21; // x20
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0
  __int64 v25; // x20
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x21
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  SimpleAnimation_State_c **v38; // x11
  __int64 v39; // x0
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  SimpleAnimation_State_c **v42; // x11
  __int64 v43; // x0
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  SimpleAnimation_State_c **v46; // x11
  __int64 v47; // x0
  long double v48; // q0
  long double v49; // q0
  __int64 v50; // x8
  long double v51; // q8
  unsigned __int64 v52; // x10
  SimpleAnimation_State_c **v53; // x11
  __int64 v54; // x0
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  int v59; // w8
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v61; // x8
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v65; // x8
  unsigned __int64 v66; // x10
  System_Collections_IEnumerator_c **v67; // x11
  __int64 v68; // x0
  UnityEngine_AnimationState_o *v69; // x0
  UnityEngine_AnimationState_o *v70; // x21
  float length; // s1
  float v72; // s0
  Il2CppClass *v73; // x8
  WellFired_USTimelineContainer_array *v74; // x19
  unsigned __int64 v75; // x10
  int32_t *v76; // x11
  __int64 v77; // x0
  int v78; // w8
  __int64 v79; // x0
  _DWORD v80[2]; // [xsp+0h] [xbp-70h]
  int v81; // [xsp+8h] [xbp-68h]

  if ( (byte_421119F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v9);
    byte_421119F = 1;
  }
  v81 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v11 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_USTimelineContainer )
  {
    max_length = ComponentsInChildren_USTimelineContainer->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      v14 = 0;
      while ( v14 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v14];
        if ( !States )
          goto LABEL_111;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_111;
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
              goto LABEL_18;
          }
          v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_18:
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
                goto LABEL_25;
            }
            v29 = v26 + 16LL * *v28 + 312;
          }
          else
          {
LABEL_25:
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
                goto LABEL_32;
            }
            v33 = v30 + 16LL * *v32 + 312;
          }
          else
          {
LABEL_32:
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
                goto LABEL_39;
            }
            v39 = v36 + 16LL * (*(_DWORD *)v38 + 15) + 312;
          }
          else
          {
LABEL_39:
            v39 = sub_AA67A0(v34, SimpleAnimation_State_TypeInfo, 15LL);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) != 2 )
          {
            v40 = *(_QWORD *)v35;
            if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
            {
              v41 = 0LL;
              v42 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
              while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v41;
                v42 += 2;
                if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
                  goto LABEL_46;
              }
              v43 = v40 + 16LL * (*(_DWORD *)v42 + 17) + 312;
            }
            else
            {
LABEL_46:
              v43 = sub_AA67A0(v35, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8)) != 2 )
              continue;
          }
          v44 = *(_QWORD *)v35;
          if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
          {
            v45 = 0LL;
            v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v44 + 176) + 8LL);
            while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v45;
              v46 += 2;
              if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
                goto LABEL_53;
            }
            v47 = v44 + 16LL * (*(_DWORD *)v46 + 13) + 312;
          }
          else
          {
LABEL_53:
            v47 = sub_AA67A0(v35, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v48 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v47)(v35, *(_QWORD *)(v47 + 8));
          *(float *)&v49 = UnityEngine_Random__Range(0.0, *(float *)&v48, 0LL);
          v50 = *(_QWORD *)v35;
          v51 = v49;
          if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
          {
            v52 = 0LL;
            v53 = (SimpleAnimation_State_c **)(*(_QWORD *)(v50 + 176) + 8LL);
            while ( *(v53 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v52;
              v53 += 2;
              if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
                goto LABEL_59;
            }
            v54 = v50 + 16LL * (*(_DWORD *)v53 + 4) + 312;
          }
          else
          {
LABEL_59:
            v54 = sub_AA67A0(v35, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v54)(v35, *(_QWORD *)(v54 + 8), v51);
        }
        v80[v13] = 116;
        v13 = ++v81;
        v55 = *(_QWORD *)v25;
        if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
        {
          v56 = 0LL;
          v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
          {
            ++v56;
            v57 += 4;
            if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
              goto LABEL_67;
          }
          v58 = v55 + 16LL * *v57 + 312;
        }
        else
        {
LABEL_67:
          v58 = sub_AA67A0(v25, System_IDisposable_TypeInfo, 0LL);
        }
        v11 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v58)(
                                                       v25,
                                                       *(_QWORD *)(v58 + 8));
        if ( v13 )
        {
          v59 = v13 - 1;
          if ( v80[v13 - 1] == 116 )
          {
            --v13;
            v81 = v59;
          }
        }
        max_length = ComponentsInChildren_USTimelineContainer->max_length;
        if ( (int)++v14 >= max_length )
          return;
      }
      goto LABEL_112;
    }
  }
  else
  {
    v15 = v11;
    if ( v11 )
    {
      v16 = v11->max_length;
      if ( v16 >= 1 )
      {
        v17 = 0;
        v18 = 0;
        while ( v18 < v16 )
        {
          States = (SimpleAnimation_o *)v15->m_Items[v18];
          if ( !States )
LABEL_111:
            sub_B0D97C(States);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_B0D97C(0LL);
          while ( 1 )
          {
            v61 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v62 = 0LL;
              v63 = &v61->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v63 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v62;
                v63 += 4;
                if ( v62 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_85;
              }
              p_method = (__int64)&v61->vtable[*v63].method;
            }
            else
            {
LABEL_85:
              p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v65 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v66 = 0LL;
              v67 = (System_Collections_IEnumerator_c **)&v65->_1.interfaceOffsets->offset;
              while ( *(v67 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v66;
                v67 += 2;
                if ( v66 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_92;
              }
              v68 = (__int64)&v65->vtable[*(_DWORD *)v67 + 1].method;
            }
            else
            {
LABEL_92:
              v68 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v69 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v68)(
                                                    Enumerator,
                                                    *(_QWORD *)(v68 + 8));
            v70 = v69;
            if ( !v69 )
              sub_B0D97C(0LL);
            if ( v69->klass != UnityEngine_AnimationState_TypeInfo )
            {
              States = (SimpleAnimation_o *)sub_B0DC70(v69);
              goto LABEL_111;
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v69, 0LL) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v70, 0LL);
              v72 = UnityEngine_Random__Range(0.0, length, 0LL);
              UnityEngine_AnimationState__set_time(v70, v72, 0LL);
            }
          }
          v80[v17] = 230;
          v17 = ++v81;
          v11 = (WellFired_USTimelineContainer_array *)sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
          if ( v11 )
          {
            v73 = v11->obj.klass;
            v74 = v11;
            if ( *(_WORD *)&v11->obj.klass->_2.bitflags1 )
            {
              v75 = 0LL;
              v76 = &v73->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
              {
                ++v75;
                v76 += 4;
                if ( v75 >= *(unsigned __int16 *)&v11->obj.klass->_2.bitflags1 )
                  goto LABEL_103;
              }
              v77 = (__int64)&v73->vtable[*v76].method;
            }
            else
            {
LABEL_103:
              v77 = sub_AA67A0(v11, System_IDisposable_TypeInfo, 0LL);
            }
            v11 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(WellFired_USTimelineContainer_array *, _QWORD))v77)(
                                                           v74,
                                                           *(_QWORD *)(v77 + 8));
          }
          if ( v17 )
          {
            v78 = v17 - 1;
            if ( v80[v17 - 1] == 230 )
            {
              --v17;
              v81 = v78;
            }
          }
          v16 = v15->max_length;
          if ( (int)++v18 >= v16 )
            return;
        }
LABEL_112:
        v79 = sub_B0D9A8(v11);
        sub_B0D948(v79, 0LL);
      }
    }
  }
}