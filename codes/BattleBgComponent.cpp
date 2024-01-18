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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v14; // x19
  __int64 v15; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v17; // x20
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  __int64 v23; // x20
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x3
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x3
  __int64 v36; // x21
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  SimpleAnimation_State_c **v39; // x11
  __int64 v40; // x0
  __int64 v41; // x3
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  SimpleAnimation_State_c **v44; // x11
  __int64 v45; // x0
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 p_method; // x0
  __int64 v57; // x3
  System_Collections_IEnumerator_c *v58; // x8
  unsigned __int64 v59; // x10
  System_Collections_IEnumerator_c **v60; // x11
  __int64 v61; // x0
  UnityEngine_AnimationState_o *v62; // x0
  __int64 v63; // x1
  UnityEngine_AnimationState_o *v64; // x20
  int v65; // w23
  __int64 v66; // x0
  __int64 v67; // x3
  __int64 v68; // x8
  __int64 v69; // x19
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  int v73[2]; // [xsp+0h] [xbp-50h] BYREF
  int v74; // [xsp+8h] [xbp-48h]

  if ( (byte_418AC54 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v10);
    byte_418AC54 = 1;
  }
  v74 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_90;
  v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v17 = gameObject;
        if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
        {
          v18 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v18;
            p_offset += 4;
            if ( v18 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          v20 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_15:
          v20 = sub_AC5258(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v15);
        }
        v23 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8));
        if ( !v23 )
          sub_B2C434(0LL, v21);
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
            v27 = sub_AC5258(v23, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
            break;
          v29 = *(_QWORD *)v23;
          if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
          {
            v30 = 0LL;
            v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v31 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
                goto LABEL_30;
            }
            v32 = v29 + 16LL * *v31 + 312;
          }
          else
          {
LABEL_30:
            v32 = sub_AC5258(v23, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v28);
          }
          v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v23, *(_QWORD *)(v32 + 8));
          v36 = v33;
          if ( !v33 )
            sub_B2C434(0LL, v34);
          v37 = *(_QWORD *)v33;
          if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
          {
            v38 = 0LL;
            v39 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
            while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v38;
              v39 += 2;
              if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
                goto LABEL_37;
            }
            v40 = v37 + 16LL * (*(_DWORD *)v39 + 4) + 312;
          }
          else
          {
LABEL_37:
            v40 = sub_AC5258(v33, SimpleAnimation_State_TypeInfo, 4LL, v35);
          }
          (*(void (__fastcall **)(__int64, _QWORD, float))v40)(v36, *(_QWORD *)(v40 + 8), 0.0);
          v42 = *(_QWORD *)v36;
          if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
          {
            v43 = 0LL;
            v44 = (SimpleAnimation_State_c **)(*(_QWORD *)(v42 + 176) + 8LL);
            while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v43;
              v44 += 2;
              if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
                goto LABEL_43;
            }
            v45 = v42 + 16LL * (*(_DWORD *)v44 + 1) + 312;
          }
          else
          {
LABEL_43:
            v45 = sub_AC5258(v36, SimpleAnimation_State_TypeInfo, 1LL, v41);
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v45)(v36, 0LL, *(_QWORD *)(v45 + 8));
        }
        v73[0] = 178;
        v74 = 1;
        v46 = *(_QWORD *)v23;
        if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
        {
          v47 = 0LL;
          v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
          {
            ++v47;
            v48 += 4;
            if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
              goto LABEL_50;
          }
          v49 = v46 + 16LL * *v48 + 312;
        }
        else
        {
LABEL_50:
          v49 = sub_AC5258(v23, System_IDisposable_TypeInfo, 0LL, v28);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v49)(v23, *(_QWORD *)(v49 + 8));
        v74 = 0;
        return;
      }
    }
