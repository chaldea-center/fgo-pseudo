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
  Il2CppObject *Component_object; // x20
  Il2CppObject *v13; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v15; // x20
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x20
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  SimpleAnimation_State_c **v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v47; // x8
  __int64 v48; // x9
  System_Collections_IEnumerator_c **v49; // x10
  __int64 v50; // x0
  UnityEngine_AnimationState_o *v51; // x0
  UnityEngine_AnimationState_o *v52; // x20
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x19
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0

  if ( (byte_49FE65C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v10);
    byte_49FE65C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  v13 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v15 = gameObject;
        v16 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v16;
            p_offset += 4;
            if ( !v16 )
              goto LABEL_14;
          }
          v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v18 = sub_1BB60A8(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v19 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
        if ( !v19 )
          sub_1B64324(0LL);
        while ( 1 )
        {
          v20 = *(_QWORD *)v19;
          v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
          {
            v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v21;
              v22 += 4;
              if ( !v21 )
                goto LABEL_21;
            }
            v23 = v20 + 16LL * *v22 + 312;
          }
          else
          {
LABEL_21:
            v23 = sub_1BB60A8(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
            break;
          v24 = *(_QWORD *)v19;
          v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
          {
            v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v26 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v25;
              v26 += 4;
              if ( !v25 )
                goto LABEL_28;
            }
            v27 = v24 + 16LL * *v26 + 312;
          }
          else
          {
LABEL_28:
            v27 = sub_1BB60A8(v19, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
          v29 = v28;
          if ( !v28 )
            sub_1B64324(0LL);
          v30 = *(_QWORD *)v28;
          v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
          {
            v32 = (SimpleAnimation_State_c **)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v31;
              v32 += 2;
              if ( !v31 )
                goto LABEL_35;
            }
            v33 = v30 + 16LL * (*(_DWORD *)v32 + 4) + 312;
          }
          else
          {
LABEL_35:
            v33 = sub_1BB60A8(v28, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v33)(v29, *(_QWORD *)(v33 + 8), 0.0);
          v34 = *(_QWORD *)v29;
          v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
          {
            v36 = (SimpleAnimation_State_c **)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v35;
              v36 += 2;
              if ( !v35 )
                goto LABEL_41;
            }
            v37 = v34 + 16LL * (*(_DWORD *)v36 + 1) + 312;
          }
          else
          {
LABEL_41:
            v37 = sub_1BB60A8(v29, SimpleAnimation_State_TypeInfo, 1LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v37)(v29, 0LL, *(_QWORD *)(v37 + 8));
        }
        v38 = *(_QWORD *)v19;
        v39 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
        {
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
          {
            --v39;
            v40 += 4;
            if ( !v39 )
              goto LABEL_48;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_48:
          v41 = sub_1BB60A8(v19, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v41)(v19, *(_QWORD *)(v41 + 8));
        return;
      }
    }
LABEL_84:
    sub_1B64324(gameObject);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_84;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v13, 0LL);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v13, 0LL);
    if ( !Enumerator )
      sub_1B64324(0LL);
    while ( 1 )
    {
      v43 = Enumerator->klass;
      v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v45 = &v43->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_60;
        }
        p_method = (__int64)&v43->vtable[*v45].method;
      }
      else
      {
LABEL_60:
        p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v47 = Enumerator->klass;
      v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v49 = (System_Collections_IEnumerator_c **)&v47->_1.interfaceOffsets->offset;
        while ( *(v49 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v48;
          v49 += 2;
          if ( !v48 )
            goto LABEL_67;
        }
        v50 = (__int64)&v47->vtable[*(_DWORD *)v49 + 1].method;
      }
      else
      {
LABEL_67:
        v50 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v51 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v50)(
                                              Enumerator,
                                              *(_QWORD *)(v50 + 8));
      v52 = v51;
      if ( !v51 )
        sub_1B64324(0LL);
      if ( v51->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1B645E4(v51);
        goto LABEL_84;
      }
      UnityEngine_AnimationState__set_time(v51, 0.0, 0LL);
      UnityEngine_AnimationState__set_enabled(v52, 0, 0LL);
    }
    v53 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
    if ( v53 )
    {
      v54 = *(_QWORD *)v53;
      v55 = v53;
      v56 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
      {
        v57 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
        {
          --v56;
          v57 += 4;
          if ( !v56 )
            goto LABEL_77;
        }
        v58 = v54 + 16LL * *v57 + 312;
      }
      else
      {
LABEL_77:
        v58 = sub_1BB60A8(v53, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v58)(v55, *(_QWORD *)(v58 + 8));
    }
  }
}


