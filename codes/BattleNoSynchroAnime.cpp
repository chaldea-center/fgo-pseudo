void BattleNoSynchroAnime___ctor(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleNoSynchroAnime__Start(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__51318504; // x19
  System_Object_array *v4; // x0
  __int64 v5; // x1
  int max_length; // w8
  unsigned int v7; // w23
  SimpleAnimation_o *States; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v10; // x20
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x20
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x21
  __int64 v27; // x8
  __int64 v28; // x9
  SimpleAnimation_State_c **v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  SimpleAnimation_State_c **v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  SimpleAnimation_State_c **v37; // x10
  __int64 v38; // x0
  long double v39; // q0
  long double v40; // q0
  __int64 v41; // x8
  long double v42; // q8
  __int64 v43; // x9
  SimpleAnimation_State_c **v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  System_Object_array *v50; // x20
  int v51; // w8
  unsigned int v52; // w23
  __int64 v53; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  System_Collections_IEnumerator_c *v59; // x8
  __int64 v60; // x9
  System_Collections_IEnumerator_c **v61; // x10
  __int64 v62; // x0
  UnityEngine_AnimationState_o *v63; // x0
  __int64 v64; // x1
  UnityEngine_AnimationState_o *v65; // x21
  float length; // s1
  float v67; // s0
  Il2CppClass *v68; // x8
  System_Object_array *v69; // x19
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x19
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0

  if ( (byte_4C5A249 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_AnimationState_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    byte_4C5A249 = 1;
  }
  ComponentsInChildren_object__51318504 = UnityEngine_Component__GetComponentsInChildren_object__51318504(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v4 = UnityEngine_Component__GetComponentsInChildren_object__51318504(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_object__51318504 )
  {
    max_length = ComponentsInChildren_object__51318504->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( v7 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__51318504->m_Items[v7];
        if ( !States )
          goto LABEL_104;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0);
        if ( !States )
          goto LABEL_104;
        klass = States->klass;
        v10 = States;
        v11 = *(unsigned __int16 *)&States->klass->_2.rank;
        if ( *(_WORD *)&States->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v11;
            p_offset += 4;
            if ( !v11 )
              goto LABEL_13;
          }
          v13 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_13:
          v13 = sub_1C8ED7C(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v15 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
        if ( !v15 )
          sub_1C3E7C0(0, v14);
        while ( 1 )
        {
          v16 = *(_QWORD *)v15;
          v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
          {
            v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v17;
              v18 += 4;
              if ( !v17 )
                goto LABEL_20;
            }
            v19 = v16 + 16LL * *v18 + 312;
          }
          else
          {
LABEL_20:
            v19 = sub_1C8ED7C(v15, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
            break;
          v20 = *(_QWORD *)v15;
          v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
          {
            v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v22 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v21;
              v22 += 4;
              if ( !v21 )
                goto LABEL_27;
            }
            v23 = v20 + 16LL * *v22 + 312;
          }
          else
          {
LABEL_27:
            v23 = sub_1C8ED7C(v15, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
          v26 = v24;
          if ( !v24 )
            sub_1C3E7C0(0, v25);
          v27 = *(_QWORD *)v24;
          v28 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v29 = (SimpleAnimation_State_c **)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v28;
              v29 += 2;
              if ( !v28 )
                goto LABEL_34;
            }
            v30 = v27 + 16LL * (*(_DWORD *)v29 + 15) + 312;
          }
          else
          {
LABEL_34:
            v30 = sub_1C8ED7C(v24, SimpleAnimation_State_TypeInfo, 15);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) != 2 )
          {
            v31 = *(_QWORD *)v26;
            v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
            {
              v33 = (SimpleAnimation_State_c **)(*(_QWORD *)(v31 + 176) + 8LL);
              while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v32;
                v33 += 2;
                if ( !v32 )
                  goto LABEL_41;
              }
              v34 = v31 + 16LL * (*(_DWORD *)v33 + 17) + 312;
            }
            else
            {
LABEL_41:
              v34 = sub_1C8ED7C(v26, SimpleAnimation_State_TypeInfo, 17);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8)) != 2 )
              continue;
          }
          v35 = *(_QWORD *)v26;
          v36 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
          {
            v37 = (SimpleAnimation_State_c **)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v36;
              v37 += 2;
              if ( !v36 )
                goto LABEL_48;
            }
            v38 = v35 + 16LL * (*(_DWORD *)v37 + 13) + 312;
          }
          else
          {
LABEL_48:
            v38 = sub_1C8ED7C(v26, SimpleAnimation_State_TypeInfo, 13);
          }
          v39 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v38)(v26, *(_QWORD *)(v38 + 8));
          *(float *)&v40 = UnityEngine_Random__Range(0.0, *(float *)&v39, 0);
          v41 = *(_QWORD *)v26;
          v42 = v40;
          v43 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
          {
            v44 = (SimpleAnimation_State_c **)(*(_QWORD *)(v41 + 176) + 8LL);
            while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v43;
              v44 += 2;
              if ( !v43 )
                goto LABEL_54;
            }
            v45 = v41 + 16LL * (*(_DWORD *)v44 + 4) + 312;
          }
          else
          {
LABEL_54:
            v45 = sub_1C8ED7C(v26, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v45)(v26, *(_QWORD *)(v45 + 8), v42);
        }
        v46 = *(_QWORD *)v15;
        v47 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
          {
            --v47;
            v48 += 4;
            if ( !v47 )
              goto LABEL_61;
          }
          v49 = v46 + 16LL * *v48 + 312;
        }
        else
        {
LABEL_61:
          v49 = sub_1C8ED7C(v15, System_IDisposable_TypeInfo, 0);
        }
        v4 = (System_Object_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v15, *(_QWORD *)(v49 + 8));
        max_length = ComponentsInChildren_object__51318504->max_length;
        if ( (int)++v7 >= max_length )
          return;
      }
      goto LABEL_105;
    }
  }
  else
  {
    v50 = v4;
    if ( v4 )
    {
      v51 = v4->max_length;
      if ( v51 >= 1 )
      {
        v52 = 0;
        while ( v52 < v51 )
        {
          States = (SimpleAnimation_o *)v50->m_Items[v52];
          if ( !States )
LABEL_104:
            sub_1C3E7C0(States, v5);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
          if ( !Enumerator )
            sub_1C3E7C0(0, v53);
          while ( 1 )
          {
            v55 = Enumerator->klass;
            v56 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v57 = &v55->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v56;
                v57 += 4;
                if ( !v56 )
                  goto LABEL_77;
              }
              v58 = (__int64)&v55->vtable[*v57];
            }
            else
            {
LABEL_77:
              v58 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v58)(
                    Enumerator,
                    *(_QWORD *)(v58 + 8))
                & 1) == 0 )
              break;
            v59 = Enumerator->klass;
            v60 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v61 = (System_Collections_IEnumerator_c **)&v59->_1.interfaceOffsets->offset;
              while ( *(v61 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v60;
                v61 += 2;
                if ( !v60 )
                  goto LABEL_84;
              }
              v62 = (__int64)&v59->vtable[*(_DWORD *)v61 + 1];
            }
            else
            {
LABEL_84:
              v62 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
            }
            v63 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v62)(
                                                    Enumerator,
                                                    *(_QWORD *)(v62 + 8));
            v65 = v63;
            if ( !v63 )
              sub_1C3E7C0(0, v64);
            if ( v63->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1C3EA80(v63);
              v73 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
              v74 = v73;
              if ( v73 )
              {
                v75 = *(_QWORD *)v73;
                v76 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
                {
                  v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v76;
                    v77 += 4;
                    if ( !v76 )
                      goto LABEL_111;
                  }
                  v78 = v75 + 16LL * *v77 + 312;
                }
                else
                {
LABEL_111:
                  v78 = sub_1C8ED7C(v73, System_IDisposable_TypeInfo, 0);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8));
              }
              if ( v65 )
                sub_1C3E7B8(v65);
              sub_1D27698();
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v63, 0) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v65, 0);
              v67 = UnityEngine_Random__Range(0.0, length, 0);
              UnityEngine_AnimationState__set_time(v65, v67, 0);
            }
          }
          v4 = (System_Object_array *)sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
          if ( v4 )
          {
            v68 = v4->obj.klass;
            v69 = v4;
            v70 = *(unsigned __int16 *)&v4->obj.klass->_2.rank;
            if ( *(_WORD *)&v4->obj.klass->_2.rank )
            {
              v71 = &v68->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
              {
                --v70;
                v71 += 4;
                if ( !v70 )
                  goto LABEL_95;
              }
              v72 = (__int64)&v68->vtable[*v71];
            }
            else
            {
LABEL_95:
              v72 = sub_1C8ED7C(v4, System_IDisposable_TypeInfo, 0);
            }
            v4 = (System_Object_array *)(*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v72)(
                                          v69,
                                          *(_QWORD *)(v72 + 8));
          }
          v51 = v50->max_length;
          if ( (int)++v52 >= v51 )
            return;
        }
LABEL_105:
        sub_1C3E7C8(v4, v5);
      }
    }
  }
}