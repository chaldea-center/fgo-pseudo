void USFGOChrTargetUtils___ctor(USFGOChrTargetUtils_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t USFGOChrTargetUtils__FlipTargetType(int32_t targetType, const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  UnityEngine_Object_o *Actor; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20

  v2 = targetType;
  if ( (byte_597228B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    *(_QWORD *)&targetType = sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597228B = 1;
  }
  Actor = (UnityEngine_Object_o *)USFGOChrTargetUtils__GetActor(*(const MethodInfo **)&targetType);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality(Actor, 0, 0);
  if ( v5 )
  {
    if ( !Actor )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Actor,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v5 )
    {
      if ( Component_object )
      {
        if ( LOBYTE(Component_object[36].klass) && (unsigned int)(v2 - 1) <= 3 )
          return dword_E9BE50[v2 - 1];
        return v2;
      }
LABEL_15:
      sub_2213CDC(v5, v6);
    }
  }
  return v2;
}


UnityEngine_GameObject_o *USFGOChrTargetUtils__GetActor(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_5972288 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_5972288 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (UnityEngine_GameObject_o *)Instance[5].klass;
}


UnityEngine_GameObject_array *USFGOChrTargetUtils__GetEnemyActorList(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  Il2CppClass *klass; // x8

  if ( (byte_597228A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_597228A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance || (klass = Instance[4].klass) == 0 )
    sub_2213CDC(Instance, v2);
  return (UnityEngine_GameObject_array *)klass->vtable[4].methodPtr;
}


UnityEngine_GameObject_array *USFGOChrTargetUtils__GetPlayerActorList(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  Il2CppClass *klass; // x8

  if ( (byte_5972289 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_5972289 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance || (klass = Instance[4].klass) == 0 )
    sub_2213CDC(Instance, v2);
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
  __int64 v8; // x20
  const MethodInfo *v9; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x0
  UnityEngine_GameObject_array *PlayerActorList; // x21
  System_Func_object__bool__o *v20; // x0
  intptr_t *v21; // x8
  __int64 v22; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  USFGOChrTargetUtils___c_c *v24; // x8
  struct USFGOChrTargetUtils___c_StaticFields *v25; // x9
  System_Func_object__bool__o *_9__5_2; // x21
  Il2CppObject *v27; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  const MethodInfo *v35; // x0
  UnityEngine_GameObject_array *v36; // x0
  __int64 v37; // x1
  USFGOChrTargetUtils___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  struct USFGOChrTargetUtils___c_StaticFields *v40; // x9
  System_Func_object__bool__o *_9__5_3; // x21
  Il2CppObject *v42; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  const MethodInfo_4483E74 *v51; // x2
  System_Collections_Generic_IEnumerable_T__o *v52; // x1
  __int64 v53; // x1
  UnityEngine_Object_o *Actor; // x20
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  __int64 v65; // x1
  UnityEngine_GameObject_array *EnemyActorList; // x20
  USFGOChrTargetUtils___c_c *v67; // x8
  struct USFGOChrTargetUtils___c_StaticFields *v68; // x9
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v70; // x22
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct USFGOChrTargetUtils___c_StaticFields *v77; // x0
  MissionNaviTransitionBoardItem_o *p__9__5_0; // x0
  __int64 v79; // x1
  USFGOChrTargetUtils___c_c *v80; // x8
  struct USFGOChrTargetUtils___c_StaticFields *static_fields; // x9
  Il2CppObject *v82; // x22
  struct USFGOChrTargetUtils___c_StaticFields *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  System_Func_TSource__bool__o *v85; // x1
  const MethodInfo *v86; // x0
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  const MethodInfo *v93; // x0
  System_Func_object__bool__o *v94; // x22

  if ( (byte_597228C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_2213A60(&System_Func_GameObject__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_0__);
    sub_2213A60(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_1__);
    sub_2213A60(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_2__);
    sub_2213A60(&Method_USFGOChrTargetUtils___c__GetTargets_b__5_3__);
    sub_2213A60(&Method_USFGOChrTargetUtils___c__DisplayClass5_0__GetTargets_b__4__);
    sub_2213A60(&USFGOChrTargetUtils___c__DisplayClass5_0_TypeInfo);
    sub_2213A60(&Method_USFGOChrTargetUtils___c__DisplayClass5_1__GetTargets_b__5__);
    sub_2213A60(&USFGOChrTargetUtils___c__DisplayClass5_1_TypeInfo);
    sub_2213A60(&USFGOChrTargetUtils___c_TypeInfo);
    byte_597228C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( isFlipTargetType )
  {
    v6 = (const MethodInfo *)USFGOChrTargetUtils__FlipTargetType(targetType, v7);
    targetType = (int)v6;
  }
  if ( targetType <= 2 )
  {
    if ( !targetType )
    {
      Actor = (UnityEngine_Object_o *)USFGOChrTargetUtils__GetActor(v6);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
      v10 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_Object__op_Inequality(Actor, 0, 0);
      if ( ((unsigned __int8)v10 & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_57;
        items = v5->fields._items;
        v62 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_57;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)Actor,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v64[4] = (Il2CppClass *)Actor;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v64 + 4), (int32_t)Actor, v55, v56, v57, v58, v59, v60);
        }
      }
      return (System_Collections_Generic_List_GameObject__o *)v5;
    }
    if ( targetType != 1 )
    {
      if ( targetType == 2 )
      {
        v8 = sub_2213CCC(USFGOChrTargetUtils___c__DisplayClass5_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v8, 0);
        v10 = (System_Collections_Generic_IEnumerable_T__o *)USFGOChrTargetUtils__GetActor(v9);
        if ( !v8 )
          goto LABEL_57;
        *(_QWORD *)(v8 + 16) = v10;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)v10, v12, v13, v14, v15, v16, v17);
        PlayerActorList = USFGOChrTargetUtils__GetPlayerActorList(v18);
        v20 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObject__bool__TypeInfo);
        v21 = &Method_USFGOChrTargetUtils___c__DisplayClass5_0__GetTargets_b__4__;
LABEL_51:
        v94 = v20;
        System_Func_object__bool____ctor(v20, (Il2CppObject *)v8, *v21, 0);
        v84 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerActorList;
        v85 = (System_Func_TSource__bool__o *)v94;
LABEL_52:
        v10 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                               v84,
                                                               v85,
                                                               (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GameObject___);
        if ( v5 )
        {
          v52 = v10;
          v51 = (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_GameObject__AddRange__;
LABEL_54:
          System_Collections_Generic_List_object___AddRange(v5, v52, v51);
          return (System_Collections_Generic_List_GameObject__o *)v5;
        }
        goto LABEL_57;
      }
      return (System_Collections_Generic_List_GameObject__o *)v5;
    }
    EnemyActorList = USFGOChrTargetUtils__GetPlayerActorList(v6);
    v80 = USFGOChrTargetUtils___c_TypeInfo;
    if ( !*(&USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo, v79);
      v80 = USFGOChrTargetUtils___c_TypeInfo;
    }
    static_fields = v80->static_fields;
    _9__5_0 = (System_Func_object__bool__o *)static_fields->__9__5_0;
    if ( _9__5_0 )
    {
LABEL_48:
      v84 = (System_Collections_Generic_IEnumerable_TSource__o *)EnemyActorList;
      v85 = (System_Func_TSource__bool__o *)_9__5_0;
      goto LABEL_52;
    }
    if ( !*(&v80->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v80, v79);
      static_fields = USFGOChrTargetUtils___c_TypeInfo->static_fields;
    }
    v82 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__5_0, v82, Method_USFGOChrTargetUtils___c__GetTargets_b__5_0__, 0);
    v83 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
    v83->__9__5_0 = (struct System_Func_GameObject__bool__o *)_9__5_0;
    p__9__5_0 = (MissionNaviTransitionBoardItem_o *)&v83->__9__5_0;
LABEL_47:
    sub_2213A04(p__9__5_0, (int32_t)_9__5_0, v71, v72, v73, v74, v75, v76);
    goto LABEL_48;
  }
  switch ( targetType )
  {
    case 3:
      EnemyActorList = USFGOChrTargetUtils__GetEnemyActorList(v6);
      v67 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !*(&USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo, v65);
        v67 = USFGOChrTargetUtils___c_TypeInfo;
      }
      v68 = v67->static_fields;
      _9__5_0 = (System_Func_object__bool__o *)v68->__9__5_1;
      if ( _9__5_0 )
        goto LABEL_48;
      if ( !*(&v67->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v67, v65);
        v68 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
      }
      v70 = (Il2CppObject *)v68->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObject__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__5_0, v70, Method_USFGOChrTargetUtils___c__GetTargets_b__5_1__, 0);
      v77 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
      v77->__9__5_1 = (struct System_Func_GameObject__bool__o *)_9__5_0;
      p__9__5_0 = (MissionNaviTransitionBoardItem_o *)&v77->__9__5_1;
      goto LABEL_47;
    case 4:
      v8 = sub_2213CCC(USFGOChrTargetUtils___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0);
      v10 = (System_Collections_Generic_IEnumerable_T__o *)USFGOChrTargetUtils__GetActor(v86);
      if ( !v8 )
        goto LABEL_57;
      *(_QWORD *)(v8 + 16) = v10;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)v10, v87, v88, v89, v90, v91, v92);
      PlayerActorList = USFGOChrTargetUtils__GetEnemyActorList(v93);
      v20 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObject__bool__TypeInfo);
      v21 = &Method_USFGOChrTargetUtils___c__DisplayClass5_1__GetTargets_b__5__;
      goto LABEL_51;
    case 5:
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)USFGOChrTargetUtils__GetPlayerActorList(v6);
      v24 = USFGOChrTargetUtils___c_TypeInfo;
      if ( !*(&USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo, v22);
        v24 = USFGOChrTargetUtils___c_TypeInfo;
      }
      v25 = v24->static_fields;
      _9__5_2 = (System_Func_object__bool__o *)v25->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !*(&v24->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v24, v22);
          v25 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)v25->__9;
        _9__5_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObject__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__5_2, v27, Method_USFGOChrTargetUtils___c__GetTargets_b__5_2__, 0);
        v28 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
        v28->__9__5_2 = (struct System_Func_GameObject__bool__o *)_9__5_2;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->__9__5_2, (int32_t)_9__5_2, v29, v30, v31, v32, v33, v34);
      }
      v10 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                             v23,
                                                             (System_Func_TSource__bool__o *)_9__5_2,
                                                             (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GameObject___);
      if ( v5 )
      {
        System_Collections_Generic_List_object___AddRange(
          v5,
          v10,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
        v36 = USFGOChrTargetUtils__GetEnemyActorList(v35);
        v38 = USFGOChrTargetUtils___c_TypeInfo;
        v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
        if ( !*(&USFGOChrTargetUtils___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(USFGOChrTargetUtils___c_TypeInfo, v37);
          v38 = USFGOChrTargetUtils___c_TypeInfo;
        }
        v40 = v38->static_fields;
        _9__5_3 = (System_Func_object__bool__o *)v40->__9__5_3;
        if ( !_9__5_3 )
        {
          if ( !*(&v38->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v38, v37);
            v40 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
          }
          v42 = (Il2CppObject *)v40->__9;
          _9__5_3 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GameObject__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__5_3, v42, Method_USFGOChrTargetUtils___c__GetTargets_b__5_3__, 0);
          v43 = USFGOChrTargetUtils___c_TypeInfo->static_fields;
          v43->__9__5_3 = (struct System_Func_GameObject__bool__o *)_9__5_3;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v43->__9__5_3,
            (int32_t)_9__5_3,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
        }
        v50 = System_Linq_Enumerable__Where_object_(
                v39,
                (System_Func_TSource__bool__o *)_9__5_3,
                (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GameObject___);
        v51 = (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_GameObject__AddRange__;
        v52 = (System_Collections_Generic_IEnumerable_T__o *)v50;
        goto LABEL_54;
      }
LABEL_57:
      sub_2213CDC(v10, v11);
  }
  return (System_Collections_Generic_List_GameObject__o *)v5;
}


void USFGOChrTargetUtils___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597228D & 1) == 0 )
  {
    sub_2213A60(&USFGOChrTargetUtils___c_TypeInfo);
    byte_597228D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(USFGOChrTargetUtils___c_TypeInfo);
  System_Object___ctor(v1, 0);
  USFGOChrTargetUtils___c_TypeInfo->static_fields->__9 = (struct USFGOChrTargetUtils___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)USFGOChrTargetUtils___c_TypeInfo->static_fields,
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
  if ( (byte_597228E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597228E = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0);
}


bool USFGOChrTargetUtils___c___GetTargets_b__5_1(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_597228F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597228F = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0);
}


bool USFGOChrTargetUtils___c___GetTargets_b__5_2(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_5972290 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972290 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0);
}


bool USFGOChrTargetUtils___c___GetTargets_b__5_3(
        USFGOChrTargetUtils___c_o *this,
        UnityEngine_GameObject_o *item,
        const MethodInfo *method)
{
  if ( (byte_5972291 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972291 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
  __int64 v5; // x1
  UnityEngine_Object_o *actor; // x20

  if ( (byte_5972292 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972292 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
  __int64 v5; // x1
  UnityEngine_Object_o *actor; // x20

  if ( (byte_5972293 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972293 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, 0, 0) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)item, actor, 0);
}