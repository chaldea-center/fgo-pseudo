void BattleNoSynchroAnime___ctor(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleNoSynchroAnime__Start(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__51142088; // x19
  System_Object_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int max_length; // w8
  unsigned int v8; // w23
  SimpleAnimation_o *States; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v11; // x20
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x20
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x21
  __int64 v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0
  long double v40; // q0
  long double v41; // q0
  __int64 v42; // x8
  long double v43; // q8
  __int64 v44; // x9
  SimpleAnimation_State_c **v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  System_Object_array *v51; // x20
  int v52; // w8
  unsigned int v53; // w23
  __int64 v54; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  System_Collections_IEnumerator_c *v60; // x8
  __int64 v61; // x9
  System_Collections_IEnumerator_c **v62; // x10
  __int64 v63; // x0
  UnityEngine_AnimationState_o *v64; // x0
  __int64 v65; // x1
  UnityEngine_AnimationState_o *v66; // x21
  float length; // s1
  float v68; // s0
  Il2CppClass *v69; // x8
  System_Object_array *v70; // x19
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x19
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0

  if ( (byte_4C2A721 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_AnimationState_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    byte_4C2A721 = 1;
  }
  ComponentsInChildren_object__51142088 = UnityEngine_Component__GetComponentsInChildren_object__51142088(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v4 = UnityEngine_Component__GetComponentsInChildren_object__51142088(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_object__51142088 )
  {
    max_length = ComponentsInChildren_object__51142088->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( v8 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__51142088->m_Items[v8];
        if ( !States )
          goto LABEL_104;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0);
        if ( !States )
          goto LABEL_104;
        klass = States->klass;
        v11 = States;
        v12 = *(unsigned __int16 *)&States->klass->_2.rank;
        if ( *(_WORD *)&States->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v12;
            p_offset += 4;
            if ( !v12 )
              goto LABEL_13;
          }
          v14 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_13:
          v14 = sub_1C7DCA8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v16 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
        if ( !v16 )
          sub_1C2D6EC(0, v15);
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
          {
            v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v18;
              v19 += 4;
              if ( !v18 )
                goto LABEL_20;
            }
            v20 = v17 + 16LL * *v19 + 312;
          }
          else
          {
LABEL_20:
            v20 = sub_1C7DCA8(v16, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
            break;
          v21 = *(_QWORD *)v16;
          v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
          {
            v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v23 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v22;
              v23 += 4;
              if ( !v22 )
                goto LABEL_27;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_27:
            v24 = sub_1C7DCA8(v16, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
          v27 = v25;
          if ( !v25 )
            sub_1C2D6EC(0, v26);
          v28 = *(_QWORD *)v25;
          v29 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
          {
            v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v29;
              v30 += 2;
              if ( !v29 )
                goto LABEL_34;
            }
            v31 = v28 + 16LL * (*(_DWORD *)v30 + 15) + 312;
          }
          else
          {
LABEL_34:
            v31 = sub_1C7DCA8(v25, SimpleAnimation_State_TypeInfo, 15);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) != 2 )
          {
            v32 = *(_QWORD *)v27;
            v33 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
            {
              v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
              while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v33;
                v34 += 2;
                if ( !v33 )
                  goto LABEL_41;
              }
              v35 = v32 + 16LL * (*(_DWORD *)v34 + 17) + 312;
            }
            else
            {
LABEL_41:
              v35 = sub_1C7DCA8(v27, SimpleAnimation_State_TypeInfo, 17);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8)) != 2 )
              continue;
          }
          v36 = *(_QWORD *)v27;
          v37 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
          {
            v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
            while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v37;
              v38 += 2;
              if ( !v37 )
                goto LABEL_48;
            }
            v39 = v36 + 16LL * (*(_DWORD *)v38 + 13) + 312;
          }
          else
          {
LABEL_48:
            v39 = sub_1C7DCA8(v27, SimpleAnimation_State_TypeInfo, 13);
          }
          v40 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v39)(v27, *(_QWORD *)(v39 + 8));
          *(float *)&v41 = UnityEngine_Random__Range(0.0, *(float *)&v40, 0);
          v42 = *(_QWORD *)v27;
          v43 = v41;
          v44 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
          {
            v45 = (SimpleAnimation_State_c **)(*(_QWORD *)(v42 + 176) + 8LL);
            while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v44;
              v45 += 2;
              if ( !v44 )
                goto LABEL_54;
            }
            v46 = v42 + 16LL * (*(_DWORD *)v45 + 4) + 312;
          }
          else
          {
LABEL_54:
            v46 = sub_1C7DCA8(v27, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v46)(v27, *(_QWORD *)(v46 + 8), v43);
        }
        v47 = *(_QWORD *)v16;
        v48 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
        {
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
          {
            --v48;
            v49 += 4;
            if ( !v48 )
              goto LABEL_61;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_61:
          v50 = sub_1C7DCA8(v16, System_IDisposable_TypeInfo, 0);
        }
        v4 = (System_Object_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v16, *(_QWORD *)(v50 + 8));
        max_length = ComponentsInChildren_object__51142088->max_length;
        if ( (int)++v8 >= max_length )
          return;
      }
      goto LABEL_105;
    }
  }
  else
  {
    v51 = v4;
    if ( v4 )
    {
      v52 = v4->max_length;
      if ( v52 >= 1 )
      {
        v53 = 0;
        while ( v53 < v52 )
        {
          States = (SimpleAnimation_o *)v51->m_Items[v53];
          if ( !States )
LABEL_104:
            sub_1C2D6EC(States, v5);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
          if ( !Enumerator )
            sub_1C2D6EC(0, v54);
          while ( 1 )
          {
            v56 = Enumerator->klass;
            v57 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v58 = &v56->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v57;
                v58 += 4;
                if ( !v57 )
                  goto LABEL_77;
              }
              v59 = (__int64)&v56->vtable[*v58];
            }
            else
            {
LABEL_77:
              v59 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v59)(
                    Enumerator,
                    *(_QWORD *)(v59 + 8))
                & 1) == 0 )
              break;
            v60 = Enumerator->klass;
            v61 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
            if ( *(_WORD *)&Enumerator->klass->_2.rank )
            {
              v62 = (System_Collections_IEnumerator_c **)&v60->_1.interfaceOffsets->offset;
              while ( *(v62 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v61;
                v62 += 2;
                if ( !v61 )
                  goto LABEL_84;
              }
              v63 = (__int64)&v60->vtable[*(_DWORD *)v62 + 1];
            }
            else
            {
LABEL_84:
              v63 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
            }
            v64 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v63)(
                                                    Enumerator,
                                                    *(_QWORD *)(v63 + 8));
            v66 = v64;
            if ( !v64 )
              sub_1C2D6EC(0, v65);
            if ( v64->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1C2D9AC(v64);
              v74 = sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
              v75 = v74;
              if ( v74 )
              {
                v76 = *(_QWORD *)v74;
                v77 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
                {
                  v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v77;
                    v78 += 4;
                    if ( !v77 )
                      goto LABEL_111;
                  }
                  v79 = v76 + 16LL * *v78 + 312;
                }
                else
                {
LABEL_111:
                  v79 = sub_1C7DCA8(v74, System_IDisposable_TypeInfo, 0);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8));
              }
              if ( v66 )
                sub_1C2D6E4(v66);
              sub_1D165C4();
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v64, 0) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v66, 0);
              v68 = UnityEngine_Random__Range(0.0, length, 0);
              UnityEngine_AnimationState__set_time(v66, v68, 0);
            }
          }
          v4 = (System_Object_array *)sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
          if ( v4 )
          {
            v69 = v4->obj.klass;
            v70 = v4;
            v71 = *(unsigned __int16 *)&v4->obj.klass->_2.rank;
            if ( *(_WORD *)&v4->obj.klass->_2.rank )
            {
              v72 = &v69->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
              {
                --v71;
                v72 += 4;
                if ( !v71 )
                  goto LABEL_95;
              }
              v73 = (__int64)&v69->vtable[*v72];
            }
            else
            {
LABEL_95:
              v73 = sub_1C7DCA8(v4, System_IDisposable_TypeInfo, 0);
            }
            v4 = (System_Object_array *)(*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v73)(
                                          v70,
                                          *(_QWORD *)(v73 + 8));
          }
          v52 = v51->max_length;
          if ( (int)++v53 >= v52 )
            return;
        }
LABEL_105:
        sub_1C2D6F4(v4, v5, v6);
      }
    }
  }
}