bool __fastcall BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *motionKey; // x0

  motionKey = this->fields.motionKey;
  if ( motionKey )
    LOBYTE(motionKey) = System_String__Equals_61383712(motionKey, key, 0LL);
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
  Il2CppObject *Component_object; // x21
  Il2CppObject *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  const MethodInfo *v18; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v20; // x21
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
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
  __int64 v34; // x22
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  SimpleAnimation_State_c **v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x8
  __int64 v47; // x9
  SimpleAnimation_State_c **v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v59; // x8
  __int64 v60; // x9
  System_Collections_IEnumerator_c **v61; // x10
  __int64 v62; // x0
  UnityEngine_AnimationState_o *v63; // x0
  UnityEngine_AnimationState_o *v64; // x21
  System_String_o *name; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x0
  __int64 v69; // x8
  __int64 v70; // x20
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0

  if ( (byte_49FE65A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&BattleBgComponent_SaveData_TypeInfo, v10);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v11);
    byte_49FE65A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_95;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_95;
  v14 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v17 = sub_1B64314(BattleBgComponent_SaveData_TypeInfo, v15, v16);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v17, v18);
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
        v20 = gameObject;
        v21 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v21;
            p_offset += 4;
            if ( !v21 )
              goto LABEL_14;
          }
          v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v23 = sub_1BB60A8(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v24 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
        if ( !v24 )
          sub_1B64324(0LL);
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
            v28 = sub_1BB60A8(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
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
            v32 = sub_1BB60A8(v24, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
          v34 = v33;
          if ( !v33 )
            sub_1B64324(0LL);
          v35 = *(_QWORD *)v33;
          v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v37 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v36;
              v37 += 4;
              if ( !v36 )
                goto LABEL_35;
            }
            v38 = v35 + 16LL * *v37 + 312;
          }
          else
          {
LABEL_35:
            v38 = sub_1BB60A8(v33, SimpleAnimation_State_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) != 0 )
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
                  goto LABEL_42;
              }
              v42 = v39 + 16LL * (*(_DWORD *)v41 + 9) + 312;
            }
            else
            {
LABEL_42:
              v42 = sub_1BB60A8(v34, SimpleAnimation_State_TypeInfo, 9LL);
            }
            v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
            if ( !v17 )
              sub_1B64324(v43);
            *(_QWORD *)(v17 + 16) = v43;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), v43, v44, v45);
            v46 = *(_QWORD *)v34;
            v47 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
            {
              v48 = (SimpleAnimation_State_c **)(*(_QWORD *)(v46 + 176) + 8LL);
              while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v47;
                v48 += 2;
                if ( !v47 )
                  goto LABEL_50;
              }
              v49 = v46 + 16LL * (*(_DWORD *)v48 + 3) + 312;
            }
            else
            {
LABEL_50:
              v49 = sub_1BB60A8(v34, SimpleAnimation_State_TypeInfo, 3LL);
            }
            *(float *)(v17 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v49)(v34, *(_QWORD *)(v49 + 8));
            break;
          }
        }
        v50 = *(_QWORD *)v24;
        v51 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
          {
            --v51;
            v52 += 4;
            if ( !v51 )
              goto LABEL_57;
          }
          v53 = v50 + 16LL * *v52 + 312;
        }
        else
        {
LABEL_57:
          v53 = sub_1BB60A8(v24, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v53)(v24, *(_QWORD *)(v53 + 8));
        return (BattleBgComponent_SaveData_o *)v17;
      }
    }
