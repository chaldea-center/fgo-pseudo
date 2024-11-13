void __fastcall ServantRepeatTask___ctor(
        ServantRepeatTask_o *this,
        ServantReactTaskCreator_o *creator,
        ReactTaskTarget_array *targets,
        int32_t maxPriority,
        const MethodInfo *method)
{
  ServantRepeatTask_o *v8; // x22
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

  v8 = this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  v8->fields.actiontype = 57;
  v8->fields.creator = creator;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.creator, (int64_t)creator, v9, v10, v11, v12, v13, v14);
  v8->fields.targets = targets;
  v8 = (ServantRepeatTask_o *)((char *)v8 + 248);
  sub_1BCA784((PartyOrganizationUtility_o *)v8, (int64_t)targets, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)&v8[-1].fields.IsNotShowSkillMessage = maxPriority;
}


BattleLogicTask_array *__fastcall ServantRepeatTask__MakeActionTask(
        ServantRepeatTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x21
  System_Collections_Generic_IEnumerable_TResult__o *IsNullOrEmpty; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_object__o *v42; // x20
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_IEnumerable_TSource__o *targets; // x22
  System_Func_object__object__o *v46; // x23
  int32_t AiTimingPriority_k__BackingField; // w8
  int32_t v48; // w21
  ServantReactTaskCreator_o *creator; // x22
  ReactTaskTarget_array *v50; // x23
  ServantRepeatTask_o *v51; // x19
  const MethodInfo *v52; // x4
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0

  if ( (byte_4B18EE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___, logic, method);
    sub_1BCA7E0(&System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17);
    sub_1BCA7E0(&ServantRepeatTask_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__, v20, v21);
    sub_1BCA7E0(&ServantRepeatTask___c__DisplayClass3_0_TypeInfo, v22, v23);
    byte_4B18EE0 = 1;
  }
  v24 = sub_1BCAA2C(ServantRepeatTask___c__DisplayClass3_0_TypeInfo, logic, method, v3);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_13;
  *(_QWORD *)(v24 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 24) = logic;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)logic, v33, v34, v35, v36, v37, v38);
  v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v39,
                                                       v40,
                                                       v41);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TResult__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)this->fields.targets,
                                                                         0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    targets = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targets;
    v46 = (System_Func_object__object__o *)sub_1BCAA2C(
                                             System_Func_ReactTaskTarget__IEnumerable_BattleLogicTask___TypeInfo,
                                             v26,
                                             v43,
                                             v44);
    System_Func_object__object____ctor(
      v46,
      (Il2CppObject *)v24,
      Method_ServantRepeatTask___c__DisplayClass3_0__MakeActionTask_b__0__,
      0LL);
    IsNullOrEmpty = System_Linq_Enumerable__SelectMany_object__object_(
                      targets,
                      (System_Func_TSource__IEnumerable_TResult___o *)v46,
                      (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_ReactTaskTarget__BattleLogicTask___);
    if ( !v42 )
      goto LABEL_13;
    System_Collections_Generic_List_object___AddRange(
      v42,
      (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  }
  AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
  v48 = AiTimingPriority_k__BackingField - 1;
  if ( AiTimingPriority_k__BackingField < 1 )
  {
    if ( v42 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v42,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
    sub_1BCAA3C(IsNullOrEmpty, v26);
  }
  creator = this->fields.creator;
  v50 = this->fields.targets;
  v51 = (ServantRepeatTask_o *)sub_1BCAA2C(ServantRepeatTask_TypeInfo, v26, v43, v44);
  ServantRepeatTask___ctor(v51, creator, v50, v48, v52);
  if ( !v42 )
    goto LABEL_13;
  items = v42->fields._items;
  v60 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v42->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v42->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v42,
      (Il2CppObject *)v51,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &items->obj.klass + size;
    v42->fields._size = size + 1;
    v62[4] = (Il2CppClass *)v51;
    sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v51, v53, v54, v55, v56, v57, v58);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v42,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1BCAA3C(this, x);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)ReactTaskTarget__CreateReactionTasks(
                                                                        x,
                                                                        _4__this->fields.creator,
                                                                        this->fields.logic,
                                                                        _4__this->fields._AiTimingPriority_k__BackingField,
                                                                        v3);
}