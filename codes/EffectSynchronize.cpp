void __fastcall EffectSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x19
  struct EffectSynchronize_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A014BE & 1) == 0 )
  {
    sub_1B64A00(&EffectSynchronize_TypeInfo, v1);
    sub_1B64A00(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__, v2);
    sub_1B64A00(&Method_System_Collections_Generic_List_Animation___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_List_Animation__TypeInfo, v4);
    sub_1B64A00(&System_Collections_Generic_List_SimpleAnimation__TypeInfo, v5);
    byte_4A014BE = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_Animation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_Animation___ctor__);
  EffectSynchronize_TypeInfo->static_fields->animCompList = (struct System_Collections_Generic_List_Animation__o *)v6;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)EffectSynchronize_TypeInfo->static_fields, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_SimpleAnimation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  static_fields = EffectSynchronize_TypeInfo->static_fields;
  static_fields->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v9;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->simpleAnimCompList, (int32_t)v9, v11, v12);
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
  Il2CppObject *v13; // x1
  EffectSynchronize_c *v14; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  EffectSynchronize_c *v18; // x0
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
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x8

  if ( (byte_4A014BA & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_1B64A00(&EffectSynchronize_TypeInfo, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_SimpleAnimation__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Animation__Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Animation__Contains__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__, v8);
    byte_4A014BA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimComp = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimComp = (Il2CppObject **)&this->fields.simpleAnimComp;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimComp, (int32_t)Component_object, v11, v12);
  v14 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v14 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v14->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Contains(
          simpleAnimCompList,
          *p_simpleAnimComp,
          (const MethodInfo_34B0358 *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v18 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v18 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v18->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_25;
    v13 = *p_simpleAnimComp;
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
        v13,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      simpleAnimCompList->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v13;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v13, v16, v17);
    }
  }
  v23 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animComp = (struct UnityEngine_Animation_o *)v23;
  p_animComp = &this->fields.animComp;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_animComp, (int32_t)v23, v25, v26);
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
         (const MethodInfo_34B0358 *)Method_System_Collections_Generic_List_Animation__Contains__) )
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
    || (v13 = (Il2CppObject *)*p_animComp,
        v31 = simpleAnimCompList->fields._items,
        v32 = Method_System_Collections_Generic_List_Animation__Add__,
        ++simpleAnimCompList->fields._version,
        !v31) )
  {
LABEL_25:
    sub_1B64C5C(simpleAnimCompList, v13);
  }
  v33 = simpleAnimCompList->fields._size;
  if ( (unsigned int)v33 >= v31->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      simpleAnimCompList,
      v13,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &v31->obj.klass + v33;
    simpleAnimCompList->fields._size = v33 + 1;
    v34[4] = (Il2CppClass *)v13;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v13, v28, v29);
  }
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_1B64C5C(0LL, method);
  return System_String__Equals_61393452(syncAnimStr, this->fields.selfAnimStr, 0LL);
}


void __fastcall EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v7; // x1
  EffectSynchronize_c *v8; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  Il2CppObject *v10; // x1
  __int64 *v11; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v13; // x0

  if ( (byte_4A014BB & 1) == 0 )
  {
    sub_1B64A00(&EffectSynchronize_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Animation__Remove__, v4);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_4A014BB = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v8 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v8 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v8->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      v10 = (Il2CppObject *)this->fields.simpleAnimComp;
      v11 = &Method_System_Collections_Generic_List_SimpleAnimation__Remove__;
LABEL_17:
      System_Collections_Generic_List_object___Remove(simpleAnimCompList, v10, (const MethodInfo_34B1590 *)*v11);
      return;
    }
    goto LABEL_19;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v13 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v13 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v13->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      v10 = (Il2CppObject *)this->fields.animComp;
      v11 = &Method_System_Collections_Generic_List_Animation__Remove__;
      goto LABEL_17;
    }
LABEL_19:
    sub_1B64C5C(simpleAnimCompList, v7);
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  const MethodInfo *v4; // x1
  SimpleAnimation_o *v5; // x0
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_4A014BD & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A014BD = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimComp;
    if ( v5 )
    {
      SimpleAnimation__Play_63522800(v5, this->fields.selfAnimStr, 0LL);
      goto LABEL_13;
    }
