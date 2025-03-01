void __fastcall BattleBgComponent___ctor(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleBgComponent__ResetAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v14; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v16; // x20
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
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
  __int64 v31; // x1
  __int64 v32; // x21
  __int64 v33; // x8
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v51; // x8
  __int64 v52; // x9
  System_Collections_IEnumerator_c **v53; // x10
  __int64 v54; // x0
  UnityEngine_AnimationState_o *v55; // x0
  __int64 v56; // x1
  UnityEngine_AnimationState_o *v57; // x20
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 v60; // x19
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0

  if ( (byte_4BFFB34 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v5);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v10);
    byte_4BFFB34 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  v14 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v16 = gameObject;
        v17 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v17;
            p_offset += 4;
            if ( !v17 )
              goto LABEL_14;
          }
          v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v19 = sub_1C8010C(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v21 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
        if ( !v21 )
          sub_1C2E388(0LL, v20);
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
                goto LABEL_21;
            }
            v25 = v22 + 16LL * *v24 + 312;
          }
          else
          {
LABEL_21:
            v25 = sub_1C8010C(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                goto LABEL_28;
            }
            v29 = v26 + 16LL * *v28 + 312;
          }
          else
          {
LABEL_28:
            v29 = sub_1C8010C(v21, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
          v32 = v30;
          if ( !v30 )
            sub_1C2E388(0LL, v31);
          v33 = *(_QWORD *)v30;
          v34 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
          {
            v35 = (SimpleAnimation_State_c **)(*(_QWORD *)(v33 + 176) + 8LL);
            while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v34;
              v35 += 2;
              if ( !v34 )
                goto LABEL_35;
            }
            v36 = v33 + 16LL * (*(_DWORD *)v35 + 4) + 312;
          }
          else
          {
LABEL_35:
            v36 = sub_1C8010C(v30, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v36)(v32, *(_QWORD *)(v36 + 8), 0.0);
          v37 = *(_QWORD *)v32;
          v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
          {
            v39 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
            while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v38;
              v39 += 2;
              if ( !v38 )
                goto LABEL_41;
            }
            v40 = v37 + 16LL * (*(_DWORD *)v39 + 1) + 312;
          }
          else
          {
LABEL_41:
            v40 = sub_1C8010C(v32, SimpleAnimation_State_TypeInfo, 1LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v40)(v32, 0LL, *(_QWORD *)(v40 + 8));
        }
        v41 = *(_QWORD *)v21;
        v42 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
        {
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_48;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_48:
          v44 = sub_1C8010C(v21, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v44)(v21, *(_QWORD *)(v44 + 8));
        return;
      }
    }
LABEL_84:
    sub_1C2E388(gameObject, v12);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_84;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v14, 0LL);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v14, 0LL);
    if ( !Enumerator )
      sub_1C2E388(0LL, v45);
    while ( 1 )
    {
      v47 = Enumerator->klass;
      v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v49 = &v47->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_60;
        }
        p_method = (__int64)&v47->vtable[*v49].method;
      }
      else
      {
LABEL_60:
        p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v51 = Enumerator->klass;
      v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v53 = (System_Collections_IEnumerator_c **)&v51->_1.interfaceOffsets->offset;
        while ( *(v53 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v52;
          v53 += 2;
          if ( !v52 )
            goto LABEL_67;
        }
        v54 = (__int64)&v51->vtable[*(_DWORD *)v53 + 1].method;
      }
      else
      {
LABEL_67:
        v54 = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v55 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v54)(
                                              Enumerator,
                                              *(_QWORD *)(v54 + 8));
      v57 = v55;
      if ( !v55 )
        sub_1C2E388(0LL, v56);
      if ( v55->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1C2E648(v55);
        goto LABEL_84;
      }
      UnityEngine_AnimationState__set_time(v55, 0.0, 0LL);
      UnityEngine_AnimationState__set_enabled(v57, 0, 0LL);
    }
    v58 = sub_1C2E268(Enumerator, System_IDisposable_TypeInfo);
    if ( v58 )
    {
      v59 = *(_QWORD *)v58;
      v60 = v58;
      v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
      {
        v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
        {
          --v61;
          v62 += 4;
          if ( !v61 )
            goto LABEL_77;
        }
        v63 = v59 + 16LL * *v62 + 312;
      }
      else
      {
LABEL_77:
        v63 = sub_1C8010C(v58, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
    }
  }
}


bool __fastcall BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *motionKey; // x0

  motionKey = this->fields.motionKey;
  if ( motionKey )
    LOBYTE(motionKey) = System_String__Equals_63243900(motionKey, key, 0LL);
  return (char)motionKey;
}


