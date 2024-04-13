void __fastcall BattleBgComponent___ctor(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleBgComponent__ResetAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v32; // x19
  __int64 v33; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v35; // x20
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x3
  __int64 v41; // x20
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x3
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  __int64 v54; // x21
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  SimpleAnimation_State_c **v57; // x11
  __int64 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  SimpleAnimation_State_c **v62; // x11
  __int64 v63; // x0
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v71; // x8
  unsigned __int64 v72; // x10
  int32_t *v73; // x11
  __int64 p_method; // x0
  __int64 v75; // x3
  System_Collections_IEnumerator_c *v76; // x8
  unsigned __int64 v77; // x10
  System_Collections_IEnumerator_c **v78; // x11
  __int64 v79; // x0
  UnityEngine_AnimationState_o *v80; // x0
  __int64 v81; // x1
  UnityEngine_AnimationState_o *v82; // x20
  int v83; // w23
  __int64 v84; // x0
  __int64 v85; // x3
  __int64 v86; // x8
  __int64 v87; // x19
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  int v91[2]; // [xsp+0h] [xbp-50h] BYREF
  int v92; // [xsp+8h] [xbp-48h]

  if ( (byte_42EC0F6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationState_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v26, v27, v28);
    byte_42EC0F6 = 1;
  }
  v92 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  v32 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v35 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v36 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v36;
            p_offset += 4;
            if ( v36 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v38 = sub_AF54C0(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v33);
        }
        v41 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
        if ( !v41 )
          sub_B5D69C(0LL, v39);
        while ( 1 )
        {
          v42 = *(_QWORD *)v41;
          if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
          {
            v43 = 0LL;
            v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v43;
              v44 += 4;
              if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
                goto LABEL_23;
            }
            v45 = v42 + 16LL * *v44 + 312;
          }
          else
          {
LABEL_23:
            v45 = sub_AF54C0(v41, System_Collections_IEnumerator_TypeInfo, 0LL, v40);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
            break;
          v47 = *(_QWORD *)v41;
          if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
          {
            v48 = 0LL;
            v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v49 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v48;
              v49 += 4;
              if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
                goto LABEL_30;
            }
            v50 = v47 + 16LL * *v49 + 312;
          }
          else
          {
LABEL_30:
            v50 = sub_AF54C0(v41, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v46);
          }
          v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v41, *(_QWORD *)(v50 + 8));
          v54 = v51;
          if ( !v51 )
            sub_B5D69C(0LL, v52);
          v55 = *(_QWORD *)v51;
          if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
          {
            v56 = 0LL;
            v57 = (SimpleAnimation_State_c **)(*(_QWORD *)(v55 + 176) + 8LL);
            while ( *(v57 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v56;
              v57 += 2;
              if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
                goto LABEL_37;
            }
            v58 = v55 + 16LL * (*(_DWORD *)v57 + 4) + 312;
          }
          else
          {
LABEL_37:
            v58 = sub_AF54C0(v51, SimpleAnimation_State_TypeInfo, 4LL, v53);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v58)(v54, *(_QWORD *)(v58 + 8), 0.0);
          v60 = *(_QWORD *)v54;
          if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
          {
            v61 = 0LL;
            v62 = (SimpleAnimation_State_c **)(*(_QWORD *)(v60 + 176) + 8LL);
            while ( *(v62 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v61;
              v62 += 2;
              if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
                goto LABEL_43;
            }
            v63 = v60 + 16LL * (*(_DWORD *)v62 + 1) + 312;
          }
          else
          {
LABEL_43:
            v63 = sub_AF54C0(v54, SimpleAnimation_State_TypeInfo, 1LL, v59);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v63)(v54, 0LL, *(_QWORD *)(v63 + 8));
        }
        v91[0] = 178;
        v92 = 1;
        v64 = *(_QWORD *)v41;
        if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
        {
          v65 = 0LL;
          v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
          {
            ++v65;
            v66 += 4;
            if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
              goto LABEL_50;
          }
          v67 = v64 + 16LL * *v66 + 312;
        }
        else
        {
LABEL_50:
          v67 = sub_AF54C0(v41, System_IDisposable_TypeInfo, 0LL, v46);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v67)(v41, *(_QWORD *)(v67 + 8));
        v92 = 0;
        return;
      }
    }