LABEL_90:
    sub_B2C434(gameObject, v12);
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
      goto LABEL_90;
    UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v14, 0LL);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v14, 0LL);
    if ( !Enumerator )
      sub_B2C434(0LL, v50);
    while ( 1 )
    {
      v53 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v54 = 0LL;
        v55 = &v53->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v54;
          v55 += 4;
          if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_63;
        }
        p_method = (__int64)&v53->vtable[*v55].method;
      }
      else
      {
LABEL_63:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v51);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v58 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v59 = 0LL;
        v60 = (System_Collections_IEnumerator_c **)&v58->_1.interfaceOffsets->offset;
        while ( *(v60 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v59;
          v60 += 2;
          if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_70;
        }
        v61 = (__int64)&v58->vtable[*(_DWORD *)v60 + 1].method;
      }
      else
      {
LABEL_70:
        v61 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v57);
      }
      v62 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v61)(
                                              Enumerator,
                                              *(_QWORD *)(v61 + 8));
      v64 = v62;
      if ( !v62 )
        sub_B2C434(0LL, v63);
      if ( v62->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_B2C728(v62);
        goto LABEL_90;
      }
      UnityEngine_AnimationState__set_time(v62, 0.0, 0LL);
      UnityEngine_AnimationState__set_enabled(v64, 0, 0LL);
    }
    *(_DWORD *)((unsigned __int64)v73 & 0xFFFFFFFFFFFFFFFBLL) = 178;
    v65 = ++v74;
    v66 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
    if ( v66 )
    {
      v68 = *(_QWORD *)v66;
      v69 = v66;
      if ( *(_WORD *)(*(_QWORD *)v66 + 298LL) )
      {
        v70 = 0LL;
        v71 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
        {
          ++v70;
          v71 += 4;
          if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v66 + 298LL) )
            goto LABEL_80;
        }
        v72 = v68 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_80:
        v72 = sub_AC5258(v66, System_IDisposable_TypeInfo, 0LL, v67);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v72)(v69, *(_QWORD *)(v72 + 8));
    }
    if ( v65 && v73[v65 - 1] == 178 )
      v74 = v65 - 1;
  }
}


