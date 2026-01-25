void BattleBgComponent___ctor(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleBgComponent__ResetAnimation(BattleBgComponent_o *this, const MethodInfo *method)
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
  __int64 v42; // x0
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

  if ( (byte_4CF0C6D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_AnimationState_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CF0C6D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_84;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_84;
  v6 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v8 = gameObject;
        v9 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
        if ( *(_WORD *)&gameObject->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v9;
            p_offset += 4;
            if ( !v9 )
              goto LABEL_14;
          }
          v11 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_14:
          v11 = sub_1C51E70(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v13 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8));
        if ( !v13 )
          sub_1C7BD40(0, v12);
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
            v17 = sub_1C51E70(v13, System_Collections_IEnumerator_TypeInfo, 0);
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
            v21 = sub_1C51E70(v13, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
          v24 = v22;
          if ( !v22 )
            sub_1C7BD40(0, v23);
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
            v28 = sub_1C51E70(v22, SimpleAnimation_State_TypeInfo, 4);
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
            v32 = sub_1C51E70(v24, SimpleAnimation_State_TypeInfo, 1);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v32)(v24, 0, *(_QWORD *)(v32 + 8));
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
          v36 = sub_1C51E70(v13, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v36)(v13, *(_QWORD *)(v36 + 8));
        return;
      }
    }
LABEL_84:
    sub_1C7BD40(gameObject, v4);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_84;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v6, 0);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v6, 0);
    if ( !Enumerator )
      sub_1C7BD40(0, v37);
    while ( 1 )
    {
      v39 = Enumerator->klass;
      v40 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v41 = &v39->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_60;
        }
        v42 = (__int64)&v39->vtable[*v41];
      }
      else
      {
LABEL_60:
        v42 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v42)(
              Enumerator,
              *(_QWORD *)(v42 + 8))
          & 1) == 0 )
        break;
      v43 = Enumerator->klass;
      v44 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v45 = (System_Collections_IEnumerator_c **)&v43->_1.interfaceOffsets->offset;
        while ( *(v45 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v44;
          v45 += 2;
          if ( !v44 )
            goto LABEL_67;
        }
        v46 = (__int64)&v43->vtable[*(_DWORD *)v45 + 1];
      }
      else
      {
LABEL_67:
        v46 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v47 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v46)(
                                              Enumerator,
                                              *(_QWORD *)(v46 + 8));
      v49 = v47;
      if ( !v47 )
        sub_1C7BD40(0, v48);
      if ( v47->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1C7C0DC(v47);
        goto LABEL_84;
      }
      UnityEngine_AnimationState__set_time(v47, 0.0, 0);
      UnityEngine_AnimationState__set_enabled(v49, 0, 0);
    }
    v50 = sub_1C7BC24(Enumerator, System_IDisposable_TypeInfo);
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
        v55 = sub_1C51E70(v50, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
    }
  }
}


bool BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *motionKey; // x0

  motionKey = this->fields.motionKey;
  if ( motionKey )
    LOBYTE(motionKey) = System_String__Equals_64212232(motionKey, key, 0);
  return (char)motionKey;
}