LABEL_90:
    sub_B5D69C(gameObject, v30);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_90;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v32, 0LL);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v32, 0LL);
    if ( !Enumerator )
      sub_B5D69C(0LL, v68);
    while ( 1 )
    {
      v71 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v72 = 0LL;
        v73 = &v71->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v73 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v72;
          v73 += 4;
          if ( v72 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_63;
        }
        p_method = (__int64)&v71->vtable[*v73].method;
      }
      else
      {
LABEL_63:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v69);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v76 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v77 = 0LL;
        v78 = (System_Collections_IEnumerator_c **)&v76->_1.interfaceOffsets->offset;
        while ( *(v78 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v77;
          v78 += 2;
          if ( v77 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_70;
        }
        v79 = (__int64)&v76->vtable[*(_DWORD *)v78 + 1].method;
      }
      else
      {
LABEL_70:
        v79 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v75);
      }
      v80 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v79)(
                                              Enumerator,
                                              *(_QWORD *)(v79 + 8));
      v82 = v80;
      if ( !v80 )
        sub_B5D69C(0LL, v81);
      if ( v80->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_B5D990(v80);
        goto LABEL_90;
      }
      UnityEngine_AnimationState__set_time(v80, 0.0, 0LL);
      UnityEngine_AnimationState__set_enabled(v82, 0, 0LL);
    }
    *(_DWORD *)((unsigned __int64)v91 & 0xFFFFFFFFFFFFFFFBLL) = 178;
    v83 = ++v92;
    v84 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
    if ( v84 )
    {
      v86 = *(_QWORD *)v84;
      v87 = v84;
      if ( *(_WORD *)(*(_QWORD *)v84 + 298LL) )
      {
        v88 = 0LL;
        v89 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v89 - 1) != System_IDisposable_TypeInfo )
        {
          ++v88;
          v89 += 4;
          if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v84 + 298LL) )
            goto LABEL_80;
        }
        v90 = v86 + 16LL * *v89 + 312;
      }
      else
      {
LABEL_80:
        v90 = sub_AF54C0(v84, System_IDisposable_TypeInfo, 0LL, v85);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v90)(v87, *(_QWORD *)(v90 + 8));
    }
    if ( v83 && v91[v83 - 1] == 178 )
      v92 = v83 - 1;
  }
}


bool __fastcall BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = *(System_String_o **)&this->fields.isLoadEndPlay;
  if ( v3 )
    LOBYTE(v3) = System_String__Equals_44565128(v3, key, 0LL);
  return (char)v3;
}


