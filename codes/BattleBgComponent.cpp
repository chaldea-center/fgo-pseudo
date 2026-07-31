void BattleBgComponent___ctor(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleBgComponent__ResetAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v9; // x20
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
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
  __int64 v25; // x20
  __int64 v26; // x8
  __int64 v27; // x9
  SimpleAnimation_State_c **v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v39; // x1
  System_Collections_IEnumerator_c *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  System_Collections_IEnumerator_c *v44; // x8
  __int64 v45; // x9
  System_Collections_IEnumerator_c **v46; // x10
  __int64 v47; // x0
  UnityEngine_AnimationState_o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_AnimationState_o *v51; // x19
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x20
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  System_Collections_IEnumerator_o *v58; // [xsp+28h] [xbp-48h]
  __int64 v59; // [xsp+38h] [xbp-38h]

  if ( (byte_593AF42 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AnimationState_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593AF42 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_88;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_88;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
          v12 = sub_2237E2C(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v13 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
        v59 = v13;
        while ( 1 )
        {
          if ( !v59 )
            sub_21FFECC(v13, v14);
          v15 = *(_QWORD *)v59;
          v16 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
          {
            v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v16;
              v17 += 4;
              if ( !v16 )
                goto LABEL_22;
            }
            v18 = v15 + 16LL * *v17 + 312;
          }
          else
          {
LABEL_22:
            v18 = sub_2237E2C(v59, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v59, *(_QWORD *)(v18 + 8)) & 1) == 0 )
            break;
          v19 = *(_QWORD *)v59;
          v20 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
          {
            v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v21 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v20;
              v21 += 4;
              if ( !v20 )
                goto LABEL_29;
            }
            v22 = v19 + 16LL * *v21 + 312;
          }
          else
          {
LABEL_29:
            v22 = sub_2237E2C(v59, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v59, *(_QWORD *)(v22 + 8));
          v25 = v23;
          if ( !v23 )
            sub_21FFECC(0, v24);
          v26 = *(_QWORD *)v23;
          v27 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v28 = (SimpleAnimation_State_c **)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v27;
              v28 += 2;
              if ( !v27 )
                goto LABEL_36;
            }
            v29 = v26 + 16LL * (*(_DWORD *)v28 + 4) + 312;
          }
          else
          {
LABEL_36:
            v29 = sub_2237E2C(v23, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(__int64, _QWORD, double))v29)(v25, *(_QWORD *)(v29 + 8), 0.0);
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
            v33 = v30 + 16LL * (*(_DWORD *)v32 + 1) + 312;
          }
          else
          {
LABEL_42:
            v33 = sub_2237E2C(v25, SimpleAnimation_State_TypeInfo, 1);
          }
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v33)(v25, 0, *(_QWORD *)(v33 + 8));
        }
        v34 = *(_QWORD *)v59;
        v35 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
        {
          v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
          {
            --v35;
            v36 += 4;
            if ( !v35 )
              goto LABEL_49;
          }
          v37 = v34 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_49:
          v37 = sub_2237E2C(v59, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v37)(v59, *(_QWORD *)(v37 + 8));
        return;
      }
    }
