void BattleBgComponent___ctor(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleBgComponent__ResetAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v5; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v7; // x20
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x20
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x21
  __int64 v22; // x8
  __int64 v23; // x9
  SimpleAnimation_State_c **v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  SimpleAnimation_State_c **v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  System_Collections_IEnumerator_c *v39; // x8
  __int64 v40; // x9
  System_Collections_IEnumerator_c **v41; // x10
  __int64 v42; // x0
  UnityEngine_AnimationState_o *v43; // x0
  UnityEngine_AnimationState_o *v44; // x20
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x19
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0

  if ( (byte_4C39FAB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationState_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C39FAB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_84;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_84;
  v5 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0);
      gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__GetStates((SimpleAnimation_o *)Component_object, 0);
      if ( gameObject )
      {
        klass = gameObject->klass;
        v7 = gameObject;
        v8 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
        if ( *(_WORD *)&gameObject->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v8;
            p_offset += 4;
            if ( !v8 )
              goto LABEL_14;
          }
          v10 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_14:
          v10 = sub_1C83438(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v11 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
        if ( !v11 )
          sub_1C32E7C(0);
        while ( 1 )
        {
          v12 = *(_QWORD *)v11;
          v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
          {
            v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v13;
              v14 += 4;
              if ( !v13 )
                goto LABEL_21;
            }
            v15 = v12 + 16LL * *v14 + 312;
          }
          else
          {
LABEL_21:
            v15 = sub_1C83438(v11, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
            break;
          v16 = *(_QWORD *)v11;
          v17 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
          {
            v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v18 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v17;
              v18 += 4;
              if ( !v17 )
                goto LABEL_28;
            }
            v19 = v16 + 16LL * *v18 + 312;
          }
          else
          {
LABEL_28:
            v19 = sub_1C83438(v11, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
          v21 = v20;
          if ( !v20 )
            sub_1C32E7C(0);
          v22 = *(_QWORD *)v20;
          v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
          {
            v24 = (SimpleAnimation_State_c **)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v23;
              v24 += 2;
              if ( !v23 )
                goto LABEL_35;
            }
            v25 = v22 + 16LL * (*(_DWORD *)v24 + 4) + 312;
          }
          else
          {
LABEL_35:
            v25 = sub_1C83438(v20, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v25)(v21, *(_QWORD *)(v25 + 8), 0.0);
          v26 = *(_QWORD *)v21;
          v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v28 = (SimpleAnimation_State_c **)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v27;
              v28 += 2;
              if ( !v27 )
                goto LABEL_41;
            }
            v29 = v26 + 16LL * (*(_DWORD *)v28 + 1) + 312;
          }
          else
          {
LABEL_41:
            v29 = sub_1C83438(v21, SimpleAnimation_State_TypeInfo, 1);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v29)(v21, 0, *(_QWORD *)(v29 + 8));
        }
        v30 = *(_QWORD *)v11;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
        {
          v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
          {
            --v31;
            v32 += 4;
            if ( !v31 )
              goto LABEL_48;
          }
          v33 = v30 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_48:
          v33 = sub_1C83438(v11, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v33)(v11, *(_QWORD *)(v33 + 8));
        return;
      }
    }
LABEL_84:
    sub_1C32E7C(gameObject);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_84;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v5, 0);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v5, 0);
    if ( !Enumerator )
      sub_1C32E7C(0);
    while ( 1 )
    {
      v35 = Enumerator->klass;
      v36 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v37 = &v35->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_60;
        }
        v38 = (__int64)&v35->vtable[*v37];
      }
      else
      {
LABEL_60:
        v38 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v38)(
              Enumerator,
              *(_QWORD *)(v38 + 8))
          & 1) == 0 )
        break;
      v39 = Enumerator->klass;
      v40 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v41 = (System_Collections_IEnumerator_c **)&v39->_1.interfaceOffsets->offset;
        while ( *(v41 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v40;
          v41 += 2;
          if ( !v40 )
            goto LABEL_67;
        }
        v42 = (__int64)&v39->vtable[*(_DWORD *)v41 + 1];
      }
      else
      {
LABEL_67:
        v42 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v43 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v42)(
                                              Enumerator,
                                              *(_QWORD *)(v42 + 8));
      v44 = v43;
      if ( !v43 )
        sub_1C32E7C(0);
      if ( v43->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1C3313C(v43);
        goto LABEL_84;
      }
      UnityEngine_AnimationState__set_time(v43, 0.0, 0);
      UnityEngine_AnimationState__set_enabled(v44, 0, 0);
    }
    v45 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
    if ( v45 )
    {
      v46 = *(_QWORD *)v45;
      v47 = v45;
      v48 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
      {
        v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_77;
        }
        v50 = v46 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_77:
        v50 = sub_1C83438(v45, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
    }
  }
}


