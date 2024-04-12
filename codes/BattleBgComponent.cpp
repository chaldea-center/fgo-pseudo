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
  __int64 v7; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v9; // x20
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x3
  __int64 v15; // x20
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  __int64 v28; // x21
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  SimpleAnimation_State_c **v31; // x11
  __int64 v32; // x0
  __int64 v33; // x3
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  SimpleAnimation_State_c **v36; // x11
  __int64 v37; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 p_method; // x0
  __int64 v49; // x3
  System_Collections_IEnumerator_c *v50; // x8
  unsigned __int64 v51; // x10
  System_Collections_IEnumerator_c **v52; // x11
  __int64 v53; // x0
  UnityEngine_AnimationState_o *v54; // x0
  __int64 v55; // x1
  UnityEngine_AnimationState_o *v56; // x20
  int v57; // w23
  __int64 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x8
  __int64 v61; // x19
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  int v65[2]; // [xsp+0h] [xbp-50h] BYREF
  int v66; // [xsp+8h] [xbp-48h]

  if ( (byte_42B35F4 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AnimationState_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B35F4 = 1;
  }
  v66 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
          v12 = sub_AEB880(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v7);
        }
        v15 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
        if ( !v15 )
          sub_B52A5C(0LL, v13);
        while ( 1 )
        {
          v16 = *(_QWORD *)v15;
          if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
          {
            v17 = 0LL;
            v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
                goto LABEL_23;
            }
            v19 = v16 + 16LL * *v18 + 312;
          }
          else
          {
LABEL_23:
            v19 = sub_AEB880(v15, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
            break;
          v21 = *(_QWORD *)v15;
          if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
          {
            v22 = 0LL;
            v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v23 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v22;
              v23 += 4;
              if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
                goto LABEL_30;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_30:
            v24 = sub_AEB880(v15, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v20);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v15, *(_QWORD *)(v24 + 8));
          v28 = v25;
          if ( !v25 )
            sub_B52A5C(0LL, v26);
          v29 = *(_QWORD *)v25;
          if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
          {
            v30 = 0LL;
            v31 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v30;
              v31 += 2;
              if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                goto LABEL_37;
            }
            v32 = v29 + 16LL * (*(_DWORD *)v31 + 4) + 312;
          }
          else
          {
LABEL_37:
            v32 = sub_AEB880(v25, SimpleAnimation_State_TypeInfo, 4LL, v27);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 0.0);
          v34 = *(_QWORD *)v28;
          if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
          {
            v35 = 0LL;
            v36 = (SimpleAnimation_State_c **)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v35;
              v36 += 2;
              if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
                goto LABEL_43;
            }
            v37 = v34 + 16LL * (*(_DWORD *)v36 + 1) + 312;
          }
          else
          {
LABEL_43:
            v37 = sub_AEB880(v28, SimpleAnimation_State_TypeInfo, 1LL, v33);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v37)(v28, 0LL, *(_QWORD *)(v37 + 8));
        }
        v65[0] = 178;
        v66 = 1;
        v38 = *(_QWORD *)v15;
        if ( *(_WORD *)(*(_QWORD *)v15 + 298LL) )
        {
          v39 = 0LL;
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
          {
            ++v39;
            v40 += 4;
            if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v15 + 298LL) )
              goto LABEL_50;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_50:
          v41 = sub_AEB880(v15, System_IDisposable_TypeInfo, 0LL, v20);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v41)(v15, *(_QWORD *)(v41 + 8));
        v66 = 0;
        return;
      }
    }
LABEL_90:
    sub_B52A5C(gameObject, v4);
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
      sub_B52A5C(0LL, v42);
    while ( 1 )
    {
      v45 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v46 = 0LL;
        v47 = &v45->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v46;
          v47 += 4;
          if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_63;
        }
        p_method = (__int64)&v45->vtable[*v47].method;
      }
      else
      {
LABEL_63:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v43);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v50 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v51 = 0LL;
        v52 = (System_Collections_IEnumerator_c **)&v50->_1.interfaceOffsets->offset;
        while ( *(v52 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v51;
          v52 += 2;
          if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_70;
        }
        v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 1].method;
      }
      else
      {
LABEL_70:
        v53 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v49);
      }
      v54 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v53)(
                                              Enumerator,
                                              *(_QWORD *)(v53 + 8));
      v56 = v54;
      if ( !v54 )
        sub_B52A5C(0LL, v55);
      if ( v54->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_B52D50(v54);
        goto LABEL_90;
      }
      UnityEngine_AnimationState__set_time(v54, 0.0, 0LL);
      UnityEngine_AnimationState__set_enabled(v56, 0, 0LL);
    }
    *(_DWORD *)((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFFBLL) = 178;
    v57 = ++v66;
    v58 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
    if ( v58 )
    {
      v60 = *(_QWORD *)v58;
      v61 = v58;
      if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
      {
        v62 = 0LL;
        v63 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
        {
          ++v62;
          v63 += 4;
          if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
            goto LABEL_80;
        }
        v64 = v60 + 16LL * *v63 + 312;
      }
      else
      {
LABEL_80:
        v64 = sub_AEB880(v58, System_IDisposable_TypeInfo, 0LL, v59);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v64)(v61, *(_QWORD *)(v64 + 8));
    }
    if ( v57 && v65[v57 - 1] == 178 )
      v66 = v57 - 1;
  }
}