BattleBgComponent_SaveData_o *__fastcall BattleBgComponent__getSaveData(
        BattleBgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v15; // x20
  __int64 v16; // x19
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v19; // x21
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x22
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  SimpleAnimation_State_c **v42; // x10
  __int64 v43; // x0
  int64_t v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x8
  __int64 v52; // x9
  SimpleAnimation_State_c **v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v65; // x8
  __int64 v66; // x9
  System_Collections_IEnumerator_c **v67; // x10
  __int64 v68; // x0
  UnityEngine_AnimationState_o *v69; // x0
  __int64 v70; // x1
  UnityEngine_AnimationState_o *v71; // x21
  System_String_o *name; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x0
  __int64 v80; // x8
  __int64 v81; // x20
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0

  if ( (byte_4BFFB32 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v5);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    sub_1C2E12C(&BattleBgComponent_SaveData_TypeInfo, v10);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v11);
    byte_4BFFB32 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_95;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_95;
  v15 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v16 = sub_1C2E378(BattleBgComponent_SaveData_TypeInfo);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v16, v17);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v19 = gameObject;
        v20 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v20;
            p_offset += 4;
            if ( !v20 )
              goto LABEL_14;
          }
          v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v22 = sub_1C8010C(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v24 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
        if ( !v24 )
          sub_1C2E388(0LL, v23);
        while ( 1 )
        {
          v25 = *(_QWORD *)v24;
          v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v26;
              v27 += 4;
              if ( !v26 )
                goto LABEL_21;
            }
            v28 = v25 + 16LL * *v27 + 312;
          }
          else
          {
LABEL_21:
            v28 = sub_1C8010C(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
            break;
          v29 = *(_QWORD *)v24;
          v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v31 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v30;
              v31 += 4;
              if ( !v30 )
                goto LABEL_28;
            }
            v32 = v29 + 16LL * *v31 + 312;
          }
          else
          {
LABEL_28:
            v32 = sub_1C8010C(v24, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
          v35 = v33;
          if ( !v33 )
            sub_1C2E388(0LL, v34);
          v36 = *(_QWORD *)v33;
          v37 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v38 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v37;
              v38 += 4;
              if ( !v37 )
                goto LABEL_35;
            }
            v39 = v36 + 16LL * *v38 + 312;
          }
          else
          {
LABEL_35:
            v39 = sub_1C8010C(v33, SimpleAnimation_State_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) != 0 )
          {
            v40 = *(_QWORD *)v35;
            v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
            {
              v42 = (SimpleAnimation_State_c **)(*(_QWORD *)(v40 + 176) + 8LL);
              while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v41;
                v42 += 2;
                if ( !v41 )
                  goto LABEL_42;
              }
              v43 = v40 + 16LL * (*(_DWORD *)v42 + 9) + 312;
            }
            else
            {
LABEL_42:
              v43 = sub_1C8010C(v35, SimpleAnimation_State_TypeInfo, 9LL);
            }
            v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
            if ( !v16 )
              sub_1C2E388(v44, v44);
            *(_QWORD *)(v16 + 16) = v44;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 16), v44, v45, v46, v47, v48, v49, v50);
            v51 = *(_QWORD *)v35;
            v52 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
            {
              v53 = (SimpleAnimation_State_c **)(*(_QWORD *)(v51 + 176) + 8LL);
              while ( *(v53 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v52;
                v53 += 2;
                if ( !v52 )
                  goto LABEL_50;
              }
              v54 = v51 + 16LL * (*(_DWORD *)v53 + 3) + 312;
            }
            else
            {
LABEL_50:
              v54 = sub_1C8010C(v35, SimpleAnimation_State_TypeInfo, 3LL);
            }
            *(float *)(v16 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v54)(v35, *(_QWORD *)(v54 + 8));
            break;
          }
        }
        v55 = *(_QWORD *)v24;
        v56 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
          {
            --v56;
            v57 += 4;
            if ( !v56 )
              goto LABEL_57;
          }
          v58 = v55 + 16LL * *v57 + 312;
        }
        else
        {
LABEL_57:
          v58 = sub_1C8010C(v24, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v58)(v24, *(_QWORD *)(v58 + 8));
        return (BattleBgComponent_SaveData_o *)v16;
      }
    }
