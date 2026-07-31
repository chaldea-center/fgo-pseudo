void BattleRaidTurnStartEffect___ctor(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleRaidTurnStartEffect__resumeLimitTurnEffect(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__58647176; // x20
  __int64 States; // x0
  __int64 v5; // x1
  __int64 v6; // x21
  il2cpp_array_size_t v7; // x8
  unsigned __int64 v8; // x23
  unsigned __int64 max_length; // x8
  __int64 v10; // x8
  __int64 v11; // x21
  __int64 v12; // x9
  int *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x21
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x21
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0
  __int64 v34; // x22
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  unsigned __int64 v40; // x23
  unsigned __int64 v41; // x8
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v43; // x1
  System_Collections_IEnumerator_o *v44; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v46; // x9
  int *p_offset; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  System_Collections_IEnumerator_o *v51; // x20
  System_Collections_IEnumerator_c *v52; // x8
  __int64 v53; // x9
  System_Collections_IEnumerator_c **v54; // x10
  __int64 v55; // x0
  UnityEngine_AnimationState_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x8
  __int64 v60; // x22
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  int v64; // w8
  __int64 v65; // x19
  __int64 v66; // x20
  __int64 v67; // [xsp+10h] [xbp-90h] BYREF
  _QWORD *v68; // [xsp+18h] [xbp-88h]
  __int64 *v69; // [xsp+20h] [xbp-80h]
  __int64 v70; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_IEnumerator_o *v71; // [xsp+30h] [xbp-70h] BYREF
  __int64 v72; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_593B38F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AnimationState_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593B38F = 1;
  }
  v71 = 0;
  v72 = 0;
  v70 = 0;
  ComponentsInChildren_object__58647176 = UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  States = (__int64)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                      (UnityEngine_Component_o *)this,
                      (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  v6 = States;
  if ( ComponentsInChildren_object__58647176 && (v7 = ComponentsInChildren_object__58647176->max_length) != 0 )
  {
    if ( (int)v7 >= 1 )
    {
      v8 = 0;
      max_length = (unsigned int)ComponentsInChildren_object__58647176->max_length;
      while ( v8 < max_length )
      {
        States = (__int64)ComponentsInChildren_object__58647176->m_Items[v8];
        if ( !States )
          goto LABEL_97;
        States = (__int64)SimpleAnimation__GetStates((SimpleAnimation_o *)States, 0);
        if ( !States )
          goto LABEL_97;
        v10 = *(_QWORD *)States;
        v11 = States;
        v12 = *(unsigned __int16 *)(*(_QWORD *)States + 302LL);
        if ( *(_WORD *)(*(_QWORD *)States + 302LL) )
        {
          v13 = (int *)(*(_QWORD *)(v10 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v13 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v12;
            v13 += 4;
            if ( !v12 )
              goto LABEL_14;
          }
          v14 = v10 + 16LL * *v13 + 312;
        }
        else
        {
LABEL_14:
          v14 = sub_2237E2C(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
        v17 = v15;
        v67 = 0;
        v68 = &v72;
        v72 = v15;
        if ( !v15 )
LABEL_39:
          sub_21FFECC(v15, v16);
        while ( 1 )
        {
          v18 = *(_QWORD *)v17;
          v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
          {
            v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v19;
              v20 += 4;
              if ( !v19 )
                goto LABEL_21;
            }
            v21 = v18 + 16LL * *v20 + 312;
          }
          else
          {
LABEL_21:
            v21 = sub_2237E2C(v17, System_Collections_IEnumerator_TypeInfo, 0);
          }
          States = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8));
          if ( (States & 1) == 0 )
            break;
          v22 = v72;
          if ( !v72 )
            sub_21FFECC(States, v5);
          v23 = *(_QWORD *)v72;
          v24 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
          {
            v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v25 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v24;
              v25 += 4;
              if ( !v24 )
                goto LABEL_29;
            }
            v26 = v23 + 16LL * *v25 + 312;
          }
          else
          {
LABEL_29:
            v26 = sub_2237E2C(v72, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8));
          v29 = v27;
          if ( !v27 )
            sub_21FFECC(0, v28);
          v30 = *(_QWORD *)v27;
          v31 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
          {
            v32 = (SimpleAnimation_State_c **)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v31;
              v32 += 2;
              if ( !v31 )
                goto LABEL_36;
            }
            v33 = v30 + 16LL * (*(_DWORD *)v32 + 8) + 312;
          }
          else
          {
LABEL_36:
            v33 = sub_2237E2C(v27, SimpleAnimation_State_TypeInfo, 8);
          }
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v33)(v29, *(_QWORD *)(v33 + 8), 1.0);
          v17 = v72;
          if ( !v72 )
            goto LABEL_39;
        }
        v34 = v72;
        if ( v72 )
        {
          v35 = *(_QWORD *)v72;
          v36 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
          {
            v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
            {
              --v36;
              v37 += 4;
              if ( !v36 )
                goto LABEL_45;
            }
            v38 = v35 + 16LL * *v37 + 312;
          }
          else
          {
LABEL_45:
            v38 = sub_2237E2C(v72, System_IDisposable_TypeInfo, 0);
          }
          States = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8));
        }
        max_length = LODWORD(ComponentsInChildren_object__58647176->max_length);
        if ( (int)++v8 >= (int)max_length )
          goto LABEL_90;
      }
      goto LABEL_98;
    }
  }
  else if ( States )
  {
    v39 = *(_QWORD *)(States + 24);
    if ( v39 )
    {
      if ( (int)v39 >= 1 )
      {
        v40 = 0;
        v41 = (unsigned int)*(_QWORD *)(States + 24);
        while ( v40 < v41 )
        {
          States = *(_QWORD *)(v6 + 8 * v40 + 32);
          if ( !States )
            goto LABEL_97;
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
          v44 = Enumerator;
          v67 = 0;
          v68 = &v71;
          v71 = Enumerator;
          v69 = &v70;
          if ( !Enumerator )
LABEL_76:
            sub_21FFECC(Enumerator, v43);
          while ( 1 )
          {
            klass = v44->klass;
            v46 = *(unsigned __int16 *)&v44->klass->_2.rank;
            if ( *(_WORD *)&v44->klass->_2.rank )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v46;
                p_offset += 4;
                if ( !v46 )
                  goto LABEL_63;
              }
              v48 = (__int64)&klass->vtable[*p_offset];
            }
            else
            {
LABEL_63:
              v48 = sub_2237E2C(v44, System_Collections_IEnumerator_TypeInfo, 0);
            }
            v49 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
            if ( (v49 & 1) == 0 )
              break;
            v51 = v71;
            if ( !v71 )
              sub_21FFECC(v49, v50);
            v52 = v71->klass;
            v53 = *(unsigned __int16 *)&v71->klass->_2.rank;
            if ( *(_WORD *)&v71->klass->_2.rank )
            {
              v54 = (System_Collections_IEnumerator_c **)&v52->_1.interfaceOffsets->offset;
              while ( *(v54 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v53;
                v54 += 2;
                if ( !v53 )
                  goto LABEL_71;
              }
              v55 = (__int64)&v52->vtable[*(_DWORD *)v54 + 1];
            }
            else
            {
LABEL_71:
              v55 = sub_2237E2C(v71, System_Collections_IEnumerator_TypeInfo, 1);
            }
            v56 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v55)(
                                                    v51,
                                                    *(_QWORD *)(v55 + 8));
            if ( !v56 )
              sub_21FFECC(0, v57);
            if ( v56->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_220024C(v56, UnityEngine_AnimationState_TypeInfo, v58);
              sub_1FE698C(&v67);
              sub_22ED31C();
            }
            UnityEngine_AnimationState__set_speed(v56, 1.0, 0);
            v44 = v71;
            if ( !v71 )
              goto LABEL_76;
          }
          States = sub_21FFDA4(v71, System_IDisposable_TypeInfo);
          v70 = States;
          if ( States )
          {
            v59 = *(_QWORD *)States;
            v60 = States;
            v61 = *(unsigned __int16 *)(*(_QWORD *)States + 302LL);
            if ( *(_WORD *)(*(_QWORD *)States + 302LL) )
            {
              v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
              while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
              {
                --v61;
                v62 += 4;
                if ( !v61 )
                  goto LABEL_82;
              }
              v63 = v59 + 16LL * *v62 + 312;
            }
            else
            {
LABEL_82:
              v63 = sub_2237E2C(States, System_IDisposable_TypeInfo, 0);
            }
            States = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
          }
          v41 = *(unsigned int *)(v6 + 24);
          if ( (int)++v40 >= (int)v41 )
            goto LABEL_90;
        }
LABEL_98:
        sub_21FFED4(States);
      }
    }
  }
