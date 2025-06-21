void __fastcall USFGOChrTargetUtils___ctor(USFGOChrTargetUtils_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall USFGOChrTargetUtils__FlipTargetType(int32_t targetType, const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  UnityEngine_Object_o *Actor; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  v2 = targetType;
  if ( (byte_4B1DE60 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    *(_QWORD *)&targetType = sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1DE60 = 1;
  }
  Actor = (UnityEngine_Object_o *)USFGOChrTargetUtils__GetActor(*(const MethodInfo **)&targetType);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(Actor, 0LL, 0LL);
  if ( !v5 )
    return v2;
  if ( !Actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Actor,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( !v5 )
    return v2;
  if ( !Component_object )
LABEL_15:
    sub_1BCB254(v5, v6);
  if ( LOBYTE(Component_object[34].klass) && (unsigned int)(v2 - 1) <= 3 )
    return dword_BE32B0[v2 - 1];
  return v2;
}


UnityEngine_GameObject_o *__fastcall USFGOChrTargetUtils__GetActor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B1DE5D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v1);
    byte_4B1DE5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  return (UnityEngine_GameObject_o *)Instance[5].klass;
}


UnityEngine_GameObject_array *__fastcall USFGOChrTargetUtils__GetEnemyActorList(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4B1DE5F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v1);
    byte_4B1DE5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance || (klass = Instance[4].klass) == 0LL )
    sub_1BCB254(Instance, v3);
  return (UnityEngine_GameObject_array *)klass->vtable[4].method;
}


UnityEngine_GameObject_array *__fastcall USFGOChrTargetUtils__GetPlayerActorList(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4B1DE5E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v1);
    byte_4B1DE5E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance || (klass = Instance[4].klass) == 0LL )
    sub_1BCB254(Instance, v3);
  return (UnityEngine_GameObject_array *)klass->vtable[4].methodPtr;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_GameObject__o *__fastcall USFGOChrTargetUtils__GetTargets(
        int32_t targetType,
        bool isFlipTargetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x19
  const MethodInfo *v21; // x0
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *Actor; // x20
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  UnityEngine_GameObject_array *PlayerActorList; // x20
  USFGOChrTargetUtils___c_c *v33; // x8
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v35; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct USFGOChrTargetUtils___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__5_0; // x0
  __int64 v40; // x20
  const MethodInfo *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x0
  UnityEngine_GameObject_array *EnemyActorList; // x21
  System_Func_object__bool__o *v46; // x0
  __int64 *v47; // x8
  USFGOChrTargetUtils___c_c *v48; // x8
  Il2CppObject *v49; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Func_TSource__bool__o *v52; // x1
  const MethodInfo *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x0
  System_Func_object__bool__o *v57; // x22
  System_Collections_Generic_IEnumerable_T__o *v58; // x1
  const MethodInfo_36B9DDC *v59; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x20
  USFGOChrTargetUtils___c_c *v61; // x8
  System_Func_object__bool__o *_9__5_2; // x21
  Il2CppObject *v63; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x0
  UnityEngine_GameObject_array *v68; // x0
  USFGOChrTargetUtils___c_c *v69; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x20
  System_Func_object__bool__o *_9__5_3; // x21
  Il2CppObject *v72; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0

  if ( (byte_4B1DE61 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_GameObject___, isFlipTargetType);
    sub_1BCAFF8(&System_Func_GameObject__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__AddRange__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_0__, v11);
    sub_1BCAFF8(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_1__, v12);
    sub_1BCAFF8(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_2__, v13);
    sub_1BCAFF8(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_3__, v14);
    sub_1BCAFF8(&Method_USFGOChrTargetUtils___c__DisplayClass5_0__GetTargets_b__4__, v15);
    sub_1BCAFF8(&USFGOChrTargetUtils___c__DisplayClass5_0_TypeInfo, v16);
    sub_1BCAFF8(&Method_USFGOChrTargetUtils___c__DisplayClass5_1__GetTargets_b__5__, v17);
    sub_1BCAFF8(&USFGOChrTargetUtils___c__DisplayClass5_1_TypeInfo, v18);
    sub_1BCAFF8(&USFGOChrTargetUtils___c_TypeInfo, v19);
    byte_4B1DE61 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( isFlipTargetType )
  {
    v21 = (const MethodInfo *)USFGOChrTargetUtils__FlipTargetType(targetType, v22);
    targetType = (int)v21;
  }
  switch ( targetType )
  {
    case 0:
      Actor = (UnityEngine_Object_o *)USFGOChrTargetUtils__GetActor(v21);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_Object__op_Inequality(Actor, 0LL, 0LL);
      if ( ((unsigned __int8)v24 & 1) == 0 )
        return (System_Collections_Generic_List_GameObject__o *)v20;
      if ( !v20 )
        goto LABEL_51;
      items = v20->fields._items;
      v29 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_51;
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          (Il2CppObject *)Actor,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v31[4] = (Il2CppClass *)Actor;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v31 + 4), (int32_t)Actor, v26, v27);
      }
      return (System_Collections_Generic_List_GameObject__o *)v20;
    case 1:
      PlayerActorList = USFGOChrTargetUtils__GetPlayerActorList(v21);
      v33 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v33 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__bool__o *)v33->static_fields->__9__5_0;
      if ( _9__5_0 )
        goto LABEL_28;
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = USFGOChrTargetUtils___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v35, Method_USFGOChrTargetUtils___c__GetTargets_b__5_0__, 0LL);
      static_fields = USFGOChrTargetUtils___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_GameObject__bool__o *)_9__5_0;
      p__9__5_0 = (CGThumbnailListItem_o *)&static_fields->__9__5_0;
      goto LABEL_27;
    case 2:
      v40 = sub_1BCB244(USFGOChrTargetUtils___c__DisplayClass5_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v40, 0LL);
      v24 = (System_Collections_Generic_IEnumerable_T__o *)USFGOChrTargetUtils__GetActor(v41);
      if ( !v40 )
        goto LABEL_51;
      *(_QWORD *)(v40 + 16) = v24;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v40 + 16), (int32_t)v24, v42, v43);
      EnemyActorList = USFGOChrTargetUtils__GetPlayerActorList(v44);
      v46 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GameObject__bool__TypeInfo);
      v47 = &Method_USFGOChrTargetUtils___c__DisplayClass5_0__GetTargets_b__4__;
      goto LABEL_31;
    case 3:
      PlayerActorList = USFGOChrTargetUtils__GetEnemyActorList(v21);
      v48 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v48 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__bool__o *)v48->static_fields->__9__5_1;
      if ( _9__5_0 )
        goto LABEL_28;
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = USFGOChrTargetUtils___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v48->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v49, Method_USFGOChrTargetUtils___c__GetTargets_b__5_1__, 0LL);
      v50 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
      v50->__9__5_1 = (struct System_Func_GameObject__bool__o *)_9__5_0;
      p__9__5_0 = (CGThumbnailListItem_o *)&v50->__9__5_1;
