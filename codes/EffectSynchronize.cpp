void __fastcall EffectSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x19
  struct EffectSynchronize_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4C003C3 & 1) == 0 )
  {
    sub_1C2E12C(&EffectSynchronize_TypeInfo, v1);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__, v2);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Animation___ctor__, v3);
    sub_1C2E12C(&System_Collections_Generic_List_Animation__TypeInfo, v4);
    sub_1C2E12C(&System_Collections_Generic_List_SimpleAnimation__TypeInfo, v5);
    byte_4C003C3 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_Animation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_Animation___ctor__);
  EffectSynchronize_TypeInfo->static_fields->animCompList = (struct System_Collections_Generic_List_Animation__o *)v6;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EffectSynchronize_TypeInfo->static_fields,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_SimpleAnimation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  static_fields = EffectSynchronize_TypeInfo->static_fields;
  static_fields->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v13;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&static_fields->simpleAnimCompList,
    (int64_t)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *v17; // x1
  EffectSynchronize_c *v18; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  EffectSynchronize_c *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  Il2CppObject *v31; // x0
  struct UnityEngine_Animation_o **p_animComp; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  EffectSynchronize_c *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  EffectSynchronize_c *v46; // x0
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x8

  if ( (byte_4C003BF & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_1C2E12C(&EffectSynchronize_TypeInfo, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SimpleAnimation__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Animation__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Animation__Contains__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__, v8);
    byte_4C003BF = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimComp = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimComp = (Il2CppObject **)&this->fields.simpleAnimComp;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimComp,
    (int64_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v18 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v18 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v18->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Contains(
          simpleAnimCompList,
          *p_simpleAnimComp,
          (const MethodInfo_366BC3C *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v26 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v26 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v26->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_25;
    v17 = *p_simpleAnimComp;
    items = simpleAnimCompList->fields._items;
    v28 = Method_System_Collections_Generic_List_SimpleAnimation__Add__;
    ++simpleAnimCompList->fields._version;
    if ( !items )
      goto LABEL_25;
    size = simpleAnimCompList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        simpleAnimCompList,
        v17,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      simpleAnimCompList->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v17;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v17, v20, v21, v22, v23, v24, v25);
    }
  }
  v31 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animComp = (struct UnityEngine_Animation_o *)v31;
  p_animComp = &this->fields.animComp;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_animComp, (int64_t)v31, v33, v34, v35, v36, v37, v38);
  v39 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v39 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v39->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( System_Collections_Generic_List_object___Contains(
         simpleAnimCompList,
         (Il2CppObject *)*p_animComp,
         (const MethodInfo_366BC3C *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  v46 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v46 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v46->static_fields->animCompList;
  if ( !simpleAnimCompList
    || (v17 = (Il2CppObject *)*p_animComp,
        v47 = simpleAnimCompList->fields._items,
        v48 = Method_System_Collections_Generic_List_Animation__Add__,
        ++simpleAnimCompList->fields._version,
        !v47) )
  {
LABEL_25:
    sub_1C2E388(simpleAnimCompList, v17);
  }
  v49 = simpleAnimCompList->fields._size;
  if ( (unsigned int)v49 >= v47->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      simpleAnimCompList,
      v17,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &v47->obj.klass + v49;
    simpleAnimCompList->fields._size = v49 + 1;
    v50[4] = (Il2CppClass *)v17;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v17, v40, v41, v42, v43, v44, v45);
  }
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_1C2E388(0LL, method);
  return System_String__Equals_63243900(syncAnimStr, this->fields.selfAnimStr, 0LL);
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

  if ( (byte_4C003C0 & 1) == 0 )
  {
    sub_1C2E12C(&EffectSynchronize_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Animation__Remove__, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4C003C0 = 1;
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
      System_Collections_Generic_List_object___Remove(simpleAnimCompList, v10, (const MethodInfo_366CDD4 *)*v11);
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
    sub_1C2E388(simpleAnimCompList, v7);
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  const MethodInfo *v4; // x1
  SimpleAnimation_o *v5; // x0
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_4C003C2 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C003C2 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimComp;
    if ( v5 )
    {
      SimpleAnimation__Play_65373960(v5, this->fields.selfAnimStr, 0LL);
      goto LABEL_13;
    }
LABEL_14:
    sub_1C2E388(v5, v4);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v5 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v5 )
    {
      UnityEngine_Animation__Play_70734128((UnityEngine_Animation_o *)v5, this->fields.selfAnimStr, 0LL);
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

  if ( (byte_4C003C1 & 1) == 0 )
  {
    sub_1C2E12C(&EffectSynchronize_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Animation__GetEnumerator__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v12);
    byte_4C003C1 = 1;
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
        (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v74 = v72;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v74,
                (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v17 )
          break;
        current = v74.fields._current;
        if ( !v74.fields._current )
          sub_1C2E388(v17, v18);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v74.fields._current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v20);
          v23 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v23 )
              sub_1C2E388(0LL, v21);
            Item = SimpleAnimation__get_Item(v23, this->fields.syncAnimStr, 0LL);
            v26 = Item;
            if ( !Item )
              sub_1C2E388(0LL, v25);
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
              p_method = sub_1C8010C(Item, SimpleAnimation_State_TypeInfo, 13LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v26, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v23 )
              sub_1C2E388(0LL, v21);
            v31 = SimpleAnimation__get_Item(v23, this->fields.selfAnimStr, 0LL);
            v33 = v31;
            if ( !v31 )
              sub_1C2E388(0LL, v32);
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
              v37 = sub_1C8010C(v31, SimpleAnimation_State_TypeInfo, 13LL);
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
            sub_1C2E388(0LL, v41);
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
            v46 = sub_1C8010C(v40, SimpleAnimation_State_TypeInfo, 13LL);
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
              BasicHelper__SynchronizeAnimation_42486136(
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
      System_Collections_Generic_List_Enumerator_object___Dispose(v51, (const MethodInfo_34001C0 *)*v50);
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
        (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
      v73 = v72;
      while ( 1 )
      {
        v54 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v73,
                (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
        if ( !v54 )
          break;
        v56 = v73.fields._current;
        if ( !v73.fields._current )
          sub_1C2E388(v54, v55);
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
              sub_1C2E388(0LL, v59);
            v62 = UnityEngine_Animation__get_Item(v61, this->fields.syncAnimStr, 0LL);
            if ( !v62 )
              sub_1C2E388(0LL, v63);
          }
          else
          {
            if ( !v61 )
              sub_1C2E388(0LL, v59);
            v62 = UnityEngine_Animation__get_Item(v61, this->fields.selfAnimStr, 0LL);
            if ( !v62 )
              sub_1C2E388(0LL, v64);
          }
          length = UnityEngine_AnimationState__get_length(v62, 0LL);
          if ( length == INFINITY )
            v66 = 0x80000000;
          else
            v66 = (int)length;
          v67 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v56, this->fields.syncAnimStr, 0LL);
          if ( !v67 )
            sub_1C2E388(0LL, v68);
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
    sub_1C2E388(simpleAnimCompList, v14);
  }
}