void USFGOChrTargetUtils___ctor(USFGOChrTargetUtils_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t USFGOChrTargetUtils__FlipTargetType(int32_t targetType, const MethodInfo *method)
{
  int32_t v2; // w19
  UnityEngine_Object_o *Actor; // x20
  _BOOL8 v4; // x0
  Il2CppObject *Component_object; // x20

  v2 = targetType;
  if ( (byte_4C39378 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    *(_QWORD *)&targetType = sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39378 = 1;
  }
  Actor = (UnityEngine_Object_o *)USFGOChrTargetUtils__GetActor(*(const MethodInfo **)&targetType);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(Actor, 0, 0);
  if ( !v4 )
    return v2;
  if ( !Actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Actor,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( !v4 )
    return v2;
  if ( !Component_object )
LABEL_15:
    sub_1C32E7C(v4);
  if ( LOBYTE(Component_object[34].monitor) && (unsigned int)(v2 - 1) <= 3 )
    return dword_C0DD80[v2 - 1];
  return v2;
}


UnityEngine_GameObject_o *USFGOChrTargetUtils__GetActor(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C39375 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C39375 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return (UnityEngine_GameObject_o *)Instance[5].klass;
}


UnityEngine_GameObject_array *USFGOChrTargetUtils__GetEnemyActorList(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8

  if ( (byte_4C39377 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C39377 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance || (klass = Instance[4].klass) == 0 )
    sub_1C32E7C(Instance);
  return (UnityEngine_GameObject_array *)klass->vtable[3].method;
}


UnityEngine_GameObject_array *USFGOChrTargetUtils__GetPlayerActorList(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8

  if ( (byte_4C39376 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C39376 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance || (klass = Instance[4].klass) == 0 )
    sub_1C32E7C(Instance);
  return (UnityEngine_GameObject_array *)klass->vtable[3].methodPtr;
}


System_Collections_Generic_List_GameObject__o *USFGOChrTargetUtils__GetTargets(
        int32_t targetType,
        bool isFlipTargetType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *Actor; // x20
  System_Collections_Generic_IEnumerable_T__o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  UnityEngine_GameObject_array *PlayerActorList; // x20
  USFGOChrTargetUtils___c_c *v17; // x8
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct USFGOChrTargetUtils___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__5_0; // x0
  __int64 v24; // x20
  const MethodInfo *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x0
  UnityEngine_GameObject_array *EnemyActorList; // x21
  System_Func_object__bool__o *v30; // x0
  intptr_t *v31; // x8
  USFGOChrTargetUtils___c_c *v32; // x8
  Il2CppObject *v33; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Func_TSource__bool__o *v36; // x1
  const MethodInfo *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x0
  System_Func_object__bool__o *v41; // x22
  System_Collections_Generic_IEnumerable_T__o *v42; // x1
  const MethodInfo_37989C8 *v43; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  USFGOChrTargetUtils___c_c *v45; // x8
  System_Func_object__bool__o *_9__5_2; // x21
  Il2CppObject *v47; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x0
  UnityEngine_GameObject_array *v52; // x0
  USFGOChrTargetUtils___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  System_Func_object__bool__o *_9__5_3; // x21
  Il2CppObject *v56; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0

  if ( (byte_4C39379 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C32C20(&System_Func_GameObject__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_0__);
    sub_1C32C20(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_1__);
    sub_1C32C20(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_2__);
    sub_1C32C20(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_3__);
    sub_1C32C20(&Method_USFGOChrTargetUtils___c__DisplayClass5_0__GetTargets_b__4__);
    sub_1C32C20(&USFGOChrTargetUtils___c__DisplayClass5_0_TypeInfo);
    sub_1C32C20(&Method_USFGOChrTargetUtils___c__DisplayClass5_1__GetTargets_b__5__);
    sub_1C32C20(&USFGOChrTargetUtils___c__DisplayClass5_1_TypeInfo);
    sub_1C32C20(&USFGOChrTargetUtils___c_TypeInfo);
    byte_4C39379 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( isFlipTargetType )
  {
    v6 = (const MethodInfo *)USFGOChrTargetUtils__FlipTargetType(targetType, v7);
    targetType = (int)v6;
  }
  switch ( targetType )
  {
    case 0:
      Actor = (UnityEngine_Object_o *)USFGOChrTargetUtils__GetActor(v6);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_Object__op_Inequality(Actor, 0, 0);
      if ( ((unsigned __int8)v9 & 1) == 0 )
        return (System_Collections_Generic_List_GameObject__o *)v5;
      if ( !v5 )
        goto LABEL_51;
      items = v5->fields._items;
      v13 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_51;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Actor,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v15[4] = (Il2CppClass *)Actor;
        sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)Actor, v10, v11);
      }
      return (System_Collections_Generic_List_GameObject__o *)v5;
    case 1:
      PlayerActorList = USFGOChrTargetUtils__GetPlayerActorList(v6);
      v17 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v17 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__bool__o *)v17->static_fields->__9__5_0;
      if ( _9__5_0 )
        goto LABEL_28;
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = USFGOChrTargetUtils___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v19, Method_USFGOChrTargetUtils___c__GetTargets_b__5_0__, 0);
      static_fields = USFGOChrTargetUtils___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_GameObject__bool__o *)_9__5_0;
      p__9__5_0 = (CGThumbnailListItem_o *)&static_fields->__9__5_0;
      goto LABEL_27;
    case 2:
      v24 = sub_1C32E6C(USFGOChrTargetUtils___c__DisplayClass5_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0);
      v9 = (System_Collections_Generic_IEnumerable_T__o *)USFGOChrTargetUtils__GetActor(v25);
      if ( !v24 )
        goto LABEL_51;
      *(_QWORD *)(v24 + 16) = v9;
      sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v9, v26, v27);
      EnemyActorList = USFGOChrTargetUtils__GetPlayerActorList(v28);
      v30 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GameObject__bool__TypeInfo);
      v31 = &Method_USFGOChrTargetUtils___c__DisplayClass5_0__GetTargets_b__4__;
      goto LABEL_31;
    case 3:
      PlayerActorList = USFGOChrTargetUtils__GetEnemyActorList(v6);
      v32 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v32 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__bool__o *)v32->static_fields->__9__5_1;
      if ( _9__5_0 )
        goto LABEL_28;
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = USFGOChrTargetUtils___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v32->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v33, Method_USFGOChrTargetUtils___c__GetTargets_b__5_1__, 0);
      v34 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
      v34->__9__5_1 = (struct System_Func_GameObject__bool__o *)_9__5_0;
      p__9__5_0 = (CGThumbnailListItem_o *)&v34->__9__5_1;