BattleBgComponent_SaveData_o *BattleBgComponent__getSaveData(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v6; // x20
  __int64 v7; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v9; // x21
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x22
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x8
  __int64 v42; // x9
  SimpleAnimation_State_c **v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  System_Collections_IEnumerator_c *v55; // x8
  __int64 v56; // x9
  System_Collections_IEnumerator_c **v57; // x10
  __int64 v58; // x0
  UnityEngine_AnimationState_o *v59; // x0
  __int64 v60; // x1
  UnityEngine_AnimationState_o *v61; // x21
  System_String_o *name; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  __int64 v69; // x0
  __int64 v70; // x8
  __int64 v71; // x20
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0

  if ( (byte_4CF0C6B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_AnimationState_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&BattleBgComponent_SaveData_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CF0C6B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_95;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_95;
  v6 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v7 = sub_1C7BD34(BattleBgComponent_SaveData_TypeInfo);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v7, 0);
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
          v12 = sub_1C51E70(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v14 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
        if ( !v14 )
          sub_1C7BD40(0, v13);
        while ( 1 )
        {
          v15 = *(_QWORD *)v14;
          v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
          {
            v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v16;
              v17 += 4;
              if ( !v16 )
                goto LABEL_21;
            }
            v18 = v15 + 16LL * *v17 + 312;
          }
          else
          {
LABEL_21:
            v18 = sub_1C51E70(v14, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
            break;
          v19 = *(_QWORD *)v14;
          v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
          {
            v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v21 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v20;
              v21 += 4;
              if ( !v20 )
                goto LABEL_28;
            }
            v22 = v19 + 16LL * *v21 + 312;
          }
          else
          {
LABEL_28:
            v22 = sub_1C51E70(v14, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
          v25 = v23;
          if ( !v23 )
            sub_1C7BD40(0, v24);
          v26 = *(_QWORD *)v23;
          v27 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v28 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v27;
              v28 += 4;
              if ( !v27 )
                goto LABEL_35;
            }
            v29 = v26 + 16LL * *v28 + 312;
          }
          else
          {
LABEL_35:
            v29 = sub_1C51E70(v23, SimpleAnimation_State_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) != 0 )
          {
            v30 = *(_QWORD *)v25;
            v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
            {
              v32 = (SimpleAnimation_State_c **)(*(_QWORD *)(v30 + 176) + 8LL);
              while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v31;
                v32 += 2;
                if ( !v31 )
                  goto LABEL_42;
              }
              v33 = v30 + 16LL * (*(_DWORD *)v32 + 9) + 312;
            }
            else
            {
LABEL_42:
              v33 = sub_1C51E70(v25, SimpleAnimation_State_TypeInfo, 9);
            }
            v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
            if ( !v7 )
              sub_1C7BD40(v34, v34);
            *(_QWORD *)(v7 + 16) = v34;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), v34, v35, v36, v37, v38, v39, v40);
            v41 = *(_QWORD *)v25;
            v42 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
            {
              v43 = (SimpleAnimation_State_c **)(*(_QWORD *)(v41 + 176) + 8LL);
              while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v42;
                v43 += 2;
                if ( !v42 )
                  goto LABEL_50;
              }
              v44 = v41 + 16LL * (*(_DWORD *)v43 + 3) + 312;
            }
            else
            {
LABEL_50:
              v44 = sub_1C51E70(v25, SimpleAnimation_State_TypeInfo, 3);
            }
            *(float *)(v7 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v44)(v25, *(_QWORD *)(v44 + 8));
            break;
          }
        }
        v45 = *(_QWORD *)v14;
        v46 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
          {
            --v46;
            v47 += 4;
            if ( !v46 )
              goto LABEL_57;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_57:
          v48 = sub_1C51E70(v14, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v48)(v14, *(_QWORD *)(v48 + 8));
        return (BattleBgComponent_SaveData_o *)v7;
      }
    }
LABEL_95:
    sub_1C7BD40(gameObject, v4);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v7;
  if ( !v6 )
    goto LABEL_95;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v6, 0);
  if ( !Enumerator )
    sub_1C7BD40(0, v49);
  do
  {
    v51 = Enumerator->klass;
    v52 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_69;
      }
      v54 = (__int64)&v51->vtable[*v53];
    }
    else
    {
LABEL_69:
      v54 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8))
        & 1) == 0 )
      goto LABEL_83;
    v55 = Enumerator->klass;
    v56 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v57 = (System_Collections_IEnumerator_c **)&v55->_1.interfaceOffsets->offset;
      while ( *(v57 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v56;
        v57 += 2;
        if ( !v56 )
          goto LABEL_76;
      }
      v58 = (__int64)&v55->vtable[*(_DWORD *)v57 + 1];
    }
    else
    {
LABEL_76:
      v58 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v59 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v58)(
                                            Enumerator,
                                            *(_QWORD *)(v58 + 8));
    v61 = v59;
    if ( !v59 )
      sub_1C7BD40(0, v60);
    if ( v59->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C7C0DC(v59);
      goto LABEL_95;
    }
  }
  while ( !UnityEngine_AnimationState__get_enabled(v59, 0) );
  name = UnityEngine_AnimationState__get_name(v61, 0);
  if ( !v7 )
    sub_1C7BD40(name, name);
  *(_QWORD *)(v7 + 16) = name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)name, v63, v64, v65, v66, v67, v68);
  *(float *)(v7 + 24) = UnityEngine_AnimationState__get_time(v61, 0);
