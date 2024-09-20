void __fastcall BattleBgComponent___ctor(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleBgComponent__ResetAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v6; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v8; // x20
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v43; // x8
  __int64 v44; // x9
  System_Collections_IEnumerator_c **v45; // x10
  __int64 v46; // x0
  UnityEngine_AnimationState_o *v47; // x0
  __int64 v48; // x1
  UnityEngine_AnimationState_o *v49; // x20
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x19
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0

  if ( (byte_4A5D3FB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AnimationState_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D3FB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_84;
  v6 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v8 = gameObject;
        v9 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v9;
            p_offset += 4;
            if ( !v9 )
              goto LABEL_14;
          }
          v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v11 = sub_1BDA590(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v13 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8));
        if ( !v13 )
          sub_1B8880C(0LL, v12);
        while ( 1 )
        {
          v14 = *(_QWORD *)v13;
          v15 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
          {
            v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v15;
              v16 += 4;
              if ( !v15 )
                goto LABEL_21;
            }
            v17 = v14 + 16LL * *v16 + 312;
          }
          else
          {
LABEL_21:
            v17 = sub_1BDA590(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
            break;
          v18 = *(_QWORD *)v13;
          v19 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
          {
            v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v20 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v19;
              v20 += 4;
              if ( !v19 )
                goto LABEL_28;
            }
            v21 = v18 + 16LL * *v20 + 312;
          }
          else
          {
LABEL_28:
            v21 = sub_1BDA590(v13, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
          v24 = v22;
          if ( !v22 )
            sub_1B8880C(0LL, v23);
          v25 = *(_QWORD *)v22;
          v26 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
          {
            v27 = (SimpleAnimation_State_c **)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v26;
              v27 += 2;
              if ( !v26 )
                goto LABEL_35;
            }
            v28 = v25 + 16LL * (*(_DWORD *)v27 + 4) + 312;
          }
          else
          {
LABEL_35:
            v28 = sub_1BDA590(v22, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v28)(v24, *(_QWORD *)(v28 + 8), 0.0);
          v29 = *(_QWORD *)v24;
          v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v31 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v30;
              v31 += 2;
              if ( !v30 )
                goto LABEL_41;
            }
            v32 = v29 + 16LL * (*(_DWORD *)v31 + 1) + 312;
          }
          else
          {
LABEL_41:
            v32 = sub_1BDA590(v24, SimpleAnimation_State_TypeInfo, 1LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v32)(v24, 0LL, *(_QWORD *)(v32 + 8));
        }
        v33 = *(_QWORD *)v13;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
        {
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
          {
            --v34;
            v35 += 4;
            if ( !v34 )
              goto LABEL_48;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_48:
          v36 = sub_1BDA590(v13, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v36)(v13, *(_QWORD *)(v36 + 8));
        return;
      }
    }
LABEL_84:
    sub_1B8880C(gameObject, v4);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_84;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v6, 0LL);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v6, 0LL);
    if ( !Enumerator )
      sub_1B8880C(0LL, v37);
    while ( 1 )
    {
      v39 = Enumerator->klass;
      v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v41 = &v39->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_60;
        }
        p_method = (__int64)&v39->vtable[*v41].method;
      }
      else
      {
LABEL_60:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v43 = Enumerator->klass;
      v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v45 = (System_Collections_IEnumerator_c **)&v43->_1.interfaceOffsets->offset;
        while ( *(v45 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v44;
          v45 += 2;
          if ( !v44 )
            goto LABEL_67;
        }
        v46 = (__int64)&v43->vtable[*(_DWORD *)v45 + 1].method;
      }
      else
      {
LABEL_67:
        v46 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v47 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v46)(
                                              Enumerator,
                                              *(_QWORD *)(v46 + 8));
      v49 = v47;
      if ( !v47 )
        sub_1B8880C(0LL, v48);
      if ( v47->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1B88ACC(v47);
        goto LABEL_84;
      }
      UnityEngine_AnimationState__set_time(v47, 0.0, 0LL);
      UnityEngine_AnimationState__set_enabled(v49, 0, 0LL);
    }
    v50 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
    if ( v50 )
    {
      v51 = *(_QWORD *)v50;
      v52 = v50;
      v53 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_77;
        }
        v55 = v51 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_77:
        v55 = sub_1BDA590(v50, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
    }
  }
}