BattleBgComponent_SaveData_o *__fastcall BattleBgComponent__getSaveData(
        BattleBgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v35; // x20
  __int64 v36; // x19
  __int64 v37; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v39; // x21
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x3
  __int64 v45; // x21
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x3
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x3
  __int64 v58; // x22
  __int64 v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  SimpleAnimation_State_c **v65; // x11
  __int64 v66; // x0
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x3
  __int64 v75; // x8
  unsigned __int64 v76; // x10
  SimpleAnimation_State_c **v77; // x11
  __int64 v78; // x0
  __int64 v79; // x8
  unsigned __int64 v80; // x10
  int *v81; // x11
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v86; // x8
  unsigned __int64 v87; // x10
  int32_t *v88; // x11
  __int64 p_method; // x0
  __int64 v90; // x3
  System_Collections_IEnumerator_c *v91; // x8
  unsigned __int64 v92; // x10
  System_Collections_IEnumerator_c **v93; // x11
  __int64 v94; // x0
  UnityEngine_AnimationState_o *v95; // x0
  __int64 v96; // x1
  UnityEngine_AnimationState_o *v97; // x21
  System_Int32_array **name; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  int v105; // w25
  __int64 v106; // x0
  __int64 v107; // x3
  __int64 v108; // x8
  __int64 v109; // x20
  unsigned __int64 v110; // x10
  int *v111; // x11
  __int64 v112; // x0
  int v114[4]; // [xsp+8h] [xbp-58h] BYREF
  int v115; // [xsp+18h] [xbp-48h]

  if ( (byte_42EC0F4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationState_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&BattleBgComponent_SaveData_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v29, v30, v31);
    byte_42EC0F4 = 1;
  }
  v115 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  v35 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v36 = sub_B5D694(BattleBgComponent_SaveData_TypeInfo);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v36, 0LL);
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
        v39 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v40 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v40;
            p_offset += 4;
            if ( v40 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v42 = sub_AF54C0(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v37);
        }
        v45 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
        if ( !v45 )
          sub_B5D69C(0LL, v43);
        while ( 1 )
        {
          v46 = *(_QWORD *)v45;
          if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
          {
            v47 = 0LL;
            v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v47;
              v48 += 4;
              if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
                goto LABEL_23;
            }
            v49 = v46 + 16LL * *v48 + 312;
          }
          else
          {
LABEL_23:
            v49 = sub_AF54C0(v45, System_Collections_IEnumerator_TypeInfo, 0LL, v44);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
            break;
          v51 = *(_QWORD *)v45;
          if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
          {
            v52 = 0LL;
            v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v53 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v52;
              v53 += 4;
              if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
                goto LABEL_30;
            }
            v54 = v51 + 16LL * *v53 + 312;
          }
          else
          {
LABEL_30:
            v54 = sub_AF54C0(v45, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v50);
          }
          v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v45, *(_QWORD *)(v54 + 8));
          v58 = v55;
          if ( !v55 )
            sub_B5D69C(0LL, v56);
          v59 = *(_QWORD *)v55;
          if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
          {
            v60 = 0LL;
            v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v61 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v60;
              v61 += 4;
              if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
                goto LABEL_37;
            }
            v62 = v59 + 16LL * *v61 + 312;
          }
          else
          {
LABEL_37:
            v62 = sub_AF54C0(v55, SimpleAnimation_State_TypeInfo, 0LL, v57);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v58, *(_QWORD *)(v62 + 8)) & 1) != 0 )
          {
            v63 = *(_QWORD *)v58;
            if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
            {
              v64 = 0LL;
              v65 = (SimpleAnimation_State_c **)(*(_QWORD *)(v63 + 176) + 8LL);
              while ( *(v65 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v64;
                v65 += 2;
                if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
                  goto LABEL_44;
              }
              v66 = v63 + 16LL * (*(_DWORD *)v65 + 9) + 312;
            }
            else
            {
LABEL_44:
              v66 = sub_AF54C0(v58, SimpleAnimation_State_TypeInfo, 9LL, v44);
            }
            v67 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v58, *(_QWORD *)(v66 + 8));
            if ( !v36 )
              sub_B5D69C(v67, v67);
            *(_QWORD *)(v36 + 16) = v67;
            sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), v67, v68, v69, v70, v71, v72, v73);
            v75 = *(_QWORD *)v58;
            if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
            {
              v76 = 0LL;
              v77 = (SimpleAnimation_State_c **)(*(_QWORD *)(v75 + 176) + 8LL);
              while ( *(v77 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v76;
                v77 += 2;
                if ( v76 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
                  goto LABEL_52;
              }
              v78 = v75 + 16LL * (*(_DWORD *)v77 + 3) + 312;
            }
            else
            {
LABEL_52:
              v78 = sub_AF54C0(v58, SimpleAnimation_State_TypeInfo, 3LL, v74);
            }
            *(float *)(v36 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v78)(v58, *(_QWORD *)(v78 + 8));
            break;
          }
        }
        v114[0] = 220;
        v115 = 1;
        v79 = *(_QWORD *)v45;
        if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
        {
          v80 = 0LL;
          v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
          {
            ++v80;
            v81 += 4;
            if ( v80 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
              goto LABEL_59;
          }
          v82 = v79 + 16LL * *v81 + 312;
        }
        else
        {
LABEL_59:
          v82 = sub_AF54C0(v45, System_IDisposable_TypeInfo, 0LL, v50);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v82)(v45, *(_QWORD *)(v82 + 8));
        v115 = 0;
        return (BattleBgComponent_SaveData_o *)v36;
      }
    }
