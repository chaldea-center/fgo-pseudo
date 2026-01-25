void EffectSynchronize___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *v8; // x19
  struct EffectSynchronize_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CF1648 & 1) == 0 )
  {
    sub_1C7BAE8(&EffectSynchronize_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Animation___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_Animation__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SimpleAnimation__TypeInfo);
    byte_4CF1648 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_Animation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_Animation___ctor__);
  EffectSynchronize_TypeInfo->static_fields->animCompList = (struct System_Collections_Generic_List_Animation__o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EffectSynchronize_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SimpleAnimation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  static_fields = EffectSynchronize_TypeInfo->static_fields;
  static_fields->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v8;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->simpleAnimCompList,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void EffectSynchronize___ctor(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EffectSynchronize__Awake(EffectSynchronize_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  Il2CppObject **p_simpleAnimComp; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *v11; // x1
  EffectSynchronize_c *v12; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  EffectSynchronize_c *v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  Il2CppObject *v25; // x0
  struct UnityEngine_Animation_o **p_animComp; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  EffectSynchronize_c *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  EffectSynchronize_c *v40; // x0
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x8

  if ( (byte_4CF1644 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&EffectSynchronize_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SimpleAnimation__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Animation__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Animation__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__);
    byte_4CF1644 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimComp = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimComp = (Il2CppObject **)&this->fields.simpleAnimComp;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.simpleAnimComp,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v12 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v12->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Contains(
          simpleAnimCompList,
          *p_simpleAnimComp,
          (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v20 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v20 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v20->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_25;
    v11 = *p_simpleAnimComp;
    items = simpleAnimCompList->fields._items;
    v22 = Method_System_Collections_Generic_List_SimpleAnimation__Add__;
    ++simpleAnimCompList->fields._version;
    if ( !items )
      goto LABEL_25;
    size = simpleAnimCompList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        simpleAnimCompList,
        v11,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &items->obj.klass + size;
      simpleAnimCompList->fields._size = size + 1;
      v24[4] = (Il2CppClass *)v11;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
    }
  }
  v25 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animComp = (struct UnityEngine_Animation_o *)v25;
  p_animComp = &this->fields.animComp;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_animComp, (int32_t)v25, v27, v28, v29, v30, v31, v32);
  v33 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v33 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v33->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( System_Collections_Generic_List_object___Contains(
         simpleAnimCompList,
         (Il2CppObject *)*p_animComp,
         (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  v40 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v40 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v40->static_fields->animCompList;
  if ( !simpleAnimCompList
    || (v11 = (Il2CppObject *)*p_animComp,
        v41 = simpleAnimCompList->fields._items,
        v42 = Method_System_Collections_Generic_List_Animation__Add__,
        ++simpleAnimCompList->fields._version,
        !v41) )
  {
LABEL_25:
    sub_1C7BD40(simpleAnimCompList, v11);
  }
  v43 = simpleAnimCompList->fields._size;
  if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      simpleAnimCompList,
      v11,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &v41->obj.klass + v43;
    simpleAnimCompList->fields._size = v43 + 1;
    v44[4] = (Il2CppClass *)v11;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v44 + 4), (int32_t)v11, v34, v35, v36, v37, v38, v39);
  }
}


bool EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_1C7BD40(0, method);
  return System_String__Equals_64212232(syncAnimStr, this->fields.selfAnimStr, 0);
}


void EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v4; // x1
  EffectSynchronize_c *v5; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  Il2CppObject *v7; // x1
  __int64 *v8; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v10; // x0

  if ( (byte_4CF1645 & 1) == 0 )
  {
    sub_1C7BAE8(&EffectSynchronize_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Animation__Remove__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1645 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0, 0) )
  {
    v5 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v5 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v5->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      v7 = (Il2CppObject *)this->fields.simpleAnimComp;
      v8 = &Method_System_Collections_Generic_List_SimpleAnimation__Remove__;
LABEL_17:
      System_Collections_Generic_List_object___Remove(simpleAnimCompList, v7, (const MethodInfo_3840324 *)*v8);
      return;
    }
    goto LABEL_19;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0, 0) )
  {
    v10 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v10 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v10->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      v7 = (Il2CppObject *)this->fields.animComp;
      v8 = &Method_System_Collections_Generic_List_Animation__Remove__;
      goto LABEL_17;
    }