LABEL_27:
      sub_1C32BC4(p__9__5_0, (int32_t)_9__5_0, v20, v21);
LABEL_28:
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerActorList;
      v36 = (System_Func_TSource__bool__o *)_9__5_0;
      goto LABEL_32;
    case 4:
      v24 = sub_1C32E6C(USFGOChrTargetUtils___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0);
      v9 = (System_Collections_Generic_IEnumerable_T__o *)USFGOChrTargetUtils__GetActor(v37);
      if ( !v24 )
        goto LABEL_51;
      *(_QWORD *)(v24 + 16) = v9;
      sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v9, v38, v39);
      EnemyActorList = USFGOChrTargetUtils__GetEnemyActorList(v40);
      v30 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GameObject__bool__TypeInfo);
      v31 = &Method_USFGOChrTargetUtils___c__DisplayClass5_1__GetTargets_b__5__;
LABEL_31:
      v41 = v30;
      System_Func_object__bool____ctor(v30, (Il2CppObject *)v24, *v31, 0);
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyActorList;
      v36 = (System_Func_TSource__bool__o *)v41;
LABEL_32:
      v9 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                            v35,
                                                            v36,
                                                            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GameObject___);
      if ( !v5 )
LABEL_51:
        sub_1C32E7C(v9);
      v42 = v9;
      v43 = (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_GameObject__AddRange__;
      break;
    case 5:
      v44 = (System_Collections_Generic_IEnumerable_TSource__o *)USFGOChrTargetUtils__GetPlayerActorList(v6);
      v45 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v45 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_2 = (System_Func_object__bool__o *)v45->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = USFGOChrTargetUtils___c_TypeInfo;
        }
        v47 = (Il2CppObject *)v45->static_fields->__9;
        _9__5_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GameObject__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__5_2, v47, Method_USFGOChrTargetUtils___c__GetTargets_b__5_2__, 0);
        v48 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
        v48->__9__5_2 = (struct System_Func_GameObject__bool__o *)_9__5_2;
        sub_1C32BC4((CGThumbnailListItem_o *)&v48->__9__5_2, (int32_t)_9__5_2, v49, v50);
      }
      v9 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                            v44,
                                                            (System_Func_TSource__bool__o *)_9__5_2,
                                                            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GameObject___);
      if ( !v5 )
        goto LABEL_51;
      System_Collections_Generic_List_object___AddRange(
        v5,
        v9,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      v52 = USFGOChrTargetUtils__GetEnemyActorList(v51);
      v53 = USFGOChrTargetUtils___c_TypeInfo;
      v54 = (System_Collections_Generic_IEnumerable_TSource__o *)v52;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v53 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_3 = (System_Func_object__bool__o *)v53->static_fields->__9__5_3;
      if ( !_9__5_3 )
      {
        if ( !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          v53 = USFGOChrTargetUtils___c_TypeInfo;
        }
        v56 = (Il2CppObject *)v53->static_fields->__9;
        _9__5_3 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GameObject__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__5_3, v56, Method_USFGOChrTargetUtils___c__GetTargets_b__5_3__, 0);
        v57 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
        v57->__9__5_3 = (struct System_Func_GameObject__bool__o *)_9__5_3;
        sub_1C32BC4((CGThumbnailListItem_o *)&v57->__9__5_3, (int32_t)_9__5_3, v58, v59);
      }
      v60 = System_Linq_Enumerable__Where_object_(
              v54,
              (System_Func_TSource__bool__o *)_9__5_3,
              (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GameObject___);
      v43 = (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_GameObject__AddRange__;
      v42 = (System_Collections_Generic_IEnumerable_T__o *)v60;
      break;
    default:
      return (System_Collections_Generic_List_GameObject__o *)v5;
  }
  System_Collections_Generic_List_object___AddRange(v5, v42, v43);
  return (System_Collections_Generic_List_GameObject__o *)v5;
}


