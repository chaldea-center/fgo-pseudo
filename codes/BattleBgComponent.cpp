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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v13; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v15; // x20
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 v18; // x0
  __int64 v19; // x20
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **v32; // x11
  __int64 v33; // x0
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  SimpleAnimation_State_c **v36; // x11
  __int64 v37; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v47; // x8
  unsigned __int64 v48; // x10
  System_Collections_IEnumerator_c **v49; // x11
  __int64 v50; // x0
  UnityEngine_AnimationState_o *v51; // x0
  UnityEngine_AnimationState_o *v52; // x20
  int v53; // w23
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x19
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  int v60[2]; // [xsp+0h] [xbp-50h] BYREF
  int v61; // [xsp+8h] [xbp-48h]

  if ( (byte_4217DCF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v10);
    byte_4217DCF = 1;
  }
  v61 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  v13 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v15 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v16 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v16;
            p_offset += 4;
            if ( v16 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v18 = sub_AA67A0(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v19 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
        if ( !v19 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
          v20 = *(_QWORD *)v19;
          if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
          {
            v21 = 0LL;
            v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v21;
              v22 += 4;
              if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
                goto LABEL_23;
            }
            v23 = v20 + 16LL * *v22 + 312;
          }
          else
          {
LABEL_23:
            v23 = sub_AA67A0(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
            break;
          v24 = *(_QWORD *)v19;
          if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
          {
            v25 = 0LL;
            v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v26 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
                goto LABEL_30;
            }
            v27 = v24 + 16LL * *v26 + 312;
          }
          else
          {
LABEL_30:
            v27 = sub_AA67A0(v19, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
          v29 = v28;
          if ( !v28 )
            sub_B0D97C(0LL);
          v30 = *(_QWORD *)v28;
          if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
          {
            v31 = 0LL;
            v32 = (SimpleAnimation_State_c **)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v31;
              v32 += 2;
              if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
                goto LABEL_37;
            }
            v33 = v30 + 16LL * (*(_DWORD *)v32 + 4) + 312;
          }
          else
          {
LABEL_37:
            v33 = sub_AA67A0(v28, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v33)(v29, *(_QWORD *)(v33 + 8), 0.0);
          v34 = *(_QWORD *)v29;
          if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
          {
            v35 = 0LL;
            v36 = (SimpleAnimation_State_c **)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v35;
              v36 += 2;
              if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
                goto LABEL_43;
            }
            v37 = v34 + 16LL * (*(_DWORD *)v36 + 1) + 312;
          }
          else
          {
LABEL_43:
            v37 = sub_AA67A0(v29, SimpleAnimation_State_TypeInfo, 1LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v37)(v29, 0LL, *(_QWORD *)(v37 + 8));
        }
        v60[0] = 178;
        v61 = 1;
        v38 = *(_QWORD *)v19;
        if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
        {
          v39 = 0LL;
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
          {
            ++v39;
            v40 += 4;
            if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
              goto LABEL_50;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_50:
          v41 = sub_AA67A0(v19, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v41)(v19, *(_QWORD *)(v41 + 8));
        v61 = 0;
        return;
      }
    }
LABEL_90:
    sub_B0D97C(gameObject);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_90;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v13, 0LL);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v13, 0LL);
    if ( !Enumerator )
      sub_B0D97C(0LL);
    while ( 1 )
    {
      v43 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v44 = 0LL;
        v45 = &v43->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v44;
          v45 += 4;
          if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_63;
        }
        p_method = (__int64)&v43->vtable[*v45].method;
      }
      else
      {
LABEL_63:
        p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v47 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v48 = 0LL;
        v49 = (System_Collections_IEnumerator_c **)&v47->_1.interfaceOffsets->offset;
        while ( *(v49 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v48;
          v49 += 2;
          if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_70;
        }
        v50 = (__int64)&v47->vtable[*(_DWORD *)v49 + 1].method;
      }
      else
      {
LABEL_70:
        v50 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v51 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v50)(
                                              Enumerator,
                                              *(_QWORD *)(v50 + 8));
      v52 = v51;
      if ( !v51 )
        sub_B0D97C(0LL);
      if ( v51->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_B0DC70(v51);
        goto LABEL_90;
      }
      UnityEngine_AnimationState__set_time(v51, 0.0, 0LL);
      UnityEngine_AnimationState__set_enabled(v52, 0, 0LL);
    }
    *(_DWORD *)((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFFBLL) = 178;
    v53 = ++v61;
    v54 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
    if ( v54 )
    {
      v55 = *(_QWORD *)v54;
      v56 = v54;
      if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
      {
        v57 = 0LL;
        v58 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
        {
          ++v57;
          v58 += 4;
          if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
            goto LABEL_80;
        }
        v59 = v55 + 16LL * *v58 + 312;
      }
      else
      {
LABEL_80:
        v59 = sub_AA67A0(v54, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v59)(v56, *(_QWORD *)(v59 + 8));
    }
    if ( v53 && v60[v53 - 1] == 178 )
      v61 = v53 - 1;
  }
}


bool __fastcall BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = *(System_String_o **)&this->fields.isLoadEndPlay;
  if ( v3 )
    LOBYTE(v3) = System_String__Equals_43837244(v3, key, 0LL);
  return (char)v3;
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
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v19; // x21
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0
  __int64 v23; // x21
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x22
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  SimpleAnimation_State_c **v40; // x11
  __int64 v41; // x0
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  SimpleAnimation_State_c **v51; // x11
  __int64 v52; // x0
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v62; // x8
  unsigned __int64 v63; // x10
  System_Collections_IEnumerator_c **v64; // x11
  __int64 v65; // x0
  UnityEngine_AnimationState_o *v66; // x0
  UnityEngine_AnimationState_o *v67; // x21
  System_Int32_array **name; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  int v75; // w25
  __int64 v76; // x0
  __int64 v77; // x8
  __int64 v78; // x20
  unsigned __int64 v79; // x10
  int *v80; // x11
  __int64 v81; // x0
  int v83[4]; // [xsp+8h] [xbp-58h] BYREF
  int v84; // [xsp+18h] [xbp-48h]

  if ( (byte_4217DCD & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&BattleBgComponent_SaveData_TypeInfo, v10);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v11);
    byte_4217DCD = 1;
  }
  v84 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v17 = sub_B0D974(BattleBgComponent_SaveData_TypeInfo, v15, v16);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v17, 0LL);
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
        v19 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v20 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v20;
            p_offset += 4;
            if ( v20 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v22 = sub_AA67A0(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v23 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
        if ( !v23 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
          v24 = *(_QWORD *)v23;
          if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
          {
            v25 = 0LL;
            v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
                goto LABEL_23;
            }
            v27 = v24 + 16LL * *v26 + 312;
          }
          else
          {
LABEL_23:
            v27 = sub_AA67A0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
            break;
          v28 = *(_QWORD *)v23;
          if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
          {
            v29 = 0LL;
            v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v30 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
                goto LABEL_30;
            }
            v31 = v28 + 16LL * *v30 + 312;
          }
          else
          {
LABEL_30:
            v31 = sub_AA67A0(v23, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
          v33 = v32;
          if ( !v32 )
            sub_B0D97C(0LL);
          v34 = *(_QWORD *)v32;
          if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
          {
            v35 = 0LL;
            v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v36 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v35;
              v36 += 4;
              if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
                goto LABEL_37;
            }
            v37 = v34 + 16LL * *v36 + 312;
          }
          else
          {
LABEL_37:
            v37 = sub_AA67A0(v32, SimpleAnimation_State_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) != 0 )
          {
            v38 = *(_QWORD *)v33;
            if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
            {
              v39 = 0LL;
              v40 = (SimpleAnimation_State_c **)(*(_QWORD *)(v38 + 176) + 8LL);
              while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v39;
                v40 += 2;
                if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
                  goto LABEL_44;
              }
              v41 = v38 + 16LL * (*(_DWORD *)v40 + 9) + 312;
            }
            else
            {
LABEL_44:
              v41 = sub_AA67A0(v33, SimpleAnimation_State_TypeInfo, 9LL);
            }
            v42 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
            if ( !v17 )
              sub_B0D97C(v42);
            *(_QWORD *)(v17 + 16) = v42;
            sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), v42, v43, v44, v45, v46, v47, v48);
            v49 = *(_QWORD *)v33;
            if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
            {
              v50 = 0LL;
              v51 = (SimpleAnimation_State_c **)(*(_QWORD *)(v49 + 176) + 8LL);
              while ( *(v51 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v50;
                v51 += 2;
                if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
                  goto LABEL_52;
              }
              v52 = v49 + 16LL * (*(_DWORD *)v51 + 3) + 312;
            }
            else
            {
LABEL_52:
              v52 = sub_AA67A0(v33, SimpleAnimation_State_TypeInfo, 3LL);
            }
            *(float *)(v17 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v52)(v33, *(_QWORD *)(v52 + 8));
            break;
          }
        }
        v83[0] = 220;
        v84 = 1;
        v53 = *(_QWORD *)v23;
        if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
        {
          v54 = 0LL;
          v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
          {
            ++v54;
            v55 += 4;
            if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
              goto LABEL_59;
          }
          v56 = v53 + 16LL * *v55 + 312;
        }
        else
        {
LABEL_59:
          v56 = sub_AA67A0(v23, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v56)(v23, *(_QWORD *)(v56 + 8));
        v84 = 0;
        return (BattleBgComponent_SaveData_o *)v17;
      }
    }
