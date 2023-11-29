void __fastcall BattleBgComponent___ctor(BattleBgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall BattleBgComponent__checkKey(BattleBgComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = *(System_String_o **)&this->fields.isLoadEndPlay;
  if ( v3 )
    LOBYTE(v3) = System_String__Equals_43731072(v3, key, 0LL);
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
  SimpleAnimation_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x19
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *States; // x0
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__c *klass; // x8
  System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *v23; // x21
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x21
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x22
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  SimpleAnimation_State_c **v44; // x11
  __int64 v45; // x0
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  SimpleAnimation_State_c **v55; // x11
  __int64 v56; // x0
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v62; // x8
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  System_Collections_IEnumerator_c *v66; // x8
  unsigned __int64 v67; // x10
  System_Collections_IEnumerator_c **v68; // x11
  __int64 v69; // x0
  UnityEngine_AnimationState_o *v70; // x0
  UnityEngine_AnimationState_o *v71; // x21
  System_Int32_array **name; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  int v79; // w25
  __int64 v80; // x0
  __int64 v81; // x8
  __int64 v82; // x20
  unsigned __int64 v83; // x10
  int *v84; // x11
  __int64 v85; // x0
  int v87[4]; // [xsp+8h] [xbp-58h] BYREF
  int v88; // [xsp+18h] [xbp-48h]

  if ( (byte_40FD39A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&BattleBgComponent_SaveData_TypeInfo, v10);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v11);
    byte_40FD39A = 1;
  }
  v88 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_101;
  Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v14 )
    goto LABEL_101;
  v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v14,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  v20 = sub_B170CC(BattleBgComponent_SaveData_TypeInfo, v16, v17, v18, v19);
  BattleBgComponent_SaveData___ctor((BattleBgComponent_SaveData_o *)v20, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      States = SimpleAnimation__GetStates(Component_srcLineSprite, 0LL);
      if ( States )
      {
        klass = States->klass;
        v23 = States;
        if ( *(_WORD *)&States->klass->_2.bitflags1 )
        {
          v24 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            ++v24;
            p_offset += 4;
            if ( v24 >= *(unsigned __int16 *)&States->klass->_2.bitflags1 )
              goto LABEL_15;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_15:
          p_method = sub_AAFEF8(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
        }
        v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_SimpleAnimation_State__o *, _QWORD))p_method)(
                v23,
                *(_QWORD *)(p_method + 8));
        if ( !v27 )
          sub_B170D4();
        while ( 1 )
        {
          v28 = *(_QWORD *)v27;
          if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
          {
            v29 = 0LL;
            v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
                goto LABEL_23;
            }
            v31 = v28 + 16LL * *v30 + 312;
          }
          else
          {
LABEL_23:
            v31 = sub_AAFEF8(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
            break;
          v32 = *(_QWORD *)v27;
          if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
          {
            v33 = 0LL;
            v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v34 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              ++v33;
              v34 += 4;
              if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
                goto LABEL_30;
            }
            v35 = v32 + 16LL * *v34 + 312;
          }
          else
          {
LABEL_30:
            v35 = sub_AAFEF8(v27, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
          }
          v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
          v37 = v36;
          if ( !v36 )
            sub_B170D4();
          v38 = *(_QWORD *)v36;
          if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
          {
            v39 = 0LL;
            v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
            while ( *((SimpleAnimation_State_c **)v40 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v39;
              v40 += 4;
              if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
                goto LABEL_37;
            }
            v41 = v38 + 16LL * *v40 + 312;
          }
          else
          {
LABEL_37:
            v41 = sub_AAFEF8(v36, SimpleAnimation_State_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) != 0 )
          {
            v42 = *(_QWORD *)v37;
            if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
            {
              v43 = 0LL;
              v44 = (SimpleAnimation_State_c **)(*(_QWORD *)(v42 + 176) + 8LL);
              while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v43;
                v44 += 2;
                if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
                  goto LABEL_44;
              }
              v45 = v42 + 16LL * (*(_DWORD *)v44 + 9) + 312;
            }
            else
            {
LABEL_44:
              v45 = sub_AAFEF8(v37, SimpleAnimation_State_TypeInfo, 9LL);
            }
            v46 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v37, *(_QWORD *)(v45 + 8));
            if ( !v20 )
              sub_B170D4();
            *(_QWORD *)(v20 + 16) = v46;
            sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), v46, v47, v48, v49, v50, v51, v52);
            v53 = *(_QWORD *)v37;
            if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
            {
              v54 = 0LL;
              v55 = (SimpleAnimation_State_c **)(*(_QWORD *)(v53 + 176) + 8LL);
              while ( *(v55 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v54;
                v55 += 2;
                if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
                  goto LABEL_52;
              }
              v56 = v53 + 16LL * (*(_DWORD *)v55 + 3) + 312;
            }
            else
            {
LABEL_52:
              v56 = sub_AAFEF8(v37, SimpleAnimation_State_TypeInfo, 3LL);
            }
            *(float *)(v20 + 24) = (*(float (__fastcall **)(__int64, _QWORD))v56)(v37, *(_QWORD *)(v56 + 8));
            break;
          }
        }
        v87[0] = 220;
        v88 = 1;
        v57 = *(_QWORD *)v27;
        if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
        {
          v58 = 0LL;
          v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
          {
            ++v58;
            v59 += 4;
            if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
              goto LABEL_59;
          }
          v60 = v57 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_59:
          v60 = sub_AAFEF8(v27, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v60)(v27, *(_QWORD *)(v60 + 8));
        v88 = 0;
        return (BattleBgComponent_SaveData_o *)v20;
      }
    }
