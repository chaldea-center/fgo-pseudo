void __fastcall EffectSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x19
  struct EffectSynchronize_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FED9A & 1) == 0 )
  {
    sub_1B640C8(&EffectSynchronize_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Animation___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_Animation__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_SimpleAnimation__TypeInfo, v6);
    byte_49FED9A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_Animation__TypeInfo,
                                                      v1,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Animation___ctor__);
  EffectSynchronize_TypeInfo->static_fields->animCompList = (struct System_Collections_Generic_List_Animation__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EffectSynchronize_TypeInfo->static_fields, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SimpleAnimation__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  static_fields = EffectSynchronize_TypeInfo->static_fields;
  static_fields->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->simpleAnimCompList, (int32_t)v12, v14, v15);
}


void __fastcall EffectSynchronize___ctor(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSynchronize__Awake(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject **p_simpleAnimComp; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  EffectSynchronize_c *v13; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  EffectSynchronize_c *v17; // x0
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  Il2CppObject *v23; // x0
  struct UnityEngine_Animation_o **p_animComp; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  EffectSynchronize_c *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  EffectSynchronize_c *v30; // x0
  Il2CppObject *v31; // x1
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x8

  if ( (byte_49FED96 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_1B640C8(&EffectSynchronize_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SimpleAnimation__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Animation__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Animation__Contains__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__, v8);
    byte_49FED96 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimComp = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimComp = (Il2CppObject **)&this->fields.simpleAnimComp;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimComp, (int32_t)Component_object, v11, v12);
  v13 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v13 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v13->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Contains(
          simpleAnimCompList,
          *p_simpleAnimComp,
          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v17 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v17 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v17->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_25;
    v18 = *p_simpleAnimComp;
    items = simpleAnimCompList->fields._items;
    v20 = Method_System_Collections_Generic_List_SimpleAnimation__Add__;
    ++simpleAnimCompList->fields._version;
    if ( !items )
      goto LABEL_25;
    size = simpleAnimCompList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        simpleAnimCompList,
        v18,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      simpleAnimCompList->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v18;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v18, v15, v16);
    }
  }
  v23 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animComp = (struct UnityEngine_Animation_o *)v23;
  p_animComp = &this->fields.animComp;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_animComp, (int32_t)v23, v25, v26);
  v27 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v27 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v27->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( System_Collections_Generic_List_object___Contains(
         simpleAnimCompList,
         (Il2CppObject *)*p_animComp,
         (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  v30 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v30 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v30->static_fields->animCompList;
  if ( !simpleAnimCompList
    || (v31 = (Il2CppObject *)*p_animComp,
        v32 = simpleAnimCompList->fields._items,
        v33 = Method_System_Collections_Generic_List_Animation__Add__,
        ++simpleAnimCompList->fields._version,
        !v32) )
  {
LABEL_25:
    sub_1B64324(simpleAnimCompList);
  }
  v34 = simpleAnimCompList->fields._size;
  if ( (unsigned int)v34 >= v32->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      simpleAnimCompList,
      v31,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &v32->obj.klass + v34;
    simpleAnimCompList->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v31, v28, v29);
  }
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_1B64324(0LL);
  return System_String__Equals_61383712(syncAnimStr, this->fields.selfAnimStr, 0LL);
}


void __fastcall EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *simpleAnimComp; // x20
  EffectSynchronize_c *v7; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  Il2CppObject *v9; // x1
  __int64 *v10; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v12; // x0

  if ( (byte_49FED97 & 1) == 0 )
  {
    sub_1B640C8(&EffectSynchronize_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Animation__Remove__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FED97 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v7 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v7 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v7->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      v9 = (Il2CppObject *)this->fields.simpleAnimComp;
      v10 = &Method_System_Collections_Generic_List_SimpleAnimation__Remove__;
LABEL_17:
      System_Collections_Generic_List_object___Remove(simpleAnimCompList, v9, (const MethodInfo_34AEC9C *)*v10);
      return;
    }
    goto LABEL_19;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v12 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v12 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v12->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      v9 = (Il2CppObject *)this->fields.animComp;
      v10 = &Method_System_Collections_Generic_List_Animation__Remove__;
      goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(simpleAnimCompList);
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  SimpleAnimation_o *v4; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_49FED99 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FED99 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v4 = this->fields.simpleAnimComp;
    if ( v4 )
    {
      SimpleAnimation__Play_63513060(v4, this->fields.selfAnimStr, 0LL);
      goto LABEL_13;
    }
LABEL_14:
    sub_1B64324(v4);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v4 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v4 )
    {
      UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v4, this->fields.selfAnimStr, 0LL);
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_13:
  EffectSynchronize__synchronize(this, v5);
}