LABEL_88:
    sub_21FFECC(gameObject, v4);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !v7 )
    goto LABEL_88;
  UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v7, 0);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v7, 0);
  v58 = Enumerator;
  while ( 1 )
  {
    if ( !v58 )
      sub_21FFECC(Enumerator, v39);
    v40 = v58->klass;
    v41 = *(unsigned __int16 *)&v58->klass->_2.rank;
    if ( *(_WORD *)&v58->klass->_2.rank )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_62;
      }
      v43 = (__int64)&v40->vtable[*v42];
    }
    else
    {
LABEL_62:
      v43 = sub_2237E2C(v58, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v43)(v58, *(_QWORD *)(v43 + 8)) & 1) == 0 )
      break;
    v44 = v58->klass;
    v45 = *(unsigned __int16 *)&v58->klass->_2.rank;
    if ( *(_WORD *)&v58->klass->_2.rank )
    {
      v46 = (System_Collections_IEnumerator_c **)&v44->_1.interfaceOffsets->offset;
      while ( *(v46 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v45;
        v46 += 2;
        if ( !v45 )
          goto LABEL_69;
      }
      v47 = (__int64)&v44->vtable[*(_DWORD *)v46 + 1];
    }
    else
    {
LABEL_69:
      v47 = sub_2237E2C(v58, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v48 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v47)(
                                            v58,
                                            *(_QWORD *)(v47 + 8));
    v51 = v48;
    if ( !v48 )
      goto LABEL_87;
    if ( v48->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_220024C(v48, UnityEngine_AnimationState_TypeInfo, v50);
LABEL_87:
      sub_21FFECC(v48, v49);
    }
    UnityEngine_AnimationState__set_time(v48, 0.0, 0);
    UnityEngine_AnimationState__set_enabled(v51, 0, 0);
  }
  v52 = sub_21FFDA4(v58, System_IDisposable_TypeInfo);
  if ( v52 )
  {
    v53 = *(_QWORD *)v52;
    v54 = v52;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_79;
      }
      v57 = v53 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_79:
      v57 = sub_2237E2C(v52, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v57)(v54, *(_QWORD *)(v57 + 8));
  }
}


bool BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *motionKey; // x0

  motionKey = this->fields.motionKey;
  if ( motionKey )
    LOBYTE(motionKey) = System_String__Equals_75473208(motionKey, key, 0);
  return (char)motionKey;
}


BattleBgComponent_SaveData_o *BattleBgComponent__getSaveData(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v6; // x20
  __int64 v7; // x19
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
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
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  SimpleAnimation_State_c **v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x8
  __int64 v44; // x9
  SimpleAnimation_State_c **v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v52; // x1
  System_Collections_IEnumerator_c *v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  System_Collections_IEnumerator_c *v57; // x8
  __int64 v58; // x9
  System_Collections_IEnumerator_c **v59; // x10
  __int64 v60; // x0
  UnityEngine_AnimationState_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  UnityEngine_AnimationState_o *v64; // x20
  System_String_o *name; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  __int64 v72; // x0
  __int64 v73; // x8
  __int64 v74; // x21
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  System_Collections_IEnumerator_o *v79; // [xsp+20h] [xbp-50h]
  __int64 v80; // [xsp+28h] [xbp-48h]

  if ( (byte_593AF40 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AnimationState_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&BattleBgComponent_SaveData_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593AF40 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_99;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_99;
  v6 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v7 = sub_21FFEBC(BattleBgComponent_SaveData_TypeInfo);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v7, v8);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
        v11 = gameObject;
        v12 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
        if ( *(_WORD *)&gameObject->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v12;
            p_offset += 4;
            if ( !v12 )
              goto LABEL_14;
          }
          v14 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_14:
          v14 = sub_2237E2C(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v15 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
        v80 = v15;
        while ( 1 )
        {
          if ( !v80 )
            sub_21FFECC(v15, v16);
          v17 = *(_QWORD *)v80;
          v18 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
          {
            v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v18;
              v19 += 4;
              if ( !v18 )
                goto LABEL_22;
            }
            v20 = v17 + 16LL * *v19 + 312;
          }
          else
          {
LABEL_22:
            v20 = sub_2237E2C(v80, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v80, *(_QWORD *)(v20 + 8)) & 1) == 0 )
            break;
          v21 = *(_QWORD *)v80;
          v22 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
          {
            v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v23 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v22;
              v23 += 4;
              if ( !v22 )
                goto LABEL_29;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_29:
            v24 = sub_2237E2C(v80, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v80, *(_QWORD *)(v24 + 8));
          v27 = v25;
          if ( !v25 )
            sub_21FFECC(0, v26);
          v28 = *(_QWORD *)v25;
          v29 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
          {
            v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v30 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v29;
              v30 += 4;
              if ( !v29 )
                goto LABEL_36;
            }
            v31 = v28 + 16LL * *v30 + 312;
          }
          else
          {
LABEL_36:
            v31 = sub_2237E2C(v25, SimpleAnimation_State_TypeInfo, 0);
          }
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
          if ( (v15 & 1) != 0 )
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
                  goto LABEL_43;
              }
              v35 = v32 + 16LL * (*(_DWORD *)v34 + 9) + 312;
            }
            else
            {
LABEL_43:
              v35 = sub_2237E2C(v27, SimpleAnimation_State_TypeInfo, 9);
            }
            v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
            if ( !v7 )
              sub_21FFECC(v36, v36);
            *(_QWORD *)(v7 + 16) = v36;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), v36, v37, v38, v39, v40, v41, v42);
            v43 = *(_QWORD *)v27;
            v44 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
            {
              v45 = (SimpleAnimation_State_c **)(*(_QWORD *)(v43 + 176) + 8LL);
              while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v44;
                v45 += 2;
                if ( !v44 )
                  goto LABEL_51;
              }
              v46 = v43 + 16LL * (*(_DWORD *)v45 + 3) + 312;
            }
            else
            {
LABEL_51:
              v46 = sub_2237E2C(v27, SimpleAnimation_State_TypeInfo, 3);
            }
            *(float *)(v7 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v46)(v27, *(_QWORD *)(v46 + 8));
            break;
          }
        }
        v47 = *(_QWORD *)v80;
        v48 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
        {
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
          {
            --v48;
            v49 += 4;
            if ( !v48 )
              goto LABEL_58;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_58:
          v50 = sub_2237E2C(v80, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v50)(v80, *(_QWORD *)(v50 + 8));
        return (BattleBgComponent_SaveData_o *)v7;
      }
    }
