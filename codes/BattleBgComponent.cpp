void __fastcall BattleBgComponent___ctor(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleBgComponent__ResetAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v6; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v8; // x20
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  int *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x21
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **v27; // x11
  __int64 v28; // x0
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  SimpleAnimation_State_c **v31; // x11
  __int64 v32; // x0
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v43; // x8
  unsigned __int64 v44; // x10
  System_Collections_IEnumerator_c **v45; // x11
  __int64 v46; // x0
  UnityEngine_AnimationState_o *v47; // x0
  __int64 v48; // x1
  UnityEngine_AnimationState_o *v49; // x20
  int v50; // w23
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x19
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  int v57[2]; // [xsp+0h] [xbp-50h] BYREF
  int v58; // [xsp+8h] [xbp-48h]

  if ( (byte_438EB31 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_AnimationState_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438EB31 = 1;
  }
  v58 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      SimpleAnimation__Stop((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
      gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__GetStates(
                                                 (SimpleAnimation_o *)Component_srcLineSprite,
                                                 0LL);
      if ( gameObject )
      {
        klass = gameObject->klass;
        v8 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v9 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v9;
            p_offset += 4;
            if ( v9 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v11 = sub_B0F4C0(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v13 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8));
        if ( !v13 )
          sub_B7769C(0LL, v12);
        while ( 1 )
        {
          v14 = *(_QWORD *)v13;
          if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
          {
            v15 = 0LL;
            v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
                goto LABEL_23;
            }
            v17 = v14 + 16LL * *v16 + 312;
          }
          else
          {
LABEL_23:
            v17 = sub_B0F4C0(v13, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
            break;
          v18 = *(_QWORD *)v13;
          if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
          {
            v19 = 0LL;
            v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v20 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v19;
              v20 += 4;
              if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
                goto LABEL_30;
            }
            v21 = v18 + 16LL * *v20 + 312;
          }
          else
          {
LABEL_30:
            v21 = sub_B0F4C0(v13, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v13, *(_QWORD *)(v21 + 8));
          v24 = v22;
          if ( !v22 )
            sub_B7769C(0LL, v23);
          v25 = *(_QWORD *)v22;
          if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
          {
            v26 = 0LL;
            v27 = (SimpleAnimation_State_c **)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v26;
              v27 += 2;
              if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
                goto LABEL_37;
            }
            v28 = v25 + 16LL * (*(_DWORD *)v27 + 4) + 312;
          }
          else
          {
LABEL_37:
            v28 = sub_B0F4C0(v22, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v28)(v24, *(_QWORD *)(v28 + 8), 0.0);
          v29 = *(_QWORD *)v24;
          if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
          {
            v30 = 0LL;
            v31 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v30;
              v31 += 2;
              if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
                goto LABEL_43;
            }
            v32 = v29 + 16LL * (*(_DWORD *)v31 + 1) + 312;
          }
          else
          {
LABEL_43:
            v32 = sub_B0F4C0(v24, SimpleAnimation_State_TypeInfo, 1LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v32)(v24, 0LL, *(_QWORD *)(v32 + 8));
        }
        v57[0] = 178;
        v58 = 1;
        v33 = *(_QWORD *)v13;
        if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
        {
          v34 = 0LL;
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
          {
            ++v34;
            v35 += 4;
            if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
              goto LABEL_50;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_50:
          v36 = sub_B0F4C0(v13, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v36)(v13, *(_QWORD *)(v36 + 8));
        v58 = 0;
        return;
      }
    }
LABEL_90:
    sub_B7769C(gameObject, v4);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_90;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v6, 0LL);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v6, 0LL);
    if ( !Enumerator )
      sub_B7769C(0LL, v37);
    while ( 1 )
    {
      v39 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v40 = 0LL;
        v41 = &v39->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v40;
          v41 += 4;
          if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_63;
        }
        p_method = (__int64)&v39->vtable[*v41].method;
      }
      else
      {
LABEL_63:
        p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v43 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v44 = 0LL;
        v45 = (System_Collections_IEnumerator_c **)&v43->_1.interfaceOffsets->offset;
        while ( *(v45 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v44;
          v45 += 2;
          if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_70;
        }
        v46 = (__int64)&v43->vtable[*(_DWORD *)v45 + 1].method;
      }
      else
      {
LABEL_70:
        v46 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v47 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v46)(
                                              Enumerator,
                                              *(_QWORD *)(v46 + 8));
      v49 = v47;
      if ( !v47 )
        sub_B7769C(0LL, v48);
      if ( v47->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_B77990(v47);
        goto LABEL_90;
      }
      UnityEngine_AnimationState__set_time(v47, 0.0, 0LL);
      UnityEngine_AnimationState__set_enabled(v49, 0, 0LL);
    }
    *(_DWORD *)((unsigned __int64)v57 & 0xFFFFFFFFFFFFFFFBLL) = 178;
    v50 = ++v58;
    v51 = sub_B77684(Enumerator, System_IDisposable_TypeInfo);
    if ( v51 )
    {
      v52 = *(_QWORD *)v51;
      v53 = v51;
      if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
      {
        v54 = 0LL;
        v55 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
        {
          ++v54;
          v55 += 4;
          if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
            goto LABEL_80;
        }
        v56 = v52 + 16LL * *v55 + 312;
      }
      else
      {
LABEL_80:
        v56 = sub_B0F4C0(v51, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v56)(v53, *(_QWORD *)(v56 + 8));
    }
    if ( v50 && v57[v50 - 1] == 178 )
      v58 = v50 - 1;
  }
}


bool __fastcall BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = *(System_String_o **)&this->fields.isLoadEndPlay;
  if ( v3 )
    LOBYTE(v3) = System_String__Equals_44889276(v3, key, 0LL);
  return (char)v3;
}


BattleBgComponent_SaveData_o *__fastcall BattleBgComponent__getSaveData(
        BattleBgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v9; // x21
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x22
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **v32; // x11
  __int64 v33; // x0
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  SimpleAnimation_State_c **v43; // x11
  __int64 v44; // x0
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v55; // x8
  unsigned __int64 v56; // x10
  System_Collections_IEnumerator_c **v57; // x11
  __int64 v58; // x0
  UnityEngine_AnimationState_o *v59; // x0
  __int64 v60; // x1
  UnityEngine_AnimationState_o *v61; // x21
  System_Int32_array **name; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int v69; // w25
  __int64 v70; // x0
  __int64 v71; // x8
  __int64 v72; // x20
  unsigned __int64 v73; // x10
  int *v74; // x11
  __int64 v75; // x0
  int v77[4]; // [xsp+8h] [xbp-58h] BYREF
  int v78; // [xsp+18h] [xbp-48h]

  if ( (byte_438EB2F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_AnimationState_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&BattleBgComponent_SaveData_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438EB2F = 1;
  }
  v78 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v7 = sub_B77694(BattleBgComponent_SaveData_TypeInfo);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v7, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__GetStates(
                                                 (SimpleAnimation_o *)Component_srcLineSprite,
                                                 0LL);
      if ( gameObject )
      {
        klass = gameObject->klass;
        v9 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v10 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v10;
            p_offset += 4;
            if ( v10 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v12 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v12 = sub_B0F4C0(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v14 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
        if ( !v14 )
          sub_B7769C(0LL, v13);
        while ( 1 )
        {
          v15 = *(_QWORD *)v14;
          if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
          {
            v16 = 0LL;
            v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
                goto LABEL_23;
            }
            v18 = v15 + 16LL * *v17 + 312;
          }
          else
          {
LABEL_23:
            v18 = sub_B0F4C0(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
            break;
          v19 = *(_QWORD *)v14;
          if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
          {
            v20 = 0LL;
            v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v21 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v20;
              v21 += 4;
              if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
                goto LABEL_30;
            }
            v22 = v19 + 16LL * *v21 + 312;
          }
          else
          {
LABEL_30:
            v22 = sub_B0F4C0(v14, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
          v25 = v23;
          if ( !v23 )
            sub_B7769C(0LL, v24);
          v26 = *(_QWORD *)v23;
          if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
          {
            v27 = 0LL;
            v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v28 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
                goto LABEL_37;
            }
            v29 = v26 + 16LL * *v28 + 312;
          }
          else
          {
LABEL_37:
            v29 = sub_B0F4C0(v23, SimpleAnimation_State_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) != 0 )
          {
            v30 = *(_QWORD *)v25;
            if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
            {
              v31 = 0LL;
              v32 = (SimpleAnimation_State_c **)(*(_QWORD *)(v30 + 176) + 8LL);
              while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v31;
                v32 += 2;
                if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                  goto LABEL_44;
              }
              v33 = v30 + 16LL * (*(_DWORD *)v32 + 9) + 312;
            }
            else
            {
LABEL_44:
              v33 = sub_B0F4C0(v25, SimpleAnimation_State_TypeInfo, 9LL);
            }
            v34 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
            if ( !v7 )
              sub_B7769C(v34, v34);
            *(_QWORD *)(v7 + 16) = v34;
            sub_B77560((BattleServantConfConponent_o *)(v7 + 16), v34, v35, v36, v37, v38, v39, v40);
            v41 = *(_QWORD *)v25;
            if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
            {
              v42 = 0LL;
              v43 = (SimpleAnimation_State_c **)(*(_QWORD *)(v41 + 176) + 8LL);
              while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v42;
                v43 += 2;
                if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                  goto LABEL_52;
              }
              v44 = v41 + 16LL * (*(_DWORD *)v43 + 3) + 312;
            }
            else
            {
LABEL_52:
              v44 = sub_B0F4C0(v25, SimpleAnimation_State_TypeInfo, 3LL);
            }
            *(float *)(v7 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v44)(v25, *(_QWORD *)(v44 + 8));
            break;
          }
        }
        v77[0] = 220;
        v78 = 1;
        v45 = *(_QWORD *)v14;
        if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
        {
          v46 = 0LL;
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
          {
            ++v46;
            v47 += 4;
            if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
              goto LABEL_59;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_59:
          v48 = sub_B0F4C0(v14, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v48)(v14, *(_QWORD *)(v48 + 8));
        v78 = 0;
        return (BattleBgComponent_SaveData_o *)v7;
      }
    }
LABEL_101:
    sub_B7769C(gameObject, v4);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v7;
  if ( !v6 )
    goto LABEL_101;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v6, 0LL);
  if ( !Enumerator )
    sub_B7769C(0LL, v49);
  while ( 1 )
  {
    v51 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v52 = 0LL;
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v52;
        v53 += 4;
        if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_72;
      }
      p_method = (__int64)&v51->vtable[*v53].method;
    }
    else
    {
LABEL_72:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v55 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v56 = 0LL;
      v57 = (System_Collections_IEnumerator_c **)&v55->_1.interfaceOffsets->offset;
      while ( *(v57 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v56;
        v57 += 2;
        if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_79;
      }
      v58 = (__int64)&v55->vtable[*(_DWORD *)v57 + 1].method;
    }
    else
    {
LABEL_79:
      v58 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v59 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v58)(
                                            Enumerator,
                                            *(_QWORD *)(v58 + 8));
    v61 = v59;
    if ( !v59 )
      goto LABEL_100;
    if ( v59->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_B77990(v59);
LABEL_100:
      sub_B7769C(v59, v60);
    }
    if ( UnityEngine_AnimationState__get_enabled(v59, 0LL) )
    {
      name = (System_Int32_array **)UnityEngine_AnimationState__get_name(v61, 0LL);
      if ( !v7 )
        sub_B7769C(name, name);
      *(_QWORD *)(v7 + 16) = name;
      sub_B77560((BattleServantConfConponent_o *)(v7 + 16), name, v63, v64, v65, v66, v67, v68);
      *(float *)(v7 + 24) = UnityEngine_AnimationState__get_time(v61, 0LL);
      break;
    }
  }
  *(_DWORD *)((unsigned __int64)v77 & 0xFFFFFFFFFFFFFFFBLL) = 220;
  v69 = ++v78;
  v70 = sub_B77684(Enumerator, System_IDisposable_TypeInfo);
  if ( v70 )
  {
    v71 = *(_QWORD *)v70;
    v72 = v70;
    if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
    {
      v73 = 0LL;
      v74 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
      {
        ++v73;
        v74 += 4;
        if ( v73 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
          goto LABEL_91;
      }
      v75 = v71 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_91:
      v75 = sub_B0F4C0(v70, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v75)(v72, *(_QWORD *)(v75 + 8));
  }
  if ( v69 && v77[v69 - 1] == 220 )
    v78 = v69 - 1;
  return (BattleBgComponent_SaveData_o *)v7;
}


bool __fastcall BattleBgComponent__isSave(BattleBgComponent_o *this, const MethodInfo *method)
{
  return (bool)this->fields.motionKey;
}


void __fastcall BattleBgComponent__loadSaveData(
        BattleBgComponent_o *this,
        BattleBgComponent_SaveData_o *save,
        const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v10; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v12; // x21
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v15; // x0

  if ( (byte_438EB30 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438EB30 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_29;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_29;
  if ( animName->fields.m_stringLength < 1 )
    return;
  v10 = (UnityEngine_Object_o *)gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
        UnityEngine_Animation__Play_51745976((UnityEngine_Animation_o *)v10, save->fields.animName, 0LL);
        return;
      }
    }
LABEL_29:
    sub_B7769C(gameObject, v7);
  }
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)Component_srcLineSprite,
                                             save->fields.animName,
                                             0LL);
  if ( !gameObject )
    goto LABEL_29;
  klass = gameObject->klass;
  *(float *)&v3 = save->fields.timeline;
  v12 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v15 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v15 = sub_B0F4C0(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v15)(v12, *(_QWORD *)(v15 + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16815192((SimpleAnimation_o *)Component_srcLineSprite, save->fields.animName, 0LL);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v10; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v12; // x21
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v15; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_438EB2B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438EB2B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
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
        UnityEngine_Animation__Play_51745976((UnityEngine_Animation_o *)v10, animName, 0LL);
        return;
      }
    }
LABEL_26:
    sub_B7769C(gameObject, v8);
  }
  if ( !Component_srcLineSprite )
    goto LABEL_26;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)Component_srcLineSprite,
                                             animName,
                                             0LL);
  if ( !gameObject )
    goto LABEL_26;
  klass = gameObject->klass;
  v12 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v15 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v15 = sub_B0F4C0(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v15)(v12, *(_QWORD *)(v15 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16815192((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
}


void __fastcall BattleBgComponent__playCameraAnimation(
        BattleBgComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0

  if ( (byte_438EB2E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EB2E = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    v7 = (BattleActionCamera_o *)this[1].klass;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    BattleActionCamera__playCameraAnimation(v7, name, 0LL);
  }
}


void __fastcall BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v6; // x19

  if ( (byte_438EB2C & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EB2C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)Component_srcLineSprite, 0LL) )
        SimpleAnimation__Play((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
      return;
    }
LABEL_20:
    sub_B7769C(gameObject, v4);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_20;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v6, 0LL) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v6, 0LL);
  }
}


void __fastcall BattleBgComponent__setActionCamera(
        BattleBgComponent_o *this,
        BattleActionCamera_o *inActionCamera,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this[1].klass = (BattleBgComponent_c *)inActionCamera;
  sub_B77560(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)inActionCamera,
    (System_String_array **)method,
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
    sub_B7769C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0LL);
}


void __fastcall BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438EB2D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EB2D = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    v7 = (BattleActionCamera_o *)this[1].klass;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    v8.fields.x = power * 0.1;
    v8.fields.z = power * 0.0;
    v8.fields.y = power * 0.1;
    BattleActionCamera__ShakePosition(v7, v8, 1.0, 0LL);
  }
}


void __fastcall BattleBgComponent_SaveData___ctor(BattleBgComponent_SaveData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_438AB66 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438AB66 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}