void __fastcall EffectSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x19
  struct EffectSynchronize_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B18D2F & 1) == 0 )
  {
    sub_1BCA7E0(&EffectSynchronize_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Animation___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_Animation__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_SimpleAnimation__TypeInfo, v10, v11);
    byte_4B18D2F = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Animation__TypeInfo,
                                                       v1,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Animation___ctor__);
  EffectSynchronize_TypeInfo->static_fields->animCompList = (struct System_Collections_Generic_List_Animation__o *)v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EffectSynchronize_TypeInfo->static_fields,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SimpleAnimation__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  static_fields = EffectSynchronize_TypeInfo->static_fields;
  static_fields->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v22;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->simpleAnimCompList,
    (int64_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall EffectSynchronize___ctor(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSynchronize__Awake(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Component_object; // x0
  Il2CppObject **p_simpleAnimComp; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *v24; // x1
  EffectSynchronize_c *v25; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  EffectSynchronize_c *v33; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  Il2CppObject *v38; // x0
  struct UnityEngine_Animation_o **p_animComp; // x19
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  EffectSynchronize_c *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  EffectSynchronize_c *v53; // x0
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x8

  if ( (byte_4B18D2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4, v5);
    sub_1BCA7E0(&EffectSynchronize_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SimpleAnimation__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Animation__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Animation__Contains__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__, v14, v15);
    byte_4B18D2B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimComp = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimComp = (Il2CppObject **)&this->fields.simpleAnimComp;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimComp,
    (int64_t)Component_object,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v24);
    v25 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v25->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Contains(
          simpleAnimCompList,
          *p_simpleAnimComp,
          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v33 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v24);
      v33 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v33->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_25;
    v24 = *p_simpleAnimComp;
    items = simpleAnimCompList->fields._items;
    v35 = Method_System_Collections_Generic_List_SimpleAnimation__Add__;
    ++simpleAnimCompList->fields._version;
    if ( !items )
      goto LABEL_25;
    size = simpleAnimCompList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        simpleAnimCompList,
        v24,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      simpleAnimCompList->fields._size = size + 1;
      v37[4] = (Il2CppClass *)v24;
      sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v24, v27, v28, v29, v30, v31, v32);
    }
  }
  v38 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animComp = (struct UnityEngine_Animation_o *)v38;
  p_animComp = &this->fields.animComp;
  sub_1BCA784((PartyOrganizationUtility_o *)p_animComp, (int64_t)v38, v40, v41, v42, v43, v44, v45);
  v46 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v24);
    v46 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v46->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( System_Collections_Generic_List_object___Contains(
         simpleAnimCompList,
         (Il2CppObject *)*p_animComp,
         (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  v53 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v24);
    v53 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v53->static_fields->animCompList;
  if ( !simpleAnimCompList
    || (v24 = (Il2CppObject *)*p_animComp,
        v54 = simpleAnimCompList->fields._items,
        v55 = Method_System_Collections_Generic_List_Animation__Add__,
        ++simpleAnimCompList->fields._version,
        !v54) )
  {
LABEL_25:
    sub_1BCAA3C(simpleAnimCompList, v24);
  }
  v56 = simpleAnimCompList->fields._size;
  if ( (unsigned int)v56 >= v54->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      simpleAnimCompList,
      v24,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &v54->obj.klass + v56;
    simpleAnimCompList->fields._size = v56 + 1;
    v57[4] = (Il2CppClass *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v24, v47, v48, v49, v50, v51, v52);
  }
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_1BCAA3C(0LL, method);
  return System_String__Equals_62409536(syncAnimStr, this->fields.selfAnimStr, 0LL);
}


void __fastcall EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v11; // x1
  EffectSynchronize_c *v12; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  Il2CppObject *v14; // x1
  __int64 *v15; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v17; // x0

  if ( (byte_4B18D2C & 1) == 0 )
  {
    sub_1BCA7E0(&EffectSynchronize_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Animation__Remove__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B18D2C = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v12 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v11);
      v12 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v12->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      v14 = (Il2CppObject *)this->fields.simpleAnimComp;
      v15 = &Method_System_Collections_Generic_List_SimpleAnimation__Remove__;
LABEL_17:
      System_Collections_Generic_List_object___Remove(simpleAnimCompList, v14, (const MethodInfo_35A3184 *)*v15);
      return;
    }
    goto LABEL_19;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v17 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v11);
      v17 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v17->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      v14 = (Il2CppObject *)this->fields.animComp;
      v15 = &Method_System_Collections_Generic_List_Animation__Remove__;
      goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(simpleAnimCompList, v11);
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *simpleAnimComp; // x20
  const MethodInfo *v5; // x1
  SimpleAnimation_o *v6; // x0
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_4B18D2E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18D2E = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v6 = this->fields.simpleAnimComp;
    if ( v6 )
    {
      SimpleAnimation__Play_64539336(v6, this->fields.selfAnimStr, 0LL);
      goto LABEL_13;
    }
