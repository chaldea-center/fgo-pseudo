void EffectSynchronize___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_object__o *v8; // x19
  struct EffectSynchronize_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593B6E5 & 1) == 0 )
  {
    sub_21FFC50(&EffectSynchronize_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Animation___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_Animation__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SimpleAnimation__TypeInfo);
    byte_593B6E5 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_Animation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_Animation___ctor__);
  EffectSynchronize_TypeInfo->static_fields->animCompList = (struct System_Collections_Generic_List_Animation__o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EffectSynchronize_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SimpleAnimation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  static_fields = EffectSynchronize_TypeInfo->static_fields;
  static_fields->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->simpleAnimCompList,
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject *v11; // x1
  EffectSynchronize_c *v12; // x0
  EffectSynchronize_c *simpleAnimCompList; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  EffectSynchronize_c *v20; // x0
  const char *name; // x8
  _QWORD *v22; // x9
  __int64 namespaze_low; // x10
  const char *v24; // x8
  Il2CppObject *v25; // x0
  struct UnityEngine_Animation_o **p_animComp; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  EffectSynchronize_c *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_List_object__o *animCompList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v42; // x10
  __int64 size; // x11
  Il2CppClass **v44; // x0

  if ( (byte_593B6E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_21FFC50(&EffectSynchronize_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_SimpleAnimation__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Animation__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Animation__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__);
    byte_593B6E1 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimComp = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimComp = (Il2CppObject **)&this->fields.simpleAnimComp;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimComp,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = EffectSynchronize_TypeInfo;
  if ( !*(&EffectSynchronize_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v11);
    v12 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (EffectSynchronize_c *)v12->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)simpleAnimCompList,
          *p_simpleAnimComp,
          (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v20 = EffectSynchronize_TypeInfo;
    if ( !*(&EffectSynchronize_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v11);
      v20 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (EffectSynchronize_c *)v20->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_25;
    name = simpleAnimCompList->_1.name;
    v11 = *p_simpleAnimComp;
    v22 = Method_System_Collections_Generic_List_SimpleAnimation__Add__;
    ++HIDWORD(simpleAnimCompList->_1.namespaze);
    if ( !name )
      goto LABEL_25;
    namespaze_low = SLODWORD(simpleAnimCompList->_1.namespaze);
    if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)simpleAnimCompList,
        v11,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &name[8 * namespaze_low];
      LODWORD(simpleAnimCompList->_1.namespaze) = namespaze_low + 1;
      *((_QWORD *)v24 + 4) = v11;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 32), (int32_t)v11, v14, v15, v16, v17, v18, v19);
    }
  }
  v25 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animComp = (struct UnityEngine_Animation_o *)v25;
  p_animComp = &this->fields.animComp;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_animComp, (int32_t)v25, v27, v28, v29, v30, v31, v32);
  v33 = EffectSynchronize_TypeInfo;
  if ( !*(&EffectSynchronize_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v11);
    v33 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (EffectSynchronize_c *)v33->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)simpleAnimCompList,
         (Il2CppObject *)*p_animComp,
         (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  simpleAnimCompList = EffectSynchronize_TypeInfo;
  if ( !*(&EffectSynchronize_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v11);
    simpleAnimCompList = EffectSynchronize_TypeInfo;
  }
  animCompList = (System_Collections_Generic_List_object__o *)simpleAnimCompList->static_fields->animCompList;
  if ( !animCompList
    || (items = animCompList->fields._items,
        v11 = (Il2CppObject *)*p_animComp,
        v42 = Method_System_Collections_Generic_List_Animation__Add__,
        ++animCompList->fields._version,
        !items) )
  {
LABEL_25:
    sub_21FFECC(simpleAnimCompList, v11);
  }
  size = animCompList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      animCompList,
      v11,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    v44[4] = (Il2CppClass *)v11;
    animCompList->fields._size = size + 1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v11, v34, v35, v36, v37, v38, v39);
  }
}


bool EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_21FFECC(0, method);
  return System_String__Equals_75473208(syncAnimStr, this->fields.selfAnimStr, 0);
}


void EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  Il2CppObject **p_simpleAnimComp; // x21
  __int64 v5; // x1
  EffectSynchronize_c *v6; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  __int64 *v8; // x8
  struct UnityEngine_Animation_o **p_animComp; // x19
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_Animation_o *animComp; // t1
  EffectSynchronize_c *v12; // x0

  if ( (byte_593B6E2 & 1) == 0 )
  {
    sub_21FFC50(&EffectSynchronize_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Animation__Remove__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B6E2 = 1;
  }
  p_simpleAnimComp = (Il2CppObject **)&this->fields.simpleAnimComp;
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0, 0) )
  {
    v6 = EffectSynchronize_TypeInfo;
    if ( !*(&EffectSynchronize_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v5);
      v6 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v6->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      v8 = &Method_System_Collections_Generic_List_SimpleAnimation__Remove__;
LABEL_17:
      System_Collections_Generic_List_object___Remove(
        simpleAnimCompList,
        *p_simpleAnimComp,
        (const MethodInfo_445101C *)*v8);
      return;
    }
    goto LABEL_19;
  }
  animComp = this->fields.animComp;
  p_animComp = &this->fields.animComp;
  v10 = (UnityEngine_Object_o *)animComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
  {
    v12 = EffectSynchronize_TypeInfo;
    if ( !*(&EffectSynchronize_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v5);
      v12 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v12->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      p_simpleAnimComp = (Il2CppObject **)p_animComp;
      v8 = &Method_System_Collections_Generic_List_Animation__Remove__;
      goto LABEL_17;
    }
LABEL_19:
    sub_21FFECC(simpleAnimCompList, v5);
  }
}


void EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  const MethodInfo *v4; // x1
  SimpleAnimation_o *v5; // x0
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_593B6E4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B6E4 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0, 0) )
  {
    v5 = this->fields.simpleAnimComp;
    if ( v5 )
    {
      SimpleAnimation__Play_78338864(v5, this->fields.selfAnimStr, 0);
      goto LABEL_13;
    }
LABEL_14:
    sub_21FFECC(v5, v4);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(animComp, 0, 0) )
  {
    v5 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v5 )
    {
      UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)v5, this->fields.selfAnimStr, 0);
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
  int v4; // w8
  __int64 v5; // x1
  EffectSynchronize_c *v6; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v14; // x0
  SimpleAnimation_State_o *Item; // x0
  __int64 v16; // x1
  SimpleAnimation_State_o *v17; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  SimpleAnimation_State_o *v22; // x0
  __int64 v23; // x1
  SimpleAnimation_State_o *v24; // x21
  SimpleAnimation_State_c *v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0
  float v29; // s0
  int v30; // w27
  SimpleAnimation_State_o *v31; // x0
  __int64 v32; // x1
  SimpleAnimation_State_o *v33; // x21
  SimpleAnimation_State_c *v34; // x8
  __int64 v35; // x9
  SimpleAnimation_State_c **v36; // x10
  __int64 v37; // x0
  float v38; // s0
  unsigned int v39; // w28
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x21
  System_Collections_Generic_List_Enumerator_object__o *v42; // x0
  __int64 *v43; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v45; // x0
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x20
  UnityEngine_TrackedReference_o *v49; // x0
  const MethodInfo *v50; // x1
  __int64 v51; // x1
  bool v52; // w8
  UnityEngine_Animation_o *v53; // x0
  UnityEngine_AnimationState_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x1
  float length; // s0
  int v58; // w26
  UnityEngine_AnimationState_o *v59; // x0
  __int64 v60; // x1
  float v61; // s0
  unsigned int v62; // w27
  __int64 v63; // x1
  UnityEngine_Object_o *v64; // x21
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_593B6E3 & 1) == 0 )
  {
    sub_21FFC50(&EffectSynchronize_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Animation__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593B6E3 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  memset(&v67, 0, sizeof(v67));
  v4 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  memset(&v66, 0, sizeof(v66));
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0, 0) )
  {
    v6 = EffectSynchronize_TypeInfo;
    if ( !*(&EffectSynchronize_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v5);
      v6 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v6->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v65,
        simpleAnimCompList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v67 = v65;
      v65.fields._list = 0;
      *(_QWORD *)&v65.fields._index = &v67;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v67,
               (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v8 )
          break;
        current = v67.fields._current;
        if ( !v67.fields._current )
          sub_21FFECC(v8, v9);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v67.fields._current, this->fields.syncAnimStr, 0) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v11);
          v14 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v14 )
              sub_21FFECC(0, v12);
            Item = SimpleAnimation__get_Item(v14, this->fields.syncAnimStr, 0);
            v17 = Item;
            if ( !Item )
              sub_21FFECC(0, v16);
            klass = Item->klass;
            v19 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v19;
                p_offset += 2;
                if ( !v19 )
                  goto LABEL_20;
              }
              v21 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13];
            }
            else
            {
LABEL_20:
              v21 = sub_2237E2C(Item, SimpleAnimation_State_TypeInfo, 13);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8));
          }
          else
          {
            if ( !v14 )
              sub_21FFECC(0, v12);
            v22 = SimpleAnimation__get_Item(v14, this->fields.selfAnimStr, 0);
            v24 = v22;
            if ( !v22 )
              sub_21FFECC(0, v23);
            v25 = v22->klass;
            v26 = *(unsigned __int16 *)&v22->klass->_2.rank;
            if ( *(_WORD *)&v22->klass->_2.rank )
            {
              v27 = (SimpleAnimation_State_c **)&v25->_1.interfaceOffsets->offset;
              while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v26;
                v27 += 2;
                if ( !v26 )
                  goto LABEL_27;
              }
              v28 = (__int64)&v25->vtable[*(_DWORD *)v27 + 13];
            }
            else
            {
LABEL_27:
              v28 = sub_2237E2C(v22, SimpleAnimation_State_TypeInfo, 13);
            }
            v29 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
          }
          if ( v29 == INFINITY )
            v30 = 0x80000000;
          else
            v30 = (int)v29;
          v31 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0);
          v33 = v31;
          if ( !v31 )
            sub_21FFECC(0, v32);
          v34 = v31->klass;
          v35 = *(unsigned __int16 *)&v31->klass->_2.rank;
          if ( *(_WORD *)&v31->klass->_2.rank )
          {
            v36 = (SimpleAnimation_State_c **)&v34->_1.interfaceOffsets->offset;
            while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v35;
              v36 += 2;
              if ( !v35 )
                goto LABEL_40;
            }
            v37 = (__int64)&v34->vtable[*(_DWORD *)v36 + 13];
          }
          else
          {
LABEL_40:
            v37 = sub_2237E2C(v31, SimpleAnimation_State_TypeInfo, 13);
          }
          v38 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8));
          v39 = v38 == INFINITY ? 0x80000000 : (int)v38;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0) )
          {
            v41 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
            if ( ((v30 == v39) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v41, 0)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_51087724(
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
      v42 = &v67;
      v43 = &Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__;
LABEL_88:
      System_Collections_Generic_List_Enumerator_object___Dispose(v42, (const MethodInfo_40C7F48 *)*v43);
      return;
    }
    goto LABEL_96;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(animComp, 0, 0) )
  {
    v45 = EffectSynchronize_TypeInfo;
    if ( !*(&EffectSynchronize_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo, v5);
      v45 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v45->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v65,
        simpleAnimCompList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
      v66 = v65;
      v65.fields._list = 0;
      *(_QWORD *)&v65.fields._index = &v66;
      while ( 1 )
      {
        v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v66,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
        if ( !v46 )
          break;
        v48 = v66.fields._current;
        if ( !v66.fields._current )
          sub_21FFECC(v46, v47);
        v49 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)v66.fields._current,
                                                  this->fields.syncAnimStr,
                                                  0);
        if ( !UnityEngine_TrackedReference__op_Equality(v49, 0, 0) )
        {
          v52 = EffectSynchronize__IsEqualsName(this, v50);
          v53 = this->fields.animComp;
          if ( v52 )
          {
            if ( !v53 )
              sub_21FFECC(0, v51);
            v54 = UnityEngine_Animation__get_Item(v53, this->fields.syncAnimStr, 0);
            if ( !v54 )
              sub_21FFECC(0, v55);
          }
          else
          {
            if ( !v53 )
              sub_21FFECC(0, v51);
            v54 = UnityEngine_Animation__get_Item(v53, this->fields.selfAnimStr, 0);
            if ( !v54 )
              sub_21FFECC(0, v56);
          }
          length = UnityEngine_AnimationState__get_length(v54, 0);
          if ( length == INFINITY )
            v58 = 0x80000000;
          else
            v58 = (int)length;
          v59 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v48, this->fields.syncAnimStr, 0);
          if ( !v59 )
            sub_21FFECC(0, v60);
          v61 = UnityEngine_AnimationState__get_length(v59, 0);
          v62 = v61 == INFINITY ? 0x80000000 : (int)v61;
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v48, 0)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v48, 0) )
          {
            v64 = (UnityEngine_Object_o *)this->fields.animComp;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
            if ( ((v58 == v62) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, v64, 0)) != 0 )
            {
              BasicHelper__SynchronizeAnimation(
                this->fields.animComp,
                this->fields.selfAnimStr,
                this->fields.syncAnimStr,
                (UnityEngine_Animation_o *)v48,
                0);
              break;
            }
          }
        }
      }
      v42 = &v66;
      v43 = &Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__;
      goto LABEL_88;
    }
LABEL_96:
    sub_21FFECC(simpleAnimCompList, v5);
  }
}