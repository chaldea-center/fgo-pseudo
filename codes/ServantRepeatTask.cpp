void ServantRepeatTask___ctor(
        ServantRepeatTask_o *this,
        ServantReactTaskCreator_o *creator,
        ReactTaskTarget_array *targets,
        int32_t maxPriority,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)creator);
  this->fields.actiontype = 57;
  this->fields.creator = creator;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.creator, (int32_t)creator, v9, v10, v11, v12, v13, v14);
  this->fields.targets = targets;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.targets, (int32_t)targets, v15, v16, v17, v18, v19, v20);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_object__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_object__object__o *v22; // x23
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v24; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v26; // x23
  ServantRepeatTask_o *v27; // x19
  const MethodInfo *v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4D2FBBD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    sub_1C94098(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C94098(&ServantRepeatTask_TypeInfo);
    sub_1C94098(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__);
    sub_1C94098(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
    byte_4D2FBBD = 1;
  }
  v5 = sub_1C942E4(ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = logic;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)logic, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TResult__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)this->fields.targets,
                                                                         0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v22 = (System_Func_object__object__o *)sub_1C942E4(System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    System_Func_object__object____ctor(
      v22,
      (Il2CppObject *)v5,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      0);
    IsNullOrEmpty = System_Linq_Enumerable__SelectMany_object__object_(
                      targets,
                      (System_Func_TSource__IEnumerable_TResult___o *)v22,
                      (const MethodInfo_31D5F64 *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v20 )
      goto LABEL_13;
    System_Collections_Generic_List_object___AddRange(
      v20,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v24 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v20 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v20,
                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
    sub_1C942F0(IsNullOrEmpty, v7);
  }
  creator = this->fields.creator;
  v26 = this->fields.targets;
  v27 = (ServantRepeatTask_o *)sub_1C942E4(ServantRepeatTask_TypeInfo);
  ServantRepeatTask___ctor(v27, creator, v26, v24, v28);
  if ( !v20 )
    goto LABEL_13;
  items = v20->fields._items;
  v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v20->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v27,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v27;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v27, v29, v30, v31, v32, v33, v34);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v20,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C942F0(this, x);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        this->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        v3);
}