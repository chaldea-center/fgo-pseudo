void __fastcall BattleBgComponent___ctor(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleBgComponent__ResetAnimation(BattleBgComponent_o *this, const MethodInfo *method)
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
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  Il2CppObject *Component_object; // x20
  __int64 v23; // x1
  Il2CppObject *v24; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v26; // x20
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x20
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x21
  __int64 v43; // x8
  __int64 v44; // x9
  SimpleAnimation_State_c **v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  SimpleAnimation_State_c **v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v61; // x8
  __int64 v62; // x9
  System_Collections_IEnumerator_c **v63; // x10
  __int64 v64; // x0
  UnityEngine_AnimationState_o *v65; // x0
  __int64 v66; // x1
  UnityEngine_AnimationState_o *v67; // x20
  __int64 v68; // x0
  __int64 v69; // x8
  __int64 v70; // x19
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0

  if ( (byte_4B184D1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v18, v19);
    byte_4B184D1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  v24 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0LL);
      gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__GetStates((SimpleAnimation_o *)Component_object, 0LL);
      if ( gameObject )
      {
        klass = gameObject->klass;
        v26 = gameObject;
        v27 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v27;
            p_offset += 4;
            if ( !v27 )
              goto LABEL_14;
          }
          v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v29 = sub_1C1C7C0(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v31 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
        if ( !v31 )
          sub_1BCAA3C(0LL, v30);
        while ( 1 )
        {
          v32 = *(_QWORD *)v31;
          v33 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
          {
            v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v33;
              v34 += 4;
              if ( !v33 )
                goto LABEL_21;
            }
            v35 = v32 + 16LL * *v34 + 312;
          }
          else
          {
LABEL_21:
            v35 = sub_1C1C7C0(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
            break;
          v36 = *(_QWORD *)v31;
          v37 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
          {
            v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v38 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v37;
              v38 += 4;
              if ( !v37 )
                goto LABEL_28;
            }
            v39 = v36 + 16LL * *v38 + 312;
          }
          else
          {
LABEL_28:
            v39 = sub_1C1C7C0(v31, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
          v42 = v40;
          if ( !v40 )
            sub_1BCAA3C(0LL, v41);
          v43 = *(_QWORD *)v40;
          v44 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
          {
            v45 = (SimpleAnimation_State_c **)(*(_QWORD *)(v43 + 176) + 8LL);
            while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v44;
              v45 += 2;
              if ( !v44 )
                goto LABEL_35;
            }
            v46 = v43 + 16LL * (*(_DWORD *)v45 + 4) + 312;
          }
          else
          {
LABEL_35:
            v46 = sub_1C1C7C0(v40, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v46)(v42, *(_QWORD *)(v46 + 8), 0.0);
          v47 = *(_QWORD *)v42;
          v48 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
          {
            v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v47 + 176) + 8LL);
            while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v48;
              v49 += 2;
              if ( !v48 )
                goto LABEL_41;
            }
            v50 = v47 + 16LL * (*(_DWORD *)v49 + 1) + 312;
          }
          else
          {
LABEL_41:
            v50 = sub_1C1C7C0(v42, SimpleAnimation_State_TypeInfo, 1LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v50)(v42, 0LL, *(_QWORD *)(v50 + 8));
        }
        v51 = *(_QWORD *)v31;
        v52 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
        {
          v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
          {
            --v52;
            v53 += 4;
            if ( !v52 )
              goto LABEL_48;
          }
          v54 = v51 + 16LL * *v53 + 312;
        }
        else
        {
LABEL_48:
          v54 = sub_1C1C7C0(v31, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v54)(v31, *(_QWORD *)(v54 + 8));
        return;
      }
    }
LABEL_84:
    sub_1BCAA3C(gameObject, v21);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_84;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v24, 0LL);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v24, 0LL);
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v55);
    while ( 1 )
    {
      v57 = Enumerator->klass;
      v58 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v59 = &v57->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v59 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v58;
          v59 += 4;
          if ( !v58 )
            goto LABEL_60;
        }
        p_method = (__int64)&v57->vtable[*v59].method;
      }
      else
      {
LABEL_60:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v61 = Enumerator->klass;
      v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v63 = (System_Collections_IEnumerator_c **)&v61->_1.interfaceOffsets->offset;
        while ( *(v63 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v62;
          v63 += 2;
          if ( !v62 )
            goto LABEL_67;
        }
        v64 = (__int64)&v61->vtable[*(_DWORD *)v63 + 1].method;
      }
      else
      {
LABEL_67:
        v64 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v65 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v64)(
                                              Enumerator,
                                              *(_QWORD *)(v64 + 8));
      v67 = v65;
      if ( !v65 )
        sub_1BCAA3C(0LL, v66);
      if ( v65->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1BCACFC(v65);
        goto LABEL_84;
      }
      UnityEngine_AnimationState__set_time(v65, 0.0, 0LL);
      UnityEngine_AnimationState__set_enabled(v67, 0, 0LL);
    }
    v68 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
    if ( v68 )
    {
      v69 = *(_QWORD *)v68;
      v70 = v68;
      v71 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
      {
        v72 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
        {
          --v71;
          v72 += 4;
          if ( !v71 )
            goto LABEL_77;
        }
        v73 = v69 + 16LL * *v72 + 312;
      }
      else
      {
LABEL_77:
        v73 = sub_1C1C7C0(v68, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
    }
  }
}