bool BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *motionKey; // x0

  motionKey = this->fields.motionKey;
  if ( motionKey )
    LOBYTE(motionKey) = System_String__Equals_63553848(motionKey, key, 0);
  return (char)motionKey;
}


BattleBgComponent_SaveData_o *BattleBgComponent__getSaveData(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v5; // x20
  __int64 v6; // x19
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v9; // x21
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x21
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x22
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  __int64 v36; // x9
  SimpleAnimation_State_c **v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  System_Collections_IEnumerator_c *v48; // x8
  __int64 v49; // x9
  System_Collections_IEnumerator_c **v50; // x10
  __int64 v51; // x0
  UnityEngine_AnimationState_o *v52; // x0
  UnityEngine_AnimationState_o *v53; // x21
  System_String_o *name; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x20
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0

  if ( (byte_4C39FA9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationState_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&BattleBgComponent_SaveData_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C39FA9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_95;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_95;
  v5 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v6 = sub_1C32E6C(BattleBgComponent_SaveData_TypeInfo);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v6, v7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__GetStates((SimpleAnimation_o *)Component_object, 0);
      if ( gameObject )
      {
        klass = gameObject->klass;
        v9 = gameObject;
        v10 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
        if ( *(_WORD *)&gameObject->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v10;
            p_offset += 4;
            if ( !v10 )
              goto LABEL_14;
          }
          v12 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_14:
          v12 = sub_1C83438(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v13 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
        if ( !v13 )
          sub_1C32E7C(0);
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
            v17 = sub_1C83438(v13, System_Collections_IEnumerator_TypeInfo, 0);
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
            v21 = sub_1C83438(v13, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
          v23 = v22;
          if ( !v22 )
            sub_1C32E7C(0);
          v24 = *(_QWORD *)v22;
          v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
          {
            v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v26 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v25;
              v26 += 4;
              if ( !v25 )
                goto LABEL_35;
            }
            v27 = v24 + 16LL * *v26 + 312;
          }
          else
          {
LABEL_35:
            v27 = sub_1C83438(v22, SimpleAnimation_State_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) != 0 )
          {
            v28 = *(_QWORD *)v23;
            v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
            {
              v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v28 + 176) + 8LL);
              while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v29;
                v30 += 2;
                if ( !v29 )
                  goto LABEL_42;
              }
              v31 = v28 + 16LL * (*(_DWORD *)v30 + 9) + 312;
            }
            else
            {
LABEL_42:
              v31 = sub_1C83438(v23, SimpleAnimation_State_TypeInfo, 9);
            }
            v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
            if ( !v6 )
              sub_1C32E7C(v32);
            *(_QWORD *)(v6 + 16) = v32;
            sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), v32, v33, v34);
            v35 = *(_QWORD *)v23;
            v36 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
            {
              v37 = (SimpleAnimation_State_c **)(*(_QWORD *)(v35 + 176) + 8LL);
              while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v36;
                v37 += 2;
                if ( !v36 )
                  goto LABEL_50;
              }
              v38 = v35 + 16LL * (*(_DWORD *)v37 + 3) + 312;
            }
            else
            {
LABEL_50:
              v38 = sub_1C83438(v23, SimpleAnimation_State_TypeInfo, 3);
            }
            *(float *)(v6 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v38)(v23, *(_QWORD *)(v38 + 8));
            break;
          }
        }
        v39 = *(_QWORD *)v13;
        v40 = *(unsigned __int16 *)(*(_QWORD *)v13 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v13 + 302LL) )
        {
          v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
          {
            --v40;
            v41 += 4;
            if ( !v40 )
              goto LABEL_57;
          }
          v42 = v39 + 16LL * *v41 + 312;
        }
        else
        {
LABEL_57:
          v42 = sub_1C83438(v13, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v42)(v13, *(_QWORD *)(v42 + 8));
        return (BattleBgComponent_SaveData_o *)v6;
      }
    }
LABEL_95:
    sub_1C32E7C(gameObject);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v6;
  if ( !v5 )
    goto LABEL_95;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v5, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  do
  {
    v44 = Enumerator->klass;
    v45 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_69;
      }
      v47 = (__int64)&v44->vtable[*v46];
    }
    else
    {
LABEL_69:
      v47 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8))
        & 1) == 0 )
      goto LABEL_83;
    v48 = Enumerator->klass;
    v49 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v50 = (System_Collections_IEnumerator_c **)&v48->_1.interfaceOffsets->offset;
      while ( *(v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 2;
        if ( !v49 )
          goto LABEL_76;
      }
      v51 = (__int64)&v48->vtable[*(_DWORD *)v50 + 1];
    }
    else
    {
LABEL_76:
      v51 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v52 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v51)(
                                            Enumerator,
                                            *(_QWORD *)(v51 + 8));
    v53 = v52;
    if ( !v52 )
      sub_1C32E7C(0);
    if ( v52->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C3313C(v52);
      goto LABEL_95;
    }
  }
  while ( !UnityEngine_AnimationState__get_enabled(v52, 0) );
  name = UnityEngine_AnimationState__get_name(v53, 0);
  if ( !v6 )
    sub_1C32E7C(name);
  *(_QWORD *)(v6 + 16) = name;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), (int32_t)name, v55, v56);
  *(float *)(v6 + 24) = UnityEngine_AnimationState__get_time(v53, 0);
