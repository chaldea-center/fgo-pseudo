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
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20

  v2 = targetType;
  if ( (byte_4C5873D & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    *(_QWORD *)&targetType = sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5873D = 1;
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
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( !v4 )
    return v2;
  if ( !Component_object )
LABEL_15:
    sub_1C3E7C0(v4, v5);
  if ( LOBYTE(Component_object[34].monitor) && (unsigned int)(v2 - 1) <= 3 )
    return dword_C13370[v2 - 1];
  return v2;
}


UnityEngine_GameObject_o *USFGOChrTargetUtils__GetActor(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4C5873A & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C5873A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v2);
  return (UnityEngine_GameObject_o *)Instance[5].klass;
}


UnityEngine_GameObject_array *USFGOChrTargetUtils__GetEnemyActorList(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4C5873C & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C5873C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance || (klass = Instance[4].klass) == 0 )
    sub_1C3E7C0(Instance, v2);
  return (UnityEngine_GameObject_array *)klass->vtable[4].methodPtr;
}


UnityEngine_GameObject_array *USFGOChrTargetUtils__GetPlayerActorList(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4C5873B & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C5873B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance || (klass = Instance[4].klass) == 0 )
    sub_1C3E7C0(Instance, v2);
  return (UnityEngine_GameObject_array *)klass->vtable[3].method;
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
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  UnityEngine_GameObject_array *PlayerActorList; // x20
  USFGOChrTargetUtils___c_c *v18; // x8
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct USFGOChrTargetUtils___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__5_0; // x0
  __int64 v25; // x20
  const MethodInfo *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x0
  UnityEngine_GameObject_array *EnemyActorList; // x21
  System_Func_object__bool__o *v31; // x0
  intptr_t *v32; // x8
  USFGOChrTargetUtils___c_c *v33; // x8
  Il2CppObject *v34; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Func_TSource__bool__o *v37; // x1
  const MethodInfo *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x0
  System_Func_object__bool__o *v42; // x22
  System_Collections_Generic_IEnumerable_T__o *v43; // x1
  const MethodInfo_37B566C *v44; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  USFGOChrTargetUtils___c_c *v46; // x8
  System_Func_object__bool__o *_9__5_2; // x21
  Il2CppObject *v48; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x0
  UnityEngine_GameObject_array *v53; // x0
  USFGOChrTargetUtils___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x20
  System_Func_object__bool__o *_9__5_3; // x21
  Il2CppObject *v57; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0

  if ( (byte_4C5873E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C3E564(&System_Func_GameObject__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_0__);
    sub_1C3E564(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_1__);
    sub_1C3E564(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_2__);
    sub_1C3E564(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_3__);
    sub_1C3E564(&Method_USFGOChrTargetUtils___c__DisplayClass5_0__GetTargets_b__4__);
    sub_1C3E564(&USFGOChrTargetUtils___c__DisplayClass5_0_TypeInfo);
    sub_1C3E564(&Method_USFGOChrTargetUtils___c__DisplayClass5_1__GetTargets_b__5__);
    sub_1C3E564(&USFGOChrTargetUtils___c__DisplayClass5_1_TypeInfo);
    sub_1C3E564(&USFGOChrTargetUtils___c_TypeInfo);
    byte_4C5873E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
      v14 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_51;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Actor,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v16[4] = (Il2CppClass *)Actor;
        sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)Actor, v11, v12);
      }
      return (System_Collections_Generic_List_GameObject__o *)v5;
    case 1:
      PlayerActorList = USFGOChrTargetUtils__GetPlayerActorList(v6);
      v18 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v18 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__bool__o *)v18->static_fields->__9__5_0;
      if ( _9__5_0 )
        goto LABEL_28;
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = USFGOChrTargetUtils___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v20, Method_USFGOChrTargetUtils___c__GetTargets_b__5_0__, 0);
      static_fields = USFGOChrTargetUtils___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_GameObject__bool__o *)_9__5_0;
      p__9__5_0 = (CGThumbnailListItem_o *)&static_fields->__9__5_0;
      goto LABEL_27;
    case 2:
      v25 = sub_1C3E7B0(USFGOChrTargetUtils___c__DisplayClass5_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v25, 0);
      v9 = (System_Collections_Generic_IEnumerable_T__o *)USFGOChrTargetUtils__GetActor(v26);
      if ( !v25 )
        goto LABEL_51;
      *(_QWORD *)(v25 + 16) = v9;
      sub_1C3E508((CGThumbnailListItem_o *)(v25 + 16), (int32_t)v9, v27, v28);
      EnemyActorList = USFGOChrTargetUtils__GetPlayerActorList(v29);
      v31 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GameObject__bool__TypeInfo);
      v32 = &Method_USFGOChrTargetUtils___c__DisplayClass5_0__GetTargets_b__4__;
      goto LABEL_31;
    case 3:
      PlayerActorList = USFGOChrTargetUtils__GetEnemyActorList(v6);
      v33 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v33 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__bool__o *)v33->static_fields->__9__5_1;
      if ( _9__5_0 )
        goto LABEL_28;
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = USFGOChrTargetUtils___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v33->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v34, Method_USFGOChrTargetUtils___c__GetTargets_b__5_1__, 0);
      v35 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
      v35->__9__5_1 = (struct System_Func_GameObject__bool__o *)_9__5_0;
      p__9__5_0 = (CGThumbnailListItem_o *)&v35->__9__5_1;
