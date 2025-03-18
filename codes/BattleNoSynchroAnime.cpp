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
  System_Object_array *ComponentsInChildren_object__50230908; // x19
  System_Object_array *v11; // x0
  __int64 v12; // x1
  int max_length; // w8
  unsigned int v14; // w23
  SimpleAnimation_o *States; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v17; // x20
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x20
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x21
  __int64 v34; // x8
  __int64 v35; // x9
  SimpleAnimation_State_c **v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  SimpleAnimation_State_c **v44; // x10
  __int64 v45; // x0
  long double v46; // q0
  long double v47; // q0
  __int64 v48; // x8
  long double v49; // q8
  __int64 v50; // x9
  SimpleAnimation_State_c **v51; // x10
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  System_Object_array *v57; // x20
  int v58; // w8
  unsigned int v59; // w23
  __int64 v60; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v66; // x8
  __int64 v67; // x9
  System_Collections_IEnumerator_c **v68; // x10
  __int64 v69; // x0
  UnityEngine_AnimationState_o *v70; // x0
  __int64 v71; // x1
  UnityEngine_AnimationState_o *v72; // x21
  float length; // s1
  float v74; // s0
  Il2CppClass *v75; // x8
  System_Object_array *v76; // x19
  __int64 v77; // x9
  int32_t *v78; // x10
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x19
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0

  if ( (byte_4C24FE4 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v4);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C3B764(&SimpleAnimation_State_TypeInfo, v9);
    byte_4C24FE4 = 1;
  }
  ComponentsInChildren_object__50230908 = UnityEngine_Component__GetComponentsInChildren_object__50230908(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2FE767C *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v11 = UnityEngine_Component__GetComponentsInChildren_object__50230908(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FE767C *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_object__50230908 )
  {
    max_length = ComponentsInChildren_object__50230908->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( v14 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__50230908->m_Items[v14];
        if ( !States )
          goto LABEL_104;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_104;
        klass = States->klass;
        v17 = States;
        v18 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v18;
            p_offset += 4;
            if ( !v18 )
              goto LABEL_13;
          }
          v20 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_13:
          v20 = sub_1C8D744(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v22 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8));
        if ( !v22 )
          sub_1C3B9C0(0LL, v21);
        while ( 1 )
        {
          v23 = *(_QWORD *)v22;
          v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
          {
            v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v24;
              v25 += 4;
              if ( !v24 )
                goto LABEL_20;
            }
            v26 = v23 + 16LL * *v25 + 312;
          }
          else
          {
LABEL_20:
            v26 = sub_1C8D744(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
            break;
          v27 = *(_QWORD *)v22;
          v28 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
          {
            v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v29 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v28;
              v29 += 4;
              if ( !v28 )
                goto LABEL_27;
            }
            v30 = v27 + 16LL * *v29 + 312;
          }
          else
          {
LABEL_27:
            v30 = sub_1C8D744(v22, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
          v33 = v31;
          if ( !v31 )
            sub_1C3B9C0(0LL, v32);
          v34 = *(_QWORD *)v31;
          v35 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
          {
            v36 = (SimpleAnimation_State_c **)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v35;
              v36 += 2;
              if ( !v35 )
                goto LABEL_34;
            }
            v37 = v34 + 16LL * (*(_DWORD *)v36 + 15) + 312;
          }
          else
          {
LABEL_34:
            v37 = sub_1C8D744(v31, SimpleAnimation_State_TypeInfo, 15LL);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) != 2 )
          {
            v38 = *(_QWORD *)v33;
            v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
            {
              v40 = (SimpleAnimation_State_c **)(*(_QWORD *)(v38 + 176) + 8LL);
              while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v39;
                v40 += 2;
                if ( !v39 )
                  goto LABEL_41;
              }
              v41 = v38 + 16LL * (*(_DWORD *)v40 + 17) + 312;
            }
            else
            {
LABEL_41:
              v41 = sub_1C8D744(v33, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8)) != 2 )
              continue;
          }
          v42 = *(_QWORD *)v33;
          v43 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v44 = (SimpleAnimation_State_c **)(*(_QWORD *)(v42 + 176) + 8LL);
            while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v43;
              v44 += 2;
              if ( !v43 )
                goto LABEL_48;
            }
            v45 = v42 + 16LL * (*(_DWORD *)v44 + 13) + 312;
          }
          else
          {
LABEL_48:
            v45 = sub_1C8D744(v33, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v46 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v45)(v33, *(_QWORD *)(v45 + 8));
          *(float *)&v47 = UnityEngine_Random__Range(0.0, *(float *)&v46, 0LL);
          v48 = *(_QWORD *)v33;
          v49 = v47;
          v50 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v51 = (SimpleAnimation_State_c **)(*(_QWORD *)(v48 + 176) + 8LL);
            while ( *(v51 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v50;
              v51 += 2;
              if ( !v50 )
                goto LABEL_54;
            }
            v52 = v48 + 16LL * (*(_DWORD *)v51 + 4) + 312;
          }
          else
          {
LABEL_54:
            v52 = sub_1C8D744(v33, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v52)(v33, *(_QWORD *)(v52 + 8), v49);
        }
        v53 = *(_QWORD *)v22;
        v54 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
        {
          v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
          {
            --v54;
            v55 += 4;
            if ( !v54 )
              goto LABEL_61;
          }
          v56 = v53 + 16LL * *v55 + 312;
        }
        else
        {
LABEL_61:
          v56 = sub_1C8D744(v22, System_IDisposable_TypeInfo, 0LL);
        }
        v11 = (System_Object_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v22, *(_QWORD *)(v56 + 8));
        max_length = ComponentsInChildren_object__50230908->max_length;
        if ( (int)++v14 >= max_length )
          return;
      }
      goto LABEL_105;
    }
  }
  else
  {
    v57 = v11;
    if ( v11 )
    {
      v58 = v11->max_length;
      if ( v58 >= 1 )
      {
        v59 = 0;
        while ( v59 < v58 )
        {
          States = (SimpleAnimation_o *)v57->m_Items[v59];
          if ( !States )
LABEL_104:
            sub_1C3B9C0(States, v12);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_1C3B9C0(0LL, v60);
          while ( 1 )
          {
            v62 = Enumerator->klass;
            v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v64 = &v62->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v63;
                v64 += 4;
                if ( !v63 )
                  goto LABEL_77;
              }
              p_method = (__int64)&v62->vtable[*v64].method;
            }
            else
            {
LABEL_77:
              p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v66 = Enumerator->klass;
            v67 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v68 = (System_Collections_IEnumerator_c **)&v66->_1.interfaceOffsets->offset;
              while ( *(v68 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v67;
                v68 += 2;
                if ( !v67 )
                  goto LABEL_84;
              }
              v69 = (__int64)&v66->vtable[*(_DWORD *)v68 + 1].method;
            }
            else
            {
LABEL_84:
              v69 = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v70 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v69)(
                                                    Enumerator,
                                                    *(_QWORD *)(v69 + 8));
            v72 = v70;
            if ( !v70 )
              sub_1C3B9C0(0LL, v71);
            if ( v70->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1C3BC80(v70);
              v80 = sub_1C3B8A0(Enumerator, System_IDisposable_TypeInfo);
              v81 = v80;
              if ( v80 )
              {
                v82 = *(_QWORD *)v80;
                v83 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
                {
                  v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v83;
                    v84 += 4;
                    if ( !v83 )
                      goto LABEL_111;
                  }
                  v85 = v82 + 16LL * *v84 + 312;
                }
                else
                {
LABEL_111:
                  v85 = sub_1C8D744(v80, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8));
              }
              if ( v72 )
                sub_1C3B9B8(v72);
              sub_1D261F4();
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v70, 0LL) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v72, 0LL);
              v74 = UnityEngine_Random__Range(0.0, length, 0LL);
              UnityEngine_AnimationState__set_time(v72, v74, 0LL);
            }
          }
          v11 = (System_Object_array *)sub_1C3B8A0(Enumerator, System_IDisposable_TypeInfo);
          if ( v11 )
          {
            v75 = v11->obj.klass;
            v76 = v11;
            v77 = *(unsigned __int16 *)(&v11->obj.klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v11->obj.klass->_2.bitflags2 + 3) )
            {
              v78 = &v75->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
              {
                --v77;
                v78 += 4;
                if ( !v77 )
                  goto LABEL_95;
              }
              v79 = (__int64)&v75->vtable[*v78].method;
            }
            else
            {
LABEL_95:
              v79 = sub_1C8D744(v11, System_IDisposable_TypeInfo, 0LL);
            }
            v11 = (System_Object_array *)(*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v79)(
                                           v76,
                                           *(_QWORD *)(v79 + 8));
          }
          v58 = v57->max_length;
          if ( (int)++v59 >= v58 )
            return;
        }
LABEL_105:
        sub_1C3B9C8(v11, v12);
      }
    }
  }
}