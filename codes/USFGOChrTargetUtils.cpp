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
  if ( (byte_4D32372 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    *(_QWORD *)&targetType = sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32372 = 1;
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
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( !v4 )
    return v2;
  if ( !Component_object )
LABEL_15:
    sub_1C93D2C(v4, v5);
  if ( LOBYTE(Component_object[35].klass) && (unsigned int)(v2 - 1) <= 3 )
    return dword_D01DB0[v2 - 1];
  return v2;
}


UnityEngine_GameObject_o *USFGOChrTargetUtils__GetActor(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D3236F & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4D3236F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v2);
  return (UnityEngine_GameObject_o *)Instance[5].klass;
}


UnityEngine_GameObject_array *USFGOChrTargetUtils__GetEnemyActorList(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4D32371 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4D32371 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance || (klass = Instance[4].klass) == 0 )
    sub_1C93D2C(Instance, v2);
  return (UnityEngine_GameObject_array *)klass->vtable[4].methodPtr;
}


UnityEngine_GameObject_array *USFGOChrTargetUtils__GetPlayerActorList(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4D32370 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4D32370 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance || (klass = Instance[4].klass) == 0 )
    sub_1C93D2C(Instance, v2);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  UnityEngine_GameObject_array *PlayerActorList; // x20
  USFGOChrTargetUtils___c_c *v22; // x8
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct USFGOChrTargetUtils___c_StaticFields *static_fields; // x0
  GrandQuestFolderBoardItem_o *p__9__5_0; // x0
  __int64 v33; // x20
  const MethodInfo *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  const MethodInfo *v41; // x0
  UnityEngine_GameObject_array *EnemyActorList; // x21
  System_Func_object__bool__o *v43; // x0
  intptr_t *v44; // x8
  USFGOChrTargetUtils___c_c *v45; // x8
  Il2CppObject *v46; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Func_TSource__bool__o *v49; // x1
  const MethodInfo *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  const MethodInfo *v57; // x0
  System_Func_object__bool__o *v58; // x22
  System_Collections_Generic_IEnumerable_T__o *v59; // x1
  const MethodInfo_3879BA8 *v60; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x20
  USFGOChrTargetUtils___c_c *v62; // x8
  System_Func_object__bool__o *_9__5_2; // x21
  Il2CppObject *v64; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  const MethodInfo *v72; // x0
  UnityEngine_GameObject_array *v73; // x0
  USFGOChrTargetUtils___c_c *v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x20
  System_Func_object__bool__o *_9__5_3; // x21
  Il2CppObject *v77; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0

  if ( (byte_4D32373 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C93AD4(&System_Func_GameObject__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_0__);
    sub_1C93AD4(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_1__);
    sub_1C93AD4(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_2__);
    sub_1C93AD4(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_3__);
    sub_1C93AD4(&Method_USFGOChrTargetUtils___c__DisplayClass5_0__GetTargets_b__4__);
    sub_1C93AD4(&USFGOChrTargetUtils___c__DisplayClass5_0_TypeInfo);
    sub_1C93AD4(&Method_USFGOChrTargetUtils___c__DisplayClass5_1__GetTargets_b__5__);
    sub_1C93AD4(&USFGOChrTargetUtils___c__DisplayClass5_1_TypeInfo);
    sub_1C93AD4(&USFGOChrTargetUtils___c_TypeInfo);
    byte_4D32373 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
      v18 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_51;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Actor,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v20[4] = (Il2CppClass *)Actor;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)Actor, v11, v12, v13, v14, v15, v16);
      }
      return (System_Collections_Generic_List_GameObject__o *)v5;
    case 1:
      PlayerActorList = USFGOChrTargetUtils__GetPlayerActorList(v6);
      v22 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v22 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__bool__o *)v22->static_fields->__9__5_0;
      if ( _9__5_0 )
        goto LABEL_28;
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = USFGOChrTargetUtils___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v24, Method_USFGOChrTargetUtils___c__GetTargets_b__5_0__, 0);
      static_fields = USFGOChrTargetUtils___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_GameObject__bool__o *)_9__5_0;
      p__9__5_0 = (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0;
      goto LABEL_27;
    case 2:
      v33 = sub_1C93D20(USFGOChrTargetUtils___c__DisplayClass5_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v33, 0);
      v9 = (System_Collections_Generic_IEnumerable_T__o *)USFGOChrTargetUtils__GetActor(v34);
      if ( !v33 )
        goto LABEL_51;
      *(_QWORD *)(v33 + 16) = v9;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 16), (int32_t)v9, v35, v36, v37, v38, v39, v40);
      EnemyActorList = USFGOChrTargetUtils__GetPlayerActorList(v41);
      v43 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GameObject__bool__TypeInfo);
      v44 = &Method_USFGOChrTargetUtils___c__DisplayClass5_0__GetTargets_b__4__;
      goto LABEL_31;
    case 3:
      PlayerActorList = USFGOChrTargetUtils__GetEnemyActorList(v6);
      v45 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v45 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__bool__o *)v45->static_fields->__9__5_1;
      if ( _9__5_0 )
        goto LABEL_28;
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = USFGOChrTargetUtils___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v45->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v46, Method_USFGOChrTargetUtils___c__GetTargets_b__5_1__, 0);
      v47 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
      v47->__9__5_1 = (struct System_Func_GameObject__bool__o *)_9__5_0;
      p__9__5_0 = (GrandQuestFolderBoardItem_o *)&v47->__9__5_1;