LABEL_27:
      sub_1BCAF9C(p__9__5_0, (int32_t)_9__5_0, v36, v37);
LABEL_28:
      v51 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerActorList;
      v52 = (System_Func_TSource__bool__o *)_9__5_0;
      goto LABEL_32;
    case 4:
      v40 = sub_1BCB244(USFGOChrTargetUtils___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v40, 0LL);
      v24 = (System_Collections_Generic_IEnumerable_T__o *)USFGOChrTargetUtils__GetActor(v53);
      if ( !v40 )
        goto LABEL_51;
      *(_QWORD *)(v40 + 16) = v24;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v40 + 16), (int32_t)v24, v54, v55);
      EnemyActorList = USFGOChrTargetUtils__GetEnemyActorList(v56);
      v46 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GameObject__bool__TypeInfo);
      v47 = &Method_USFGOChrTargetUtils___c__DisplayClass5_1__GetTargets_b__5__;
LABEL_31:
      v57 = v46;
      System_Func_object__bool____ctor(v46, (Il2CppObject *)v40, *v47, 0LL);
      v51 = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyActorList;
      v52 = (System_Func_TSource__bool__o *)v57;
LABEL_32:
      v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             v51,
                                                             v52,
                                                             (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_GameObject___);
      if ( !v20 )