bool __fastcall BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *motionKey; // x0

  motionKey = this->fields.motionKey;
  if ( motionKey )
    LOBYTE(motionKey) = System_String__Equals_62409536(motionKey, key, 0LL);
  return (char)motionKey;
}


BattleBgComponent_SaveData_o *__fastcall BattleBgComponent__getSaveData(
        BattleBgComponent_o *this,
        const MethodInfo *method)
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x19
  const MethodInfo *v30; // x1
  __int64 v31; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v33; // x21
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x21
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x22
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  SimpleAnimation_State_c **v56; // x10
  __int64 v57; // x0
  int64_t v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x8
  __int64 v66; // x9
  SimpleAnimation_State_c **v67; // x10
  __int64 v68; // x0
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v75; // x8
  __int64 v76; // x9
  int32_t *v77; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v79; // x8
  __int64 v80; // x9
  System_Collections_IEnumerator_c **v81; // x10
  __int64 v82; // x0
  UnityEngine_AnimationState_o *v83; // x0
  __int64 v84; // x1
  UnityEngine_AnimationState_o *v85; // x21
  System_String_o *name; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  __int64 v93; // x0
  __int64 v94; // x8
  __int64 v95; // x20
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0

  if ( (byte_4B184CF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&BattleBgComponent_SaveData_TypeInfo, v18, v19);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v20, v21);
    byte_4B184CF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_95;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_95;
  v25 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v29 = sub_1BCAA2C(BattleBgComponent_SaveData_TypeInfo, v26, v27, v28);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v29, v30);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__GetStates((SimpleAnimation_o *)Component_object, 0LL);
      if ( gameObject )
      {
        klass = gameObject->klass;
        v33 = gameObject;
        v34 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v34;
            p_offset += 4;
            if ( !v34 )
              goto LABEL_14;
          }
          v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v36 = sub_1C1C7C0(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v38 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
        if ( !v38 )
          sub_1BCAA3C(0LL, v37);
        while ( 1 )
        {
          v39 = *(_QWORD *)v38;
          v40 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
          {
            v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v40;
              v41 += 4;
              if ( !v40 )
                goto LABEL_21;
            }
            v42 = v39 + 16LL * *v41 + 312;
          }
          else
          {
LABEL_21:
            v42 = sub_1C1C7C0(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
            break;
          v43 = *(_QWORD *)v38;
          v44 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
          {
            v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v45 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v44;
              v45 += 4;
              if ( !v44 )
                goto LABEL_28;
            }
            v46 = v43 + 16LL * *v45 + 312;
          }
          else
          {
LABEL_28:
            v46 = sub_1C1C7C0(v38, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
          v49 = v47;
          if ( !v47 )
            sub_1BCAA3C(0LL, v48);
          v50 = *(_QWORD *)v47;
          v51 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
          {
            v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v52 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v51;
              v52 += 4;
              if ( !v51 )
                goto LABEL_35;
            }
            v53 = v50 + 16LL * *v52 + 312;
          }
          else
          {
LABEL_35:
            v53 = sub_1C1C7C0(v47, SimpleAnimation_State_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) != 0 )
          {
            v54 = *(_QWORD *)v49;
            v55 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
            {
              v56 = (SimpleAnimation_State_c **)(*(_QWORD *)(v54 + 176) + 8LL);
              while ( *(v56 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v55;
                v56 += 2;
                if ( !v55 )
                  goto LABEL_42;
              }
              v57 = v54 + 16LL * (*(_DWORD *)v56 + 9) + 312;
            }
            else
            {
LABEL_42:
              v57 = sub_1C1C7C0(v49, SimpleAnimation_State_TypeInfo, 9LL);
            }
            v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v49, *(_QWORD *)(v57 + 8));
            if ( !v29 )
              sub_1BCAA3C(v58, v58);
            *(_QWORD *)(v29 + 16) = v58;
            sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 16), v58, v59, v60, v61, v62, v63, v64);
            v65 = *(_QWORD *)v49;
            v66 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
            {
              v67 = (SimpleAnimation_State_c **)(*(_QWORD *)(v65 + 176) + 8LL);
              while ( *(v67 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v66;
                v67 += 2;
                if ( !v66 )
                  goto LABEL_50;
              }
              v68 = v65 + 16LL * (*(_DWORD *)v67 + 3) + 312;
            }
            else
            {
LABEL_50:
              v68 = sub_1C1C7C0(v49, SimpleAnimation_State_TypeInfo, 3LL);
            }
            *(float *)(v29 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v68)(v49, *(_QWORD *)(v68 + 8));
            break;
          }
        }
        v69 = *(_QWORD *)v38;
        v70 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
        {
          v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
          {
            --v70;
            v71 += 4;
            if ( !v70 )
              goto LABEL_57;
          }
          v72 = v69 + 16LL * *v71 + 312;
        }
        else
        {
LABEL_57:
          v72 = sub_1C1C7C0(v38, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v72)(v38, *(_QWORD *)(v72 + 8));
        return (BattleBgComponent_SaveData_o *)v29;
      }
    }