LABEL_83:
  v57 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v57 )
  {
    v58 = *(_QWORD *)v57;
    v59 = v57;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_88;
      }
      v62 = v58 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_88:
      v62 = sub_1C83438(v57, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
  }
  return (BattleBgComponent_SaveData_o *)v6;
}


bool BattleBgComponent__isSave(BattleBgComponent_o *this, const MethodInfo *method)
{
  return this->fields.isRecAnimation;
}


void BattleBgComponent__loadSaveData(
        BattleBgComponent_o *this,
        BattleBgComponent_SaveData_o *save,
        const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v9; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x21
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0

  if ( (byte_4C39FAA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C39FAA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_27;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_27;
  if ( animName->fields._stringLength < 1 )
    return;
  v9 = (UnityEngine_Object_o *)gameObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v9 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v9,
                                                 save->fields.animName,
                                                 0);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, save->fields.timeline, 0);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v9, 0);
        UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)v9, save->fields.animName, 0);
        return;
      }
    }
LABEL_27:
    sub_1C32E7C(gameObject);
  }
  if ( !Component_object )
    goto LABEL_27;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)Component_object,
                                             save->fields.animName,
                                             0);
  if ( !gameObject )
    goto LABEL_27;
  klass = gameObject->klass;
  *(float *)&v3 = save->fields.timeline;
  v11 = gameObject;
  v12 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
  if ( *(_WORD *)&gameObject->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_17;
    }
    v14 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
  }
  else
  {
LABEL_17:
    v14 = sub_1C83438(gameObject, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v14)(v11, *(_QWORD *)(v14 + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0);
  SimpleAnimation__Play_66464300((SimpleAnimation_o *)Component_object, save->fields.animName, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleBgComponent__playAnimation(
        BattleBgComponent_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  long double v4; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v9; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x21
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_4C39FA5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C39FA5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v9 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v9,
                                                 animName,
                                                 0);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, *(float *)&v4, 0);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v9, 0);
        UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)v9, animName, 0);
        return;
      }
    }
LABEL_24:
    sub_1C32E7C(gameObject);
  }
  if ( !Component_object )
    goto LABEL_24;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, animName, 0);
  if ( !gameObject )
    goto LABEL_24;
  klass = gameObject->klass;
  v11 = gameObject;
  v12 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
  if ( *(_WORD *)&gameObject->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_14;
    }
    v14 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
  }
  else
  {
LABEL_14:
    v14 = sub_1C83438(gameObject, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v14)(v11, *(_QWORD *)(v14 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0);
  SimpleAnimation__Play_66464300((SimpleAnimation_o *)Component_object, animName, 0);
}


void BattleBgComponent__playCameraAnimation(BattleBgComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x21
  const MethodInfo *v6; // x2
  BattleActionCamera_o *v7; // x0

  if ( (byte_4C39FA8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39FA8 = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0, 0) )
  {
    v7 = this->fields.actionCamera;
    if ( !v7 )
      sub_1C32E7C(0);
    BattleActionCamera__playCameraAnimation(v7, name, v6);
  }
}


void BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x19
  Il2CppObject *v5; // x20

  if ( (byte_4C39FA6 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39FA6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  v5 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)Component_object, 0) )
        SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0);
      return;
    }
LABEL_18:
    sub_1C32E7C(gameObject);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_18;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v5, 0) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v5, 0);
  }
}


void BattleBgComponent__setActionCamera(
        BattleBgComponent_o *this,
        BattleActionCamera_o *inActionCamera,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.actionCamera = inActionCamera;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.actionCamera, (int32_t)inActionCamera, (int32_t)method, v3);
}


void BattleBgComponent__setCutNodeNoble(BattleBgComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0);
}


void BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x20
  _BOOL8 v6; // x0
  struct BattleActionCamera_o *v7; // x8

  if ( (byte_4C39FA7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39FA7 = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(actionCamera, 0, 0);
  if ( !v6 )
  {
    v7 = this->fields.actionCamera;
    if ( !v7 )
      sub_1C32E7C(v6);
    v7->fields.Shaking = 1;
    v7->fields.ShakeRange.fields.x = power * 0.1;
    v7->fields.ShakeRange.fields.y = power * 0.1;
    v7->fields.ShakeRange.fields.z = power * 0.0;
    *(_QWORD *)&v7->fields.ShakeTime = 0x3F80000000000000LL;
  }
}


void BattleBgComponent_SaveData___ctor(BattleBgComponent_SaveData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C39FAC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C39FAC = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, v5, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}