LABEL_19:
    sub_1C7BD40(simpleAnimCompList, v4);
  }
}


void EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  const MethodInfo *v4; // x1
  SimpleAnimation_o *v5; // x0
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_4CF1647 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1647 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0, 0) )
  {
    v5 = this->fields.simpleAnimComp;
    if ( v5 )
    {
      SimpleAnimation__Play_67121960(v5, this->fields.selfAnimStr, 0);
      goto LABEL_13;
    }
LABEL_14:
    sub_1C7BD40(v5, v4);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0, 0) )
  {
    v5 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v5 )
    {
      UnityEngine_Animation__Play_71613624((UnityEngine_Animation_o *)v5, this->fields.selfAnimStr, 0);
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_13:
  EffectSynchronize__synchronize(this, v4);
}


void EffectSynchronize__synchronize(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v4; // x1
  EffectSynchronize_c *v5; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v13; // x0
  SimpleAnimation_State_o *Item; // x0
  __int64 v15; // x1
  SimpleAnimation_State_o *v16; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  SimpleAnimation_State_o *v21; // x0
  __int64 v22; // x1
  SimpleAnimation_State_o *v23; // x21
  SimpleAnimation_State_c *v24; // x8
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0
  float v28; // s0
  int v29; // w27
  SimpleAnimation_State_o *v30; // x0
  __int64 v31; // x1
  SimpleAnimation_State_o *v32; // x21
  SimpleAnimation_State_c *v33; // x8
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  float v37; // s0
  unsigned int v38; // w28
  UnityEngine_Object_o *v39; // x21
  __int64 *v40; // x8
  System_Collections_Generic_List_Enumerator_object__o *v41; // x0
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v43; // x0
  _BOOL8 v44; // x0
  __int64 v45; // x1
  Il2CppObject *v46; // x20
  UnityEngine_TrackedReference_o *v47; // x0
  const MethodInfo *v48; // x1
  __int64 v49; // x1
  bool v50; // w8
  UnityEngine_Animation_o *v51; // x0
  UnityEngine_AnimationState_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x1
  float length; // s0
  int v56; // w26
  UnityEngine_AnimationState_o *v57; // x0
  __int64 v58; // x1
  float v59; // s0
  unsigned int v60; // w27
  UnityEngine_Object_o *v61; // x21
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CF1646 & 1) == 0 )
  {
    sub_1C7BAE8(&EffectSynchronize_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Animation__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CF1646 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  memset(&v63, 0, sizeof(v63));
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0, 0) )
  {
    v5 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v5 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v5->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v62,
        simpleAnimCompList,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v64 = v62;
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v64,
               (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v7 )
          break;
        current = v64.fields._current;
        if ( !v64.fields._current )
          sub_1C7BD40(v7, v8);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v64.fields._current, this->fields.syncAnimStr, 0) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v10);
          v13 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v13 )
              sub_1C7BD40(0, v11);
            Item = SimpleAnimation__get_Item(v13, this->fields.syncAnimStr, 0);
            v16 = Item;
            if ( !Item )
              sub_1C7BD40(0, v15);
            klass = Item->klass;
            v18 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v18;
                p_offset += 2;
                if ( !v18 )
                  goto LABEL_20;
              }
              v20 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13];
            }
            else
            {
LABEL_20:
              v20 = sub_1C51E70(Item, SimpleAnimation_State_TypeInfo, 13);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
          }
          else
          {
            if ( !v13 )
              sub_1C7BD40(0, v11);
            v21 = SimpleAnimation__get_Item(v13, this->fields.selfAnimStr, 0);
            v23 = v21;
            if ( !v21 )
              sub_1C7BD40(0, v22);
            v24 = v21->klass;
            v25 = *(unsigned __int16 *)&v21->klass->_2.rank;
            if ( *(_WORD *)&v21->klass->_2.rank )
            {
              v26 = (SimpleAnimation_State_c **)&v24->_1.interfaceOffsets->offset;
              while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v25;
                v26 += 2;
                if ( !v25 )
                  goto LABEL_27;
              }
              v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 13];
            }
            else
            {
LABEL_27:
              v27 = sub_1C51E70(v21, SimpleAnimation_State_TypeInfo, 13);
            }
            v28 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
          }
          if ( v28 == INFINITY )
            v29 = 0x80000000;
          else
            v29 = (int)v28;
          v30 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0);
          v32 = v30;
          if ( !v30 )
            sub_1C7BD40(0, v31);
          v33 = v30->klass;
          v34 = *(unsigned __int16 *)&v30->klass->_2.rank;
          if ( *(_WORD *)&v30->klass->_2.rank )
          {
            v35 = (SimpleAnimation_State_c **)&v33->_1.interfaceOffsets->offset;
            while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v34;
              v35 += 2;
              if ( !v34 )
                goto LABEL_40;
            }
            v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 13];
          }
          else
          {
LABEL_40:
            v36 = sub_1C51E70(v30, SimpleAnimation_State_TypeInfo, 13);
          }
          v37 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
          v38 = v37 == INFINITY ? 0x80000000 : (int)v37;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0) )
          {
            v39 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( ((v29 == v38) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v39, 0)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_44667204(
                this->fields.simpleAnimComp,
                this->fields.selfAnimStr,
                this->fields.syncAnimStr,
                (SimpleAnimation_o *)current,
                0);
              break;
            }
          }
        }
      }
      v40 = &Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__;
      v41 = &v64;
