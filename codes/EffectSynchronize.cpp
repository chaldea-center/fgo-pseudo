void __fastcall EffectSynchronize___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *v4; // x19
  struct EffectSynchronize_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5DB57 & 1) == 0 )
  {
    sub_1B885B0(&EffectSynchronize_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Animation___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Animation__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SimpleAnimation__TypeInfo);
    byte_4A5DB57 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Animation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Animation___ctor__);
  EffectSynchronize_TypeInfo->static_fields->animCompList = (struct System_Collections_Generic_List_Animation__o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EffectSynchronize_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SimpleAnimation__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SimpleAnimation___ctor__);
  static_fields = EffectSynchronize_TypeInfo->static_fields;
  static_fields->simpleAnimCompList = (struct System_Collections_Generic_List_SimpleAnimation__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->simpleAnimCompList, (int32_t)v4, v6, v7);
}


void __fastcall EffectSynchronize___ctor(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSynchronize__Awake(EffectSynchronize_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  Il2CppObject **p_simpleAnimComp; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  Il2CppObject *v7; // x1
  EffectSynchronize_c *v8; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  EffectSynchronize_c *v12; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8
  Il2CppObject *v17; // x0
  struct UnityEngine_Animation_o **p_animComp; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  EffectSynchronize_c *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  EffectSynchronize_c *v24; // x0
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8

  if ( (byte_4A5DB53 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1B885B0(&EffectSynchronize_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SimpleAnimation__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Animation__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Animation__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SimpleAnimation__Contains__);
    byte_4A5DB53 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimComp = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimComp = (Il2CppObject **)&this->fields.simpleAnimComp;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimComp, (int32_t)Component_object, v5, v6);
  v8 = EffectSynchronize_TypeInfo;
  if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
    v8 = EffectSynchronize_TypeInfo;
  }
  simpleAnimCompList = (System_Collections_Generic_List_object__o *)v8->static_fields->simpleAnimCompList;
  if ( !simpleAnimCompList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Contains(
          simpleAnimCompList,
          *p_simpleAnimComp,
          (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_SimpleAnimation__Contains__) )
  {
    v12 = EffectSynchronize_TypeInfo;
    if ( !EffectSynchronize_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EffectSynchronize_TypeInfo);
      v12 = EffectSynchronize_TypeInfo;
    }
    simpleAnimCompList = (System_Collections_Generic_List_object__o *)v12->static_fields->simpleAnimCompList;
    if ( !simpleAnimCompList )
      goto LABEL_25;
    v7 = *p_simpleAnimComp;
    items = simpleAnimCompList->fields._items;
    v14 = Method_System_Collections_Generic_List_SimpleAnimation__Add__;
    ++simpleAnimCompList->fields._version;
    if ( !items )
      goto LABEL_25;
    size = simpleAnimCompList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        simpleAnimCompList,
        v7,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      simpleAnimCompList->fields._size = size + 1;
      v16[4] = (Il2CppClass *)v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v7, v10, v11);
    }
  }
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.animComp = (struct UnityEngine_Animation_o *)v17;
  p_animComp = &this->fields.animComp;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_animComp, (int32_t)v17, v19, v20);
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
         (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_Animation__Contains__) )
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
    || (v7 = (Il2CppObject *)*p_animComp,
        v25 = simpleAnimCompList->fields._items,
        v26 = Method_System_Collections_Generic_List_Animation__Add__,
        ++simpleAnimCompList->fields._version,
        !v25) )
  {
LABEL_25:
    sub_1B8880C(simpleAnimCompList, v7);
  }
  v27 = simpleAnimCompList->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      simpleAnimCompList,
      v7,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    simpleAnimCompList->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v7, v22, v23);
  }
}


bool __fastcall EffectSynchronize__IsEqualsName(EffectSynchronize_o *this, const MethodInfo *method)
{
  System_String_o *syncAnimStr; // x0

  syncAnimStr = this->fields.syncAnimStr;
  if ( !syncAnimStr )
    sub_1B8880C(0LL, method);
  return System_String__Equals_61715348(syncAnimStr, this->fields.selfAnimStr, 0LL);
}


