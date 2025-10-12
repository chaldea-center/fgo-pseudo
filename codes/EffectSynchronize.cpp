void EffectSynchronize___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *v4; // x19
  struct EffectSynchronize_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3A91B & 1) == 0 )
  {
    sub_1C32C20(&EffectSynchronize_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Animation___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Animation__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SimpleAnimation__TypeInfo);
    byte_4C3A91B = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Animation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Animation___ctor__);
  EffectSynchronize_TypeInfo->static_fields->animCompList = (struct System_Collections_Generic_List_Animation__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EffectSynchronize_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SimpleAnimation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  static_fields = EffectSynchronize_TypeInfo->static_fields;
  static_fields->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->simpleAnimCompList, (int32_t)v4, v6, v7);
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
  const MethodInfo *v6; // x3
  EffectSynchronize_c *v7; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  EffectSynchronize_c *v11; // x0
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8
  Il2CppObject *v17; // x0
  struct UnityEngine_Animation_o **p_animComp; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  EffectSynchronize_c *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  EffectSynchronize_c *v24; // x0
  Il2CppObject *v25; // x1
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x8

  if ( (byte_4C3A917 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C32C20(&EffectSynchronize_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_SimpleAnimation__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Animation__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Animation__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__);
    byte_4C3A917 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimComp = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimComp = (Il2CppObject **)&this->fields.simpleAnimComp;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.simpleAnimComp, (int32_t)Component_object, v5, v6);
  v7 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v7 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v7->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Contains(
          simpleAnimCompList,
          *p_simpleAnimComp,
          (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v11 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v11 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v11->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_25;
    v12 = *p_simpleAnimComp;
    items = simpleAnimCompList->fields._items;
    v14 = Method_System_Collections_Generic_List_SimpleAnimation__Add__;
    ++simpleAnimCompList->fields._version;
    if ( !items )
      goto LABEL_25;
    size = simpleAnimCompList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        simpleAnimCompList,
        v12,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      simpleAnimCompList->fields._size = size + 1;
      v16[4] = (Il2CppClass *)v12;
      sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v9, v10);
    }
  }
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animComp = (struct UnityEngine_Animation_o *)v17;
  p_animComp = &this->fields.animComp;
  sub_1C32BC4((CGThumbnailListItem_o *)p_animComp, (int32_t)v17, v19, v20);
  v21 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v21 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v21->static_fields->animCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( System_Collections_Generic_List_object___Contains(
         simpleAnimCompList,
         (Il2CppObject *)*p_animComp,
         (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_Animation__Contains__) )
  {
    return;
  }
  v24 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v24 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v24->static_fields->animCompList;
  if ( !simpleAnimCompList
    || (v25 = (Il2CppObject *)*p_animComp,
        v26 = simpleAnimCompList->fields._items,
        v27 = Method_System_Collections_Generic_List_Animation__Add__,
        ++simpleAnimCompList->fields._version,
        !v26) )
  {
LABEL_25:
    sub_1C32E7C(simpleAnimCompList);
  }
  v28 = simpleAnimCompList->fields._size;
  if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      simpleAnimCompList,
      v25,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v26->obj.klass + v28;
    simpleAnimCompList->fields._size = v28 + 1;
    v29[4] = (Il2CppClass *)v25;
    sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v25, v22, v23);
  }
}


bool EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_1C32E7C(0);
  return System_String__Equals_63553848(syncAnimStr, this->fields.selfAnimStr, 0);
}


void EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  EffectSynchronize_c *v4; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  Il2CppObject *v6; // x1
  __int64 *v7; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v9; // x0

  if ( (byte_4C3A918 & 1) == 0 )
  {
    sub_1C32C20(&EffectSynchronize_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Animation__Remove__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A918 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0, 0) )
  {
    v4 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v4 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v4->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      v6 = (Il2CppObject *)this->fields.simpleAnimComp;
      v7 = &Method_System_Collections_Generic_List_SimpleAnimation__Remove__;
LABEL_17:
      System_Collections_Generic_List_object___Remove(simpleAnimCompList, v6, (const MethodInfo_3799CE4 *)*v7);
      return;
    }
    goto LABEL_19;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0, 0) )
  {
    v9 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v9 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v9->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      v6 = (Il2CppObject *)this->fields.animComp;
      v7 = &Method_System_Collections_Generic_List_Animation__Remove__;
      goto LABEL_17;
    }