LABEL_95:
    sub_1B64324(gameObject);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v17;
  if ( !v14 )
    goto LABEL_95;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v14, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  do
  {
    v55 = Enumerator->klass;
    v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v57 = &v55->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_69;
      }
      p_method = (__int64)&v55->vtable[*v57].method;
    }
    else
    {
LABEL_69:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      goto LABEL_83;
    v59 = Enumerator->klass;
    v60 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v61 = (System_Collections_IEnumerator_c **)&v59->_1.interfaceOffsets->offset;
      while ( *(v61 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v60;
        v61 += 2;
        if ( !v60 )
          goto LABEL_76;
      }
      v62 = (__int64)&v59->vtable[*(_DWORD *)v61 + 1].method;
    }
    else
    {
LABEL_76:
      v62 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v63 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v62)(
                                            Enumerator,
                                            *(_QWORD *)(v62 + 8));
    v64 = v63;
    if ( !v63 )
      sub_1B64324(0LL);
    if ( v63->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1B645E4(v63);
      goto LABEL_95;
    }
  }
  while ( !UnityEngine_AnimationState__get_enabled(v63, 0LL) );
  name = UnityEngine_AnimationState__get_name(v64, 0LL);
  if ( !v17 )
    sub_1B64324(name);
  *(_QWORD *)(v17 + 16) = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)name, v66, v67);
  *(float *)(v17 + 24) = UnityEngine_AnimationState__get_time(v64, 0LL);
LABEL_83:
  v68 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
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
          goto LABEL_88;
      }
      v73 = v69 + 16LL * *v72 + 312;
    }
    else
    {
LABEL_88:
      v73 = sub_1BB60A8(v68, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
  }
  return (BattleBgComponent_SaveData_o *)v17;
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
  Il2CppObject *Component_object; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v12; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v14; // x21
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0

  if ( (byte_49FE65B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, save);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v8);
    byte_49FE65B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_27;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_27;
  if ( animName->fields._stringLength < 1 )
    return;
  v12 = (UnityEngine_Object_o *)gameObject;
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v12 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v12,
                                                 save->fields.animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, save->fields.timeline, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v12, 0LL);
        UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v12, save->fields.animName, 0LL);
        return;
      }
    }
LABEL_27:
    sub_1B64324(gameObject);
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
  v14 = gameObject;
  v15 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_17;
    }
    v17 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_17:
    v17 = sub_1BB60A8(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v17)(v14, *(_QWORD *)(v17 + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_63513060((SimpleAnimation_o *)Component_object, save->fields.animName, 0LL);
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
  Il2CppObject *Component_object; // x20
  Il2CppObject *v12; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v14; // x21
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_49FE656 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, animName);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v9);
    byte_49FE656 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  v12 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v12 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v12,
                                                 animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, *(float *)&v4, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v12, 0LL);
        UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v12, animName, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1B64324(gameObject);
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
  v14 = gameObject;
  v15 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_14;
    }
    v17 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_14:
    v17 = sub_1BB60A8(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v17)(v14, *(_QWORD *)(v17 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_63513060((SimpleAnimation_o *)Component_object, animName, 0LL);
}


void __fastcall BattleBgComponent__playCameraAnimation(
        BattleBgComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x21
  BattleActionCamera_o *v6; // x0

  if ( (byte_49FE659 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, name);
    byte_49FE659 = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0LL, 0LL) )
  {
    v6 = this->fields.actionCamera;
    if ( !v6 )
      sub_1B64324(0LL);
    BattleActionCamera__playCameraAnimation(v6, name, 0LL);
  }
}


void __fastcall BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x19
  Il2CppObject *v7; // x20

  if ( (byte_49FE657 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FE657 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    sub_1B64324(gameObject);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_18;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v7, 0LL) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v7, 0LL);
  }
}


void __fastcall BattleBgComponent__setActionCamera(
        BattleBgComponent_o *this,
        BattleActionCamera_o *inActionCamera,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.actionCamera = inActionCamera;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.actionCamera,
    (int32_t)inActionCamera,
    (int32_t)method,
    v3);
}


void __fastcall BattleBgComponent__setCutNodeNoble(BattleBgComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0LL);
}


void __fastcall BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x20
  BattleActionCamera_o *v6; // x0
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE658 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE658 = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0LL, 0LL) )
  {
    v6 = this->fields.actionCamera;
    if ( !v6 )
      sub_1B64324(0LL);
    v7.fields.x = power * 0.1;
    v7.fields.z = power * 0.0;
    v7.fields.y = power * 0.1;
    BattleActionCamera__ShakePosition(v6, v7, 1.0, 0LL);
  }
}


void __fastcall BattleBgComponent_SaveData___ctor(BattleBgComponent_SaveData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_49FE65D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FE65D = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, v5, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}