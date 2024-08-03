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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.creator, (int32_t)creator, v9, v10);
  v8->fields.targets = targets;
  v8 = (ServantRepeatTask_o *)((char *)v8 + 248);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v8, (int32_t)targets, v11, v12);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_object__object__o *v26; // x23
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v28; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v30; // x23
  ServantRepeatTask_o *v31; // x19
  const MethodInfo *v32; // x4
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_49FF007 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___, logic);
    sub_1B640C8(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_1B640C8(&ServantRepeatTask_TypeInfo, v11);
    sub_1B640C8(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__, v12);
    sub_1B640C8(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo, v13);
    byte_49FF007 = 1;
  }
  v14 = sub_1B64314(ServantRepeatTask___c__DisplayClass3_0_TypeInfo, logic, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v14 + 24) = logic;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)logic, v18, v19);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TResult__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)this->fields.targets,
                                                                         0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v26 = (System_Func_object__object__o *)sub_1B64314(
                                             System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo,
                                             v23,
                                             v24);
    System_Func_object__object____ctor(
      v26,
      (Il2CppObject *)v14,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      0LL);
    IsNullOrEmpty = System_Linq_Enumerable__SelectMany_object__object_(
                      targets,
                      (System_Func_TSource__IEnumerable_TResult___o *)v26,
                      (const MethodInfo_2E6B930 *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v22 )
      goto LABEL_13;
    System_Collections_Generic_List_object___AddRange(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v28 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v22 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v22,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
    sub_1B64324(IsNullOrEmpty);
  }
  creator = this->fields.creator;
  v30 = this->fields.targets;
  v31 = (ServantRepeatTask_o *)sub_1B64314(ServantRepeatTask_TypeInfo, v23, v24);
  ServantRepeatTask___ctor(v31, creator, v30, v28, v32);
  if ( !v22 )
    goto LABEL_13;
  items = v22->fields._items;
  v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v31,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v31, v33, v34);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B64324(this);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        this->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        v3);
}