LABEL_101:
    sub_B170D4();
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    return (BattleBgComponent_SaveData_o *)v20;
  if ( !v15 )
    goto LABEL_101;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v15, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    v62 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v63 = 0LL;
      v64 = &v62->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v63;
        v64 += 4;
        if ( v63 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_72;
      }
      v65 = (__int64)&v62->vtable[*v64].method;
    }
    else
    {
LABEL_72:
      v65 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v65)(Enumerator, *(_QWORD *)(v65 + 8)) & 1) == 0 )
      break;
    v66 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v67 = 0LL;
      v68 = (System_Collections_IEnumerator_c **)&v66->_1.interfaceOffsets->offset;
      while ( *(v68 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v67;
        v68 += 2;
        if ( v67 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_79;
      }
      v69 = (__int64)&v66->vtable[*(_DWORD *)v68 + 1].method;
    }
    else
    {
LABEL_79:
      v69 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v70 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v69)(
                                            Enumerator,
                                            *(_QWORD *)(v69 + 8));
    v71 = v70;
    if ( !v70 )
      goto LABEL_100;
    if ( v70->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_B173C8(v70);
LABEL_100:
      sub_B170D4();
    }
    if ( UnityEngine_AnimationState__get_enabled(v70, 0LL) )
    {
      name = (System_Int32_array **)UnityEngine_AnimationState__get_name(v71, 0LL);
      if ( !v20 )
        sub_B170D4();
      *(_QWORD *)(v20 + 16) = name;
      sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), name, v73, v74, v75, v76, v77, v78);
      *(float *)(v20 + 24) = UnityEngine_AnimationState__get_time(v71, 0LL);
      break;
    }
  }
  *(_DWORD *)((unsigned __int64)v87 & 0xFFFFFFFFFFFFFFFBLL) = 220;
  v79 = ++v88;
  v80 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v80 )
  {
    v81 = *(_QWORD *)v80;
    v82 = v80;
    if ( *(_WORD *)(*(_QWORD *)v80 + 298LL) )
    {
      v83 = 0LL;
      v84 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
      {
        ++v83;
        v84 += 4;
        if ( v83 >= *(unsigned __int16 *)(*(_QWORD *)v80 + 298LL) )
          goto LABEL_91;
      }
      v85 = v81 + 16LL * *v84 + 312;
    }
    else
    {
LABEL_91:
      v85 = sub_AAFEF8(v80, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v85)(v82, *(_QWORD *)(v85 + 8));
  }
  if ( v79 && v87[v79 - 1] == 220 )
    v88 = v79 - 1;
  return (BattleBgComponent_SaveData_o *)v20;
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
  UnityEngine_GameObject_o *v11; // x0
  srcLineSprite_o *v12; // x0
  struct System_String_o *animName; // x8
  UnityEngine_Object_o *v14; // x21
  SimpleAnimation_State_o *v15; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x21
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_AnimationState_o *Item; // x0

  if ( (byte_40FD39B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, save);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v8);
    byte_40FD39B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v11 )
    goto LABEL_29;
  v12 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v11,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !save )
    goto LABEL_29;
  animName = save->fields.animName;
  if ( !animName )
    goto LABEL_29;
  if ( animName->fields.m_stringLength < 1 )
    return;
  v14 = (UnityEngine_Object_o *)v12;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
      return;
    if ( v14 )
    {
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v14, save->fields.animName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, save->fields.timeline, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v14, 0LL);
        UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v14, save->fields.animName, 0LL);
        return;
      }
    }