LABEL_90:
  States = (__int64)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                      (UnityEngine_Component_o *)this,
                      (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
  if ( !States )
LABEL_97:
    sub_21FFECC(States, v5);
  v64 = *(_DWORD *)(States + 24);
  v65 = States;
  if ( v64 >= 1 )
  {
    v66 = 0;
    while ( (unsigned int)v66 < v64 )
    {
      States = *(_QWORD *)(v65 + 32 + 8 * v66);
      if ( !States )
        goto LABEL_97;
      UnityEngine_ParticleSystem__Play_83623692((UnityEngine_ParticleSystem_o *)States, 0);
      v64 = *(_DWORD *)(v65 + 24);
      if ( (int)++v66 >= v64 )
        return;
    }
    goto LABEL_98;
  }
}


void BattleRaidTurnStartEffect__setStopFlg(BattleRaidTurnStartEffect_o *this, bool stopFlag, const MethodInfo *method)
{
  this->fields.animeStop = stopFlag;
}


void BattleRaidTurnStartEffect__waitLimitTurnEffect(BattleRaidTurnStartEffect_o *this, const MethodInfo *method)
{
  _BOOL4 animeStop; // w8
  System_Object_array *ComponentsInChildren_object__58647176; // x20
  __int64 States; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  il2cpp_array_size_t v8; // x8
  unsigned __int64 v9; // x23
  unsigned __int64 max_length; // x8
  __int64 v11; // x8
  __int64 v12; // x21
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x21
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  SimpleAnimation_State_c **v33; // x10
  __int64 v34; // x0
  __int64 v35; // x22
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  unsigned __int64 v41; // x23
  unsigned __int64 v42; // x8
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v44; // x1
  System_Collections_IEnumerator_o *v45; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v47; // x9
  int *p_offset; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  System_Collections_IEnumerator_o *v52; // x20
  System_Collections_IEnumerator_c *v53; // x8
  __int64 v54; // x9
  System_Collections_IEnumerator_c **v55; // x10
  __int64 v56; // x0
  UnityEngine_AnimationState_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x8
  __int64 v61; // x22
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  int v65; // w8
  __int64 v66; // x19
  __int64 v67; // x20
  __int64 v68; // [xsp+0h] [xbp-90h] BYREF
  _QWORD *v69; // [xsp+8h] [xbp-88h]
  __int64 *v70; // [xsp+10h] [xbp-80h]
  __int64 v71; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_IEnumerator_o *v72; // [xsp+20h] [xbp-70h] BYREF
  __int64 v73; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_593B38E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AnimationState_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593B38E = 1;
  }
  animeStop = this->fields.animeStop;
  v72 = 0;
  v73 = 0;
  v71 = 0;
  if ( animeStop )
  {
    ComponentsInChildren_object__58647176 = UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    States = (__int64)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    v7 = States;
    if ( ComponentsInChildren_object__58647176 && (v8 = ComponentsInChildren_object__58647176->max_length) != 0 )
    {
      if ( (int)v8 >= 1 )
      {
        v9 = 0;
        max_length = (unsigned int)ComponentsInChildren_object__58647176->max_length;
        while ( v9 < max_length )
        {
          States = (__int64)ComponentsInChildren_object__58647176->m_Items[v9];
          if ( !States )
            goto LABEL_98;
          States = (__int64)SimpleAnimation__GetStates((SimpleAnimation_o *)States, 0);
          if ( !States )
            goto LABEL_98;
          v11 = *(_QWORD *)States;
          v12 = States;
          v13 = *(unsigned __int16 *)(*(_QWORD *)States + 302LL);
          if ( *(_WORD *)(*(_QWORD *)States + 302LL) )
          {
            v14 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)v14 - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
            {
              --v13;
              v14 += 4;
              if ( !v13 )
                goto LABEL_15;
            }
            v15 = v11 + 16LL * *v14 + 312;
          }
          else
          {
LABEL_15:
            v15 = sub_2237E2C(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
          }
          v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v12, *(_QWORD *)(v15 + 8));
          v18 = v16;
          v68 = 0;
          v69 = &v73;
          v73 = v16;
          if ( !v16 )
LABEL_40:
            sub_21FFECC(v16, v17);
          while ( 1 )
          {
            v19 = *(_QWORD *)v18;
            v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
            {
              v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v20;
                v21 += 4;
                if ( !v20 )
                  goto LABEL_22;
              }
              v22 = v19 + 16LL * *v21 + 312;
            }
            else
            {
LABEL_22:
              v22 = sub_2237E2C(v18, System_Collections_IEnumerator_TypeInfo, 0);
            }
            States = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
            if ( (States & 1) == 0 )
              break;
            v23 = v73;
            if ( !v73 )
              sub_21FFECC(States, v6);
            v24 = *(_QWORD *)v73;
            v25 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
            {
              v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v26 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
              {
                --v25;
                v26 += 4;
                if ( !v25 )
                  goto LABEL_30;
              }
              v27 = v24 + 16LL * *v26 + 312;
            }
            else
            {
LABEL_30:
              v27 = sub_2237E2C(v73, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
            }
            v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
            v30 = v28;
            if ( !v28 )
              sub_21FFECC(0, v29);
            v31 = *(_QWORD *)v28;
            v32 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
            {
              v33 = (SimpleAnimation_State_c **)(*(_QWORD *)(v31 + 176) + 8LL);
              while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v32;
                v33 += 2;
                if ( !v32 )
                  goto LABEL_37;
              }
              v34 = v31 + 16LL * (*(_DWORD *)v33 + 8) + 312;
            }
            else
            {
LABEL_37:
              v34 = sub_2237E2C(v28, SimpleAnimation_State_TypeInfo, 8);
            }
            v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, double))v34)(v30, *(_QWORD *)(v34 + 8), 0.0);
            v18 = v73;
            if ( !v73 )
              goto LABEL_40;
          }
          v35 = v73;
          if ( v73 )
          {
            v36 = *(_QWORD *)v73;
            v37 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
            {
              v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
              while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
              {
                --v37;
                v38 += 4;
                if ( !v37 )
                  goto LABEL_46;
              }
              v39 = v36 + 16LL * *v38 + 312;
            }
            else
            {
LABEL_46:
              v39 = sub_2237E2C(v73, System_IDisposable_TypeInfo, 0);
            }
            States = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
          }
          max_length = LODWORD(ComponentsInChildren_object__58647176->max_length);
          if ( (int)++v9 >= (int)max_length )
            goto LABEL_91;
        }
        goto LABEL_99;
      }
    }
    else if ( States )
    {
      v40 = *(_QWORD *)(States + 24);
      if ( v40 )
      {
        if ( (int)v40 >= 1 )
        {
          v41 = 0;
          v42 = (unsigned int)*(_QWORD *)(States + 24);
          while ( v41 < v42 )
          {
            States = *(_QWORD *)(v7 + 8 * v41 + 32);
            if ( !States )
              goto LABEL_98;
            Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
            v45 = Enumerator;
            v72 = Enumerator;
            v68 = 0;
            v69 = &v72;
            v70 = &v71;
            if ( !Enumerator )
LABEL_77:
              sub_21FFECC(Enumerator, v44);
            while ( 1 )
            {
              klass = v45->klass;
              v47 = *(unsigned __int16 *)&v45->klass->_2.rank;
              if ( *(_WORD *)&v45->klass->_2.rank )
              {
                p_offset = &klass->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v47;
                  p_offset += 4;
                  if ( !v47 )
                    goto LABEL_64;
                }
                v49 = (__int64)&klass->vtable[*p_offset];
              }
              else
              {
LABEL_64:
                v49 = sub_2237E2C(v45, System_Collections_IEnumerator_TypeInfo, 0);
              }
              v50 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v49)(
                      v45,
                      *(_QWORD *)(v49 + 8));
              if ( (v50 & 1) == 0 )
                break;
              v52 = v72;
              if ( !v72 )
                sub_21FFECC(v50, v51);
              v53 = v72->klass;
              v54 = *(unsigned __int16 *)&v72->klass->_2.rank;
              if ( *(_WORD *)&v72->klass->_2.rank )
              {
                v55 = (System_Collections_IEnumerator_c **)&v53->_1.interfaceOffsets->offset;
                while ( *(v55 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v54;
                  v55 += 2;
                  if ( !v54 )
                    goto LABEL_72;
                }
                v56 = (__int64)&v53->vtable[*(_DWORD *)v55 + 1];
              }
              else
              {
LABEL_72:
                v56 = sub_2237E2C(v72, System_Collections_IEnumerator_TypeInfo, 1);
              }
              v57 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v56)(
                                                      v52,
                                                      *(_QWORD *)(v56 + 8));
              if ( !v57 )
                sub_21FFECC(0, v58);
              if ( v57->klass != UnityEngine_AnimationState_TypeInfo )
              {
                sub_220024C(v57, UnityEngine_AnimationState_TypeInfo, v59);
                sub_1FE698C(&v68);
                sub_22ED31C();
              }
              UnityEngine_AnimationState__set_speed(v57, 0.0, 0);
              v45 = v72;
              if ( !v72 )
                goto LABEL_77;
            }
            States = sub_21FFDA4(v72, System_IDisposable_TypeInfo);
            v71 = States;
            if ( States )
            {
              v60 = *(_QWORD *)States;
              v61 = States;
              v62 = *(unsigned __int16 *)(*(_QWORD *)States + 302LL);
              if ( *(_WORD *)(*(_QWORD *)States + 302LL) )
              {
                v63 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
                while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
                {
                  --v62;
                  v63 += 4;
                  if ( !v62 )
                    goto LABEL_83;
                }
                v64 = v60 + 16LL * *v63 + 312;
              }
              else
              {
LABEL_83:
                v64 = sub_2237E2C(States, System_IDisposable_TypeInfo, 0);
              }
              States = (*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v61, *(_QWORD *)(v64 + 8));
            }
            v42 = *(unsigned int *)(v7 + 24);
            if ( (int)++v41 >= (int)v42 )
              goto LABEL_91;
          }
LABEL_99:
          sub_21FFED4(States);
        }
      }
    }
LABEL_91:
    States = (__int64)UnityEngine_Component__GetComponentsInChildren_object__58647176(
                        (UnityEngine_Component_o *)this,
                        (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    if ( !States )
LABEL_98:
      sub_21FFECC(States, v6);
    v65 = *(_DWORD *)(States + 24);
    v66 = States;
    if ( v65 >= 1 )
    {
      v67 = 0;
      while ( (unsigned int)v67 < v65 )
      {
        States = *(_QWORD *)(v66 + 32 + 8 * v67);
        if ( !States )
          goto LABEL_98;
        UnityEngine_ParticleSystem__Pause_83623896((UnityEngine_ParticleSystem_o *)States, 0);
        v65 = *(_DWORD *)(v66 + 24);
        if ( (int)++v67 >= v65 )
          return;
      }
      goto LABEL_99;
    }
  }
}