LABEL_99:
    sub_21FFECC(gameObject, v4);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v7;
  if ( !v6 )
    goto LABEL_99;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v6, 0);
  v79 = Enumerator;
  do
  {
    if ( !v79 )
      sub_21FFECC(Enumerator, v52);
    v53 = v79->klass;
    v54 = *(unsigned __int16 *)&v79->klass->_2.rank;
    if ( *(_WORD *)&v79->klass->_2.rank )
    {
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_71;
      }
      v56 = (__int64)&v53->vtable[*v55];
    }
    else
    {
LABEL_71:
      v56 = sub_2237E2C(v79, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v56)(v79, *(_QWORD *)(v56 + 8)) & 1) == 0 )
      goto LABEL_85;
    v57 = v79->klass;
    v58 = *(unsigned __int16 *)&v79->klass->_2.rank;
    if ( *(_WORD *)&v79->klass->_2.rank )
    {
      v59 = (System_Collections_IEnumerator_c **)&v57->_1.interfaceOffsets->offset;
      while ( *(v59 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v58;
        v59 += 2;
        if ( !v58 )
          goto LABEL_78;
      }
      v60 = (__int64)&v57->vtable[*(_DWORD *)v59 + 1];
    }
    else
    {
LABEL_78:
      v60 = sub_2237E2C(v79, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v61 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v60)(
                                            v79,
                                            *(_QWORD *)(v60 + 8));
    v64 = v61;
    if ( !v61 )
      sub_21FFECC(0, v62);
    if ( v61->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_220024C(v61, UnityEngine_AnimationState_TypeInfo, v63);
      goto LABEL_99;
    }
    Enumerator = (System_Collections_IEnumerator_o *)UnityEngine_AnimationState__get_enabled(v61, 0);
  }
  while ( ((unsigned __int8)Enumerator & 1) == 0 );
  name = UnityEngine_AnimationState__get_name(v64, 0);
  if ( !v7 )
    sub_21FFECC(name, name);
  *(_QWORD *)(v7 + 16) = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)name, v66, v67, v68, v69, v70, v71);
  *(float *)(v7 + 24) = UnityEngine_AnimationState__get_time(v64, 0);