void __fastcall EffectSynchronize__OnDestroy(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  __int64 v4; // x1
  EffectSynchronize_c *v5; // x0
  System_Collections_Generic_List_object__o *simpleAnimCompList; // x0
  Il2CppObject *v7; // x1
  __int64 *v8; // x8
  UnityEngine_Object_o *animComp; // x20
  EffectSynchronize_c *v10; // x0

  if ( (byte_4A5DB54 & 1) == 0 )
  {
    sub_1B885B0(&EffectSynchronize_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SimpleAnimation__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Animation__Remove__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DB54 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
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
      System_Collections_Generic_List_object___Remove(simpleAnimCompList, v7, (const MethodInfo_34FED5C *)*v8);
      return;
    }
    goto LABEL_19;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
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
    sub_1B8880C(simpleAnimCompList, v4);
  }
}


void __fastcall EffectSynchronize__OnEnable(EffectSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimComp; // x20
  const MethodInfo *v4; // x1
  SimpleAnimation_o *v5; // x0
  UnityEngine_Object_o *animComp; // x20

  if ( (byte_4A5DB56 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DB56 = 1;
  }
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimComp;
    if ( v5 )
    {
      SimpleAnimation__Play_63844704(v5, this->fields.selfAnimStr, 0LL);
      goto LABEL_13;
    }
LABEL_14:
    sub_1B8880C(v5, v4);
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
  {
    v5 = (SimpleAnimation_o *)this->fields.animComp;
    if ( v5 )
    {
      UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v5, this->fields.selfAnimStr, 0LL);
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_13:
  EffectSynchronize__synchronize(this, v4);
}


void __fastcall EffectSynchronize__synchronize(EffectSynchronize_o *this, const MethodInfo *method)
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
  __int64 p_method; // x0
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

  if ( (byte_4A5DB55 & 1) == 0 )
  {
    sub_1B885B0(&EffectSynchronize_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Animation__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Animation__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Animation__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5DB55 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  memset(&v63, 0, sizeof(v63));
  simpleAnimComp = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimComp, 0LL, 0LL) )
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
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SimpleAnimation__GetEnumerator__);
      v64 = v62;
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v64,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__MoveNext__);
        if ( !v7 )
          break;
        current = v64.fields._current;
        if ( !v64.fields._current )
          sub_1B8880C(v7, v8);
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v64.fields._current, this->fields.syncAnimStr, 0LL) )
        {
          IsEqualsName = EffectSynchronize__IsEqualsName(this, v10);
          v13 = this->fields.simpleAnimComp;
          if ( IsEqualsName )
          {
            if ( !v13 )
              sub_1B8880C(0LL, v11);
            Item = SimpleAnimation__get_Item(v13, this->fields.syncAnimStr, 0LL);
            v16 = Item;
            if ( !Item )
              sub_1B8880C(0LL, v15);
            klass = Item->klass;
            v18 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v18;
                p_offset += 2;
                if ( !v18 )
                  goto LABEL_20;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
            }
            else
            {
LABEL_20:
              p_method = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 13LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v16, *(_QWORD *)(p_method + 8));
          }
          else
          {
            if ( !v13 )
              sub_1B8880C(0LL, v11);
            v21 = SimpleAnimation__get_Item(v13, this->fields.selfAnimStr, 0LL);
            v23 = v21;
            if ( !v21 )
              sub_1B8880C(0LL, v22);
            v24 = v21->klass;
            v25 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
            {
              v26 = (SimpleAnimation_State_c **)&v24->_1.interfaceOffsets->offset;
              while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v25;
                v26 += 2;
                if ( !v25 )
                  goto LABEL_27;
              }
              v27 = (__int64)&v24->vtable[*(_DWORD *)v26 + 13].method;
            }
            else
            {
LABEL_27:
              v27 = sub_1BDA590(v21, SimpleAnimation_State_TypeInfo, 13LL);
            }
            v28 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
          }
          if ( v28 == INFINITY )
            v29 = 0x80000000;
          else
            v29 = (int)v28;
          v30 = SimpleAnimation__get_Item((SimpleAnimation_o *)current, this->fields.syncAnimStr, 0LL);
          v32 = v30;
          if ( !v30 )
            sub_1B8880C(0LL, v31);
          v33 = v30->klass;
          v34 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
          {
            v35 = (SimpleAnimation_State_c **)&v33->_1.interfaceOffsets->offset;
            while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v34;
              v35 += 2;
              if ( !v34 )
                goto LABEL_40;
            }
            v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 13].method;
          }
          else
          {
LABEL_40:
            v36 = sub_1BDA590(v30, SimpleAnimation_State_TypeInfo, 13LL);
          }
          v37 = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
          v38 = v37 == INFINITY ? 0x80000000 : (int)v37;
          if ( SimpleAnimation__get_isPlaying((SimpleAnimation_o *)current, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)current, 0LL) )
          {
            v39 = (UnityEngine_Object_o *)this->fields.simpleAnimComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( ((v29 == v38) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, v39, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation_41110192(
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
      v40 = &Method_System_Collections_Generic_List_Enumerator_SimpleAnimation__Dispose__;
      v41 = &v64;
LABEL_88:
      System_Collections_Generic_List_Enumerator_object___Dispose(v41, (const MethodInfo_3278300 *)*v40);
      return;
    }
    goto LABEL_96;
  }
  animComp = (UnityEngine_Object_o *)this->fields.animComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animComp, 0LL, 0LL) )
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
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Animation__GetEnumerator__);
      v63 = v62;
      while ( 1 )
      {
        v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v63,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Animation__MoveNext__);
        if ( !v44 )
          break;
        v46 = v63.fields._current;
        if ( !v63.fields._current )
          sub_1B8880C(v44, v45);
        v47 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)v63.fields._current,
                                                  this->fields.syncAnimStr,
                                                  0LL);
        if ( !UnityEngine_TrackedReference__op_Equality(v47, 0LL, 0LL) )
        {
          v50 = EffectSynchronize__IsEqualsName(this, v48);
          v51 = this->fields.animComp;
          if ( v50 )
          {
            if ( !v51 )
              sub_1B8880C(0LL, v49);
            v52 = UnityEngine_Animation__get_Item(v51, this->fields.syncAnimStr, 0LL);
            if ( !v52 )
              sub_1B8880C(0LL, v53);
          }
          else
          {
            if ( !v51 )
              sub_1B8880C(0LL, v49);
            v52 = UnityEngine_Animation__get_Item(v51, this->fields.selfAnimStr, 0LL);
            if ( !v52 )
              sub_1B8880C(0LL, v54);
          }
          length = UnityEngine_AnimationState__get_length(v52, 0LL);
          if ( length == INFINITY )
            v56 = 0x80000000;
          else
            v56 = (int)length;
          v57 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v46, this->fields.syncAnimStr, 0LL);
          if ( !v57 )
            sub_1B8880C(0LL, v58);
          v59 = UnityEngine_AnimationState__get_length(v57, 0LL);
          v60 = v59 == INFINITY ? 0x80000000 : (int)v59;
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v46, 0LL)
            && UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)v46, 0LL) )
          {
            v61 = (UnityEngine_Object_o *)this->fields.animComp;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( ((v56 == v60) & UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, v61, 0LL)) != 0 )
            {
              BasicHelper__SynchronizeAnimation(
                this->fields.animComp,
                this->fields.selfAnimStr,
                this->fields.syncAnimStr,
                (UnityEngine_Animation_o *)v46,
                0LL);
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
    sub_1B8880C(simpleAnimCompList, v4);
  }
}