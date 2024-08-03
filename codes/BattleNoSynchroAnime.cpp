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
  System_Object_array *ComponentsInChildren_object__48433408; // x19
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
  __int64 v21; // x20
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x21
  __int64 v32; // x8
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  SimpleAnimation_State_c **v42; // x10
  __int64 v43; // x0
  long double v44; // q0
  long double v45; // q0
  __int64 v46; // x8
  long double v47; // q8
  __int64 v48; // x9
  SimpleAnimation_State_c **v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  System_Object_array *v55; // x20
  int v56; // w8
  unsigned int v57; // w23
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v59; // x8
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v63; // x8
  __int64 v64; // x9
  System_Collections_IEnumerator_c **v65; // x10
  __int64 v66; // x0
  UnityEngine_AnimationState_o *v67; // x0
  UnityEngine_AnimationState_o *v68; // x21
  float length; // s1
  float v70; // s0
  Il2CppClass *v71; // x8
  System_Object_array *v72; // x19
  __int64 v73; // x9
  int32_t *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x19
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0

  if ( (byte_49FF1F9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v9);
    byte_49FF1F9 = 1;
  }
  ComponentsInChildren_object__48433408 = UnityEngine_Component__GetComponentsInChildren_object__48433408(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v11 = UnityEngine_Component__GetComponentsInChildren_object__48433408(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E30900 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_object__48433408 )
  {
    max_length = ComponentsInChildren_object__48433408->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( v14 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__48433408->m_Items[v14];
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
          v20 = sub_1BB60A8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v21 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8));
        if ( !v21 )
          sub_1B64324(0LL);
        while ( 1 )
        {
          v22 = *(_QWORD *)v21;
          v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v23;
              v24 += 4;
              if ( !v23 )
                goto LABEL_20;
            }
            v25 = v22 + 16LL * *v24 + 312;
          }
          else
          {
LABEL_20:
            v25 = sub_1BB60A8(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
            break;
          v26 = *(_QWORD *)v21;
          v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v28 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v27;
              v28 += 4;
              if ( !v27 )
                goto LABEL_27;
            }
            v29 = v26 + 16LL * *v28 + 312;
          }
          else
          {
LABEL_27:
            v29 = sub_1BB60A8(v21, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
          v31 = v30;
          if ( !v30 )
            sub_1B64324(0LL);
          v32 = *(_QWORD *)v30;
          v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
          {
            v34 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *(v34 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v33;
              v34 += 2;
              if ( !v33 )
                goto LABEL_34;
            }
            v35 = v32 + 16LL * (*(_DWORD *)v34 + 15) + 312;
          }
          else
          {
LABEL_34:
            v35 = sub_1BB60A8(v30, SimpleAnimation_State_TypeInfo, 15LL);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) != 2 )
          {
            v36 = *(_QWORD *)v31;
            v37 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
            {
              v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
              while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v37;
                v38 += 2;
                if ( !v37 )
                  goto LABEL_41;
              }
              v39 = v36 + 16LL * (*(_DWORD *)v38 + 17) + 312;
            }
            else
            {
LABEL_41:
              v39 = sub_1BB60A8(v31, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8)) != 2 )
              continue;
          }
          v40 = *(_QWORD *)v31;
          v41 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
          {
            v42 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
            while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v41;
              v42 += 2;
              if ( !v41 )
                goto LABEL_48;
            }
            v43 = v40 + 16LL * (*(_DWORD *)v42 + 13) + 312;
          }
          else
          {
LABEL_48:
            v43 = sub_1BB60A8(v31, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v44 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v43)(v31, *(_QWORD *)(v43 + 8));
          *(float *)&v45 = UnityEngine_Random__Range(0.0, *(float *)&v44, 0LL);
          v46 = *(_QWORD *)v31;
          v47 = v45;
          v48 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
          {
            v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v46 + 176) + 8LL);
            while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v48;
              v49 += 2;
              if ( !v48 )
                goto LABEL_54;
            }
            v50 = v46 + 16LL * (*(_DWORD *)v49 + 4) + 312;
          }
          else
          {
LABEL_54:
            v50 = sub_1BB60A8(v31, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v50)(v31, *(_QWORD *)(v50 + 8), v47);
        }
        v51 = *(_QWORD *)v21;
        v52 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
        {
          v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
          {
            --v52;
            v53 += 4;
            if ( !v52 )
              goto LABEL_61;
          }
          v54 = v51 + 16LL * *v53 + 312;
        }
        else
        {
LABEL_61:
          v54 = sub_1BB60A8(v21, System_IDisposable_TypeInfo, 0LL);
        }
        v11 = (System_Object_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v21, *(_QWORD *)(v54 + 8));
        max_length = ComponentsInChildren_object__48433408->max_length;
        if ( (int)++v14 >= max_length )
          return;
      }
      goto LABEL_105;
    }
  }
  else
  {
    v55 = v11;
    if ( v11 )
    {
      v56 = v11->max_length;
      if ( v56 >= 1 )
      {
        v57 = 0;
        while ( v57 < v56 )
        {
          States = (SimpleAnimation_o *)v55->m_Items[v57];
          if ( !States )
LABEL_104:
            sub_1B64324(States);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_1B64324(0LL);
          while ( 1 )
          {
            v59 = Enumerator->klass;
            v60 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v61 = &v59->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v61 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v60;
                v61 += 4;
                if ( !v60 )
                  goto LABEL_77;
              }
              p_method = (__int64)&v59->vtable[*v61].method;
            }
            else
            {
LABEL_77:
              p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v63 = Enumerator->klass;
            v64 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v65 = (System_Collections_IEnumerator_c **)&v63->_1.interfaceOffsets->offset;
              while ( *(v65 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v64;
                v65 += 2;
                if ( !v64 )
                  goto LABEL_84;
              }
              v66 = (__int64)&v63->vtable[*(_DWORD *)v65 + 1].method;
            }
            else
            {
LABEL_84:
              v66 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v67 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v66)(
                                                    Enumerator,
                                                    *(_QWORD *)(v66 + 8));
            v68 = v67;
            if ( !v67 )
              sub_1B64324(0LL);
            if ( v67->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1B645E4(v67);
              v76 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
              v77 = v76;
              if ( v76 )
              {
                v78 = *(_QWORD *)v76;
                v79 = *(unsigned __int16 *)(*(_QWORD *)v76 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v76 + 302LL) )
                {
                  v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v79;
                    v80 += 4;
                    if ( !v79 )
                      goto LABEL_111;
                  }
                  v81 = v78 + 16LL * *v80 + 312;
                }
                else
                {
LABEL_111:
                  v81 = sub_1BB60A8(v76, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v81)(v77, *(_QWORD *)(v81 + 8));
              }
              if ( v68 )
                sub_1B6431C(v68);
              sub_1C4EB58();
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v67, 0LL) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v68, 0LL);
              v70 = UnityEngine_Random__Range(0.0, length, 0LL);
              UnityEngine_AnimationState__set_time(v68, v70, 0LL);
            }
          }
          v11 = (System_Object_array *)sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
          if ( v11 )
          {
            v71 = v11->obj.klass;
            v72 = v11;
            v73 = *(unsigned __int16 *)(&v11->obj.klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v11->obj.klass->_2.bitflags2 + 3) )
            {
              v74 = &v71->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
              {
                --v73;
                v74 += 4;
                if ( !v73 )
                  goto LABEL_95;
              }
              v75 = (__int64)&v71->vtable[*v74].method;
            }
            else
            {
LABEL_95:
              v75 = sub_1BB60A8(v11, System_IDisposable_TypeInfo, 0LL);
            }
            v11 = (System_Object_array *)(*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v75)(
                                           v72,
                                           *(_QWORD *)(v75 + 8));
          }
          v56 = v55->max_length;
          if ( (int)++v57 >= v56 )
            return;
        }
LABEL_105:
        sub_1B6432C(v11, v12);
      }
    }
  }
}