void __fastcall BattleNoSynchroAnime___ctor(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNoSynchroAnime__Start(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x19
  WellFired_USTimelineContainer_array *v4; // x0
  __int64 v5; // x1
  int max_length; // w8
  int v7; // w28
  unsigned int v8; // w22
  WellFired_USTimelineContainer_array *v9; // x20
  int v10; // w8
  int v11; // w27
  unsigned int v12; // w22
  SimpleAnimation_o *States; // x0
  __int64 v14; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v16; // x20
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  __int64 v22; // x20
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
  __int64 v49; // x3
  long double v50; // q0
  __int64 v51; // x8
  long double v52; // q8
  unsigned __int64 v53; // x10
  SimpleAnimation_State_c **v54; // x11
  __int64 v55; // x0
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  int v60; // w8
  __int64 v61; // x1
  __int64 v62; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 p_method; // x0
  __int64 v68; // x3
  System_Collections_IEnumerator_c *v69; // x8
  unsigned __int64 v70; // x10
  System_Collections_IEnumerator_c **v71; // x11
  __int64 v72; // x0
  UnityEngine_AnimationState_o *v73; // x0
  __int64 v74; // x1
  UnityEngine_AnimationState_o *v75; // x21
  float length; // s1
  float v77; // s0
  __int64 v78; // x3
  Il2CppClass *v79; // x8
  WellFired_USTimelineContainer_array *v80; // x19
  unsigned __int64 v81; // x10
  int32_t *v82; // x11
  __int64 v83; // x0
  int v84; // w8
  __int64 v85; // x0
  _DWORD v86[2]; // [xsp+0h] [xbp-70h]
  int v87; // [xsp+8h] [xbp-68h]

  if ( (byte_42AC98C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AnimationState_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AC98C = 1;
  }
  v87 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v4 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_USTimelineContainer )
  {
    max_length = ComponentsInChildren_USTimelineContainer->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      v8 = 0;
      while ( v8 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v8];
        if ( !States )
          goto LABEL_111;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_111;
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
              goto LABEL_18;
          }
          v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_18:
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
                goto LABEL_25;
            }
            v26 = v23 + 16LL * *v25 + 312;
          }
          else
          {
LABEL_25:
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
                goto LABEL_32;
            }
            v31 = v28 + 16LL * *v30 + 312;
          }
          else
          {
LABEL_32:
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
                goto LABEL_39;
            }
            v39 = v36 + 16LL * (*(_DWORD *)v38 + 15) + 312;
          }
          else
          {
LABEL_39:
            v39 = sub_AEB880(v32, SimpleAnimation_State_TypeInfo, 15LL, v34);
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
              v43 = sub_AEB880(v35, SimpleAnimation_State_TypeInfo, 17LL, v21);
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
            v47 = sub_AEB880(v35, SimpleAnimation_State_TypeInfo, 13LL, v21);
          }
          v48 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v47)(v35, *(_QWORD *)(v47 + 8));
          *(float *)&v50 = UnityEngine_Random__Range(0.0, *(float *)&v48, 0LL);
          v51 = *(_QWORD *)v35;
          v52 = v50;
          if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
          {
            v53 = 0LL;
            v54 = (SimpleAnimation_State_c **)(*(_QWORD *)(v51 + 176) + 8LL);
            while ( *(v54 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v53;
              v54 += 2;
              if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
                goto LABEL_59;
            }
            v55 = v51 + 16LL * (*(_DWORD *)v54 + 4) + 312;
          }
          else
          {
LABEL_59:
            v55 = sub_AEB880(v35, SimpleAnimation_State_TypeInfo, 4LL, v49);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v55)(v35, *(_QWORD *)(v55 + 8), v52);
        }
        v86[v7] = 116;
        v7 = ++v87;
        v56 = *(_QWORD *)v22;
        if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
        {
          v57 = 0LL;
          v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
          {
            ++v57;
            v58 += 4;
            if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
              goto LABEL_67;
          }
          v59 = v56 + 16LL * *v58 + 312;
        }
        else
        {
LABEL_67:
          v59 = sub_AEB880(v22, System_IDisposable_TypeInfo, 0LL, v27);
        }
        v4 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v59)(
                                                      v22,
                                                      *(_QWORD *)(v59 + 8));
        if ( v7 )
        {
          v60 = v7 - 1;
          if ( v86[v7 - 1] == 116 )
          {
            --v7;
            v87 = v60;
          }
        }
        max_length = ComponentsInChildren_USTimelineContainer->max_length;
        if ( (int)++v8 >= max_length )
          return;
      }
      goto LABEL_112;
    }
  }
  else
  {
    v9 = v4;
    if ( v4 )
    {
      v10 = v4->max_length;
      if ( v10 >= 1 )
      {
        v11 = 0;
        v12 = 0;
        while ( v12 < v10 )
        {
          States = (SimpleAnimation_o *)v9->m_Items[v12];
          if ( !States )
LABEL_111:
            sub_B52A5C(States, v5);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_B52A5C(0LL, v61);
          while ( 1 )
          {
            v64 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v65 = 0LL;
              v66 = &v64->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v66 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v65;
                v66 += 4;
                if ( v65 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_85;
              }
              p_method = (__int64)&v64->vtable[*v66].method;
            }
            else
            {
LABEL_85:
              p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v62);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v69 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v70 = 0LL;
              v71 = (System_Collections_IEnumerator_c **)&v69->_1.interfaceOffsets->offset;
              while ( *(v71 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v70;
                v71 += 2;
                if ( v70 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_92;
              }
              v72 = (__int64)&v69->vtable[*(_DWORD *)v71 + 1].method;
            }
            else
            {
LABEL_92:
              v72 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v68);
            }
            v73 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v72)(
                                                    Enumerator,
                                                    *(_QWORD *)(v72 + 8));
            v75 = v73;
            if ( !v73 )
              sub_B52A5C(0LL, v74);
            if ( v73->klass != UnityEngine_AnimationState_TypeInfo )
            {
              States = (SimpleAnimation_o *)sub_B52D50(v73);
              goto LABEL_111;
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v73, 0LL) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v75, 0LL);
              v77 = UnityEngine_Random__Range(0.0, length, 0LL);
              UnityEngine_AnimationState__set_time(v75, v77, 0LL);
            }
          }
          v86[v11] = 230;
          v11 = ++v87;
          v4 = (WellFired_USTimelineContainer_array *)sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
          if ( v4 )
          {
            v79 = v4->obj.klass;
            v80 = v4;
            if ( *(_WORD *)&v4->obj.klass->_2.bitflags1 )
            {
              v81 = 0LL;
              v82 = &v79->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
              {
                ++v81;
                v82 += 4;
                if ( v81 >= *(unsigned __int16 *)&v4->obj.klass->_2.bitflags1 )
                  goto LABEL_103;
              }
              v83 = (__int64)&v79->vtable[*v82].method;
            }
            else
            {
LABEL_103:
              v83 = sub_AEB880(v4, System_IDisposable_TypeInfo, 0LL, v78);
            }
            v4 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(WellFired_USTimelineContainer_array *, _QWORD))v83)(
                                                          v80,
                                                          *(_QWORD *)(v83 + 8));
          }
          if ( v11 )
          {
            v84 = v11 - 1;
            if ( v86[v11 - 1] == 230 )
            {
              --v11;
              v87 = v84;
            }
          }
          v10 = v9->max_length;
          if ( (int)++v12 >= v10 )
            return;
        }
LABEL_112:
        v85 = sub_B52A88(v4);
        sub_B52A28(v85, 0LL);
      }
    }
  }
}