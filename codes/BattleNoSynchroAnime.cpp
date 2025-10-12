void BattleNoSynchroAnime___ctor(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleNoSynchroAnime__Start(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__51202152; // x19
  System_Object_array *v4; // x0
  int max_length; // w8
  unsigned int v6; // w23
  SimpleAnimation_o *States; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v9; // x20
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x20
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x21
  __int64 v24; // x8
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  long double v36; // q0
  long double v37; // q0
  __int64 v38; // x8
  long double v39; // q8
  __int64 v40; // x9
  SimpleAnimation_State_c **v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  System_Object_array *v47; // x20
  int v48; // w8
  unsigned int v49; // w23
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  System_Collections_IEnumerator_c *v55; // x8
  __int64 v56; // x9
  System_Collections_IEnumerator_c **v57; // x10
  __int64 v58; // x0
  UnityEngine_AnimationState_o *v59; // x0
  UnityEngine_AnimationState_o *v60; // x21
  float length; // s1
  float v62; // s0
  Il2CppClass *v63; // x8
  System_Object_array *v64; // x19
  __int64 v65; // x9
  int32_t *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x19
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0

  if ( (byte_4C3AE3E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationState_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3AE3E = 1;
  }
  ComponentsInChildren_object__51202152 = UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v4 = UnityEngine_Component__GetComponentsInChildren_object__51202152(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_object__51202152 )
  {
    max_length = ComponentsInChildren_object__51202152->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      while ( v6 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__51202152->m_Items[v6];
        if ( !States )
          goto LABEL_104;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0);
        if ( !States )
          goto LABEL_104;
        klass = States->klass;
        v9 = States;
        v10 = *(unsigned __int16 *)&States->klass->_2.rank;
        if ( *(_WORD *)&States->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v10;
            p_offset += 4;
            if ( !v10 )
              goto LABEL_13;
          }
          v12 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_13:
          v12 = sub_1C83438(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v13 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
        if ( !v13 )
          sub_1C32E7C(0);
        while ( 1 )
        {
          v14 = *(_QWORD *)v13;
          v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
          {
            v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v15;
              v16 += 4;
              if ( !v15 )
                goto LABEL_20;
            }
            v17 = v14 + 16LL * *v16 + 312;
          }
          else
          {
LABEL_20:
            v17 = sub_1C83438(v13, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
            break;
          v18 = *(_QWORD *)v13;
          v19 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
          {
            v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v20 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v19;
              v20 += 4;
              if ( !v19 )
                goto LABEL_27;
            }
            v21 = v18 + 16LL * *v20 + 312;
          }
          else
          {
LABEL_27:
            v21 = sub_1C83438(v13, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
          v23 = v22;
          if ( !v22 )
            sub_1C32E7C(0);
          v24 = *(_QWORD *)v22;
          v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
          {
            v26 = (SimpleAnimation_State_c **)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v25;
              v26 += 2;
              if ( !v25 )
                goto LABEL_34;
            }
            v27 = v24 + 16LL * (*(_DWORD *)v26 + 15) + 312;
          }
          else
          {
LABEL_34:
            v27 = sub_1C83438(v22, SimpleAnimation_State_TypeInfo, 15);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) != 2 )
          {
            v28 = *(_QWORD *)v23;
            v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
            {
              v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v28 + 176) + 8LL);
              while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v29;
                v30 += 2;
                if ( !v29 )
                  goto LABEL_41;
              }
              v31 = v28 + 16LL * (*(_DWORD *)v30 + 17) + 312;
            }
            else
            {
LABEL_41:
              v31 = sub_1C83438(v23, SimpleAnimation_State_TypeInfo, 17);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8)) != 2 )
              continue;
          }
          v32 = *(_QWORD *)v23;
          v33 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v33;
              v34 += 2;
              if ( !v33 )
                goto LABEL_48;
            }
            v35 = v32 + 16LL * (*(_DWORD *)v34 + 13) + 312;
          }
          else
          {
LABEL_48:
            v35 = sub_1C83438(v23, SimpleAnimation_State_TypeInfo, 13);
          }
          v36 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v35)(v23, *(_QWORD *)(v35 + 8));
          *(float *)&v37 = UnityEngine_Random__Range(0.0, *(float *)&v36, 0);
          v38 = *(_QWORD *)v23;
          v39 = v37;
          v40 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v41 = (SimpleAnimation_State_c **)(*(_QWORD *)(v38 + 176) + 8LL);
            while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v40;
              v41 += 2;
              if ( !v40 )
                goto LABEL_54;
            }
            v42 = v38 + 16LL * (*(_DWORD *)v41 + 4) + 312;
          }
          else
          {
LABEL_54:
            v42 = sub_1C83438(v23, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v42)(v23, *(_QWORD *)(v42 + 8), v39);
        }
        v43 = *(_QWORD *)v13;
        v44 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
        {
          v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
          {
            --v44;
            v45 += 4;
            if ( !v44 )
              goto LABEL_61;
          }
          v46 = v43 + 16LL * *v45 + 312;
        }
        else
        {
LABEL_61:
          v46 = sub_1C83438(v13, System_IDisposable_TypeInfo, 0);
        }
        v4 = (System_Object_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v13, *(_QWORD *)(v46 + 8));
        max_length = ComponentsInChildren_object__51202152->max_length;
        if ( (int)++v6 >= max_length )
          return;
      }
      goto LABEL_105;
    }
  }
  else
  {
    v47 = v4;
    if ( v4 )
    {
      v48 = v4->max_length;
      if ( v48 >= 1 )
      {
        v49 = 0;
        while ( v49 < v48 )
        {
          States = (SimpleAnimation_o *)v47->m_Items[v49];
          if ( !States )
LABEL_104:
            sub_1C32E7C(States);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
          if ( !Enumerator )
            sub_1C32E7C(0);
          while ( 1 )
          {
            v51 = Enumerator->klass;
            v52 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v53 = &v51->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v52;
                v53 += 4;
                if ( !v52 )
                  goto LABEL_77;
              }
              v54 = (__int64)&v51->vtable[*v53];
            }
            else
            {
LABEL_77:
              v54 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v54)(
                    Enumerator,
                    *(_QWORD *)(v54 + 8))
                & 1) == 0 )
              break;
            v55 = Enumerator->klass;
            v56 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v57 = (System_Collections_IEnumerator_c **)&v55->_1.interfaceOffsets->offset;
              while ( *(v57 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v56;
                v57 += 2;
                if ( !v56 )
                  goto LABEL_84;
              }
              v58 = (__int64)&v55->vtable[*(_DWORD *)v57 + 1];
            }
            else
            {
LABEL_84:
              v58 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
            }
            v59 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v58)(
                                                    Enumerator,
                                                    *(_QWORD *)(v58 + 8));
            v60 = v59;
            if ( !v59 )
              sub_1C32E7C(0);
            if ( v59->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1C3313C(v59);
              v68 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
              v69 = v68;
              if ( v68 )
              {
                v70 = *(_QWORD *)v68;
                v71 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
                {
                  v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v71;
                    v72 += 4;
                    if ( !v71 )
                      goto LABEL_111;
                  }
                  v73 = v70 + 16LL * *v72 + 312;
                }
                else
                {
LABEL_111:
                  v73 = sub_1C83438(v68, System_IDisposable_TypeInfo, 0);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v73)(v69, *(_QWORD *)(v73 + 8));
              }
              if ( v60 )
                sub_1C32E74(v60);
              sub_1D1BD54();
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v59, 0) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v60, 0);
              v62 = UnityEngine_Random__Range(0.0, length, 0);
              UnityEngine_AnimationState__set_time(v60, v62, 0);
            }
          }
          v4 = (System_Object_array *)sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
          if ( v4 )
          {
            v63 = v4->obj.klass;
            v64 = v4;
            v65 = *(unsigned __int16 *)&v4->obj.klass->_2.rank;
            if ( *(_WORD *)&v4->obj.klass->_2.rank )
            {
              v66 = &v63->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
              {
                --v65;
                v66 += 4;
                if ( !v65 )
                  goto LABEL_95;
              }
              v67 = (__int64)&v63->vtable[*v66];
            }
            else
            {
LABEL_95:
              v67 = sub_1C83438(v4, System_IDisposable_TypeInfo, 0);
            }
            v4 = (System_Object_array *)(*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v67)(
                                          v64,
                                          *(_QWORD *)(v67 + 8));
          }
          v48 = v47->max_length;
          if ( (int)++v49 >= v48 )
            return;
        }
LABEL_105:
        sub_1C32E84(v4);
      }
    }
  }
}