LABEL_29:
    sub_B170D4();
  }
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  v15 = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_srcLineSprite, save->fields.animName, 0LL);
  if ( !v15 )
    goto LABEL_29;
  klass = v15->klass;
  *(float *)&v3 = save->fields.timeline;
  v17 = v15;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v18;
      p_offset += 2;
      if ( v18 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_18:
    p_method = sub_AAFEF8(v15, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(v17, *(_QWORD *)(p_method + 8), v3);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16380456((SimpleAnimation_o *)Component_srcLineSprite, save->fields.animName, 0LL);
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
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Object_o *v13; // x21
  SimpleAnimation_State_o *v14; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v16; // x21
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_AnimationState_o *Item; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_40FD396 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, animName);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v9);
    byte_40FD396 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    goto LABEL_26;
  v13 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v12,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
      return;
    if ( v13 )
    {
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v13, animName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, *(float *)&v4, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v13, 0LL);
        UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v13, animName, 0LL);
        return;
      }
    }
LABEL_26:
    sub_B170D4();
  }
  if ( !Component_srcLineSprite )
    goto LABEL_26;
  v14 = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
  if ( !v14 )
    goto LABEL_26;
  klass = v14->klass;
  v16 = v14;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v17;
      p_offset += 2;
      if ( v17 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_15:
    p_method = sub_AAFEF8(v14, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(v16, *(_QWORD *)(p_method + 8), v4);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16380456((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
}


void __fastcall BattleBgComponent__playCameraAnimation(
        BattleBgComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  BattleActionCamera_o *v6; // x0

  if ( (byte_40FD399 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    byte_40FD399 = 1;
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
      sub_B170D4();
    BattleActionCamera__playCameraAnimation(v6, name, 0LL);
  }
}


void __fastcall BattleBgComponent__playLoadEndAnimation(BattleBgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SimpleAnimation_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Animation_o *v8; // x19

  if ( (byte_40FD397 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FD397 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_20;
  v8 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v7,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      if ( !SimpleAnimation__get_isPlaying(Component_srcLineSprite, 0LL) )
        SimpleAnimation__Play(Component_srcLineSprite, 0LL);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
  {
    if ( !v8 )
      goto LABEL_20;
    if ( !UnityEngine_Animation__get_isPlaying(v8, 0LL) )
      UnityEngine_Animation__Play(v8, 0LL);
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
  sub_B16F98(
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, !flg, 0LL);
}


void __fastcall BattleBgComponent__shakeCamera(BattleBgComponent_o *this, float power, const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  BattleActionCamera_o *v6; // x0
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD398 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD398 = 1;
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
      sub_B170D4();
    v7.fields.x = power * 0.1;
    v7.fields.z = power * 0.0;
    v7.fields.y = power * 0.1;
    BattleActionCamera__ShakePosition(v6, v7, 1.0, 0LL);
  }
}


void __fastcall BattleBgComponent_SaveData___ctor(BattleBgComponent_SaveData_o *this, const MethodInfo *method)
{
  void *v3; // x1

  if ( (byte_40F84C5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F84C5 = 1;
  }
  v3 = StringLiteral_1;
  this->fields.animName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}