LABEL_95:
    sub_1BCAA3C(gameObject, v23);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v29;
  if ( !v25 )
    goto LABEL_95;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v25, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v73);
  do
  {
    v75 = Enumerator->klass;
    v76 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v77 = &v75->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_69;
      }
      p_method = (__int64)&v75->vtable[*v77].method;
    }
    else
    {
LABEL_69:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      goto LABEL_83;
    v79 = Enumerator->klass;
    v80 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v81 = (System_Collections_IEnumerator_c **)&v79->_1.interfaceOffsets->offset;
      while ( *(v81 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v80;
        v81 += 2;
        if ( !v80 )
          goto LABEL_76;
      }
      v82 = (__int64)&v79->vtable[*(_DWORD *)v81 + 1].method;
    }
    else
    {
LABEL_76:
      v82 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v83 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v82)(
                                            Enumerator,
                                            *(_QWORD *)(v82 + 8));
    v85 = v83;
    if ( !v83 )
      sub_1BCAA3C(0LL, v84);
    if ( v83->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1BCACFC(v83);
      goto LABEL_95;
    }
  }
  while ( !UnityEngine_AnimationState__get_enabled(v83, 0LL) );
  name = UnityEngine_AnimationState__get_name(v85, 0LL);
  if ( !v29 )
    sub_1BCAA3C(name, name);
  *(_QWORD *)(v29 + 16) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)name, v87, v88, v89, v90, v91, v92);
  *(float *)(v29 + 24) = UnityEngine_AnimationState__get_time(v85, 0LL);
LABEL_83:
  v93 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v93 )
  {
    v94 = *(_QWORD *)v93;
    v95 = v93;
    v96 = *(unsigned __int16 *)(*(_QWORD *)v93 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v93 + 302LL) )
    {
      v97 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v97 - 1) != System_IDisposable_TypeInfo )
      {
        --v96;
        v97 += 4;
        if ( !v96 )
          goto LABEL_88;
      }
      v98 = v94 + 16LL * *v97 + 312;
    }
    else
    {
LABEL_88:
      v98 = sub_1C1C7C0(v93, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v98)(v95, *(_QWORD *)(v98 + 8));
  }
  return (BattleBgComponent_SaveData_o *)v29;
}


