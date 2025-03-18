void __fastcall ServantRepeatTask___ctor(
        ServantRepeatTask_o *this,
        ServantReactTaskCreator_o *creator,
        ReactTaskTarget_array *targets,
        int32_t maxPriority,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 57;
  this->fields.creator = creator;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.creator, (int64_t)creator, v9, v10, v11, v12, v13, v14);
  this->fields.targets = targets;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.targets, (int64_t)targets, v15, v16, v17, v18, v19, v20);
  this->fields._AiTimingPriority_k__BackingField = maxPriority;
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x20
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_object__object__o *v31; // x23
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v33; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v35; // x23
  ServantRepeatTask_o *v36; // x19
  const MethodInfo *v37; // x4
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0

  if ( (byte_4C24DC0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___, logic);
    sub_1C3B764(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_1C3B764(&ServantRepeatTask_TypeInfo, v11);
    sub_1C3B764(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__, v12);
    sub_1C3B764(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo, v13);
    byte_4C24DC0 = 1;
  }
  v14 = sub_1C3B9B0(ServantRepeatTask___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = logic;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)logic, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TResult__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)this->fields.targets,
                                                                         0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v31 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo);
    System_Func_object__object____ctor(
      v31,
      (Il2CppObject *)v14,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      0LL);
    IsNullOrEmpty = System_Linq_Enumerable__SelectMany_object__object_(
                      targets,
                      (System_Func_TSource__IEnumerable_TResult___o *)v31,
                      (const MethodInfo_3025020 *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v29 )
      goto LABEL_13;
    System_Collections_Generic_List_object___AddRange(
      v29,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v33 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v29 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v29,
                                        (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
    sub_1C3B9C0(IsNullOrEmpty, v16);
  }
  creator = this->fields.creator;
  v35 = this->fields.targets;
  v36 = (ServantRepeatTask_o *)sub_1C3B9B0(ServantRepeatTask_TypeInfo);
  ServantRepeatTask___ctor(v36, creator, v35, v33, v37);
  if ( !v29 )
    goto LABEL_13;
  items = v29->fields._items;
  v45 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v29->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v29->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v29,
      (Il2CppObject *)v36,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &items->obj.klass + size;
    v29->fields._size = size + 1;
    v47[4] = (Il2CppClass *)v36;
    sub_1C3B708((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v36, v38, v39, v40, v41, v42, v43);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v29,
                                    (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C3B9C0(this, x);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        this->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        v3);
}