LABEL_27:
      sub_1C3E508(p__9__5_0, (int32_t)_9__5_0, v21, v22);
LABEL_28:
      v36 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerActorList;
      v37 = (System_Func_TSource__bool__o *)_9__5_0;
      goto LABEL_32;
    case 4:
      v25 = sub_1C3E7B0(USFGOChrTargetUtils___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v25, 0);
      v9 = (System_Collections_Generic_IEnumerable_T__o *)USFGOChrTargetUtils__GetActor(v38);
      if ( !v25 )
        goto LABEL_51;
      *(_QWORD *)(v25 + 16) = v9;
      sub_1C3E508((CGThumbnailListItem_o *)(v25 + 16), (int32_t)v9, v39, v40);
      EnemyActorList = USFGOChrTargetUtils__GetEnemyActorList(v41);
      v31 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GameObject__bool__TypeInfo);
      v32 = &Method_USFGOChrTargetUtils___c__DisplayClass5_1__GetTargets_b__5__;
LABEL_31:
      v42 = v31;
      System_Func_object__bool____ctor(v31, (Il2CppObject *)v25, *v32, 0);
      v36 = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyActorList;
      v37 = (System_Func_TSource__bool__o *)v42;
LABEL_32:
      v9 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                            v36,
                                                            v37,
                                                            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GameObject___);
      if ( !v5 )
LABEL_51:
        sub_1C3E7C0(v9, v10);
      v43 = v9;
      v44 = (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_GameObject__AddRange__;
      break;
    case 5:
      v45 = (System_Collections_Generic_IEnumerable_TSource__o *)USFGOChrTargetUtils__GetPlayerActorList(v6);
      v46 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v46 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_2 = (System_Func_object__bool__o *)v46->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          v46 = USFGOChrTargetUtils___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v46->static_fields->__9;
        _9__5_2 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GameObject__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__5_2, v48, Method_USFGOChrTargetUtils___c__GetTargets_b__5_2__, 0);
        v49 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
        v49->__9__5_2 = (struct System_Func_GameObject__bool__o *)_9__5_2;
        sub_1C3E508((CGThumbnailListItem_o *)&v49->__9__5_2, (int32_t)_9__5_2, v50, v51);
      }
      v9 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                            v45,
                                                            (System_Func_TSource__bool__o *)_9__5_2,
                                                            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GameObject___);
      if ( !v5 )
        goto LABEL_51;
      System_Collections_Generic_List_object___AddRange(
        v5,
        v9,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      v53 = USFGOChrTargetUtils__GetEnemyActorList(v52);
      v54 = USFGOChrTargetUtils___c_TypeInfo;
      v55 = (System_Collections_Generic_IEnumerable_TSource__o *)v53;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v54 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_3 = (System_Func_object__bool__o *)v54->static_fields->__9__5_3;
      if ( !_9__5_3 )
      {
        if ( !v54->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v54);
          v54 = USFGOChrTargetUtils___c_TypeInfo;
        }
        v57 = (Il2CppObject *)v54->static_fields->__9;
        _9__5_3 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GameObject__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__5_3, v57, Method_USFGOChrTargetUtils___c__GetTargets_b__5_3__, 0);
        v58 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
        v58->__9__5_3 = (struct System_Func_GameObject__bool__o *)_9__5_3;
        sub_1C3E508((CGThumbnailListItem_o *)&v58->__9__5_3, (int32_t)_9__5_3, v59, v60);
      }
      v61 = System_Linq_Enumerable__Where_object_(
              v55,
              (System_Func_TSource__bool__o *)_9__5_3,
              (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GameObject___);
      v44 = (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_GameObject__AddRange__;
      v43 = (System_Collections_Generic_IEnumerable_T__o *)v61;
      break;
    default:
      return (System_Collections_Generic_List_GameObject__o *)v5;
  }
  System_Collections_Generic_List_object___AddRange(v5, v43, v44);
  return (System_Collections_Generic_List_GameObject__o *)v5;
}


void USFGOChrTargetUtils___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5873F & 1) == 0 )
  {
    sub_1C3E564(&USFGOChrTargetUtils___c_TypeInfo);
    byte_4C5873F = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(USFGOChrTargetUtils___c_TypeInfo);
  System_Object___ctor(v1, 0);
  USFGOChrTargetUtils___c_TypeInfo->static_fields->__9 = (struct USFGOChrTargetUtils___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)USFGOChrTargetUtils___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C58740 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58740 = 1;
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
  if ( (byte_4C58741 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58741 = 1;
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
  if ( (byte_4C58742 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58742 = 1;
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
  if ( (byte_4C58743 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58743 = 1;
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

  if ( (byte_4C58744 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58744 = 1;
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

  if ( (byte_4C58745 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58745 = 1;
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