LABEL_83:
  v69 = sub_1C7BC24(Enumerator, System_IDisposable_TypeInfo);
  if ( v69 )
  {
    v70 = *(_QWORD *)v69;
    v71 = v69;
    v72 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
    {
      v73 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
      {
        --v72;
        v73 += 4;
        if ( !v72 )
          goto LABEL_88;
      }
      v74 = v70 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_88:
      v74 = sub_1C51E70(v69, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v74)(v71, *(_QWORD *)(v74 + 8));
  }
  return (BattleBgComponent_SaveData_o *)v7;
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
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v10; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v12; // x21
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0

  if ( (byte_4CF0C6C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CF0C6C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v10 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v10,
                                                 save->fields.animName,
                                                 0);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, save->fields.timeline, 0);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v10, 0);
        UnityEngine_Animation__Play_71613624((UnityEngine_Animation_o *)v10, save->fields.animName, 0);
        return;
      }
    }
LABEL_27:
    sub_1C7BD40(gameObject, v7);
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
  v12 = gameObject;
  v13 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
  if ( *(_WORD *)&gameObject->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_17;
    }
    v15 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
  }
  else
  {
LABEL_17:
    v15 = sub_1C51E70(gameObject, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v15)(v12, *(_QWORD *)(v15 + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0);
  SimpleAnimation__Play_67121960((SimpleAnimation_o *)Component_object, save->fields.animName, 0);
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
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v10; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v12; // x21
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_4CF0C67 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CF0C67 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  v10 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v10 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v10,
                                                 animName,
                                                 0);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, *(float *)&v4, 0);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v10, 0);
        UnityEngine_Animation__Play_71613624((UnityEngine_Animation_o *)v10, animName, 0);
        return;
      }
    }
LABEL_24:
    sub_1C7BD40(gameObject, v8);
  }
  if ( !Component_object )
    goto LABEL_24;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, animName, 0);
  if ( !gameObject )
    goto LABEL_24;
  klass = gameObject->klass;
  v12 = gameObject;
  v13 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
  if ( *(_WORD *)&gameObject->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_14;
    }
    v15 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
  }
  else
  {
LABEL_14:
    v15 = sub_1C51E70(gameObject, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v15)(v12, *(_QWORD *)(v15 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0);
  SimpleAnimation__Play_67121960((SimpleAnimation_o *)Component_object, animName, 0);
}


void BattleBgComponent__playCameraAnimation(BattleBgComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BattleActionCamera_o *v8; // x0

  if ( (byte_4CF0C6A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0C6A = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0, 0) )
  {
    v8 = this->fields.actionCamera;
    if ( !v8 )
      sub_1C7BD40(0, v6);
    BattleActionCamera__playCameraAnimation(v8, name, v7);
  }
}


void BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19
  Il2CppObject *v6; // x20

  if ( (byte_4CF0C68 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0C68 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  v6 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    sub_1C7BD40(gameObject, v4);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_18;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v6, 0) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v6, 0);
  }
}


void BattleBgComponent__setActionCamera(
        BattleBgComponent_o *this,
        BattleActionCamera_o *inActionCamera,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.actionCamera = inActionCamera;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.actionCamera,
    (int32_t)inActionCamera,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleBgComponent__setCutNodeNoble(BattleBgComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0);
}


void BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct BattleActionCamera_o *v8; // x8

  if ( (byte_4CF0C69 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0C69 = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(actionCamera, 0, 0);
  if ( !v6 )
  {
    v8 = this->fields.actionCamera;
    if ( !v8 )
      sub_1C7BD40(v6, v7);
    v8->fields.Shaking = 1;
    v8->fields.ShakeRange.fields.x = power * 0.1;
    v8->fields.ShakeRange.fields.y = power * 0.1;
    v8->fields.ShakeRange.fields.z = power * 0.0;
    *(_QWORD *)&v8->fields.ShakeTime = 0x3F80000000000000LL;
  }
}


void BattleBgComponent_SaveData___ctor(BattleBgComponent_SaveData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4CF0F5D & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF0F5D = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}