bool __fastcall BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = *(System_String_o **)&this->fields.isLoadEndPlay;
  if ( v3 )
    LOBYTE(v3) = System_String__Equals_44292872(v3, key, 0LL);
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
  __int64 v13; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x19
  __int64 v17; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v19; // x21
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  __int64 v25; // x21
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x3
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  __int64 v38; // x22
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  SimpleAnimation_State_c **v45; // x11
  __int64 v46; // x0
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x3
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  SimpleAnimation_State_c **v57; // x11
  __int64 v58; // x0
  __int64 v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x3
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 p_method; // x0
  __int64 v70; // x3
  System_Collections_IEnumerator_c *v71; // x8
  unsigned __int64 v72; // x10
  System_Collections_IEnumerator_c **v73; // x11
  __int64 v74; // x0
  UnityEngine_AnimationState_o *v75; // x0
  __int64 v76; // x1
  UnityEngine_AnimationState_o *v77; // x21
  System_Int32_array **name; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  int v85; // w25
  __int64 v86; // x0
  __int64 v87; // x3
  __int64 v88; // x8
  __int64 v89; // x20
  unsigned __int64 v90; // x10
  int *v91; // x11
  __int64 v92; // x0
  int v94[4]; // [xsp+8h] [xbp-58h] BYREF
  int v95; // [xsp+18h] [xbp-48h]

  if ( (byte_418AC52 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&BattleBgComponent_SaveData_TypeInfo, v10);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v11);
    byte_418AC52 = 1;
  }
  v95 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v16 = sub_B2C42C(BattleBgComponent_SaveData_TypeInfo);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v16, 0LL);
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
          v22 = sub_AC5258(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v17);
        }
        v25 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
        if ( !v25 )
          sub_B2C434(0LL, v23);
        while ( 1 )
        {
          v26 = *(_QWORD *)v25;
          if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
          {
            v27 = 0LL;
            v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                goto LABEL_23;
            }
            v29 = v26 + 16LL * *v28 + 312;
          }
          else
          {
LABEL_23:
            v29 = sub_AC5258(v25, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
            break;
          v31 = *(_QWORD *)v25;
          if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
          {
            v32 = 0LL;
            v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v33 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                goto LABEL_30;
            }
            v34 = v31 + 16LL * *v33 + 312;
          }
          else
          {
LABEL_30:
            v34 = sub_AC5258(v25, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v30);
          }
          v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v25, *(_QWORD *)(v34 + 8));
          v38 = v35;
          if ( !v35 )
            sub_B2C434(0LL, v36);
          v39 = *(_QWORD *)v35;
          if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
          {
            v40 = 0LL;
            v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v41 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v40;
              v41 += 4;
              if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
                goto LABEL_37;
            }
            v42 = v39 + 16LL * *v41 + 312;
          }
          else
          {
LABEL_37:
            v42 = sub_AC5258(v35, SimpleAnimation_State_TypeInfo, 0LL, v37);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) != 0 )
          {
            v43 = *(_QWORD *)v38;
            if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
            {
              v44 = 0LL;
              v45 = (SimpleAnimation_State_c **)(*(_QWORD *)(v43 + 176) + 8LL);
              while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v44;
                v45 += 2;
                if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                  goto LABEL_44;
              }
              v46 = v43 + 16LL * (*(_DWORD *)v45 + 9) + 312;
            }
            else
            {
LABEL_44:
              v46 = sub_AC5258(v38, SimpleAnimation_State_TypeInfo, 9LL, v24);
            }
            v47 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
            if ( !v16 )
              sub_B2C434(v47, v47);
            *(_QWORD *)(v16 + 16) = v47;
            sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), v47, v48, v49, v50, v51, v52, v53);
            v55 = *(_QWORD *)v38;
            if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
            {
              v56 = 0LL;
              v57 = (SimpleAnimation_State_c **)(*(_QWORD *)(v55 + 176) + 8LL);
              while ( *(v57 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v56;
                v57 += 2;
                if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                  goto LABEL_52;
              }
              v58 = v55 + 16LL * (*(_DWORD *)v57 + 3) + 312;
            }
            else
            {
LABEL_52:
              v58 = sub_AC5258(v38, SimpleAnimation_State_TypeInfo, 3LL, v54);
            }
            *(float *)(v16 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v58)(v38, *(_QWORD *)(v58 + 8));
            break;
          }
        }
        v94[0] = 220;
        v95 = 1;
        v59 = *(_QWORD *)v25;
        if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
        {
          v60 = 0LL;
          v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
          {
            ++v60;
            v61 += 4;
            if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
              goto LABEL_59;
          }
          v62 = v59 + 16LL * *v61 + 312;
        }
        else
        {
LABEL_59:
          v62 = sub_AC5258(v25, System_IDisposable_TypeInfo, 0LL, v30);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v62)(v25, *(_QWORD *)(v62 + 8));
        v95 = 0;
        return (BattleBgComponent_SaveData_o *)v16;
      }
    }