LABEL_88:
      System_Collections_Generic_List_Enumerator_object___Dispose(v41, (const MethodInfo_35BDF94 *)*v40);
      return;
    }
    goto LABEL_96;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0, 0) )
  {
    v43 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v43 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v43->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v62,
        simpleAnimCompList,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
      v63 = v62;
      while ( 1 )
      {
        v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v63,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
        if ( !v44 )
          break;
        v46 = v63.fields._current;
        if ( !v63.fields._current )
          sub_1C7BD40(v44, v45);
        v47 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)v63.fields._current,
                                                  this->fields.syncAnimStr,
                                                  0);
        if ( !UnityEngine_TrackedReference__op_Equality(v47, 0, 0) )
        {
          v50 = EffectSynchronize__IsEqualsName(this, v48);
          v51 = this->fields.animComp;
          if ( v50 )
          {
            if ( !v51 )
              sub_1C7BD40(0, v49);
            v52 = UnityEngine_Animation__get_Item(v51, this->fields.syncAnimStr, 0);
            if ( !v52 )
              sub_1C7BD40(0, v53);
          }
          else
          {
            if ( !v51 )
              sub_1C7BD40(0, v49);
            v52 = UnityEngine_Animation__get_Item(v51, this->fields.selfAnimStr, 0);
            if ( !v52 )
              sub_1C7BD40(0, v54);
          }
          length = UnityEngine_AnimationState__get_length(v52, 0);
          if ( length == INFINITY )
            v56 = 0x80000000;
          else
            v56 = (int)length;
          v57 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v46, this->fields.syncAnimStr, 0);
          if ( !v57 )
            sub_1C7BD40(0, v58);
          v59 = UnityEngine_AnimationState__get_length(v57, 0);
          v60 = v59 == INFINITY ? 0x80000000 : (int)v59;
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v46, 0)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v46, 0) )
          {
            v61 = (UnityEngine_Object_o *)this->fields.animComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( ((v56 == v60) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, v61, 0)) != 0 )
            {
              BasicHelper__SynchronizeAnimation(
                this->fields.animComp,
                this->fields.selfAnimStr,
                this->fields.syncAnimStr,
                (UnityEngine_Animation_o *)v46,
                0);
              break;
            }
          }
        }
      }
      v40 = &Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__;
      v41 = &v63;
      goto LABEL_88;
    }
LABEL_96:
    sub_1C7BD40(simpleAnimCompList, v4);
  }
}