LABEL_14:
    sub_1B64C5C(v5, v4);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v5 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v5 )
    {
      UnityEngine_Animation__Play_68882568((UnityEngine_Animation_o *)v5, this->fields.selfAnimStr, 0LL);
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_13:
  EffectSynchronize__synchronize(this, v4);
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
  __int64 v14; // x1
  EffectSynchronize_c *v15; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v23; // x0
  SimpleAnimation_State_o *Item; // x0
  __int64 v25; // x1
  SimpleAnimation_State_o *v26; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v28; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  SimpleAnimation_State_o *v31; // x0
  __int64 v32; // x1
  SimpleAnimation_State_o *v33; // x21
  SimpleAnimation_State_c *v34; // x8
  __int64 v35; // x9
  SimpleAnimation_State_c **v36; // x10
  __int64 v37; // x0
  float v38; // s0
  int v39; // w27
  SimpleAnimation_State_o *v40; // x0
  __int64 v41; // x1
  SimpleAnimation_State_o *v42; // x21
  SimpleAnimation_State_c *v43; // x8
  __int64 v44; // x9
  SimpleAnimation_State_c **v45; // x10
  __int64 v46; // x0
  float v47; // s0
  unsigned int v48; // w28
  UnityEngine_Object_o *v49; // x21
  __int64 *v50; // x8
  System_Collections_Generic_List_Enumerator_object__o *v51; // x0
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v53; // x0
  _BOOL8 v54; // x0
  __int64 v55; // x1
  Il2CppObject *v56; // x20
  UnityEngine_TrackedReference_o *v57; // x0
  const MethodInfo *v58; // x1
  __int64 v59; // x1
  bool v60; // w8
  UnityEngine_Animation_o *v61; // x0
  UnityEngine_AnimationState_o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x1
  float length; // s0
  int v66; // w26
  UnityEngine_AnimationState_o *v67; // x0
  __int64 v68; // x1
  float v69; // s0
  unsigned int v70; // w27
  UnityEngine_Object_o *v71; // x21
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A014BC & 1) == 0 )
  {
    sub_1B64A00(&EffectSynchronize_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Animation__GetEnumerator__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__, v10);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v11);
    sub_1B64A00(&SimpleAnimation_State_TypeInfo, v12);
    byte_4A014BC = 1;
  }
  memset(&v74, 0, sizeof(v74));
  memset(&v73, 0, sizeof(v73));
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v15 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v15 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v15->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v72,
        simpleAnimCompList,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v74 = v72;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v74,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v17 )
          break;
        current = v74.fields._current;
        if ( !v74.fields._current )
          sub_1B64C5C(v17, v18);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v74.fields._current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v20);
          v23 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v23 )
              sub_1B64C5C(0LL, v21);
            Item = SimpleAnimation__get_Item(v23, this->fields.syncAnimStr, 0LL);
            v26 = Item;
            if ( !Item )
              sub_1B64C5C(0LL, v25);
            klass = Item->klass;
            v28 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v28;
                p_offset += 2;
                if ( !v28 )
                  goto LABEL_20;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
            }
            else
            {
LABEL_20:
              p_method = sub_1BB69E0(Item, SimpleAnimation_State_TypeInfo, 13LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v26, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v23 )
              sub_1B64C5C(0LL, v21);
            v31 = SimpleAnimation__get_Item(v23, this->fields.selfAnimStr, 0LL);
            v33 = v31;
            if ( !v31 )
              sub_1B64C5C(0LL, v32);
            v34 = v31->klass;
            v35 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
            {
              v36 = (SimpleAnimation_State_c **)&v34->_1.interfaceOffsets->offset;
              while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v35;
                v36 += 2;
                if ( !v35 )
                  goto LABEL_27;
              }
              v37 = (__int64)&v34->vtable[*(_DWORD *)v36 + 13].method;
            }
            else
            {
LABEL_27:
              v37 = sub_1BB69E0(v31, SimpleAnimation_State_TypeInfo, 13LL);
            }
            v38 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8));
          }
          if ( v38 == INFINITY )
            v39 = 0x80000000;
          else
            v39 = (int)v38;
          v40 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0LL);
          v42 = v40;
          if ( !v40 )
            sub_1B64C5C(0LL, v41);
          v43 = v40->klass;
          v44 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
          {
            v45 = (SimpleAnimation_State_c **)&v43->_1.interfaceOffsets->offset;
            while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v44;
              v45 += 2;
              if ( !v44 )
                goto LABEL_40;
            }
            v46 = (__int64)&v43->vtable[*(_DWORD *)v45 + 13].method;
          }
          else
          {
LABEL_40:
            v46 = sub_1BB69E0(v40, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v47 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8));
          v48 = v47 == INFINITY ? 0x80000000 : (int)v47;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0LL) )
          {
            v49 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( ((v39 == v48) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v49, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_40705120(
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
      v50 = &Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__;
      v51 = &v74;
LABEL_88:
      System_Collections_Generic_List_Enumerator_object___Dispose(v51, (const MethodInfo_322C9A0 *)*v50);
      return;
    }
    goto LABEL_96;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v53 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v53 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v53->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v72,
        simpleAnimCompList,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
      v73 = v72;
      while ( 1 )
      {
        v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v73,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
        if ( !v54 )
          break;
        v56 = v73.fields._current;
        if ( !v73.fields._current )
          sub_1B64C5C(v54, v55);
        v57 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)v73.fields._current,
                                                  this->fields.syncAnimStr,
                                                  0LL);
        if ( !UnityEngine_TrackedReference__op_Equality(v57, 0LL, 0LL) )
        {
          v60 = EffectSynchronize__IsEqualsName(this, v58);
          v61 = this->fields.animComp;
          if ( v60 )
          {
            if ( !v61 )
              sub_1B64C5C(0LL, v59);
            v62 = UnityEngine_Animation__get_Item(v61, this->fields.syncAnimStr, 0LL);
            if ( !v62 )
              sub_1B64C5C(0LL, v63);
          }
          else
          {
            if ( !v61 )
              sub_1B64C5C(0LL, v59);
            v62 = UnityEngine_Animation__get_Item(v61, this->fields.selfAnimStr, 0LL);
            if ( !v62 )
              sub_1B64C5C(0LL, v64);
          }
          length = UnityEngine_AnimationState__get_length(v62, 0LL);
          if ( length == INFINITY )
            v66 = 0x80000000;
          else
            v66 = (int)length;
          v67 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v56, this->fields.syncAnimStr, 0LL);
          if ( !v67 )
            sub_1B64C5C(0LL, v68);
          v69 = UnityEngine_AnimationState__get_length(v67, 0LL);
          v70 = v69 == INFINITY ? 0x80000000 : (int)v69;
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v56, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v56, 0LL) )
          {
            v71 = (UnityEngine_Object_o *)this->fields.animComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( ((v66 == v70) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v56, v71, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation(
                this->fields.animComp,
                this->fields.selfAnimStr,
                this->fields.syncAnimStr,
                (UnityEngine_Animation_o *)v56,
                0LL);
              break;
            }
          }
        }
      }
      v50 = &Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__;
      v51 = &v73;
      goto LABEL_88;
    }
LABEL_96:
    sub_1B64C5C(simpleAnimCompList, v14);
  }
}