bool __fastcall BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *motionKey; // x0

  motionKey = this->fields.motionKey;
  if ( motionKey )
    LOBYTE(motionKey) = System_String__Equals_61715348(motionKey, key, 0LL);
  return (char)motionKey;
}


BattleBgComponent_SaveData_o *__fastcall BattleBgComponent__getSaveData(
        BattleBgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v6; // x20
  __int64 v7; // x19
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x21
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
  __int64 v26; // x22
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  SimpleAnimation_State_c **v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x8
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v52; // x8
  __int64 v53; // x9
  System_Collections_IEnumerator_c **v54; // x10
  __int64 v55; // x0
  UnityEngine_AnimationState_o *v56; // x0
  __int64 v57; // x1
  UnityEngine_AnimationState_o *v58; // x21
  System_String_o *name; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x20
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0

  if ( (byte_4A5D3F9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AnimationState_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&BattleBgComponent_SaveData_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D3F9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_95;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_95;
  v6 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v7 = sub_1B887FC(BattleBgComponent_SaveData_TypeInfo);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v7, v8);
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
        v10 = gameObject;
        v11 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v11;
            p_offset += 4;
            if ( !v11 )
              goto LABEL_14;
          }
          v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_14:
          v13 = sub_1BDA590(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v15 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
        if ( !v15 )
          sub_1B8880C(0LL, v14);
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
                goto LABEL_21;
            }
            v19 = v16 + 16LL * *v18 + 312;
          }
          else
          {
LABEL_21:
            v19 = sub_1BDA590(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                goto LABEL_28;
            }
            v23 = v20 + 16LL * *v22 + 312;
          }
          else
          {
LABEL_28:
            v23 = sub_1BDA590(v15, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
          v26 = v24;
          if ( !v24 )
            sub_1B8880C(0LL, v25);
          v27 = *(_QWORD *)v24;
          v28 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
          {
            v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v29 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v28;
              v29 += 4;
              if ( !v28 )
                goto LABEL_35;
            }
            v30 = v27 + 16LL * *v29 + 312;
          }
          else
          {
LABEL_35:
            v30 = sub_1BDA590(v24, SimpleAnimation_State_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) != 0 )
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
                  goto LABEL_42;
              }
              v34 = v31 + 16LL * (*(_DWORD *)v33 + 9) + 312;
            }
            else
            {
LABEL_42:
              v34 = sub_1BDA590(v26, SimpleAnimation_State_TypeInfo, 9LL);
            }
            v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
            if ( !v7 )
              sub_1B8880C(v35, v35);
            *(_QWORD *)(v7 + 16) = v35;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), v35, v36, v37);
            v38 = *(_QWORD *)v26;
            v39 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
            {
              v40 = (SimpleAnimation_State_c **)(*(_QWORD *)(v38 + 176) + 8LL);
              while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v39;
                v40 += 2;
                if ( !v39 )
                  goto LABEL_50;
              }
              v41 = v38 + 16LL * (*(_DWORD *)v40 + 3) + 312;
            }
            else
            {
LABEL_50:
              v41 = sub_1BDA590(v26, SimpleAnimation_State_TypeInfo, 3LL);
            }
            *(float *)(v7 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v41)(v26, *(_QWORD *)(v41 + 8));
            break;
          }
        }
        v42 = *(_QWORD *)v15;
        v43 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
          {
            --v43;
            v44 += 4;
            if ( !v43 )
              goto LABEL_57;
          }
          v45 = v42 + 16LL * *v44 + 312;
        }
        else
        {
LABEL_57:
          v45 = sub_1BDA590(v15, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v45)(v15, *(_QWORD *)(v45 + 8));
        return (BattleBgComponent_SaveData_o *)v7;
      }
    }
LABEL_95:
    sub_1B8880C(gameObject, v4);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v7;
  if ( !v6 )
    goto LABEL_95;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v6, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v46);
  do
  {
    v48 = Enumerator->klass;
    v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_69;
      }
      p_method = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_69:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      goto LABEL_83;
    v52 = Enumerator->klass;
    v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v54 = (System_Collections_IEnumerator_c **)&v52->_1.interfaceOffsets->offset;
      while ( *(v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v53;
        v54 += 2;
        if ( !v53 )
          goto LABEL_76;
      }
      v55 = (__int64)&v52->vtable[*(_DWORD *)v54 + 1].method;
    }
    else
    {
LABEL_76:
      v55 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v56 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v55)(
                                            Enumerator,
                                            *(_QWORD *)(v55 + 8));
    v58 = v56;
    if ( !v56 )
      sub_1B8880C(0LL, v57);
    if ( v56->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1B88ACC(v56);
      goto LABEL_95;
    }
  }
  while ( !UnityEngine_AnimationState__get_enabled(v56, 0LL) );
  name = UnityEngine_AnimationState__get_name(v58, 0LL);
  if ( !v7 )
    sub_1B8880C(name, name);
  *(_QWORD *)(v7 + 16) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)name, v60, v61);
  *(float *)(v7 + 24) = UnityEngine_AnimationState__get_time(v58, 0LL);