bool __fastcall BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = *(System_String_o **)&this->fields.isLoadEndPlay;
  if ( v3 )
    LOBYTE(v3) = System_String__Equals_44555656(v3, key, 0LL);
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
  __int64 v8; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v10; // x21
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  __int64 v16; // x21
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  __int64 v29; // x22
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  SimpleAnimation_State_c **v36; // x11
  __int64 v37; // x0
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x3
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  SimpleAnimation_State_c **v48; // x11
  __int64 v49; // x0
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v57; // x8
  unsigned __int64 v58; // x10
  int32_t *v59; // x11
  __int64 p_method; // x0
  __int64 v61; // x3
  System_Collections_IEnumerator_c *v62; // x8
  unsigned __int64 v63; // x10
  System_Collections_IEnumerator_c **v64; // x11
  __int64 v65; // x0
  UnityEngine_AnimationState_o *v66; // x0
  __int64 v67; // x1
  UnityEngine_AnimationState_o *v68; // x21
  System_Int32_array **name; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int v76; // w25
  __int64 v77; // x0
  __int64 v78; // x3
  __int64 v79; // x8
  __int64 v80; // x20
  unsigned __int64 v81; // x10
  int *v82; // x11
  __int64 v83; // x0
  int v85[4]; // [xsp+8h] [xbp-58h] BYREF
  int v86; // [xsp+18h] [xbp-48h]

  if ( (byte_42B35F2 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AnimationState_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&BattleBgComponent_SaveData_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B35F2 = 1;
  }
  v86 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v7 = sub_B52A54(BattleBgComponent_SaveData_TypeInfo);
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
        v10 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v11 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v11;
            p_offset += 4;
            if ( v11 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v13 = sub_AEB880(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v8);
        }
        v16 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
        if ( !v16 )
          sub_B52A5C(0LL, v14);
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
          {
            v18 = 0LL;
            v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v18;
              v19 += 4;
              if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
                goto LABEL_23;
            }
            v20 = v17 + 16LL * *v19 + 312;
          }
          else
          {
LABEL_23:
            v20 = sub_AEB880(v16, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
            break;
          v22 = *(_QWORD *)v16;
          if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
          {
            v23 = 0LL;
            v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v24 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v23;
              v24 += 4;
              if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
                goto LABEL_30;
            }
            v25 = v22 + 16LL * *v24 + 312;
          }
          else
          {
LABEL_30:
            v25 = sub_AEB880(v16, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v21);
          }
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v16, *(_QWORD *)(v25 + 8));
          v29 = v26;
          if ( !v26 )
            sub_B52A5C(0LL, v27);
          v30 = *(_QWORD *)v26;
          if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
          {
            v31 = 0LL;
            v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v32 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
                goto LABEL_37;
            }
            v33 = v30 + 16LL * *v32 + 312;
          }
          else
          {
LABEL_37:
            v33 = sub_AEB880(v26, SimpleAnimation_State_TypeInfo, 0LL, v28);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) != 0 )
          {
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
                  goto LABEL_44;
              }
              v37 = v34 + 16LL * (*(_DWORD *)v36 + 9) + 312;
            }
            else
            {
LABEL_44:
              v37 = sub_AEB880(v29, SimpleAnimation_State_TypeInfo, 9LL, v15);
            }
            v38 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
            if ( !v7 )
              sub_B52A5C(v38, v38);
            *(_QWORD *)(v7 + 16) = v38;
            sub_B52920((BattleServantConfConponent_o *)(v7 + 16), v38, v39, v40, v41, v42, v43, v44);
            v46 = *(_QWORD *)v29;
            if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
            {
              v47 = 0LL;
              v48 = (SimpleAnimation_State_c **)(*(_QWORD *)(v46 + 176) + 8LL);
              while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v47;
                v48 += 2;
                if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
                  goto LABEL_52;
              }
              v49 = v46 + 16LL * (*(_DWORD *)v48 + 3) + 312;
            }
            else
            {
LABEL_52:
              v49 = sub_AEB880(v29, SimpleAnimation_State_TypeInfo, 3LL, v45);
            }
            *(float *)(v7 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v49)(v29, *(_QWORD *)(v49 + 8));
            break;
          }
        }
        v85[0] = 220;
        v86 = 1;
        v50 = *(_QWORD *)v16;
        if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
        {
          v51 = 0LL;
          v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
          {
            ++v51;
            v52 += 4;
            if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
              goto LABEL_59;
          }
          v53 = v50 + 16LL * *v52 + 312;
        }
        else
        {
LABEL_59:
          v53 = sub_AEB880(v16, System_IDisposable_TypeInfo, 0LL, v21);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v53)(v16, *(_QWORD *)(v53 + 8));
        v86 = 0;
        return (BattleBgComponent_SaveData_o *)v7;
      }
    }