LABEL_27:
      sub_1C93A78(p__9__5_0, (int32_t)_9__5_0, v25, v26, v27, v28, v29, v30);
LABEL_28:
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerActorList;
      v49 = (System_Func_TSource__bool__o *)_9__5_0;
      goto LABEL_32;
    case 4:
      v33 = sub_1C93D20(USFGOChrTargetUtils___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v33, 0);
      v9 = (System_Collections_Generic_IEnumerable_T__o *)USFGOChrTargetUtils__GetActor(v50);
      if ( !v33 )
        goto LABEL_51;
      *(_QWORD *)(v33 + 16) = v9;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 16), (int32_t)v9, v51, v52, v53, v54, v55, v56);
      EnemyActorList = USFGOChrTargetUtils__GetEnemyActorList(v57);
      v43 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GameObject__bool__TypeInfo);
      v44 = &Method_USFGOChrTargetUtils___c__DisplayClass5_1__GetTargets_b__5__;
LABEL_31:
      v58 = v43;
      System_Func_object__bool____ctor(v43, (Il2CppObject *)v33, *v44, 0);
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyActorList;
      v49 = (System_Func_TSource__bool__o *)v58;
LABEL_32:
      v9 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                            v48,
                                                            v49,
                                                            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_GameObject___);
      if ( !v5 )
LABEL_51:
        sub_1C93D2C(v9, v10);
      v59 = v9;
      v60 = (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_GameObject__AddRange__;
      break;
    case 5:
      v61 = (System_Collections_Generic_IEnumerable_TSource__o *)USFGOChrTargetUtils__GetPlayerActorList(v6);
      v62 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v62 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_2 = (System_Func_object__bool__o *)v62->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v62->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v62);
          v62 = USFGOChrTargetUtils___c_TypeInfo;
        }
        v64 = (Il2CppObject *)v62->static_fields->__9;
        _9__5_2 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GameObject__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__5_2, v64, Method_USFGOChrTargetUtils___c__GetTargets_b__5_2__, 0);
        v65 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
        v65->__9__5_2 = (struct System_Func_GameObject__bool__o *)_9__5_2;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v65->__9__5_2, (int32_t)_9__5_2, v66, v67, v68, v69, v70, v71);
      }
      v9 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                            v61,
                                                            (System_Func_TSource__bool__o *)_9__5_2,
                                                            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_GameObject___);
      if ( !v5 )
        goto LABEL_51;
      System_Collections_Generic_List_object___AddRange(
        v5,
        v9,
        (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      v73 = USFGOChrTargetUtils__GetEnemyActorList(v72);
      v74 = USFGOChrTargetUtils___c_TypeInfo;
      v75 = (System_Collections_Generic_IEnumerable_TSource__o *)v73;
      if ( !USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo);
        v74 = USFGOChrTargetUtils___c_TypeInfo;
      }
      _9__5_3 = (System_Func_object__bool__o *)v74->static_fields->__9__5_3;
      if ( !_9__5_3 )
      {
        if ( !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74);
          v74 = USFGOChrTargetUtils___c_TypeInfo;
        }
        v77 = (Il2CppObject *)v74->static_fields->__9;
        _9__5_3 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GameObject__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__5_3, v77, Method_USFGOChrTargetUtils___c__GetTargets_b__5_3__, 0);
        v78 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
        v78->__9__5_3 = (struct System_Func_GameObject__bool__o *)_9__5_3;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v78->__9__5_3, (int32_t)_9__5_3, v79, v80, v81, v82, v83, v84);
      }
      v85 = System_Linq_Enumerable__Where_object_(
              v75,
              (System_Func_TSource__bool__o *)_9__5_3,
              (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_GameObject___);
      v60 = (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_GameObject__AddRange__;
      v59 = (System_Collections_Generic_IEnumerable_T__o *)v85;
      break;
    default:
      return (System_Collections_Generic_List_GameObject__o *)v5;
  }
  System_Collections_Generic_List_object___AddRange(v5, v59, v60);
  return (System_Collections_Generic_List_GameObject__o *)v5;
}


void USFGOChrTargetUtils___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D32374 & 1) == 0 )
  {
    sub_1C93AD4(&USFGOChrTargetUtils___c_TypeInfo);
    byte_4D32374 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(USFGOChrTargetUtils___c_TypeInfo);
  System_Object___ctor(v1, 0);
  USFGOChrTargetUtils___c_TypeInfo->static_fields->__9 = (struct USFGOChrTargetUtils___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)USFGOChrTargetUtils___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4D32375 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32375 = 1;
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
  if ( (byte_4D32376 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32376 = 1;
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
  if ( (byte_4D32377 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32377 = 1;
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
  if ( (byte_4D32378 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32378 = 1;
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

  if ( (byte_4D32379 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32379 = 1;
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

  if ( (byte_4D3237A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3237A = 1;
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