LABEL_85:
  v72 = sub_21FFDA4(v79, System_IDisposable_TypeInfo);
  if ( v72 )
  {
    v73 = *(_QWORD *)v72;
    v74 = v72;
    v75 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v76 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
      {
        --v75;
        v76 += 4;
        if ( !v75 )
          goto LABEL_90;
      }
      v77 = v73 + 16LL * *v76 + 312;
    }
    else
    {
LABEL_90:
      v77 = sub_2237E2C(v72, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v77)(v74, *(_QWORD *)(v77 + 8));
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v9; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x21
  float timeline; // s8
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0

  if ( (byte_593AF41 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593AF41 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_27;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_27;
  if ( animName->fields._stringLength < 1 )
    return;
  v9 = (UnityEngine_Object_o *)gameObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
        UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)v9, save->fields.animName, 0);
        return;
      }
    }
LABEL_27:
    sub_21FFECC(gameObject, v6);
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
  v11 = gameObject;
  timeline = save->fields.timeline;
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
    v15 = sub_2237E2C(gameObject, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v15)(v11, *(_QWORD *)(v15 + 8), timeline);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0);
  SimpleAnimation__Play_78338864((SimpleAnimation_o *)Component_object, save->fields.animName, 0);
}


void BattleBgComponent__playAnimation(
        BattleBgComponent_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  __int64 v10; // x1
  Il2CppObject *v11; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v13; // x21
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0

  if ( (byte_593AF3C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593AF3C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  v11 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v11 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v11,
                                                 animName,
                                                 0);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, timeline, 0);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v11, 0);
        UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)v11, animName, 0);
        return;
      }
    }
LABEL_24:
    sub_21FFECC(gameObject, v8);
  }
  if ( !Component_object )
    goto LABEL_24;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, animName, 0);
  if ( !gameObject )
    goto LABEL_24;
  klass = gameObject->klass;
  v13 = gameObject;
  v14 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
  if ( *(_WORD *)&gameObject->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_14;
    }
    v16 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
  }
  else
  {
LABEL_14:
    v16 = sub_2237E2C(gameObject, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v16)(v13, *(_QWORD *)(v16 + 8), timeline);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0);
  SimpleAnimation__Play_78338864((SimpleAnimation_o *)Component_object, animName, 0);
}


void BattleBgComponent__playCameraAnimation(BattleBgComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x21
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0

  if ( (byte_593AF3F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593AF3F = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0, 0) )
  {
    v7 = this->fields.actionCamera;
    if ( !v7 )
      sub_21FFECC(0, v6);
    BattleActionCamera__playCameraAnimation(v7, name, 0);
  }
}


void BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19
  __int64 v6; // x1
  Il2CppObject *v7; // x20

  if ( (byte_593AF3D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593AF3D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    sub_21FFECC(gameObject, v4);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_18;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v7, 0) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v7, 0);
  }
}


void BattleBgComponent__setActionCamera(
        BattleBgComponent_o *this,
        BattleActionCamera_o *inActionCamera,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.actionCamera = inActionCamera;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actionCamera,
    (int32_t)inActionCamera,
    (System_String_o *)method,
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
    sub_21FFECC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0);
}


void BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *actionCamera; // x20
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593AF3E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593AF3E = 1;
  }
  actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(actionCamera, 0, 0) )
  {
    v7 = this->fields.actionCamera;
    if ( !v7 )
      sub_21FFECC(0, v6);
    v8.fields.x = power * 0.1;
    v8.fields.z = power * 0.0;
    v8.fields.y = power * 0.1;
    BattleActionCamera__ShakePosition(v7, v8, 1.0, 0);
  }
}


void BattleBgComponent_SaveData___ctor(BattleBgComponent_SaveData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_593AF43 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593AF43 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}