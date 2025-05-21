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
  System_Object_array *ComponentsInChildren_object__50507220; // x19
  System_Object_array *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  unsigned int v15; // w23
  SimpleAnimation_o *States; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v18; // x20
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x21
  __int64 v35; // x8
  __int64 v36; // x9
  SimpleAnimation_State_c **v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  SimpleAnimation_State_c **v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  SimpleAnimation_State_c **v45; // x10
  __int64 v46; // x0
  long double v47; // q0
  long double v48; // q0
  __int64 v49; // x8
  long double v50; // q8
  __int64 v51; // x9
  SimpleAnimation_State_c **v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  System_Object_array *v58; // x20
  int v59; // w8
  unsigned int v60; // w23
  __int64 v61; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v67; // x8
  __int64 v68; // x9
  System_Collections_IEnumerator_c **v69; // x10
  __int64 v70; // x0
  UnityEngine_AnimationState_o *v71; // x0
  __int64 v72; // x1
  UnityEngine_AnimationState_o *v73; // x21
  float length; // s1
  float v75; // s0
  Il2CppClass *v76; // x8
  System_Object_array *v77; // x19
  __int64 v78; // x9
  int32_t *v79; // x10
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x19
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0

  if ( (byte_4B47C78 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___, v3);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___, v4);
    sub_1BDB878(&System_IDisposable_TypeInfo, v5);
    sub_1BDB878(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BDB878(&SimpleAnimation_State_TypeInfo, v9);
    byte_4B47C78 = 1;
  }
  ComponentsInChildren_object__50507220 = UnityEngine_Component__GetComponentsInChildren_object__50507220(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_302ADD4 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v11 = UnityEngine_Component__GetComponentsInChildren_object__50507220(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_302ADD4 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_object__50507220 )
  {
    max_length = ComponentsInChildren_object__50507220->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( v15 < max_length )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__50507220->m_Items[v15];
        if ( !States )
          goto LABEL_104;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0LL);
        if ( !States )
          goto LABEL_104;
        klass = States->klass;
        v18 = States;
        v19 = *(unsigned __int16 *)(&States->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&States->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v19;
            p_offset += 4;
            if ( !v19 )
              goto LABEL_13;
          }
          v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_13:
          v21 = sub_1C2C00C(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v23 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
        if ( !v23 )
          sub_1BDBAD4(0LL, v22);
        while ( 1 )
        {
          v24 = *(_QWORD *)v23;
          v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v25;
              v26 += 4;
              if ( !v25 )
                goto LABEL_20;
            }
            v27 = v24 + 16LL * *v26 + 312;
          }
          else
          {
LABEL_20:
            v27 = sub_1C2C00C(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
            break;
          v28 = *(_QWORD *)v23;
          v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v30 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v29;
              v30 += 4;
              if ( !v29 )
                goto LABEL_27;
            }
            v31 = v28 + 16LL * *v30 + 312;
          }
          else
          {
LABEL_27:
            v31 = sub_1C2C00C(v23, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
          v34 = v32;
          if ( !v32 )
            sub_1BDBAD4(0LL, v33);
          v35 = *(_QWORD *)v32;
          v36 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
          {
            v37 = (SimpleAnimation_State_c **)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v36;
              v37 += 2;
              if ( !v36 )
                goto LABEL_34;
            }
            v38 = v35 + 16LL * (*(_DWORD *)v37 + 15) + 312;
          }
          else
          {
LABEL_34:
            v38 = sub_1C2C00C(v32, SimpleAnimation_State_TypeInfo, 15LL);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) != 2 )
          {
            v39 = *(_QWORD *)v34;
            v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
            {
              v41 = (SimpleAnimation_State_c **)(*(_QWORD *)(v39 + 176) + 8LL);
              while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v40;
                v41 += 2;
                if ( !v40 )
                  goto LABEL_41;
              }
              v42 = v39 + 16LL * (*(_DWORD *)v41 + 17) + 312;
            }
            else
            {
LABEL_41:
              v42 = sub_1C2C00C(v34, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8)) != 2 )
              continue;
          }
          v43 = *(_QWORD *)v34;
          v44 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
          {
            v45 = (SimpleAnimation_State_c **)(*(_QWORD *)(v43 + 176) + 8LL);
            while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v44;
              v45 += 2;
              if ( !v44 )
                goto LABEL_48;
            }
            v46 = v43 + 16LL * (*(_DWORD *)v45 + 13) + 312;
          }
          else
          {
LABEL_48:
            v46 = sub_1C2C00C(v34, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v47 = ((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v46)(v34, *(_QWORD *)(v46 + 8));
          *(float *)&v48 = UnityEngine_Random__Range(0.0, *(float *)&v47, 0LL);
          v49 = *(_QWORD *)v34;
          v50 = v48;
          v51 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
          {
            v52 = (SimpleAnimation_State_c **)(*(_QWORD *)(v49 + 176) + 8LL);
            while ( *(v52 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v51;
              v52 += 2;
              if ( !v51 )
                goto LABEL_54;
            }
            v53 = v49 + 16LL * (*(_DWORD *)v52 + 4) + 312;
          }
          else
          {
LABEL_54:
            v53 = sub_1C2C00C(v34, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, long double))v53)(v34, *(_QWORD *)(v53 + 8), v50);
        }
        v54 = *(_QWORD *)v23;
        v55 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
        {
          v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
          {
            --v55;
            v56 += 4;
            if ( !v55 )
              goto LABEL_61;
          }
          v57 = v54 + 16LL * *v56 + 312;
        }
        else
        {
LABEL_61:
          v57 = sub_1C2C00C(v23, System_IDisposable_TypeInfo, 0LL);
        }
        v11 = (System_Object_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v23, *(_QWORD *)(v57 + 8));
        max_length = ComponentsInChildren_object__50507220->max_length;
        if ( (int)++v15 >= max_length )
          return;
      }
      goto LABEL_105;
    }
  }
  else
  {
    v58 = v11;
    if ( v11 )
    {
      v59 = v11->max_length;
      if ( v59 >= 1 )
      {
        v60 = 0;
        while ( v60 < v59 )
        {
          States = (SimpleAnimation_o *)v58->m_Items[v60];
          if ( !States )
LABEL_104:
            sub_1BDBAD4(States, v12);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0LL);
          if ( !Enumerator )
            sub_1BDBAD4(0LL, v61);
          while ( 1 )
          {
            v63 = Enumerator->klass;
            v64 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v65 = &v63->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v65 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v64;
                v65 += 4;
                if ( !v64 )
                  goto LABEL_77;
              }
              p_method = (__int64)&v63->vtable[*v65].method;
            }
            else
            {
LABEL_77:
              p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                    Enumerator,
                    *(_QWORD *)(p_method + 8)) & 1) == 0 )
              break;
            v67 = Enumerator->klass;
            v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
            {
              v69 = (System_Collections_IEnumerator_c **)&v67->_1.interfaceOffsets->offset;
              while ( *(v69 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v68;
                v69 += 2;
                if ( !v68 )
                  goto LABEL_84;
              }
              v70 = (__int64)&v67->vtable[*(_DWORD *)v69 + 1].method;
            }
            else
            {
LABEL_84:
              v70 = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
            }
            v71 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v70)(
                                                    Enumerator,
                                                    *(_QWORD *)(v70 + 8));
            v73 = v71;
            if ( !v71 )
              sub_1BDBAD4(0LL, v72);
            if ( v71->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_1BDBD94(v71);
              v81 = sub_1BDB9B4(Enumerator, System_IDisposable_TypeInfo);
              v82 = v81;
              if ( v81 )
              {
                v83 = *(_QWORD *)v81;
                v84 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
                {
                  v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
                  while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v84;
                    v85 += 4;
                    if ( !v84 )
                      goto LABEL_111;
                  }
                  v86 = v83 + 16LL * *v85 + 312;
                }
                else
                {
LABEL_111:
                  v86 = sub_1C2C00C(v81, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(__int64, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8));
              }
              if ( v73 )
                sub_1BDBACC(v73);
              sub_1CC490C();
            }
            if ( UnityEngine_AnimationState__get_wrapMode(v71, 0LL) == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v73, 0LL);
              v75 = UnityEngine_Random__Range(0.0, length, 0LL);
              UnityEngine_AnimationState__set_time(v73, v75, 0LL);
            }
          }
          v11 = (System_Object_array *)sub_1BDB9B4(Enumerator, System_IDisposable_TypeInfo);
          if ( v11 )
          {
            v76 = v11->obj.klass;
            v77 = v11;
            v78 = *(unsigned __int16 *)(&v11->obj.klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v11->obj.klass->_2.bitflags2 + 3) )
            {
              v79 = &v76->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
              {
                --v78;
                v79 += 4;
                if ( !v78 )
                  goto LABEL_95;
              }
              v80 = (__int64)&v76->vtable[*v79].method;
            }
            else
            {
LABEL_95:
              v80 = sub_1C2C00C(v11, System_IDisposable_TypeInfo, 0LL);
            }
            v11 = (System_Object_array *)(*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v80)(
                                           v77,
                                           *(_QWORD *)(v80 + 8));
          }
          v59 = v58->max_length;
          if ( (int)++v60 >= v59 )
            return;
        }
LABEL_105:
        sub_1BDBADC(v11, v12, v13);
      }
    }
  }
}