LABEL_101:
    sub_B0D97C(gameObject);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v17;
  if ( !v14 )
    goto LABEL_101;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v14, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v58 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v59 = 0LL;
      v60 = &v58->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_72;
      }
      p_method = (__int64)&v58->vtable[*v60].method;
    }
    else
    {
LABEL_72:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v62 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v63 = 0LL;
      v64 = (System_Collections_IEnumerator_c **)&v62->_1.interfaceOffsets->offset;
      while ( *(v64 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v63;
        v64 += 2;
        if ( v63 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_79;
      }
      v65 = (__int64)&v62->vtable[*(_DWORD *)v64 + 1].method;
    }
    else
    {
LABEL_79:
      v65 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v66 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v65)(
                                            Enumerator,
                                            *(_QWORD *)(v65 + 8));
    v67 = v66;
    if ( !v66 )
      goto LABEL_100;
    if ( v66->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_B0DC70(v66);
LABEL_100:
      sub_B0D97C(v66);
    }
    if ( UnityEngine_AnimationState__get_enabled(v66, 0LL) )
    {
      name = (System_Int32_array **)UnityEngine_AnimationState__get_name(v67, 0LL);
      if ( !v17 )
        sub_B0D97C(name);
      *(_QWORD *)(v17 + 16) = name;
      sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), name, v69, v70, v71, v72, v73, v74);
      *(float *)(v17 + 24) = UnityEngine_AnimationState__get_time(v67, 0LL);
      break;
    }
  }
  *(_DWORD *)((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFFBLL) = 220;
  v75 = ++v84;
  v76 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v76 )
  {
    v77 = *(_QWORD *)v76;
    v78 = v76;
    if ( *(_WORD *)(*(_QWORD *)v76 + 298LL) )
    {
      v79 = 0LL;
      v80 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
      {
        ++v79;
        v80 += 4;
        if ( v79 >= *(unsigned __int16 *)(*(_QWORD *)v76 + 298LL) )
          goto LABEL_91;
      }
      v81 = v77 + 16LL * *v80 + 312;
    }
    else
    {
LABEL_91:
      v81 = sub_AA67A0(v76, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v81)(v78, *(_QWORD *)(v81 + 8));
  }
  if ( v75 && v83[v75 - 1] == 220 )
    v84 = v75 - 1;
  return (BattleBgComponent_SaveData_o *)v17;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v12; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v14; // x21
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v17; // x0

  if ( (byte_4217DCE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, save);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v8);
    byte_4217DCE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_29;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_29;
  if ( animName->fields.m_stringLength < 1 )
    return;
  v12 = (UnityEngine_Object_o *)gameObject;
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
        UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)v12, save->fields.animName, 0LL);
        return;
      }
    }
