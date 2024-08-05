void __fastcall ServantRepeatTask___ctor(
        ServantRepeatTask_o *this,
        ServantReactTaskCreator_o *creator,
        ReactTaskTarget_array *targets,
        int32_t maxPriority,
        const MethodInfo *method)
{
  ServantRepeatTask_o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  v8 = this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  v8->fields.actiontype = 57;
  v8->fields.creator = creator;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v8->fields.creator, (int32_t)creator, v9, v10);
  v8->fields.targets = targets;
  v8 = (ServantRepeatTask_o *)((char *)v8 + 248);
  sub_1B64814((ServantStatusBattleListViewItem_o *)v8, (int32_t)targets, v11, v12);
  *(_DWORD *)&v8[-1].fields.IsNotShowSkillMessage = maxPriority;
}


BattleLogicTask_array *__fastcall ServantRepeatTask__MakeActionTask(
        ServantRepeatTask_o *this,
        BattleLogic_o *logic,
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
  __int64 v14; // x21
  System_Collections_Generic_IEnumerable_TResult__o *IsNullOrEmpty; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_object__object__o *v23; // x23
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v25; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v27; // x23
  ServantRepeatTask_o *v28; // x19
  const MethodInfo *v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4A01109 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___, logic);
    sub_1B64870(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_1B64870(&ServantRepeatTask_TypeInfo, v11);
    sub_1B64870(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__, v12);
    sub_1B64870(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo, v13);
    byte_4A01109 = 1;
  }
  v14 = sub_1B64ABC(ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = logic;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)logic, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TResult__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)this->fields.targets,
                                                                         0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v23 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    System_Func_object__object____ctor(
      v23,
      (Il2CppObject *)v14,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      0LL);
    IsNullOrEmpty = System_Linq_Enumerable__SelectMany_object__object_(
                      targets,
                      (System_Func_TSource__IEnumerable_TResult___o *)v23,
                      (const MethodInfo_2E6DC0C *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v21 )
      goto LABEL_13;
    System_Collections_Generic_List_object___AddRange(
      v21,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v25 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v21 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v21,
                                        (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
    sub_1B64ACC(IsNullOrEmpty, v16);
  }
  creator = this->fields.creator;
  v27 = this->fields.targets;
  v28 = (ServantRepeatTask_o *)sub_1B64ABC(ServantRepeatTask_TypeInfo);
  ServantRepeatTask___ctor(v28, creator, v27, v25, v29);
  if ( !v21 )
    goto LABEL_13;
  items = v21->fields._items;
  v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v21->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v21->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v21->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v21,
                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall ServantRepeatTask___c__DisplayClass3_0___ctor(
        ServantRepeatTask___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *__fastcall ServantRepeatTask___c__DisplayClass3_0___MakeActionTask_b__0(
        ServantRepeatTask___c__DisplayClass3_0_o *this,
        ReactTaskTarget_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct ServantRepeatTask_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || !x )
    sub_1B64ACC(this, x);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        this->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        v3);
}