void __fastcall EffectSynchronize__synchronize(EffectSynchronize_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  UnityEngine_Object_o *simpleAnimComp; // x20
  EffectSynchronize_c *v14; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  _BOOL8 v16; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v18; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v20; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_o *v22; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v24; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  SimpleAnimation_State_o *v27; // x0
  SimpleAnimation_State_o *v28; // x21
  SimpleAnimation_State_c *v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0
  float v33; // s0
  int v34; // w27
  SimpleAnimation_State_o *v35; // x0
  SimpleAnimation_State_o *v36; // x21
  SimpleAnimation_State_c *v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0
  float v41; // s0
  unsigned int v42; // w28
  UnityEngine_Object_o *v43; // x21
  __int64 *v44; // x8
  System_Collections_Generic_List_Enumerator_object__o *v45; // x0
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v47; // x0
  _BOOL8 v48; // x0
  Il2CppObject *v49; // x20
  UnityEngine_TrackedReference_o *v50; // x0
  const MethodInfo *v51; // x1
  bool v52; // w8
  UnityEngine_Animation_o *v53; // x0
  UnityEngine_AnimationState_o *v54; // x0
  float length; // s0
  int v56; // w26
  UnityEngine_AnimationState_o *v57; // x0
  float v58; // s0
  unsigned int v59; // w27
  UnityEngine_Object_o *v60; // x21
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FED98 & 1) == 0 )
  {
    sub_1B640C8(&EffectSynchronize_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Animation__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v12);
    byte_49FED98 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  memset(&v62, 0, sizeof(v62));
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v14 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v14 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v14->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v61,
        simpleAnimCompList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v63 = v61;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v63,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v16 )
          break;
        current = v63.fields._current;
        if ( !v63.fields._current )
          sub_1B64324(v16);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v63.fields._current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v18);
          v20 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v20 )
              sub_1B64324(0LL);
            Item = SimpleAnimation__get_Item(v20, this->fields.syncAnimStr, 0LL);
            v22 = Item;
            if ( !Item )
              sub_1B64324(0LL);
            klass = Item->klass;
            v24 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v24;
                p_offset += 2;
                if ( !v24 )
                  goto LABEL_20;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
            }
            else
            {
LABEL_20:
              p_method = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 13LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v22, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v20 )
              sub_1B64324(0LL);
            v27 = SimpleAnimation__get_Item(v20, this->fields.selfAnimStr, 0LL);
            v28 = v27;
            if ( !v27 )
              sub_1B64324(0LL);
            v29 = v27->klass;
            v30 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
            {
              v31 = (SimpleAnimation_State_c **)&v29->_1.interfaceOffsets->offset;
              while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v30;
                v31 += 2;
                if ( !v30 )
                  goto LABEL_27;
              }
              v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 13].method;
            }
            else
            {
LABEL_27:
              v32 = sub_1BB60A8(v27, SimpleAnimation_State_TypeInfo, 13LL);
            }
            v33 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
          }
          if ( v33 == INFINITY )
            v34 = 0x80000000;
          else
            v34 = (int)v33;
          v35 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0LL);
          v36 = v35;
          if ( !v35 )
            sub_1B64324(0LL);
          v37 = v35->klass;
          v38 = *(unsigned __int16 *)(&v35->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v35->klass->_2.bitflags2 + 3) )
          {
            v39 = (SimpleAnimation_State_c **)&v37->_1.interfaceOffsets->offset;
            while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v38;
              v39 += 2;
              if ( !v38 )
                goto LABEL_40;
            }
            v40 = (__int64)&v37->vtable[*(_DWORD *)v39 + 13].method;
          }
          else
          {
LABEL_40:
            v40 = sub_1BB60A8(v35, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v41 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
          v42 = v41 == INFINITY ? 0x80000000 : (int)v41;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0LL) )
          {
            v43 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( ((v34 == v42) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v43, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_40699476(
                this->fields.simpleAnimComp,
                this->fields.selfAnimStr,
                this->fields.syncAnimStr,
                (SimpleAnimation_o *)current,
                0LL);
              break;
            }
          }
        }
      }
      v44 = &Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__;
      v45 = &v63;
LABEL_88:
      System_Collections_Generic_List_Enumerator_object___Dispose(v45, (const MethodInfo_322A0AC *)*v44);
      return;
    }
    goto LABEL_96;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v47 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v47 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v47->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v61,
        simpleAnimCompList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
      v62 = v61;
      while ( 1 )
      {
        v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v62,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
        if ( !v48 )
          break;
        v49 = v62.fields._current;
        if ( !v62.fields._current )
          sub_1B64324(v48);
        v50 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)v62.fields._current,
                                                  this->fields.syncAnimStr,
                                                  0LL);
        if ( !UnityEngine_TrackedReference__op_Equality(v50, 0LL, 0LL) )
        {
          v52 = EffectSynchronize__IsEqualsName(this, v51);
          v53 = this->fields.animComp;
          if ( v52 )
          {
            if ( !v53 )
              sub_1B64324(0LL);
            v54 = UnityEngine_Animation__get_Item(v53, this->fields.syncAnimStr, 0LL);
            if ( !v54 )
              sub_1B64324(0LL);
          }
          else
          {
            if ( !v53 )
              sub_1B64324(0LL);
            v54 = UnityEngine_Animation__get_Item(v53, this->fields.selfAnimStr, 0LL);
            if ( !v54 )
              sub_1B64324(0LL);
          }
          length = UnityEngine_AnimationState__get_length(v54, 0LL);
          if ( length == INFINITY )
            v56 = 0x80000000;
          else
            v56 = (int)length;
          v57 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v49, this->fields.syncAnimStr, 0LL);
          if ( !v57 )
            sub_1B64324(0LL);
          v58 = UnityEngine_AnimationState__get_length(v57, 0LL);
          v59 = v58 == INFINITY ? 0x80000000 : (int)v58;
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v49, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v49, 0LL) )
          {
            v60 = (UnityEngine_Object_o *)this->fields.animComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( ((v56 == v59) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, v60, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation(
                this->fields.animComp,
                this->fields.selfAnimStr,
                this->fields.syncAnimStr,
                (UnityEngine_Animation_o *)v49,
                0LL);
              break;
            }
          }
        }
      }
      v44 = &Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__;
      v45 = &v62;
      goto LABEL_88;
    }
LABEL_96:
    sub_1B64324(simpleAnimCompList);
  }
}