LABEL_101:
    sub_B5D69C(gameObject, v33);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v36;
  if ( !v35 )
    goto LABEL_101;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v35, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v83);
  while ( 1 )
  {
    v86 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v87 = 0LL;
      v88 = &v86->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v88 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v87;
        v88 += 4;
        if ( v87 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_72;
      }
      p_method = (__int64)&v86->vtable[*v88].method;
    }
    else
    {
LABEL_72:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v84);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v91 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v92 = 0LL;
      v93 = (System_Collections_IEnumerator_c **)&v91->_1.interfaceOffsets->offset;
      while ( *(v93 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v92;
        v93 += 2;
        if ( v92 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_79;
      }
      v94 = (__int64)&v91->vtable[*(_DWORD *)v93 + 1].method;
    }
    else
    {
LABEL_79:
      v94 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v90);
    }
    v95 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v94)(
                                            Enumerator,
                                            *(_QWORD *)(v94 + 8));
    v97 = v95;
    if ( !v95 )
      goto LABEL_100;
    if ( v95->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_B5D990(v95);
LABEL_100:
      sub_B5D69C(v95, v96);
    }
    if ( UnityEngine_AnimationState__get_enabled(v95, 0LL) )
    {
      name = (System_Int32_array **)UnityEngine_AnimationState__get_name(v97, 0LL);
      if ( !v36 )
        sub_B5D69C(name, name);
      *(_QWORD *)(v36 + 16) = name;
      sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), name, v99, v100, v101, v102, v103, v104);
      *(float *)(v36 + 24) = UnityEngine_AnimationState__get_time(v97, 0LL);
      break;
    }
  }
  *(_DWORD *)((unsigned __int64)v114 & 0xFFFFFFFFFFFFFFFBLL) = 220;
  v105 = ++v115;
  v106 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v106 )
  {
    v108 = *(_QWORD *)v106;
    v109 = v106;
    if ( *(_WORD *)(*(_QWORD *)v106 + 298LL) )
    {
      v110 = 0LL;
      v111 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v111 - 1) != System_IDisposable_TypeInfo )
      {
        ++v110;
        v111 += 4;
        if ( v110 >= *(unsigned __int16 *)(*(_QWORD *)v106 + 298LL) )
          goto LABEL_91;
      }
      v112 = v108 + 16LL * *v111 + 312;
    }
    else
    {
LABEL_91:
      v112 = sub_AF54C0(v106, System_IDisposable_TypeInfo, 0LL, v107);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v112)(v109, *(_QWORD *)(v112 + 8));
  }
  if ( v105 && v114[v105 - 1] == 220 )
    v115 = v105 - 1;
  return (BattleBgComponent_SaveData_o *)v36;
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
  __int64 v3; // x3
  long double v4; // q8
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v20; // x21
  __int64 v21; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v23; // x21
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v26; // x0

  if ( (byte_42EC0F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)save, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v13, v14, v15);
    byte_42EC0F5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_29;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_29;
  if ( animName->fields.m_stringLength < 1 )
    return;
  v20 = (UnityEngine_Object_o *)gameObject;
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v20 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v20,
                                                 save->fields.animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, save->fields.timeline, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v20, 0LL);
        UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v20, save->fields.animName, 0LL);
        return;
      }
    }
LABEL_29:
    sub_B5D69C(gameObject, v17);
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
  *(float *)&v4 = save->fields.timeline;
  v23 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v24;
      p_offset += 2;
      if ( v24 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v26 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v26 = sub_AF54C0(gameObject, SimpleAnimation_State_TypeInfo, 4LL, v21);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v26)(v23, *(_QWORD *)(v26 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16676044((SimpleAnimation_o *)Component_srcLineSprite, save->fields.animName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBgComponent__playAnimation(
        BattleBgComponent_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  __int64 v4; // x3
  long double v5; // q8
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v20; // x21
  __int64 v21; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v23; // x21
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v26; // x0

  v5 = *(long double *)&timeline;
  if ( (byte_42EC0F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)animName, (_DWORD)method, v4);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v14, v15, v16);
    byte_42EC0F0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v20 )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v20,
                                                 animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, *(float *)&v5, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v20, 0LL);
        UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v20, animName, 0LL);
        return;
      }
    }
LABEL_26:
    sub_B5D69C(gameObject, v18);
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
  v23 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v24;
      p_offset += 2;
      if ( v24 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v26 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v26 = sub_AF54C0(gameObject, SimpleAnimation_State_TypeInfo, 4LL, v21);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v26)(v23, *(_QWORD *)(v26 + 8), v5);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16676044((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
}


void __fastcall BattleBgComponent__playCameraAnimation(
        BattleBgComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *klass; // x21
  __int64 v7; // x1
  BattleActionCamera_o *v8; // x0

  if ( (byte_42EC0F3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42EC0F3 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    v8 = (BattleActionCamera_o *)this[1].klass;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    BattleActionCamera__playCameraAnimation(v8, name, 0LL);
  }
}


void __fastcall BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v14; // x19

  if ( (byte_42EC0F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EC0F1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    sub_B5D69C(gameObject, v12);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_20;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v14, 0LL) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v14, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0LL);
}


void __fastcall BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *klass; // x20
  __int64 v8; // x1
  BattleActionCamera_o *v9; // x0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC0F2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EC0F2 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    v9 = (BattleActionCamera_o *)this[1].klass;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    v10.fields.x = power * 0.1;
    v10.fields.z = power * 0.0;
    v10.fields.y = power * 0.1;
    BattleActionCamera__ShakePosition(v9, v10, 1.0, 0LL);
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

  if ( (byte_42E7BDD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7BDD = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}