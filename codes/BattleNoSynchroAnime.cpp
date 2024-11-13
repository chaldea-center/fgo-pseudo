void __fastcall BattleNoSynchroAnime___ctor(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleNoSynchroAnime__Start(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Object_array *ComponentsInChildren_object__49324452; // x19
  System_Object_array *v19; // x0
  __int64 v20; // x1
  int max_length; // w8
  unsigned int v22; // w23
  SimpleAnimation_o *States; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v25; // x20
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x20
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x21
  __int64 v42; // x8
  __int64 v43; // x9
  SimpleAnimation_State_c **v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  SimpleAnimation_State_c **v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  SimpleAnimation_State_c **v52; // x10
  __int64 v53; // x0
  long double v54; // q0
  long double v55; // q0
  __int64 v56; // x8
  long double v57; // q8
  __int64 v58; // x9
  SimpleAnimation_State_c **v59; // x10
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  System_Object_array *v65; // x20
  int v66; // w8
  unsigned int v67; // w23
  __int64 v68; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v74; // x8
  __int64 v75; // x9
  System_Collections_IEnumerator_c **v76; // x10
  __int64 v77; // x0
  UnityEngine_AnimationState_o *v78; // x0
  __int64 v79; // x1
  UnityEngine_AnimationState_o *v80; // x21
  float length; // s1
  float v82; // s0
  Il2CppClass *v83; // x8
  System_Object_array *v84; // x19
  __int64 v85; // x9
  int32_t *v86; // x10
  __int64 v87; // x0
  __int64 v88; // x0
  __int64 v89; // x19
  __int64 v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0

  if ( (byte_4B190E1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v16, v17);
    byte_4B190E1 = 1;
  }
  ComponentsInChildren_object__49324452 = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v19 = UnityEngine_Component__GetComponentsInChildren_object__49324452(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_object__49324452 )
  {
    max_length = ComponentsInChildren_object__49324452->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0;
      while ( v22 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__49324452->m_Items[v22];
        if ( !States )
          goto LABEL_104;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_104;
        klass = States->klass;
        v25 = States;
        v26 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v26;
            p_offset += 4;
            if ( !v26 )
              goto LABEL_13;
          }
          v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_13:
          v28 = sub_1C1C7C0(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v30 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
        if ( !v30 )
          sub_1BCAA3C(0LL, v29);
        while ( 1 )
        {
          v31 = *(_QWORD *)v30;
          v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
          {
            v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v32;
              v33 += 4;
              if ( !v32 )
                goto LABEL_20;
            }
            v34 = v31 + 16LL * *v33 + 312;
          }
          else
          {
LABEL_20:
            v34 = sub_1C1C7C0(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
            break;
          v35 = *(_QWORD *)v30;
          v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
          {
            v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v37 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v36;
              v37 += 4;
              if ( !v36 )
                goto LABEL_27;
            }
            v38 = v35 + 16LL * *v37 + 312;
          }
          else
          {
LABEL_27:
            v38 = sub_1C1C7C0(v30, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
          v41 = v39;
          if ( !v39 )
            sub_1BCAA3C(0LL, v40);
          v42 = *(_QWORD *)v39;
          v43 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
          {
            v44 = (SimpleAnimation_State_c **)(*(_QWORD *)(v42 + 176) + 8LL);
            while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v43;
              v44 += 2;
              if ( !v43 )
                goto LABEL_34;
            }
            v45 = v42 + 16LL * (*(_DWORD *)v44 + 15) + 312;
          }
          else
          {
LABEL_34:
            v45 = sub_1C1C7C0(v39, SimpleAnimation_State_TypeInfo, 15LL);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) != 2 )
          {
            v46 = *(_QWORD *)v41;
            v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
            {
              v48 = (SimpleAnimation_State_c **)(*(_QWORD *)(v46 + 176) + 8LL);
              while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v47;
                v48 += 2;
                if ( !v47 )
                  goto LABEL_41;
              }
              v49 = v46 + 16LL * (*(_DWORD *)v48 + 17) + 312;
            }
            else
            {
LABEL_41:
              v49 = sub_1C1C7C0(v41, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8)) != 2 )
              continue;
          }
          v50 = *(_QWORD *)v41;
          v51 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
          {
            v52 = (SimpleAnimation_State_c **)(*(_QWORD *)(v50 + 176) + 8LL);
            while ( *(v52 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v51;
              v52 += 2;
              if ( !v51 )
                goto LABEL_48;
            }
            v53 = v50 + 16LL * (*(_DWORD *)v52 + 13) + 312;
          }
          else
          {
LABEL_48:
            v53 = sub_1C1C7C0(v41, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v54 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v53)(v41, *(_QWORD *)(v53 + 8));
          *(float *)&v55 = UnityEngine_Random__Range(0.0, *(float *)&v54, 0LL);
          v56 = *(_QWORD *)v41;
          v57 = v55;
          v58 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
          {
            v59 = (SimpleAnimation_State_c **)(*(_QWORD *)(v56 + 176) + 8LL);
            while ( *(v59 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v58;
              v59 += 2;
              if ( !v58 )
                goto LABEL_54;
            }
            v60 = v56 + 16LL * (*(_DWORD *)v59 + 4) + 312;
          }
          else
          {
LABEL_54:
            v60 = sub_1C1C7C0(v41, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v60)(v41, *(_QWORD *)(v60 + 8), v57);
        }
        v61 = *(_QWORD *)v30;
        v62 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
        {
          v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
          {
            --v62;
            v63 += 4;
            if ( !v62 )
              goto LABEL_61;
          }
          v64 = v61 + 16LL * *v63 + 312;
        }
        else
        {
LABEL_61:
          v64 = sub_1C1C7C0(v30, System_IDisposable_TypeInfo, 0LL);
        }
        v19 = (System_Object_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v30, *(_QWORD *)(v64 + 8));
        max_length = ComponentsInChildren_object__49324452->max_length;
        if ( (int)++v22 >= max_length )
          return;
      }
      goto LABEL_105;
    }
  }
  else
  {
    v65 = v19;
    if ( v19 )
    {
      v66 = v19->max_length;
      if ( v66 >= 1 )
      {
        v67 = 0;
        while ( v67 < v66 )
        {
          States = (SimpleAnimation_o *)v65->m_Items[v67];
          if ( !States )
LABEL_104:
            sub_1BCAA3C(States, v20);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_1BCAA3C(0LL, v68);
          while ( 1 )
          {
            v70 = Enumerator->klass;
            v71 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v72 = &v70->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v72 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v71;
                v72 += 4;
                if ( !v71 )
                  goto LABEL_77;
              }
              p_method = (__int64)&v70->vtable[*v72].method;
            }
            else
            {
LABEL_77:
              p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v74 = Enumerator->klass;
            v75 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v76 = (System_Collections_IEnumerator_c **)&v74->_1.interfaceOffsets->offset;
              while ( *(v76 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v75;
                v76 += 2;
                if ( !v75 )
                  goto LABEL_84;
              }
              v77 = (__int64)&v74->vtable[*(_DWORD *)v76 + 1].method;
            }
            else
            {
LABEL_84:
              v77 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v78 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v77)(
                                                    Enumerator,
                                                    *(_QWORD *)(v77 + 8));
            v80 = v78;
            if ( !v78 )
              sub_1BCAA3C(0LL, v79);
            if ( v78->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1BCACFC(v78);
              v88 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
              v89 = v88;
              if ( v88 )
              {
                v90 = *(_QWORD *)v88;
                v91 = *(unsigned __int16 *)(*(_QWORD *)v88 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v88 + 302LL) )
                {
                  v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v92 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v91;
                    v92 += 4;
                    if ( !v91 )
                      goto LABEL_111;
                  }
                  v93 = v90 + 16LL * *v92 + 312;
                }
                else
                {
LABEL_111:
                  v93 = sub_1C1C7C0(v88, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8));
              }
              if ( v80 )
                sub_1BCAA34(v80);
              sub_1CB5270();
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v78, 0LL) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v80, 0LL);
              v82 = UnityEngine_Random__Range(0.0, length, 0LL);
              UnityEngine_AnimationState__set_time(v80, v82, 0LL);
            }
          }
          v19 = (System_Object_array *)sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
          if ( v19 )
          {
            v83 = v19->obj.klass;
            v84 = v19;
            v85 = *(unsigned __int16 *)(&v19->obj.klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v19->obj.klass->_2.bitflags2 + 3) )
            {
              v86 = &v83->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
              {
                --v85;
                v86 += 4;
                if ( !v85 )
                  goto LABEL_95;
              }
              v87 = (__int64)&v83->vtable[*v86].method;
            }
            else
            {
LABEL_95:
              v87 = sub_1C1C7C0(v19, System_IDisposable_TypeInfo, 0LL);
            }
            v19 = (System_Object_array *)(*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v87)(
                                           v84,
                                           *(_QWORD *)(v87 + 8));
          }
          v66 = v65->max_length;
          if ( (int)++v67 >= v66 )
            return;
        }
LABEL_105:
        sub_1BCAA44(v19, v20);
      }
    }
  }
}