LABEL_83:
  v62 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v62 )
  {
    v63 = *(_QWORD *)v62;
    v64 = v62;
    v65 = *(unsigned __int16 *)(*(_QWORD *)v62 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v62 + 302LL) )
    {
      v66 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
      {
        --v65;
        v66 += 4;
        if ( !v65 )
          goto LABEL_88;
      }
      v67 = v63 + 16LL * *v66 + 312;
    }
    else
    {
LABEL_88:
      v67 = sub_1BDA590(v62, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v67)(v64, *(_QWORD *)(v67 + 8));
  }
  return (BattleBgComponent_SaveData_o *)v7;
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v10; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v12; // x21
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0

  if ( (byte_4A5D3FA & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D3FA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_27;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_27;
  if ( animName->fields._stringLength < 1 )
    return;
  v10 = (UnityEngine_Object_o *)gameObject;
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v10 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v10,
                                                 save->fields.animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, save->fields.timeline, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v10, 0LL);
        UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v10, save->fields.animName, 0LL);
        return;
      }
    }
LABEL_27:
    sub_1B8880C(gameObject, v7);
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
  v12 = gameObject;
  v13 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_17;
    }
    v15 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_17:
    v15 = sub_1BDA590(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v15)(v12, *(_QWORD *)(v15 + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_63844704((SimpleAnimation_o *)Component_object, save->fields.animName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBgComponent__playAnimation(
        BattleBgComponent_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  long double v4; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v10; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v12; // x21
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_4A5D3F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D3F5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  v10 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v10 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v10,
                                                 animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, *(float *)&v4, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v10, 0LL);
        UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v10, animName, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1B8880C(gameObject, v8);
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
  v12 = gameObject;
  v13 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_14;
    }
    v15 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_14:
    v15 = sub_1BDA590(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v15)(v12, *(_QWORD *)(v15 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_63844704((SimpleAnimation_o *)Component_object, animName, 0LL);
}


void __fastcall BattleBgComponent__playCameraAnimation(
        BattleBgComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BattleActionCamera_o *v8; // x0

  if ( (byte_4A5D3F8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D3F8 = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0LL, 0LL) )
  {
    v8 = this->fields.actionCamera;
    if ( !v8 )
      sub_1B8880C(0LL, v6);
    BattleActionCamera__playCameraAnimation(v8, name, v7);
  }
}


void __fastcall BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19
  Il2CppObject *v6; // x20

  if ( (byte_4A5D3F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D3F6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  v6 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    sub_1B8880C(gameObject, v4);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_18;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v6, 0LL) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v6, 0LL);
  }
}


void __fastcall BattleBgComponent__setActionCamera(
        BattleBgComponent_o *this,
        BattleActionCamera_o *inActionCamera,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.actionCamera = inActionCamera;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.actionCamera,
    (int32_t)inActionCamera,
    (int32_t)method,
    v3);
}


void __fastcall BattleBgComponent__setCutNodeNoble(BattleBgComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0LL);
}


void __fastcall BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct BattleActionCamera_o *v8; // x8

  if ( (byte_4A5D3F7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D3F7 = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(actionCamera, 0LL, 0LL);
  if ( !v6 )
  {
    v8 = this->fields.actionCamera;
    if ( !v8 )
      sub_1B8880C(v6, v7);
    v8->fields.Shaking = 1;
    v8->fields.ShakeRange.fields.x = power * 0.1;
    v8->fields.ShakeRange.fields.y = power * 0.1;
    v8->fields.ShakeRange.fields.z = power * 0.0;
    *(_QWORD *)&v8->fields.ShakeTime = 0x3F80000000000000LL;
  }
}


void __fastcall BattleBgComponent_SaveData___ctor(BattleBgComponent_SaveData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5D3FC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D3FC = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, v5, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}