bool __fastcall BattleBgComponent__isSave(BattleBgComponent_o *this, const MethodInfo *method)
{
  return this->fields.isRecAnimation;
}


void __fastcall BattleBgComponent__loadSaveData(
        BattleBgComponent_o *this,
        BattleBgComponent_SaveData_o *save,
        const MethodInfo *method)
{
  long double v3; // q8
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v16; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v18; // x21
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0

  if ( (byte_4B184D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, save, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v10, v11);
    byte_4B184D0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_27;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_27;
  if ( animName->fields._stringLength < 1 )
    return;
  v16 = (UnityEngine_Object_o *)gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v16 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v16,
                                                 save->fields.animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, save->fields.timeline, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v16, 0LL);
        UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v16, save->fields.animName, 0LL);
        return;
      }
    }
LABEL_27:
    sub_1BCAA3C(gameObject, v13);
  }
  if ( !Component_object )
    goto LABEL_27;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)Component_object,
                                             save->fields.animName,
                                             0LL);
  if ( !gameObject )
    goto LABEL_27;
  klass = gameObject->klass;
  *(float *)&v3 = save->fields.timeline;
  v18 = gameObject;
  v19 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v19;
      p_offset += 2;
      if ( !v19 )
        goto LABEL_17;
    }
    v21 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_17:
    v21 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v21)(v18, *(_QWORD *)(v21 + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_64539336((SimpleAnimation_o *)Component_object, save->fields.animName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBgComponent__playAnimation(
        BattleBgComponent_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  long double v4; // q8
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v19; // x21
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_4B184CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, animName, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v11, v12);
    byte_4B184CB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  v17 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v17 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v17,
                                                 animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, *(float *)&v4, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v17, 0LL);
        UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v17, animName, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1BCAA3C(gameObject, v14);
  }
  if ( !Component_object )
    goto LABEL_24;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)Component_object,
                                             animName,
                                             0LL);
  if ( !gameObject )
    goto LABEL_24;
  klass = gameObject->klass;
  v19 = gameObject;
  v20 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v20;
      p_offset += 2;
      if ( !v20 )
        goto LABEL_14;
    }
    v22 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_14:
    v22 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v22)(v19, *(_QWORD *)(v22 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_64539336((SimpleAnimation_o *)Component_object, animName, 0LL);
}


void __fastcall BattleBgComponent__playCameraAnimation(
        BattleBgComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x21
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0

  if ( (byte_4B184CE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, method);
    byte_4B184CE = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0LL, 0LL) )
  {
    v7 = this->fields.actionCamera;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    BattleActionCamera__playCameraAnimation(v7, name, 0LL);
  }
}


void __fastcall BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x19
  __int64 v11; // x1
  Il2CppObject *v12; // x20

  if ( (byte_4B184CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B184CC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  v12 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)Component_object, 0LL) )
        SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(gameObject, v9);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_18;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v12, 0LL) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v12, 0LL);
  }
}


void __fastcall BattleBgComponent__setActionCamera(
        BattleBgComponent_o *this,
        BattleActionCamera_o *inActionCamera,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.actionCamera = inActionCamera;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.actionCamera,
    (int64_t)inActionCamera,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleBgComponent__setCutNodeNoble(BattleBgComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0LL);
}


void __fastcall BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *actionCamera; // x20
  __int64 v7; // x1
  BattleActionCamera_o *v8; // x0
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B184CD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B184CD = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0LL, 0LL) )
  {
    v8 = this->fields.actionCamera;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    v9.fields.x = power * 0.1;
    v9.fields.z = power * 0.0;
    v9.fields.y = power * 0.1;
    BattleActionCamera__ShakePosition(v8, v9, 1.0, 0LL);
  }
}


void __fastcall BattleBgComponent_SaveData___ctor(BattleBgComponent_SaveData_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4B184D2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B184D2 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}