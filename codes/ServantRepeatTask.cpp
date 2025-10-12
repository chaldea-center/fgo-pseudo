void ServantRepeatTask___ctor(
        ServantRepeatTask_o *this,
        ServantReactTaskCreator_o *creator,
        ReactTaskTarget_array *targets,
        int32_t maxPriority,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)creator);
  this->fields.actiontype = 57;
  this->fields.creator = creator;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.creator, (int32_t)creator, v9, v10);
  this->fields.targets = targets;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targets, (int32_t)targets, v11, v12);
  this->fields._AiTimingPriority_k__BackingField = maxPriority;
}


BattleLogicTask_array *ServantRepeatTask__MakeActionTask(
        ServantRepeatTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_IEnumerable_TResult__o *IsNullOrEmpty; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_object__object__o *v13; // x23
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v15; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v17; // x23
  ServantRepeatTask_o *v18; // x19
  const MethodInfo *v19; // x4
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4C3AB18 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    sub_1C32C20(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&ServantRepeatTask_TypeInfo);
    sub_1C32C20(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__);
    sub_1C32C20(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
    byte_4C3AB18 = 1;
  }
  v5 = sub_1C32E6C(ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = logic;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)logic, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TResult__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)this->fields.targets,
                                                                         0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v13 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    System_Func_object__object____ctor(
      v13,
      (Il2CppObject *)v5,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      0);
    IsNullOrEmpty = System_Linq_Enumerable__SelectMany_object__object_(
                      targets,
                      (System_Func_TSource__IEnumerable_TResult___o *)v13,
                      (const MethodInfo_31168AC *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v11 )
      goto LABEL_13;
    System_Collections_Generic_List_object___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v15 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v11 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
    sub_1C32E7C(IsNullOrEmpty);
  }
  creator = this->fields.creator;
  v17 = this->fields.targets;
  v18 = (ServantRepeatTask_o *)sub_1C32E6C(ServantRepeatTask_TypeInfo);
  ServantRepeatTask___ctor(v18, creator, v17, v15, v19);
  if ( !v11 )
    goto LABEL_13;
  items = v11->fields._items;
  v23 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v11->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v18,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v18;
    sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v18, v20, v21);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void ServantRepeatTask___c__DisplayClass3_0___ctor(
        ServantRepeatTask___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *ServantRepeatTask___c__DisplayClass3_0___MakeActionTask_b__0(
        ServantRepeatTask___c__DisplayClass3_0_o *this,
        ReactTaskTarget_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct ServantRepeatTask_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !x )
    sub_1C32E7C(this);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        this->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        v3);
}