LABEL_19:
    sub_1C32E7C(simpleAnimCompList);
  }
}


void EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  SimpleAnimation_o *v4; // x0
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_4C3A91A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A91A = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0, 0) )
  {
    v4 = this->fields.simpleAnimComp;
    if ( v4 )
    {
      SimpleAnimation__Play_66464300(v4, this->fields.selfAnimStr, 0);
      goto LABEL_13;
    }
LABEL_14:
    sub_1C32E7C(v4);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0, 0) )
  {
    v4 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v4 )
    {
      UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)v4, this->fields.selfAnimStr, 0);
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_13:
  EffectSynchronize__synchronize(this, v5);
}


void EffectSynchronize__synchronize(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  EffectSynchronize_c *v4; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v8; // x1
  bool IsEqualsName; // w8
  SimpleAnimation_o *v10; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_o *v12; // x21
  SimpleAnimation_State_c *klass; // x8
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  SimpleAnimation_State_o *v17; // x0
  SimpleAnimation_State_o *v18; // x21
  SimpleAnimation_State_c *v19; // x8
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  float v23; // s0
  int v24; // w27
  SimpleAnimation_State_o *v25; // x0
  SimpleAnimation_State_o *v26; // x21
  SimpleAnimation_State_c *v27; // x8
  __int64 v28; // x9
  SimpleAnimation_State_c **v29; // x10
  __int64 v30; // x0
  float v31; // s0
  unsigned int v32; // w28
  UnityEngine_Object_o *v33; // x21
  __int64 *v34; // x8
  System_Collections_Generic_List_Enumerator_object__o *v35; // x0
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v37; // x0
  _BOOL8 v38; // x0
  Il2CppObject *v39; // x20
  UnityEngine_TrackedReference_o *v40; // x0
  const MethodInfo *v41; // x1
  bool v42; // w8
  UnityEngine_Animation_o *v43; // x0
  UnityEngine_AnimationState_o *v44; // x0
  float length; // s0
  int v46; // w26
  UnityEngine_AnimationState_o *v47; // x0
  float v48; // s0
  unsigned int v49; // w27
  UnityEngine_Object_o *v50; // x21
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C3A919 & 1) == 0 )
  {
    sub_1C32C20(&EffectSynchronize_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Animation__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3A919 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  memset(&v52, 0, sizeof(v52));
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0, 0) )
  {
    v4 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v4 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v4->static_fields->simpleAnimCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        simpleAnimCompList,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v53 = v51;
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v53,
               (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v6 )
          break;
        current = v53.fields._current;
        if ( !v53.fields._current )
          sub_1C32E7C(v6);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v53.fields._current, this->fields.syncAnimStr, 0) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v8);
          v10 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v10 )
              sub_1C32E7C(0);
            Item = SimpleAnimation__get_Item(v10, this->fields.syncAnimStr, 0);
            v12 = Item;
            if ( !Item )
              sub_1C32E7C(0);
            klass = Item->klass;
            v14 = *(unsigned __int16 *)&Item->klass->_2.rank;
            if ( *(_WORD *)&Item->klass->_2.rank )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v14;
                p_offset += 2;
                if ( !v14 )
                  goto LABEL_20;
              }
              v16 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13];
            }
            else
            {
LABEL_20:
              v16 = sub_1C83438(Item, SimpleAnimation_State_TypeInfo, 13);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8));
          }
          else
          {
            if ( !v10 )
              sub_1C32E7C(0);
            v17 = SimpleAnimation__get_Item(v10, this->fields.selfAnimStr, 0);
            v18 = v17;
            if ( !v17 )
              sub_1C32E7C(0);
            v19 = v17->klass;
            v20 = *(unsigned __int16 *)&v17->klass->_2.rank;
            if ( *(_WORD *)&v17->klass->_2.rank )
            {
              v21 = (SimpleAnimation_State_c **)&v19->_1.interfaceOffsets->offset;
              while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v20;
                v21 += 2;
                if ( !v20 )
                  goto LABEL_27;
              }
              v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 13];
            }
            else
            {
LABEL_27:
              v22 = sub_1C83438(v17, SimpleAnimation_State_TypeInfo, 13);
            }
            v23 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
          }
          if ( v23 == INFINITY )
            v24 = 0x80000000;
          else
            v24 = (int)v23;
          v25 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0);
          v26 = v25;
          if ( !v25 )
            sub_1C32E7C(0);
          v27 = v25->klass;
          v28 = *(unsigned __int16 *)&v25->klass->_2.rank;
          if ( *(_WORD *)&v25->klass->_2.rank )
          {
            v29 = (SimpleAnimation_State_c **)&v27->_1.interfaceOffsets->offset;
            while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v28;
              v29 += 2;
              if ( !v28 )
                goto LABEL_40;
            }
            v30 = (__int64)&v27->vtable[*(_DWORD *)v29 + 13];
          }
          else
          {
LABEL_40:
            v30 = sub_1C83438(v25, SimpleAnimation_State_TypeInfo, 13);
          }
          v31 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8));
          v32 = v31 == INFINITY ? 0x80000000 : (int)v31;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0) )
          {
            v33 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( ((v24 == v32) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v33, 0)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_44041228(
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
      v34 = &Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__;
      v35 = &v53;
LABEL_88:
      System_Collections_Generic_List_Enumerator_object___Dispose(v35, (const MethodInfo_3522FA4 *)*v34);
      return;
    }
    goto LABEL_96;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0, 0) )
  {
    v37 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v37 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v37->static_fields->animCompList;
    if ( simpleAnimCompList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        simpleAnimCompList,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
      v52 = v51;
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v52,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
        if ( !v38 )
          break;
        v39 = v52.fields._current;
        if ( !v52.fields._current )
          sub_1C32E7C(v38);
        v40 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)v52.fields._current,
                                                  this->fields.syncAnimStr,
                                                  0);
        if ( !UnityEngine_TrackedReference__op_Equality(v40, 0, 0) )
        {
          v42 = EffectSynchronize__IsEqualsName(this, v41);
          v43 = this->fields.animComp;
          if ( v42 )
          {
            if ( !v43 )
              sub_1C32E7C(0);
            v44 = UnityEngine_Animation__get_Item(v43, this->fields.syncAnimStr, 0);
            if ( !v44 )
              sub_1C32E7C(0);
          }
          else
          {
            if ( !v43 )
              sub_1C32E7C(0);
            v44 = UnityEngine_Animation__get_Item(v43, this->fields.selfAnimStr, 0);
            if ( !v44 )
              sub_1C32E7C(0);
          }
          length = UnityEngine_AnimationState__get_length(v44, 0);
          if ( length == INFINITY )
            v46 = 0x80000000;
          else
            v46 = (int)length;
          v47 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v39, this->fields.syncAnimStr, 0);
          if ( !v47 )
            sub_1C32E7C(0);
          v48 = UnityEngine_AnimationState__get_length(v47, 0);
          v49 = v48 == INFINITY ? 0x80000000 : (int)v48;
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v39, 0)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v39, 0) )
          {
            v50 = (UnityEngine_Object_o *)this->fields.animComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( ((v46 == v49) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, v50, 0)) != 0 )
            {
              BasicHelper__SynchronizeAnimation(
                this->fields.animComp,
                this->fields.selfAnimStr,
                this->fields.syncAnimStr,
                (UnityEngine_Animation_o *)v39,
                0);
              break;
            }
          }
        }
      }
      v34 = &Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__;
      v35 = &v52;
      goto LABEL_88;
    }
LABEL_96:
    sub_1C32E7C(simpleAnimCompList);
  }
}