LABEL_101:
    sub_B52A5C(gameObject, v4);
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
    sub_B52A5C(0LL, v54);
  while ( 1 )
  {
    v57 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      v59 = &v57->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v59 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_72;
      }
      p_method = (__int64)&v57->vtable[*v59].method;
    }
    else
    {
LABEL_72:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v55);
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
      v65 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v61);
    }
    v66 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v65)(
                                            Enumerator,
                                            *(_QWORD *)(v65 + 8));
    v68 = v66;
    if ( !v66 )
      goto LABEL_100;
    if ( v66->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_B52D50(v66);
LABEL_100:
      sub_B52A5C(v66, v67);
    }
    if ( UnityEngine_AnimationState__get_enabled(v66, 0LL) )
    {
      name = (System_Int32_array **)UnityEngine_AnimationState__get_name(v68, 0LL);
      if ( !v7 )
        sub_B52A5C(name, name);
      *(_QWORD *)(v7 + 16) = name;
      sub_B52920((BattleServantConfConponent_o *)(v7 + 16), name, v70, v71, v72, v73, v74, v75);
      *(float *)(v7 + 24) = UnityEngine_AnimationState__get_time(v68, 0LL);
      break;
    }
  }
  *(_DWORD *)((unsigned __int64)v85 & 0xFFFFFFFFFFFFFFFBLL) = 220;
  v76 = ++v86;
  v77 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
  if ( v77 )
  {
    v79 = *(_QWORD *)v77;
    v80 = v77;
    if ( *(_WORD *)(*(_QWORD *)v77 + 298LL) )
    {
      v81 = 0LL;
      v82 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
      {
        ++v81;
        v82 += 4;
        if ( v81 >= *(unsigned __int16 *)(*(_QWORD *)v77 + 298LL) )
          goto LABEL_91;
      }
      v83 = v79 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_91:
      v83 = sub_AEB880(v77, System_IDisposable_TypeInfo, 0LL, v78);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v83)(v80, *(_QWORD *)(v83 + 8));
  }
  if ( v76 && v85[v76 - 1] == 220 )
    v86 = v76 - 1;
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
  __int64 v11; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v13; // x21
  unsigned __int64 v14; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v16; // x0

  if ( (byte_42B35F3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B35F3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)v10, save->fields.animName, 0LL);
        return;
      }
    }
LABEL_29:
    sub_B52A5C(gameObject, v7);
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
  v13 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v14;
      p_offset += 2;
      if ( v14 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v16 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v16 = sub_AEB880(gameObject, SimpleAnimation_State_TypeInfo, 4LL, v11);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v16)(v13, *(_QWORD *)(v16 + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16625408((SimpleAnimation_o *)Component_srcLineSprite, save->fields.animName, 0LL);
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
  __int64 v11; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v13; // x21
  unsigned __int64 v14; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v16; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_42B35EE & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42B35EE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)v10, animName, 0LL);
        return;
      }
    }
LABEL_26:
    sub_B52A5C(gameObject, v8);
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
  v13 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v14;
      p_offset += 2;
      if ( v14 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v16 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v16 = sub_AEB880(gameObject, SimpleAnimation_State_TypeInfo, 4LL, v11);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v16)(v13, *(_QWORD *)(v16 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16625408((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
}


void __fastcall BattleBgComponent__playCameraAnimation(
        BattleBgComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0

  if ( (byte_42B35F1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B35F1 = 1;
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
      sub_B52A5C(0LL, v6);
    BattleActionCamera__playCameraAnimation(v7, name, 0LL);
  }
}


void __fastcall BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v6; // x19

  if ( (byte_42B35EF & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B35EF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    sub_B52A5C(gameObject, v4);
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
  sub_B52920(
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
    sub_B52A5C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0LL);
}


void __fastcall BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B35F0 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B35F0 = 1;
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
      sub_B52A5C(0LL, v6);
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

  if ( (byte_42AF0EE & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF0EE = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}