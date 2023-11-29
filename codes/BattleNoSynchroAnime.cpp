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
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  int v15; // w28
  unsigned int v16; // w22
  WellFired_USTimelineContainer_array *v17; // x20
  int v18; // w8
  int v19; // w27
  unsigned int v20; // w22
  SimpleAnimation_o *v21; // x0
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *States; // x0
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__c *klass; // x8
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *v24; // x20
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x20
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x21
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  SimpleAnimation_State_c **v41; // x11
  __int64 v42; // x0
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  SimpleAnimation_State_c **v45; // x11
  __int64 v46; // x0
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  SimpleAnimation_State_c **v49; // x11
  __int64 v50; // x0
  long double v51; // q0
  long double v52; // q0
  __int64 v53; // x8
  long double v54; // q8
  unsigned __int64 v55; // x10
  SimpleAnimation_State_c **v56; // x11
  __int64 v57; // x0
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  int v62; // w8
  UnityEngine_Animation_o *v63; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v65; // x8
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  System_Collections_IEnumerator_c *v69; // x8
  unsigned __int64 v70; // x10
  System_Collections_IEnumerator_c **v71; // x11
  __int64 v72; // x0
  UnityEngine_AnimationState_o *v73; // x0
  UnityEngine_AnimationState_o *v74; // x21
  float length; // s1
  float v76; // s0
  Il2CppClass *v77; // x8
  WellFired_USTimelineContainer_array *v78; // x19
  unsigned __int64 v79; // x10
  int32_t *v80; // x11
  __int64 v81; // x0
  int v82; // w8
  _DWORD v83[2]; // [xsp+0h] [xbp-70h]
  int v84; // [xsp+8h] [xbp-68h]

  if ( (byte_40F6AF4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v9);
    byte_40F6AF4 = 1;
  }
  v84 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v11 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_USTimelineContainer )
  {
    max_length = ComponentsInChildren_USTimelineContainer->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      v16 = 0;
      while ( v16 < max_length )
      {
        v21 = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v16];
        if ( !v21 )
          goto LABEL_111;
        States = SimpleAnimation__GetStates(v21, 0LL);
        if ( !States )
          goto LABEL_111;
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
              goto LABEL_18;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_18:
          p_method = sub_AAFEF8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *, _QWORD))p_method)(
                v24,
                *(_QWORD *)(p_method + 8));
        if ( !v28 )
          sub_B170D4();
        while ( 1 )
        {
          v29 = *(_QWORD *)v28;
          if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
          {
            v30 = 0LL;
            v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
                goto LABEL_25;
            }
            v32 = v29 + 16LL * *v31 + 312;
          }
          else
          {
LABEL_25:
            v32 = sub_AAFEF8(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
            break;
          v33 = *(_QWORD *)v28;
          if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
          {
            v34 = 0LL;
            v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v35 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
                goto LABEL_32;
            }
            v36 = v33 + 16LL * *v35 + 312;
          }
          else
          {
LABEL_32:
            v36 = sub_AAFEF8(v28, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
          v38 = v37;
          if ( !v37 )
            sub_B170D4();
          v39 = *(_QWORD *)v37;
          if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
          {
            v40 = 0LL;
            v41 = (SimpleAnimation_State_c **)(*(_QWORD *)(v39 + 176) + 8LL);
            while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v40;
              v41 += 2;
              if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
                goto LABEL_39;
            }
            v42 = v39 + 16LL * (*(_DWORD *)v41 + 15) + 312;
          }
          else
          {
LABEL_39:
            v42 = sub_AAFEF8(v37, SimpleAnimation_State_TypeInfo, 15LL);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) != 2 )
          {
            v43 = *(_QWORD *)v38;
            if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
            {
              v44 = 0LL;
              v45 = (SimpleAnimation_State_c **)(*(_QWORD *)(v43 + 176) + 8LL);
              while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v44;
                v45 += 2;
                if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                  goto LABEL_46;
              }
              v46 = v43 + 16LL * (*(_DWORD *)v45 + 17) + 312;
            }
            else
            {
LABEL_46:
              v46 = sub_AAFEF8(v38, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8)) != 2 )
              continue;
          }
          v47 = *(_QWORD *)v38;
          if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
          {
            v48 = 0LL;
            v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v47 + 176) + 8LL);
            while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v48;
              v49 += 2;
              if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                goto LABEL_53;
            }
            v50 = v47 + 16LL * (*(_DWORD *)v49 + 13) + 312;
          }
          else
          {
LABEL_53:
            v50 = sub_AAFEF8(v38, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v51 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v50)(v38, *(_QWORD *)(v50 + 8));
          *(float *)&v52 = UnityEngine_Random__Range(0.0, *(float *)&v51, 0LL);
          v53 = *(_QWORD *)v38;
          v54 = v52;
          if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
          {
            v55 = 0LL;
            v56 = (SimpleAnimation_State_c **)(*(_QWORD *)(v53 + 176) + 8LL);
            while ( *(v56 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v55;
              v56 += 2;
              if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                goto LABEL_59;
            }
            v57 = v53 + 16LL * (*(_DWORD *)v56 + 4) + 312;
          }
          else
          {
LABEL_59:
            v57 = sub_AAFEF8(v38, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v57)(v38, *(_QWORD *)(v57 + 8), v54);
        }
        v83[v15] = 116;
        v15 = ++v84;
        v58 = *(_QWORD *)v28;
        if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
        {
          v59 = 0LL;
          v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
          {
            ++v59;
            v60 += 4;
            if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
              goto LABEL_67;
          }
          v61 = v58 + 16LL * *v60 + 312;
        }
        else
        {
LABEL_67:
          v61 = sub_AAFEF8(v28, System_IDisposable_TypeInfo, 0LL);
        }
        v11 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(
                                                       v28,
                                                       *(_QWORD *)(v61 + 8));
        if ( v15 )
        {
          v62 = v15 - 1;
          if ( v83[v15 - 1] == 116 )
          {
            --v15;
            v84 = v62;
          }
        }
        max_length = ComponentsInChildren_USTimelineContainer->max_length;
        if ( (int)++v16 >= max_length )
          return;
      }
      goto LABEL_112;
    }
  }
  else
  {
    v17 = v11;
    if ( v11 )
    {
      v18 = v11->max_length;
      if ( v18 >= 1 )
      {
        v19 = 0;
        v20 = 0;
        while ( v20 < v18 )
        {
          v63 = (UnityEngine_Animation_o *)v17->m_Items[v20];
          if ( !v63 )
LABEL_111:
            sub_B170D4();
          Enumerator = UnityEngine_Animation__GetEnumerator(v63, 0LL);
          if ( !Enumerator )
            sub_B170D4();
          while ( 1 )
          {
            v65 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v66 = 0LL;
              v67 = &v65->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v67 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v66;
                v67 += 4;
                if ( v66 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_85;
              }
              v68 = (__int64)&v65->vtable[*v67].method;
            }
            else
            {
LABEL_85:
              v68 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v68)(
                    Enumerator,
                    *(_QWORD *)(v68 + 8)) & 1) == 0 )
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
              v72 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v73 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v72)(
                                                    Enumerator,
                                                    *(_QWORD *)(v72 + 8));
            v74 = v73;
            if ( !v73 )
              sub_B170D4();
            if ( v73->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_B173C8(v73);
              goto LABEL_111;
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v73, 0LL) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v74, 0LL);
              v76 = UnityEngine_Random__Range(0.0, length, 0LL);
              UnityEngine_AnimationState__set_time(v74, v76, 0LL);
            }
          }
          v83[v19] = 230;
          v19 = ++v84;
          v11 = (WellFired_USTimelineContainer_array *)sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
          if ( v11 )
          {
            v77 = v11->obj.klass;
            v78 = v11;
            if ( *(_WORD *)&v11->obj.klass->_2.bitflags1 )
            {
              v79 = 0LL;
              v80 = &v77->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
              {
                ++v79;
                v80 += 4;
                if ( v79 >= *(unsigned __int16 *)&v11->obj.klass->_2.bitflags1 )
                  goto LABEL_103;
              }
              v81 = (__int64)&v77->vtable[*v80].method;
            }
            else
            {
LABEL_103:
              v81 = sub_AAFEF8(v11, System_IDisposable_TypeInfo, 0LL);
            }
            v11 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(WellFired_USTimelineContainer_array *, _QWORD))v81)(
                                                           v78,
                                                           *(_QWORD *)(v81 + 8));
          }
          if ( v19 )
          {
            v82 = v19 - 1;
            if ( v83[v19 - 1] == 230 )
            {
              --v19;
              v84 = v82;
            }
          }
          v18 = v17->max_length;
          if ( (int)++v20 >= v18 )
            return;
        }
LABEL_112:
        sub_B17100(v11, v12, v13);
        sub_B170A0();
      }
    }
  }
}