LABEL_101:
    sub_B2C434(gameObject, v13);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return (BattleBgComponent_SaveData_o *)v16;
  if ( !v15 )
    goto LABEL_101;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v15, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v63);
  while ( 1 )
  {
    v66 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v67 = 0LL;
      v68 = &v66->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v67;
        v68 += 4;
        if ( v67 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_72;
      }
      p_method = (__int64)&v66->vtable[*v68].method;
    }
    else
    {
LABEL_72:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v64);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v71 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v72 = 0LL;
      v73 = (System_Collections_IEnumerator_c **)&v71->_1.interfaceOffsets->offset;
      while ( *(v73 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v72;
        v73 += 2;
        if ( v72 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_79;
      }
      v74 = (__int64)&v71->vtable[*(_DWORD *)v73 + 1].method;
    }
    else
    {
LABEL_79:
      v74 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v70);
    }
    v75 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v74)(
                                            Enumerator,
                                            *(_QWORD *)(v74 + 8));
    v77 = v75;
    if ( !v75 )
      goto LABEL_100;
    if ( v75->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_B2C728(v75);
LABEL_100:
      sub_B2C434(v75, v76);
    }
    if ( UnityEngine_AnimationState__get_enabled(v75, 0LL) )
    {
      name = (System_Int32_array **)UnityEngine_AnimationState__get_name(v77, 0LL);
      if ( !v16 )
        sub_B2C434(name, name);
      *(_QWORD *)(v16 + 16) = name;
      sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), name, v79, v80, v81, v82, v83, v84);
      *(float *)(v16 + 24) = UnityEngine_AnimationState__get_time(v77, 0LL);
      break;
    }
  }
  *(_DWORD *)((unsigned __int64)v94 & 0xFFFFFFFFFFFFFFFBLL) = 220;
  v85 = ++v95;
  v86 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v86 )
  {
    v88 = *(_QWORD *)v86;
    v89 = v86;
    if ( *(_WORD *)(*(_QWORD *)v86 + 298LL) )
    {
      v90 = 0LL;
      v91 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
      {
        ++v90;
        v91 += 4;
        if ( v90 >= *(unsigned __int16 *)(*(_QWORD *)v86 + 298LL) )
          goto LABEL_91;
      }
      v92 = v88 + 16LL * *v91 + 312;
    }
    else
    {
LABEL_91:
      v92 = sub_AC5258(v86, System_IDisposable_TypeInfo, 0LL, v87);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v92)(v89, *(_QWORD *)(v92 + 8));
  }
  if ( v85 && v94[v85 - 1] == 220 )
    v95 = v85 - 1;
  return (BattleBgComponent_SaveData_o *)v16;
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
  __int64 v10; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v16; // x21
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v19; // x0

  if ( (byte_418AC53 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, save);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v8);
    byte_418AC53 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_29;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_29;
  if ( animName->fields.m_stringLength < 1 )
    return;
  v13 = (UnityEngine_Object_o *)gameObject;
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
        UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v13, save->fields.animName, 0LL);
        return;
      }
    }
LABEL_29:
    sub_B2C434(gameObject, v10);
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
  v16 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v17;
      p_offset += 2;
      if ( v17 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v19 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_18:
    v19 = sub_AC5258(gameObject, SimpleAnimation_State_TypeInfo, 4LL, v14);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v19)(v16, *(_QWORD *)(v19 + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16486620((SimpleAnimation_o *)Component_srcLineSprite, save->fields.animName, 0LL);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v16; // x21
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v19; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_418AC4E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, animName);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v9);
    byte_418AC4E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  v13 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
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
        UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v13, animName, 0LL);
        return;
      }
    }
LABEL_26:
    sub_B2C434(gameObject, v11);
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
  v16 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v17;
      p_offset += 2;
      if ( v17 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v19 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v19 = sub_AC5258(gameObject, SimpleAnimation_State_TypeInfo, 4LL, v14);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, long double))v19)(v16, *(_QWORD *)(v19 + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16486620((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
}


void __fastcall BattleBgComponent__playCameraAnimation(
        BattleBgComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0

  if ( (byte_418AC51 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    byte_418AC51 = 1;
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
      sub_B2C434(0LL, v6);
    BattleActionCamera__playCameraAnimation(v7, name, 0LL);
  }
}


void __fastcall BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v8; // x19

  if ( (byte_418AC4F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418AC4F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  v8 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    sub_B2C434(gameObject, v6);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_20;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v8, 0LL) )
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v8, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C434(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0LL);
}


void __fastcall BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  __int64 v6; // x1
  BattleActionCamera_o *v7; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418AC50 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AC50 = 1;
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
      sub_B2C434(0LL, v6);
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

  if ( (byte_4186A25 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4186A25 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.animName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}