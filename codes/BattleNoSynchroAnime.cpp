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
  int max_length; // w8
  int v14; // w28
  unsigned int v15; // w22
  WellFired_USTimelineContainer_array *v16; // x20
  int v17; // w8
  int v18; // w27
  unsigned int v19; // w22
  SimpleAnimation_o *States; // x0
  __int64 v21; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v23; // x20
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  __int64 v29; // x20
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
  __int64 v42; // x21
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  SimpleAnimation_State_c **v45; // x11
  __int64 v46; // x0
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  SimpleAnimation_State_c **v49; // x11
  __int64 v50; // x0
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  SimpleAnimation_State_c **v53; // x11
  __int64 v54; // x0
  long double v55; // q0
  __int64 v56; // x3
  long double v57; // q0
  __int64 v58; // x8
  long double v59; // q8
  unsigned __int64 v60; // x10
  SimpleAnimation_State_c **v61; // x11
  __int64 v62; // x0
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  int v67; // w8
  __int64 v68; // x1
  __int64 v69; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v71; // x8
  unsigned __int64 v72; // x10
  int32_t *v73; // x11
  __int64 p_method; // x0
  __int64 v75; // x3
  System_Collections_IEnumerator_c *v76; // x8
  unsigned __int64 v77; // x10
  System_Collections_IEnumerator_c **v78; // x11
  __int64 v79; // x0
  UnityEngine_AnimationState_o *v80; // x0
  __int64 v81; // x1
  UnityEngine_AnimationState_o *v82; // x21
  float length; // s1
  float v84; // s0
  __int64 v85; // x3
  Il2CppClass *v86; // x8
  WellFired_USTimelineContainer_array *v87; // x19
  unsigned __int64 v88; // x10
  int32_t *v89; // x11
  __int64 v90; // x0
  int v91; // w8
  __int64 v92; // x0
  _DWORD v93[2]; // [xsp+0h] [xbp-70h]
  int v94; // [xsp+8h] [xbp-68h]

  if ( (byte_41843DD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v9);
    byte_41843DD = 1;
  }
  v94 = 0;
  ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v11 = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_USTimelineContainer )
  {
    max_length = ComponentsInChildren_USTimelineContainer->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      v15 = 0;
      while ( v15 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_USTimelineContainer->m_Items[v15];
        if ( !States )
          goto LABEL_111;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_111;
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
              goto LABEL_18;
          }
          v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_18:
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
                goto LABEL_25;
            }
            v33 = v30 + 16LL * *v32 + 312;
          }
          else
          {
LABEL_25:
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
                goto LABEL_32;
            }
            v38 = v35 + 16LL * *v37 + 312;
          }
          else
          {
LABEL_32:
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
                goto LABEL_39;
            }
            v46 = v43 + 16LL * (*(_DWORD *)v45 + 15) + 312;
          }
          else
          {
LABEL_39:
            v46 = sub_AC5258(v39, SimpleAnimation_State_TypeInfo, 15LL, v41);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) != 2 )
          {
            v47 = *(_QWORD *)v42;
            if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
            {
              v48 = 0LL;
              v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v47 + 176) + 8LL);
              while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v48;
                v49 += 2;
                if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
                  goto LABEL_46;
              }
              v50 = v47 + 16LL * (*(_DWORD *)v49 + 17) + 312;
            }
            else
            {
LABEL_46:
              v50 = sub_AC5258(v42, SimpleAnimation_State_TypeInfo, 17LL, v28);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8)) != 2 )
              continue;
          }
          v51 = *(_QWORD *)v42;
          if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
          {
            v52 = 0LL;
            v53 = (SimpleAnimation_State_c **)(*(_QWORD *)(v51 + 176) + 8LL);
            while ( *(v53 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v52;
              v53 += 2;
              if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
                goto LABEL_53;
            }
            v54 = v51 + 16LL * (*(_DWORD *)v53 + 13) + 312;
          }
          else
          {
LABEL_53:
            v54 = sub_AC5258(v42, SimpleAnimation_State_TypeInfo, 13LL, v28);
          }
          v55 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v54)(v42, *(_QWORD *)(v54 + 8));
          *(float *)&v57 = UnityEngine_Random__Range(0.0, *(float *)&v55, 0LL);
          v58 = *(_QWORD *)v42;
          v59 = v57;
          if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
          {
            v60 = 0LL;
            v61 = (SimpleAnimation_State_c **)(*(_QWORD *)(v58 + 176) + 8LL);
            while ( *(v61 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v60;
              v61 += 2;
              if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
                goto LABEL_59;
            }
            v62 = v58 + 16LL * (*(_DWORD *)v61 + 4) + 312;
          }
          else
          {
LABEL_59:
            v62 = sub_AC5258(v42, SimpleAnimation_State_TypeInfo, 4LL, v56);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v62)(v42, *(_QWORD *)(v62 + 8), v59);
        }
        v93[v14] = 116;
        v14 = ++v94;
        v63 = *(_QWORD *)v29;
        if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
        {
          v64 = 0LL;
          v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
          {
            ++v64;
            v65 += 4;
            if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
              goto LABEL_67;
          }
          v66 = v63 + 16LL * *v65 + 312;
        }
        else
        {
LABEL_67:
          v66 = sub_AC5258(v29, System_IDisposable_TypeInfo, 0LL, v34);
        }
        v11 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v66)(
                                                       v29,
                                                       *(_QWORD *)(v66 + 8));
        if ( v14 )
        {
          v67 = v14 - 1;
          if ( v93[v14 - 1] == 116 )
          {
            --v14;
            v94 = v67;
          }
        }
        max_length = ComponentsInChildren_USTimelineContainer->max_length;
        if ( (int)++v15 >= max_length )
          return;
      }
      goto LABEL_112;
    }
  }
  else
  {
    v16 = v11;
    if ( v11 )
    {
      v17 = v11->max_length;
      if ( v17 >= 1 )
      {
        v18 = 0;
        v19 = 0;
        while ( v19 < v17 )
        {
          States = (SimpleAnimation_o *)v16->m_Items[v19];
          if ( !States )
LABEL_111:
            sub_B2C434(States, v12);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_B2C434(0LL, v68);
          while ( 1 )
          {
            v71 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v72 = 0LL;
              v73 = &v71->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v73 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v72;
                v73 += 4;
                if ( v72 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_85;
              }
              p_method = (__int64)&v71->vtable[*v73].method;
            }
            else
            {
LABEL_85:
              p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v69);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v76 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v77 = 0LL;
              v78 = (System_Collections_IEnumerator_c **)&v76->_1.interfaceOffsets->offset;
              while ( *(v78 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                ++v77;
                v78 += 2;
                if ( v77 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_92;
              }
              v79 = (__int64)&v76->vtable[*(_DWORD *)v78 + 1].method;
            }
            else
            {
LABEL_92:
              v79 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v75);
            }
            v80 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v79)(
                                                    Enumerator,
                                                    *(_QWORD *)(v79 + 8));
            v82 = v80;
            if ( !v80 )
              sub_B2C434(0LL, v81);
            if ( v80->klass != UnityEngine_AnimationState_TypeInfo )
            {
              States = (SimpleAnimation_o *)sub_B2C728(v80);
              goto LABEL_111;
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v80, 0LL) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v82, 0LL);
              v84 = UnityEngine_Random__Range(0.0, length, 0LL);
              UnityEngine_AnimationState__set_time(v82, v84, 0LL);
            }
          }
          v93[v18] = 230;
          v18 = ++v94;
          v11 = (WellFired_USTimelineContainer_array *)sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
          if ( v11 )
          {
            v86 = v11->obj.klass;
            v87 = v11;
            if ( *(_WORD *)&v11->obj.klass->_2.bitflags1 )
            {
              v88 = 0LL;
              v89 = &v86->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v89 - 1) != System_IDisposable_TypeInfo )
              {
                ++v88;
                v89 += 4;
                if ( v88 >= *(unsigned __int16 *)&v11->obj.klass->_2.bitflags1 )
                  goto LABEL_103;
              }
              v90 = (__int64)&v86->vtable[*v89].method;
            }
            else
            {
LABEL_103:
              v90 = sub_AC5258(v11, System_IDisposable_TypeInfo, 0LL, v85);
            }
            v11 = (WellFired_USTimelineContainer_array *)(*(__int64 (__fastcall **)(WellFired_USTimelineContainer_array *, _QWORD))v90)(
                                                           v87,
                                                           *(_QWORD *)(v90 + 8));
          }
          if ( v18 )
          {
            v91 = v18 - 1;
            if ( v93[v18 - 1] == 230 )
            {
              --v18;
              v94 = v91;
            }
          }
          v17 = v16->max_length;
          if ( (int)++v19 >= v17 )
            return;
        }
LABEL_112:
        v92 = sub_B2C460(v11);
        sub_B2C400(v92, 0LL);
      }
    }
  }
}