LABEL_29:
    sub_B0D97C(gameObject);
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
  v14 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v17 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v17 = sub_AA67A0(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v17)(v14, *(_QWORD *)(v17 + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_50482404((SimpleAnimation_o *)Component_srcLineSprite, save->fields.animName, 0LL);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v12; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v14; // x21
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v17; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_4217DC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, animName);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v9);
    byte_4217DC9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  v12 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
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
        UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)v12, animName, 0LL);
        return;
      }
    }
LABEL_26:
    sub_B0D97C(gameObject);
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
  v14 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v17 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v17 = sub_AA67A0(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v17)(v14, *(_QWORD *)(v17 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_50482404((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
}


void __fastcall BattleBgComponent__playCameraAnimation(
        BattleBgComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  BattleActionCamera_o *v6; // x0

  if ( (byte_4217DCC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, name);
    byte_4217DCC = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    v6 = (BattleActionCamera_o *)this[1].klass;
    if ( !v6 )
      sub_B0D97C(0LL);
    BattleActionCamera__playCameraAnimation(v6, name, 0LL);
  }
}


void __fastcall BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4217DCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4217DCA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  v7 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    sub_B0D97C(gameObject);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_20;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v7, 0LL) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v7, 0LL);
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
  sub_B0D840(
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0LL);
}


void __fastcall BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  BattleActionCamera_o *v6; // x0
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217DCB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217DCB = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    v6 = (BattleActionCamera_o *)this[1].klass;
    if ( !v6 )
      sub_B0D97C(0LL);
    v7.fields.x = power * 0.1;
    v7.fields.z = power * 0.0;
    v7.fields.y = power * 0.1;
    BattleActionCamera__ShakePosition(v6, v7, 1.0, 0LL);
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

  if ( (byte_42138B2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42138B2 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}