void USFGOChrTargetUtils___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3937A & 1) == 0 )
  {
    sub_1C32C20(&USFGOChrTargetUtils___c_TypeInfo);
    byte_4C3937A = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(USFGOChrTargetUtils___c_TypeInfo);
  System_Object___ctor(v1, 0);
  USFGOChrTargetUtils___c_TypeInfo->static_fields->__9 = (struct USFGOChrTargetUtils___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)USFGOChrTargetUtils___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void USFGOChrTargetUtils___c___ctor(USFGOChrTargetUtils___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool USFGOChrTargetUtils___c___GetTargets_b__5_0(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_4C3937B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3937B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0);
}


bool USFGOChrTargetUtils___c___GetTargets_b__5_1(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_4C3937C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3937C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0);
}


bool USFGOChrTargetUtils___c___GetTargets_b__5_2(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_4C3937D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3937D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0);
}


bool USFGOChrTargetUtils___c___GetTargets_b__5_3(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_4C3937E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3937E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0);
}


void USFGOChrTargetUtils___c__DisplayClass5_0___ctor(
        USFGOChrTargetUtils___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool USFGOChrTargetUtils___c__DisplayClass5_0___GetTargets_b__4(
        USFGOChrTargetUtils___c__DisplayClass5_0_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20

  if ( (byte_4C3937F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3937F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, actor, 0);
}


void USFGOChrTargetUtils___c__DisplayClass5_1___ctor(
        USFGOChrTargetUtils___c__DisplayClass5_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool USFGOChrTargetUtils___c__DisplayClass5_1___GetTargets_b__5(
        USFGOChrTargetUtils___c__DisplayClass5_1_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20

  if ( (byte_4C39380 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39380 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, actor, 0);
}