LABEL_51:
        sub_1BCB254(v24, v25);
      v58 = v24;
      v59 = (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_GameObject__AddRange__;
      break;
    case 5:
      v60 = (System_Collections_Generic_IEnumerable_TSource__o *)USFGOChrTargetUtils__GetPlayerActorList(v21);
      v61 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v61 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_2 = (System_Func_object__bool__o *)v61->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v61->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v61);
          v61 = USFGOChrTargetUtils___c_TypeInfo;
        }
        v63 = (Il2CppObject *)v61->static_fields->__9;
        _9__5_2 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GameObject__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__5_2, v63, Method_USFGOChrTargetUtils___c__GetTargets_b__5_2__, 0LL);
        v64 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
        v64->__9__5_2 = (struct System_Func_GameObject__bool__o *)_9__5_2;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v64->__9__5_2, (int32_t)_9__5_2, v65, v66);
      }
      v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             v60,
                                                             (System_Func_TSource__bool__o *)_9__5_2,
                                                             (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_GameObject___);
      if ( !v20 )
        goto LABEL_51;
      System_Collections_Generic_List_object___AddRange(
        v20,
        v24,
        (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      v68 = USFGOChrTargetUtils__GetEnemyActorList(v67);
      v69 = USFGOChrTargetUtils___c_TypeInfo;
      v70 = (System_Collections_Generic_IEnumerable_TSource__o *)v68;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v69 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_3 = (System_Func_object__bool__o *)v69->static_fields->__9__5_3;
      if ( !_9__5_3 )
      {
        if ( !v69->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v69);
          v69 = USFGOChrTargetUtils___c_TypeInfo;
        }
        v72 = (Il2CppObject *)v69->static_fields->__9;
        _9__5_3 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GameObject__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__5_3, v72, Method_USFGOChrTargetUtils___c__GetTargets_b__5_3__, 0LL);
        v73 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
        v73->__9__5_3 = (struct System_Func_GameObject__bool__o *)_9__5_3;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v73->__9__5_3, (int32_t)_9__5_3, v74, v75);
      }
      v76 = System_Linq_Enumerable__Where_object_(
              v70,
              (System_Func_TSource__bool__o *)_9__5_3,
              (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_GameObject___);
      v59 = (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_GameObject__AddRange__;
      v58 = (System_Collections_Generic_IEnumerable_T__o *)v76;
      break;
    default:
      return (System_Collections_Generic_List_GameObject__o *)v20;
  }
  System_Collections_Generic_List_object___AddRange(v20, v58, v59);
  return (System_Collections_Generic_List_GameObject__o *)v20;
}


void __fastcall USFGOChrTargetUtils___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1DE62 & 1) == 0 )
  {
    sub_1BCAFF8(&USFGOChrTargetUtils___c_TypeInfo, v1);
    byte_4B1DE62 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(USFGOChrTargetUtils___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  USFGOChrTargetUtils___c_TypeInfo->static_fields->__9 = (struct USFGOChrTargetUtils___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)USFGOChrTargetUtils___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall USFGOChrTargetUtils___c___ctor(USFGOChrTargetUtils___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall USFGOChrTargetUtils___c___GetTargets_b__5_0(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_4B1DE63 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B1DE63 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0LL, 0LL);
}


bool __fastcall USFGOChrTargetUtils___c___GetTargets_b__5_1(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_4B1DE64 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B1DE64 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0LL, 0LL);
}


bool __fastcall USFGOChrTargetUtils___c___GetTargets_b__5_2(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_4B1DE65 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B1DE65 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0LL, 0LL);
}


bool __fastcall USFGOChrTargetUtils___c___GetTargets_b__5_3(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_4B1DE66 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B1DE66 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0LL, 0LL);
}


void __fastcall USFGOChrTargetUtils___c__DisplayClass5_0___ctor(
        USFGOChrTargetUtils___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall USFGOChrTargetUtils___c__DisplayClass5_0___GetTargets_b__4(
        USFGOChrTargetUtils___c__DisplayClass5_0_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20

  if ( (byte_4B1DE67 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B1DE67 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0LL, 0LL) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, actor, 0LL);
}


void __fastcall USFGOChrTargetUtils___c__DisplayClass5_1___ctor(
        USFGOChrTargetUtils___c__DisplayClass5_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall USFGOChrTargetUtils___c__DisplayClass5_1___GetTargets_b__5(
        USFGOChrTargetUtils___c__DisplayClass5_1_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20

  if ( (byte_4B1DE68 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B1DE68 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0LL, 0LL) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, actor, 0LL);
}