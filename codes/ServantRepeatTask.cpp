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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.creator, (int32_t)creator, v9, v10);
  this->fields.targets = targets;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targets, (int32_t)targets, v11, v12);
  this->fields._AiTimingPriority_k__BackingField = maxPriority;
}


BattleLogicTask_array *ServantRepeatTask__MakeActionTask(
        ServantRepeatTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_IEnumerable_TResult__o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_object__object__o *v14; // x23
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v16; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v18; // x23
  ServantRepeatTask_o *v19; // x19
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4CB95C4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    sub_1C6BA08(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&ServantRepeatTask_TypeInfo);
    sub_1C6BA08(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__);
    sub_1C6BA08(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
    byte_4CB95C4 = 1;
  }
  v5 = sub_1C6BC54(ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = logic;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)logic, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TResult__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)this->fields.targets,
                                                                         0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v14 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    System_Func_object__object____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      0);
    IsNullOrEmpty = System_Linq_Enumerable__SelectMany_object__object_(
                      targets,
                      (System_Func_TSource__IEnumerable_TResult___o *)v14,
                      (const MethodInfo_3174900 *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v12 )
      goto LABEL_13;
    System_Collections_Generic_List_object___AddRange(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v16 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
    sub_1C6BC60(IsNullOrEmpty, v7);
  }
  creator = this->fields.creator;
  v18 = this->fields.targets;
  v19 = (ServantRepeatTask_o *)sub_1C6BC54(ServantRepeatTask_TypeInfo);
  ServantRepeatTask___ctor(v19, creator, v18, v16, v20);
  if ( !v12 )
    goto LABEL_13;
  items = v12->fields._items;
  v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v19,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C6BC60(this, x);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        this->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        v3);
}