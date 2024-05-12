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
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v15; // x20
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x20
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
  __int64 v31; // x21
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  SimpleAnimation_State_c **v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  SimpleAnimation_State_c **v38; // x11
  __int64 v39; // x0
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  SimpleAnimation_State_c **v42; // x11
  __int64 v43; // x0
  long double v44; // q0
  long double v45; // q0
  __int64 v46; // x8
  long double v47; // q8
  unsigned __int64 v48; // x10
  SimpleAnimation_State_c **v49; // x11
  __int64 v50; // x0
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  int v55; // w8
  __int64 v56; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v62; // x8
  unsigned __int64 v63; // x10
  System_Collections_IEnumerator_c **v64; // x11
  __int64 v65; // x0
  UnityEngine_AnimationState_o *v66; // x0
  __int64 v67; // x1
  UnityEngine_AnimationState_o *v68; // x21
  float length; // s1
  float v70; // s0
  Il2CppClass *v71; // x8
  WellFired_USTimelineContainer_array *v72; // x19
  unsigned __int64 v73; // x10
  int32_t *v74; // x11
  __int64 v75; // x0
  int v76; // w8
  __int64 v77; // x0
  _DWORD v78[2]; // [xsp+0h] [xbp-70h]
  int v79; // [xsp+8h] [xbp-68h]

  if ( (byte_4387735 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_AnimationState_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_4387735 = 1;
  }
  v79 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v4 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
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
              goto LABEL_18;
          }
          v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_18:
          v18 = sub_B0F4C0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v20 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
        if ( !v20 )
          sub_B7769C(0LL, v19);
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
                goto LABEL_25;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_25:
            v24 = sub_B0F4C0(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                goto LABEL_32;
            }
            v28 = v25 + 16LL * *v27 + 312;
          }
          else
          {
LABEL_32:
            v28 = sub_B0F4C0(v20, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
          v31 = v29;
          if ( !v29 )
            sub_B7769C(0LL, v30);
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
                goto LABEL_39;
            }
            v35 = v32 + 16LL * (*(_DWORD *)v34 + 15) + 312;
          }
          else
          {
LABEL_39:
            v35 = sub_B0F4C0(v29, SimpleAnimation_State_TypeInfo, 15LL);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) != 2 )
          {
            v36 = *(_QWORD *)v31;
            if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
            {
              v37 = 0LL;
              v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
              while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v37;
                v38 += 2;
                if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
                  goto LABEL_46;
              }
              v39 = v36 + 16LL * (*(_DWORD *)v38 + 17) + 312;
            }
            else
            {
LABEL_46:
              v39 = sub_B0F4C0(v31, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8)) != 2 )
              continue;
          }
          v40 = *(_QWORD *)v31;
          if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
          {
            v41 = 0LL;
            v42 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
            while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v41;
              v42 += 2;
              if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
                goto LABEL_53;
            }
            v43 = v40 + 16LL * (*(_DWORD *)v42 + 13) + 312;
          }
          else
          {
LABEL_53:
            v43 = sub_B0F4C0(v31, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v44 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v43)(v31, *(_QWORD *)(v43 + 8));
          *(float *)&v45 = UnityEngine_Random__Range(0.0, *(float *)&v44, 0LL);
          v46 = *(_QWORD *)v31;
          v47 = v45;
          if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
          {
            v48 = 0LL;
            v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v46 + 176) + 8LL);
            while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v48;
              v49 += 2;
              if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
                goto LABEL_59;
            }
            v50 = v46 + 16LL * (*(_DWORD *)v49 + 4) + 312;
          }
          else
          {
LABEL_59:
            v50 = sub_B0F4C0(v31, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v50)(v31, *(_QWORD *)(v50 + 8), v47);
        }
        v78[v7] = 116;
        v7 = ++v79;
        v51 = *(_QWORD *)v20;
        if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
        {
          v52 = 0LL;
          v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
          {
            ++v52;
            v53 += 4;
            if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
              goto LABEL_67;
          }
          v54 = v51 + 16LL * *v53 + 312;
        }
        else
        {
LABEL_67:
          v54 = sub_B0F4C0(v20, System_IDisposable_TypeInfo, 0LL);
        }
        v4 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(
                                                      v20,
                                                      *(_QWORD *)(v54 + 8));
        if ( v7 )
        {
          v55 = v7 - 1;
          if ( v78[v7 - 1] == 116 )
          {
            --v7;
            v79 = v55;
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
            sub_B7769C(States, v5);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_B7769C(0LL, v56);
          while ( 1 )
          {
            v58 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v59 = 0LL;
              v60 = &v58->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v59;
                v60 += 4;
                if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_85;
              }
              p_method = (__int64)&v58->vtable[*v60].method;
            }
            else
            {
LABEL_85:
              p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v62 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v63 = 0LL;
              v64 = (System_Collections_IEnumerator_c **)&v62->_1.interfaceOffsets->offset;
              while ( *(v64 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v63;
                v64 += 2;
                if ( v63 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_92;
              }
              v65 = (__int64)&v62->vtable[*(_DWORD *)v64 + 1].method;
            }
            else
            {
LABEL_92:
              v65 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v66 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v65)(
                                                    Enumerator,
                                                    *(_QWORD *)(v65 + 8));
            v68 = v66;
            if ( !v66 )
              sub_B7769C(0LL, v67);
            if ( v66->klass != UnityEngine_AnimationState_TypeInfo )
            {
              States = (SimpleAnimation_o *)sub_B77990(v66);
              goto LABEL_111;
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v66, 0LL) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v68, 0LL);
              v70 = UnityEngine_Random__Range(0.0, length, 0LL);
              UnityEngine_AnimationState__set_time(v68, v70, 0LL);
            }
          }
          v78[v11] = 230;
          v11 = ++v79;
          v4 = (WellFired_USTimelineContainer_array *)sub_B77684(Enumerator, System_IDisposable_TypeInfo);
          if ( v4 )
          {
            v71 = v4->obj.klass;
            v72 = v4;
            if ( *(_WORD *)&v4->obj.klass->_2.bitflags1 )
            {
              v73 = 0LL;
              v74 = &v71->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
              {
                ++v73;
                v74 += 4;
                if ( v73 >= *(unsigned __int16 *)&v4->obj.klass->_2.bitflags1 )
                  goto LABEL_103;
              }
              v75 = (__int64)&v71->vtable[*v74].method;
            }
            else
            {
LABEL_103:
              v75 = sub_B0F4C0(v4, System_IDisposable_TypeInfo, 0LL);
            }
            v4 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(WellFired_USTimelineContainer_array *, _QWORD))v75)(
                                                          v72,
                                                          *(_QWORD *)(v75 + 8));
          }
          if ( v11 )
          {
            v76 = v11 - 1;
            if ( v78[v11 - 1] == 230 )
            {
              --v11;
              v79 = v76;
            }
          }
          v10 = v9->max_length;
          if ( (int)++v12 >= v10 )
            return;
        }
LABEL_112:
        v77 = sub_B776C8(v4);
        sub_B77668(v77, 0LL);
      }
    }
  }
}