LABEL_95:
    sub_1C2E388(gameObject, v13);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v16;
  if ( !v15 )
    goto LABEL_95;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v15, 0LL);
  if ( !Enumerator )
    sub_1C2E388(0LL, v59);
  do
  {
    v61 = Enumerator->klass;
    v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v63 = &v61->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v63 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v62;
        v63 += 4;
        if ( !v62 )
          goto LABEL_69;
      }
      p_method = (__int64)&v61->vtable[*v63].method;
    }
    else
    {
LABEL_69:
      p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      goto LABEL_83;
    v65 = Enumerator->klass;
    v66 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v67 = (System_Collections_IEnumerator_c **)&v65->_1.interfaceOffsets->offset;
      while ( *(v67 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v66;
        v67 += 2;
        if ( !v66 )
          goto LABEL_76;
      }
      v68 = (__int64)&v65->vtable[*(_DWORD *)v67 + 1].method;
    }
    else
    {
LABEL_76:
      v68 = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v69 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v68)(
                                            Enumerator,
                                            *(_QWORD *)(v68 + 8));
    v71 = v69;
    if ( !v69 )
      sub_1C2E388(0LL, v70);
    if ( v69->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C2E648(v69);
      goto LABEL_95;
    }
  }
  while ( !UnityEngine_AnimationState__get_enabled(v69, 0LL) );
  name = UnityEngine_AnimationState__get_name(v71, 0LL);
  if ( !v16 )
    sub_1C2E388(name, name);
  *(_QWORD *)(v16 + 16) = name;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)name, v73, v74, v75, v76, v77, v78);
  *(float *)(v16 + 24) = UnityEngine_AnimationState__get_time(v71, 0LL);
LABEL_83:
  v79 = sub_1C2E268(Enumerator, System_IDisposable_TypeInfo);
  if ( v79 )
  {
    v80 = *(_QWORD *)v79;
    v81 = v79;
    v82 = *(unsigned __int16 *)(*(_QWORD *)v79 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v79 + 302LL) )
    {
      v83 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
      {
        --v82;
        v83 += 4;
        if ( !v82 )
          goto LABEL_88;
      }
      v84 = v80 + 16LL * *v83 + 312;
    }
    else
    {
LABEL_88:
      v84 = sub_1C8010C(v79, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v84)(v81, *(_QWORD *)(v84 + 8));
  }
  return (BattleBgComponent_SaveData_o *)v16;
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
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v13; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v15; // x21
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v18; // x0

  if ( (byte_4BFFB33 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, save);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v8);
    byte_4BFFB33 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_27;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_27;
  if ( animName->fields._stringLength < 1 )
    return;
  v13 = (UnityEngine_Object_o *)gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v13 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v13,
                                                 save->fields.animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, save->fields.timeline, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v13, 0LL);
        UnityEngine_Animation__Play_70734128((UnityEngine_Animation_o *)v13, save->fields.animName, 0LL);
        return;
      }
    }
LABEL_27:
    sub_1C2E388(gameObject, v10);
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
  v15 = gameObject;
  v16 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v16;
      p_offset += 2;
      if ( !v16 )
        goto LABEL_17;
    }
    v18 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_17:
    v18 = sub_1C8010C(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v18)(v15, *(_QWORD *)(v18 + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_65373960((SimpleAnimation_o *)Component_object, save->fields.animName, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v13; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v15; // x21
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v18; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_4BFFB2E & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, animName);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v9);
    byte_4BFFB2E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  v13 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v13 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v13,
                                                 animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, *(float *)&v4, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v13, 0LL);
        UnityEngine_Animation__Play_70734128((UnityEngine_Animation_o *)v13, animName, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1C2E388(gameObject, v11);
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
  v15 = gameObject;
  v16 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v16;
      p_offset += 2;
      if ( !v16 )
        goto LABEL_14;
    }
    v18 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_14:
    v18 = sub_1C8010C(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v18)(v15, *(_QWORD *)(v18 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_65373960((SimpleAnimation_o *)Component_object, animName, 0LL);
}


void __fastcall BattleBgComponent__playCameraAnimation(
        BattleBgComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x21
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0

  if ( (byte_4BFFB31 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, name);
    byte_4BFFB31 = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0LL, 0LL) )
  {
    v7 = this->fields.actionCamera;
    if ( !v7 )
      sub_1C2E388(0LL, v6);
    BattleActionCamera__playCameraAnimation(v7, name, 0LL);
  }
}


void __fastcall BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x19
  Il2CppObject *v8; // x20

  if ( (byte_4BFFB2F & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4BFFB2F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  v8 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C2E388(gameObject, v6);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_18;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v8, 0LL) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v8, 0LL);
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
  sub_1C2E0D0(
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
    sub_1C2E388(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0LL);
}


void __fastcall BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x20
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFFB30 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFFB30 = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0LL, 0LL) )
  {
    v7 = this->fields.actionCamera;
    if ( !v7 )
      sub_1C2E388(0LL, v6);
    v8.fields.x = power * 0.1;
    v8.fields.z = power * 0.0;
    v8.fields.y = power * 0.1;
    BattleActionCamera__ShakePosition(v7, v8, 1.0, 0LL);
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

  if ( (byte_4BFFB35 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFFB35 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}