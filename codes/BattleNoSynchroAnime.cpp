void __fastcall BattleNoSynchroAnime___ctor(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNoSynchroAnime__Start(BattleNoSynchroAnime_o *this, const MethodInfo *method)
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
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x19
  WellFired_USTimelineContainer_array *v27; // x0
  __int64 v28; // x1
  int max_length; // w8
  int v30; // w28
  unsigned int v31; // w22
  WellFired_USTimelineContainer_array *v32; // x20
  int v33; // w8
  int v34; // w27
  unsigned int v35; // w22
  SimpleAnimation_o *States; // x0
  __int64 v37; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v39; // x20
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x3
  __int64 v45; // x20
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x3
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x3
  __int64 v58; // x21
  __int64 v59; // x8
  unsigned __int64 v60; // x10
  SimpleAnimation_State_c **v61; // x11
  __int64 v62; // x0
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  SimpleAnimation_State_c **v65; // x11
  __int64 v66; // x0
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  SimpleAnimation_State_c **v69; // x11
  __int64 v70; // x0
  long double v71; // q0
  __int64 v72; // x3
  long double v73; // q0
  __int64 v74; // x8
  long double v75; // q8
  unsigned __int64 v76; // x10
  SimpleAnimation_State_c **v77; // x11
  __int64 v78; // x0
  __int64 v79; // x8
  unsigned __int64 v80; // x10
  int *v81; // x11
  __int64 v82; // x0
  int v83; // w8
  __int64 v84; // x1
  __int64 v85; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v87; // x8
  unsigned __int64 v88; // x10
  int32_t *v89; // x11
  __int64 p_method; // x0
  __int64 v91; // x3
  System_Collections_IEnumerator_c *v92; // x8
  unsigned __int64 v93; // x10
  System_Collections_IEnumerator_c **v94; // x11
  __int64 v95; // x0
  UnityEngine_AnimationState_o *v96; // x0
  __int64 v97; // x1
  UnityEngine_AnimationState_o *v98; // x21
  float length; // s1
  float v100; // s0
  __int64 v101; // x3
  Il2CppClass *v102; // x8
  WellFired_USTimelineContainer_array *v103; // x19
  unsigned __int64 v104; // x10
  int32_t *v105; // x11
  __int64 v106; // x0
  int v107; // w8
  __int64 v108; // x0
  _DWORD v109[2]; // [xsp+0h] [xbp-70h]
  int v110; // [xsp+8h] [xbp-68h]

  if ( (byte_42E5081 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationState_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v23, v24, v25);
    byte_42E5081 = 1;
  }
  v110 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v27 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_USTimelineContainer )
  {
    max_length = ComponentsInChildren_USTimelineContainer->max_length;
    if ( max_length >= 1 )
    {
      v30 = 0;
      v31 = 0;
      while ( v31 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v31];
        if ( !States )
          goto LABEL_111;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_111;
        klass = States->klass;
        v39 = States;
        if ( *(_WORD *)&States->klass->_2.bitflags1 )
        {
          v40 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v40;
            p_offset += 4;
            if ( v40 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
              goto LABEL_18;
          }
          v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_18:
          v42 = sub_AF54C0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v37);
        }
        v45 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
        if ( !v45 )
          sub_B5D69C(0LL, v43);
        while ( 1 )
        {
          v46 = *(_QWORD *)v45;
          if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
          {
            v47 = 0LL;
            v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v47;
              v48 += 4;
              if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
                goto LABEL_25;
            }
            v49 = v46 + 16LL * *v48 + 312;
          }
          else
          {
LABEL_25:
            v49 = sub_AF54C0(v45, System_Collections_IEnumerator_TypeInfo, 0LL, v44);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
            break;
          v51 = *(_QWORD *)v45;
          if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
          {
            v52 = 0LL;
            v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v53 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v52;
              v53 += 4;
              if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
                goto LABEL_32;
            }
            v54 = v51 + 16LL * *v53 + 312;
          }
          else
          {
LABEL_32:
            v54 = sub_AF54C0(v45, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v50);
          }
          v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v45, *(_QWORD *)(v54 + 8));
          v58 = v55;
          if ( !v55 )
            sub_B5D69C(0LL, v56);
          v59 = *(_QWORD *)v55;
          if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
          {
            v60 = 0LL;
            v61 = (SimpleAnimation_State_c **)(*(_QWORD *)(v59 + 176) + 8LL);
            while ( *(v61 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v60;
              v61 += 2;
              if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
                goto LABEL_39;
            }
            v62 = v59 + 16LL * (*(_DWORD *)v61 + 15) + 312;
          }
          else
          {
LABEL_39:
            v62 = sub_AF54C0(v55, SimpleAnimation_State_TypeInfo, 15LL, v57);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v62)(v58, *(_QWORD *)(v62 + 8)) != 2 )
          {
            v63 = *(_QWORD *)v58;
            if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
            {
              v64 = 0LL;
              v65 = (SimpleAnimation_State_c **)(*(_QWORD *)(v63 + 176) + 8LL);
              while ( *(v65 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v64;
                v65 += 2;
                if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
                  goto LABEL_46;
              }
              v66 = v63 + 16LL * (*(_DWORD *)v65 + 17) + 312;
            }
            else
            {
LABEL_46:
              v66 = sub_AF54C0(v58, SimpleAnimation_State_TypeInfo, 17LL, v44);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v66)(v58, *(_QWORD *)(v66 + 8)) != 2 )
              continue;
          }
          v67 = *(_QWORD *)v58;
          if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
          {
            v68 = 0LL;
            v69 = (SimpleAnimation_State_c **)(*(_QWORD *)(v67 + 176) + 8LL);
            while ( *(v69 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v68;
              v69 += 2;
              if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
                goto LABEL_53;
            }
            v70 = v67 + 16LL * (*(_DWORD *)v69 + 13) + 312;
          }
          else
          {
LABEL_53:
            v70 = sub_AF54C0(v58, SimpleAnimation_State_TypeInfo, 13LL, v44);
          }
          v71 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v70)(v58, *(_QWORD *)(v70 + 8));
          *(float *)&v73 = UnityEngine_Random__Range(0.0, *(float *)&v71, 0LL);
          v74 = *(_QWORD *)v58;
          v75 = v73;
          if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
          {
            v76 = 0LL;
            v77 = (SimpleAnimation_State_c **)(*(_QWORD *)(v74 + 176) + 8LL);
            while ( *(v77 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v76;
              v77 += 2;
              if ( v76 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
                goto LABEL_59;
            }
            v78 = v74 + 16LL * (*(_DWORD *)v77 + 4) + 312;
          }
          else
          {
LABEL_59:
            v78 = sub_AF54C0(v58, SimpleAnimation_State_TypeInfo, 4LL, v72);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v78)(v58, *(_QWORD *)(v78 + 8), v75);
        }
        v109[v30] = 116;
        v30 = ++v110;
        v79 = *(_QWORD *)v45;
        if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
        {
          v80 = 0LL;
          v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
          {
            ++v80;
            v81 += 4;
            if ( v80 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
              goto LABEL_67;
          }
          v82 = v79 + 16LL * *v81 + 312;
        }
        else
        {
LABEL_67:
          v82 = sub_AF54C0(v45, System_IDisposable_TypeInfo, 0LL, v50);
        }
        v27 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v82)(
                                                       v45,
                                                       *(_QWORD *)(v82 + 8));
        if ( v30 )
        {
          v83 = v30 - 1;
          if ( v109[v30 - 1] == 116 )
          {
            --v30;
            v110 = v83;
          }
        }
        max_length = ComponentsInChildren_USTimelineContainer->max_length;
        if ( (int)++v31 >= max_length )
          return;
      }
      goto LABEL_112;
    }
  }
  else
  {
    v32 = v27;
    if ( v27 )
    {
      v33 = v27->max_length;
      if ( v33 >= 1 )
      {
        v34 = 0;
        v35 = 0;
        while ( v35 < v33 )
        {
          States = (SimpleAnimation_o *)v32->m_Items[v35];
          if ( !States )
LABEL_111:
            sub_B5D69C(States, v28);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_B5D69C(0LL, v84);
          while ( 1 )
          {
            v87 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v88 = 0LL;
              v89 = &v87->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v89 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v88;
                v89 += 4;
                if ( v88 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_85;
              }
              p_method = (__int64)&v87->vtable[*v89].method;
            }
            else
            {
LABEL_85:
              p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v85);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v92 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v93 = 0LL;
              v94 = (System_Collections_IEnumerator_c **)&v92->_1.interfaceOffsets->offset;
              while ( *(v94 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v93;
                v94 += 2;
                if ( v93 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_92;
              }
              v95 = (__int64)&v92->vtable[*(_DWORD *)v94 + 1].method;
            }
            else
            {
LABEL_92:
              v95 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v91);
            }
            v96 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v95)(
                                                    Enumerator,
                                                    *(_QWORD *)(v95 + 8));
            v98 = v96;
            if ( !v96 )
              sub_B5D69C(0LL, v97);
            if ( v96->klass != UnityEngine_AnimationState_TypeInfo )
            {
              States = (SimpleAnimation_o *)sub_B5D990(v96);
              goto LABEL_111;
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v96, 0LL) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v98, 0LL);
              v100 = UnityEngine_Random__Range(0.0, length, 0LL);
              UnityEngine_AnimationState__set_time(v98, v100, 0LL);
            }
          }
          v109[v34] = 230;
          v34 = ++v110;
          v27 = (WellFired_USTimelineContainer_array *)sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
          if ( v27 )
          {
            v102 = v27->obj.klass;
            v103 = v27;
            if ( *(_WORD *)&v27->obj.klass->_2.bitflags1 )
            {
              v104 = 0LL;
              v105 = &v102->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v105 - 1) != System_IDisposable_TypeInfo )
              {
                ++v104;
                v105 += 4;
                if ( v104 >= *(unsigned __int16 *)&v27->obj.klass->_2.bitflags1 )
                  goto LABEL_103;
              }
              v106 = (__int64)&v102->vtable[*v105].method;
            }
            else
            {
LABEL_103:
              v106 = sub_AF54C0(v27, System_IDisposable_TypeInfo, 0LL, v101);
            }
            v27 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(WellFired_USTimelineContainer_array *, _QWORD))v106)(
                                                           v103,
                                                           *(_QWORD *)(v106 + 8));
          }
          if ( v34 )
          {
            v107 = v34 - 1;
            if ( v109[v34 - 1] == 230 )
            {
              --v34;
              v110 = v107;
            }
          }
          v33 = v32->max_length;
          if ( (int)++v35 >= v33 )
            return;
        }
LABEL_112:
        v108 = sub_B5D6C8(v27);
        sub_B5D668(v108, 0LL);
      }
    }
  }
}