LABEL_14:
    sub_1BCAA3C(v6, v5);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v6 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v6 )
    {
      UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v6, this->fields.selfAnimStr, 0LL);
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_13:
  EffectSynchronize__synchronize(this, v5);
}


void __fastcall EffectSynchronize__synchronize(EffectSynchronize_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v25; // x1
  EffectSynchronize_c *v26; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v31; // x1
  __int64 v32; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v34; // x0
  SimpleAnimation_State_o *Item; // x0
  __int64 v36; // x1
  SimpleAnimation_State_o *v37; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v39; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  SimpleAnimation_State_o *v42; // x0
  __int64 v43; // x1
  SimpleAnimation_State_o *v44; // x21
  SimpleAnimation_State_c *v45; // x8
  __int64 v46; // x9
  SimpleAnimation_State_c **v47; // x10
  __int64 v48; // x0
  float v49; // s0
  int v50; // w27
  SimpleAnimation_State_o *v51; // x0
  __int64 v52; // x1
  SimpleAnimation_State_o *v53; // x21
  SimpleAnimation_State_c *v54; // x8
  __int64 v55; // x9
  SimpleAnimation_State_c **v56; // x10
  __int64 v57; // x0
  float v58; // s0
  unsigned int v59; // w28
  __int64 v60; // x1
  UnityEngine_Object_o *v61; // x21
  __int64 *v62; // x8
  System_Collections_Generic_List_Enumerator_object__o *v63; // x0
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v65; // x0
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x20
  UnityEngine_TrackedReference_o *v69; // x0
  const MethodInfo *v70; // x1
  __int64 v71; // x1
  bool v72; // w8
  UnityEngine_Animation_o *v73; // x0
  UnityEngine_AnimationState_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x1
  float length; // s0
  int v78; // w26
  UnityEngine_AnimationState_o *v79; // x0
  __int64 v80; // x1
  float v81; // s0
  unsigned int v82; // w27
  __int64 v83; // x1
  UnityEngine_Object_o *v84; // x21
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B18D2D & 1) == 0 )
  {
    sub_1BCA7E0(&EffectSynchronize_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Animation__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v22, v23);
    byte_4B18D2D = 1;
  }
  memset(&v87, 0, sizeof(v87));
  memset(&v86, 0, sizeof(v86));
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v26 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v25);
      v26 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v26->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v85,
        simpleAnimCompList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v87 = v85;
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v87,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v28 )
          break;
        current = v87.fields._current;
        if ( !v87.fields._current )
          sub_1BCAA3C(v28, v29);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v87.fields._current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v31);
          v34 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v34 )
              sub_1BCAA3C(0LL, v32);
            Item = SimpleAnimation__get_Item(v34, this->fields.syncAnimStr, 0LL);
            v37 = Item;
            if ( !Item )
              sub_1BCAA3C(0LL, v36);
            klass = Item->klass;
            v39 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v39;
                p_offset += 2;
                if ( !v39 )
                  goto LABEL_20;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
            }
            else
            {
LABEL_20:
              p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 13LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v37, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v34 )
              sub_1BCAA3C(0LL, v32);
            v42 = SimpleAnimation__get_Item(v34, this->fields.selfAnimStr, 0LL);
            v44 = v42;
            if ( !v42 )
              sub_1BCAA3C(0LL, v43);
            v45 = v42->klass;
            v46 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
            {
              v47 = (SimpleAnimation_State_c **)&v45->_1.interfaceOffsets->offset;
              while ( *(v47 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v46;
                v47 += 2;
                if ( !v46 )
                  goto LABEL_27;
              }
              v48 = (__int64)&v45->vtable[*(_DWORD *)v47 + 13].method;
            }
            else
            {
LABEL_27:
              v48 = sub_1C1C7C0(v42, SimpleAnimation_State_TypeInfo, 13LL);
            }
            v49 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
          }
          if ( v49 == INFINITY )
            v50 = 0x80000000;
          else
            v50 = (int)v49;
          v51 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0LL);
          v53 = v51;
          if ( !v51 )
            sub_1BCAA3C(0LL, v52);
          v54 = v51->klass;
          v55 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
          {
            v56 = (SimpleAnimation_State_c **)&v54->_1.interfaceOffsets->offset;
            while ( *(v56 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v55;
              v56 += 2;
              if ( !v55 )
                goto LABEL_40;
            }
            v57 = (__int64)&v54->vtable[*(_DWORD *)v56 + 13].method;
          }
          else
          {
LABEL_40:
            v57 = sub_1C1C7C0(v51, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v58 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
          v59 = v58 == INFINITY ? 0x80000000 : (int)v58;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0LL) )
          {
            v61 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
            if ( ((v50 == v59) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v61, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_41846504(
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
      v62 = &Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__;
      v63 = &v87;
LABEL_88:
      System_Collections_Generic_List_Enumerator_object___Dispose(v63, (const MethodInfo_3316D18 *)*v62);
      return;
    }
    goto LABEL_96;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v65 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v25);
      v65 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v65->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v85,
        simpleAnimCompList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
      v86 = v85;
      while ( 1 )
      {
        v66 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v86,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
        if ( !v66 )
          break;
        v68 = v86.fields._current;
        if ( !v86.fields._current )
          sub_1BCAA3C(v66, v67);
        v69 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)v86.fields._current,
                                                  this->fields.syncAnimStr,
                                                  0LL);
        if ( !UnityEngine_TrackedReference__op_Equality(v69, 0LL, 0LL) )
        {
          v72 = EffectSynchronize__IsEqualsName(this, v70);
          v73 = this->fields.animComp;
          if ( v72 )
          {
            if ( !v73 )
              sub_1BCAA3C(0LL, v71);
            v74 = UnityEngine_Animation__get_Item(v73, this->fields.syncAnimStr, 0LL);
            if ( !v74 )
              sub_1BCAA3C(0LL, v75);
          }
          else
          {
            if ( !v73 )
              sub_1BCAA3C(0LL, v71);
            v74 = UnityEngine_Animation__get_Item(v73, this->fields.selfAnimStr, 0LL);
            if ( !v74 )
              sub_1BCAA3C(0LL, v76);
          }
          length = UnityEngine_AnimationState__get_length(v74, 0LL);
          if ( length == INFINITY )
            v78 = 0x80000000;
          else
            v78 = (int)length;
          v79 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v68, this->fields.syncAnimStr, 0LL);
          if ( !v79 )
            sub_1BCAA3C(0LL, v80);
          v81 = UnityEngine_AnimationState__get_length(v79, 0LL);
          v82 = v81 == INFINITY ? 0x80000000 : (int)v81;
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v68, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v68, 0LL) )
          {
            v84 = (UnityEngine_Object_o *)this->fields.animComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
            if ( ((v78 == v82) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v68, v84, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation(
                this->fields.animComp,
                this->fields.selfAnimStr,
                this->fields.syncAnimStr,
                (UnityEngine_Animation_o *)v68,
                0LL);
              break;
            }
          }
        }
      }
      v62 = &Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__;
      v63 = &v86;
      goto LABEL_88;
    }
LABEL_96:
    sub_1BCAA3C(simpleAnimCompList, v25);
  }
}