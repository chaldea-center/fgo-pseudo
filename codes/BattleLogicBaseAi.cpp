void BattleLogicBaseAi___ctor(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct BattleLogicTask_array **v14; // x8
  struct BattleLogicTask_array *v15; // x1

  if ( (byte_4E7A80E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4E7A80E = 1;
  }
  v10 = Method_System_Array_Empty_BattleLogicTask___;
  v11 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v11 )
  {
    sub_1CE5198(Method_System_Array_Empty_BattleLogicTask___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1CE513C(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1CE513C(inited);
  v14 = *(struct BattleLogicTask_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.emptyTask = *v14;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.emptyTask, (int32_t)v15, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicBaseAi__AddAllBattleEndTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(this, retList);
  data->fields.endbattleFlg = 1;
  data->fields.isAllBattleEnd = 1;
  BattleLogicBaseAi__CommonWinBattleEnd(this, retList, arg, method);
}


void BattleLogicBaseAi__AddBattleEndNotRelatedSurvivalStatusInstantlyTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleEndNotRelatedSurvivalStatusInstantlyTask_o *v7; // x22
  Il2CppObject *Task_48204052; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4E7A803 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleEndNotRelatedSurvivalStatusInstantlyTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7A803 = 1;
  }
  v7 = (BattleEndNotRelatedSurvivalStatusInstantlyTask_o *)sub_1D0F300(BattleEndNotRelatedSurvivalStatusInstantlyTask_TypeInfo);
  BattleEndNotRelatedSurvivalStatusInstantlyTask___ctor(v7, arg, 0);
  if ( !arg
    || (Task_48204052 = (Il2CppObject *)BaseAiActArgument__MakeTask_48204052(
                                          arg,
                                          (BaseAiActBattleLogicTask_o *)v7,
                                          this,
                                          v10),
        !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1D0F30C(Task_48204052, v9);
  }
  size = retList->fields._size;
  v20 = Task_48204052;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      Task_48204052,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v21 = &items->obj.klass + size;
    v21[4] = (Il2CppClass *)v20;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
  }
}


void BattleLogicBaseAi__AddBattleEndNotRelatedSurvivalStatusTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(this, retList);
  data->fields.endbattleFlg = 1;
  data->fields.winBattleNotRelatedSurvivalStatus = 1;
  BattleLogicBaseAi__CommonWinBattleEnd(this, retList, arg, method);
}


void BattleLogicBaseAi__AddBattleEndTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(this, retList);
  data->fields.endbattleFlg = 1;
  BattleLogicBaseAi__CommonWinBattleEnd(this, retList, arg, method);
}


void BattleLogicBaseAi__AddBattleLoseEndTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1D0F30C(this, retList);
  *(_WORD *)&data->fields.endbattleFlg = 257;
}


void BattleLogicBaseAi__AddBattleScriptTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x23
  int32_t v7; // w21
  const MethodInfo *v8; // x2
  struct BattleData_o *data; // x8
  struct BattleLogic_o *logic; // x8
  char v11; // w20
  BattleScriptEntity_array *BattleScriptEntities; // x21
  _BOOL8 IsNullOrEmpty; // x0
  BaseAiActArgument_o *v14; // x2
  const MethodInfo *v15; // x5
  BaseAiActArgument_o *v16; // x2
  const MethodInfo *v17; // x5
  BattleScriptEntity_o *v18; // x8
  int32_t playOrder; // w20
  __int64 v20; // x25
  System_Collections_Generic_List_object__o *v21; // x24
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int max_length; // w8
  __int64 v29; // x27
  BattleScriptEntity_o *v30; // x26
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  BattleLogicBaseAi_o *v40; // x1
  Il2CppClass **v41; // x0
  int v42; // w8
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  char v53; // w20
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  BattleLogicBaseAi_o *v57; // x1
  Il2CppClass **v58; // x0
  BattleLogicBaseAi___c_c *v59; // x8
  System_Object_array *current; // x24
  System_Func_object__bool__o *_9__43_0; // x25
  Il2CppObject *v62; // x26
  struct BattleLogicBaseAi___c_StaticFields *static_fields; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  BattleScriptEntity_o *object; // x0
  BaseAiActArgument_o *v71; // x2
  const MethodInfo *v72; // x4
  const MethodInfo *v73; // x6
  int32_t battleScriptAction; // w8
  BattleLogicBaseAi_o *v75; // x0
  BaseAiActArgument_o *v76; // x2
  const MethodInfo *v77; // x5
  BattleLogicBaseAi_o *v78; // x0
  BaseAiActArgument_o *v79; // x2
  const MethodInfo *v80; // x5
  char v81; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4E7A809 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Find_BattleScriptEntity___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____get_Current__);
    sub_1D0F0B4(&System_Func_BattleScriptEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleScriptEntity____Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleScriptEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleScriptEntity__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleScriptEntity____GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleScriptEntity_____ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleScriptEntity___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleScriptEntity__get_Count__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleScriptEntity____TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleScriptEntity__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicBaseAi___c__AddBattleScriptTask_b__43_0__);
    this = (BattleLogicBaseAi_o *)sub_1D0F0B4(&BattleLogicBaseAi___c_TypeInfo);
    byte_4E7A809 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  if ( !arg )
    goto LABEL_44;
  this = (BattleLogicBaseAi_o *)arg->fields._AiActEnt_k__BackingField;
  if ( !this )
    goto LABEL_44;
  this = (BattleLogicBaseAi_o *)AiActEntity__GetBattleScriptId((AiActEntity_o *)this, 0);
  if ( !arg->fields._AiActEnt_k__BackingField )
    goto LABEL_44;
  v7 = (int)this;
  this = (BattleLogicBaseAi_o *)AiActEntity__IsBattleScriptEachLoad(arg->fields._AiActEnt_k__BackingField, 0);
  data = v6->fields.data;
  if ( !data )
    goto LABEL_44;
  logic = data->fields.logic;
  if ( !logic )
    goto LABEL_44;
  v11 = (char)this;
  this = (BattleLogicBaseAi_o *)logic->fields.logicBattleScript;
  if ( !this )
    goto LABEL_44;
  BattleScriptEntities = BattleLogicBattleScript__GetBattleScriptEntities((BattleLogicBattleScript_o *)this, v7, v8);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BattleScriptEntities, 0);
  if ( IsNullOrEmpty )
    return;
  BattleLogicBaseAi__AddBattleScriptTaskSystem(
    (BattleLogicBaseAi_o *)IsNullOrEmpty,
    retList,
    v14,
    BattleScriptEntities,
    3,
    v15);
  if ( (v11 & 1) == 0 )
    BattleLogicBaseAi__AddBattleScriptTaskSystem(this, retList, v16, BattleScriptEntities, 1, v17);
  if ( !BattleScriptEntities )
    goto LABEL_44;
  if ( !LODWORD(BattleScriptEntities->max_length) )
    goto LABEL_66;
  v18 = BattleScriptEntities->m_Items[0];
  v81 = v11;
  if ( !v18 )
    goto LABEL_44;
  playOrder = v18->fields.playOrder;
  v20 = sub_1D0F300(System_Collections_Generic_List_BattleScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v20,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleScriptEntity___ctor__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleScriptEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleScriptEntity_____ctor__);
  max_length = BattleScriptEntities->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( (unsigned int)v29 < max_length )
    {
      v30 = BattleScriptEntities->m_Items[v29];
      if ( !v30 )
        goto LABEL_44;
      if ( playOrder == v30->fields.playOrder )
      {
        if ( !v20 )
          goto LABEL_44;
      }
      else
      {
        if ( !v20 )
          goto LABEL_44;
        this = (BattleLogicBaseAi_o *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)v20,
                                        (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
        if ( !v21 )
          goto LABEL_44;
        items = v21->fields._items;
        v38 = Method_System_Collections_Generic_List_BattleScriptEntity____Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_44;
        size = v21->fields._size;
        v40 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)this,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
        }
        v22 = *(_DWORD *)(v20 + 24);
        v42 = *(_DWORD *)(v20 + 28) + 1;
        *(_DWORD *)(v20 + 24) = 0;
        *(_DWORD *)(v20 + 28) = v42;
        if ( v22 >= 1 )
          System_Array__Clear(*(System_Array_o **)(v20 + 16), 0, v22, 0);
        playOrder = v30->fields.playOrder;
      }
      v43 = *(_QWORD *)(v20 + 16);
      v44 = Method_System_Collections_Generic_List_BattleScriptEntity__Add__;
      ++*(_DWORD *)(v20 + 28);
      if ( !v43 )
        goto LABEL_44;
      v45 = *(int *)(v20 + 24);
      if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v20,
          (Il2CppObject *)v30,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = v43 + 8 * v45;
        *(_DWORD *)(v20 + 24) = v45 + 1;
        *(_QWORD *)(v46 + 32) = v30;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v46 + 32), (int32_t)v30, v22, v23, v24, v25, v26, v27);
      }
      max_length = BattleScriptEntities->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_38;
    }
LABEL_66:
    sub_1D0F314(this);
  }
  if ( !v20 )
    goto LABEL_44;
LABEL_38:
  if ( *(int *)(v20 + 24) < 1 )
  {
    v53 = v81;
    if ( v21 )
      goto LABEL_46;
LABEL_44:
    sub_1D0F30C(this, retList);
  }
  this = (BattleLogicBaseAi_o *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)v20,
                                  (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
  v53 = v81;
  if ( !v21 )
    goto LABEL_44;
  v54 = v21->fields._items;
  v55 = Method_System_Collections_Generic_List_BattleScriptEntity____Add__;
  ++v21->fields._version;
  if ( !v54 )
    goto LABEL_44;
  v56 = v21->fields._size;
  v57 = this;
  if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)this,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v54->obj.klass + v56;
    v21->fields._size = v56 + 1;
    v58[4] = (Il2CppClass *)v57;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v57, v47, v48, v49, v50, v51, v52);
  }
LABEL_46:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    v21,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_BattleScriptEntity____GetEnumerator__);
  v83 = v82;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____MoveNext__) )
  {
    v59 = BattleLogicBaseAi___c_TypeInfo;
    current = (System_Object_array *)v83.fields._current;
    if ( !BattleLogicBaseAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicBaseAi___c_TypeInfo);
      v59 = BattleLogicBaseAi___c_TypeInfo;
    }
    _9__43_0 = (System_Func_object__bool__o *)v59->static_fields->__9__43_0;
    if ( !_9__43_0 )
    {
      if ( !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        v59 = BattleLogicBaseAi___c_TypeInfo;
      }
      v62 = (Il2CppObject *)v59->static_fields->__9;
      _9__43_0 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleScriptEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__43_0, v62, Method_BattleLogicBaseAi___c__AddBattleScriptTask_b__43_0__, 0);
      static_fields = BattleLogicBaseAi___c_TypeInfo->static_fields;
      static_fields->__9__43_0 = (struct System_Func_BattleScriptEntity__bool__o *)_9__43_0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__43_0,
        (int32_t)_9__43_0,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    object = (BattleScriptEntity_o *)BasicHelper__Find_object_(
                                       current,
                                       (System_Func_T__bool__o *)_9__43_0,
                                       (const MethodInfo_3238EB8 *)Method_BasicHelper_Find_BattleScriptEntity___);
    if ( object )
    {
      battleScriptAction = object->fields.battleScriptAction;
      if ( battleScriptAction == 1 )
      {
        BattleLogicBaseAi__AddBattleScriptTaskSingle(v6, retList, arg, object, v53 & 1, 1, v73);
      }
      else if ( battleScriptAction == 2 )
      {
        BattleLogicBaseAi__AddBattleScriptTaskWait((BattleLogicBaseAi_o *)object, retList, v71, object, v72);
      }
      else if ( (unsigned int)(battleScriptAction - 7) <= 1 )
      {
        BattleLogicBaseAi__AddBattleScriptTaskSingle(v6, retList, arg, object, v53 & 1, 0, v73);
      }
    }
    else
    {
      BattleLogicBaseAi__AddBattleScriptTaskSync(v6, retList, arg, (BattleScriptEntity_array *)current, v53 & 1, 0, v73);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____Dispose__);
  BattleLogicBaseAi__AddBattleScriptTaskSystem(v75, retList, v76, BattleScriptEntities, 5, v77);
  if ( (v53 & 1) == 0 )
    BattleLogicBaseAi__AddBattleScriptTaskSystem(v78, retList, v79, BattleScriptEntities, 2, v80);
  BattleLogicBaseAi__AddBattleScriptTaskSystem(v78, retList, v79, BattleScriptEntities, 4, v80);
}


void BattleLogicBaseAi__AddBattleScriptTaskSingle(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_o *entity,
        bool isEachLoad,
        bool isSkipStep,
        const MethodInfo *method)
{
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x25
  const MethodInfo *v22; // x6
  __int64 v23; // x0

  if ( (byte_4E7A80D & 1) == 0 )
  {
    sub_1D0F0B4(&BattleScriptEntity___TypeInfo);
    byte_4E7A80D = 1;
  }
  v13 = sub_1D0F15C(BattleScriptEntity___TypeInfo, 1);
  if ( !v13 )
    sub_1D0F30C(0, v14);
  v21 = v13;
  if ( entity )
  {
    v13 = sub_1D0F1F0(entity, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !v13 )
    {
      v23 = sub_1D0F330(0);
      sub_1D0F1DC(v23, 0);
    }
  }
  if ( !*(_DWORD *)(v21 + 24) )
    sub_1D0F314(v13);
  *(_QWORD *)(v21 + 32) = entity;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 32), (int32_t)entity, v15, v16, v17, v18, v19, v20);
  BattleLogicBaseAi__AddBattleScriptTaskSync(
    this,
    retList,
    arg,
    (BattleScriptEntity_array *)v21,
    isEachLoad,
    isSkipStep,
    v22);
}


void BattleLogicBaseAi__AddBattleScriptTaskSync(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_array *entities,
        bool isEachLoad,
        bool isSkipStep,
        const MethodInfo *method)
{
  BattleLogicBattleScriptTask_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w25
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4E7A80C & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicBattleScriptTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7A80C = 1;
  }
  v13 = (BattleLogicBattleScriptTask_o *)sub_1D0F300(BattleLogicBattleScriptTask_TypeInfo);
  BattleLogicBattleScriptTask___ctor(v13, 0);
  v14 = ((__int64 (__fastcall *)(BattleLogicBaseAi_o *, const MethodInfo *))this->klass->vtable._4_get_ActorType.methodPtr)(
          this,
          this->klass->vtable._4_get_ActorType.method);
  if ( !arg )
    goto LABEL_10;
  v16 = v14;
  v14 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
          arg,
          arg->klass->vtable._4_get_UniqueId.method);
  if ( !v13
    || (BattleLogicTask__setActor((BattleLogicTask_o *)v13, v16, v14, 0),
        BattleLogicBattleScriptTask__Init(v13, entities, arg, isEachLoad, 0),
        v13->fields.isSkipStep = isSkipStep,
        !retList)
    || (items = retList->fields._items,
        v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_10:
    sub_1D0F30C(v14, v15);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v13,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v13;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v13, v17, v18, v19, v20, v21, v22);
  }
}


void BattleLogicBaseAi__AddBattleScriptTaskSystem(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_array *entities,
        int32_t systemType,
        const MethodInfo *method)
{
  BattleLogicBattleScriptSystemTask_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4E7A80A & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicBattleScriptSystemTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7A80A = 1;
  }
  v9 = (BattleLogicBattleScriptSystemTask_o *)sub_1D0F300(BattleLogicBattleScriptSystemTask_TypeInfo);
  BattleLogicBattleScriptSystemTask___ctor(v9, 0);
  if ( !v9
    || (BattleLogicBattleScriptSystemTask__Init(v9, entities, systemType, 0), !retList)
    || (items = retList->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1D0F30C(v10, v11);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v9,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
  }
}


void BattleLogicBaseAi__AddBattleScriptTaskWait(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  int32_t WaitTime; // w21
  BattleLogicTask_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4E7A80B & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicTask_TypeInfo);
    this = (BattleLogicBaseAi_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7A80B = 1;
  }
  if ( !entity )
    goto LABEL_10;
  WaitTime = BattleScriptEntity__GetWaitTime(entity, 0);
  v8 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v8, 0);
  if ( !v8
    || (BattleLogicTask__setSystem(v8, 0), v8->fields.systemTime = (float)WaitTime / 1000.0, !retList)
    || (items = retList->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_10:
    sub_1D0F30C(this, retList);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v8,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v8;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
}


void BattleLogicBaseAi__AddLoadMovieTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLoadMovieTask_o *v7; // x22
  Il2CppObject *NoMotionTask; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4E7A805 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLoadMovieTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7A805 = 1;
  }
  v7 = (BattleLoadMovieTask_o *)sub_1D0F300(BattleLoadMovieTask_TypeInfo);
  BattleLoadMovieTask___ctor(v7, 0);
  if ( !arg
    || (NoMotionTask = (Il2CppObject *)BaseAiActArgument__MakeNoMotionTask(
                                         arg,
                                         (BaseAiActBattleLogicTask_o *)v7,
                                         this,
                                         v10),
        !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1D0F30C(NoMotionTask, v9);
  }
  size = retList->fields._size;
  v20 = NoMotionTask;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      NoMotionTask,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v21 = &items->obj.klass + size;
    v21[4] = (Il2CppClass *)v20;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
  }
}


void BattleLogicBaseAi__AddMessageTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  MessageBattleLogicTask_o *v7; // x22
  Il2CppObject *Task_48204052; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4E7A7FC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1D0F0B4(&MessageBattleLogicTask_TypeInfo);
    byte_4E7A7FC = 1;
  }
  v7 = (MessageBattleLogicTask_o *)sub_1D0F300(MessageBattleLogicTask_TypeInfo);
  MessageBattleLogicTask___ctor(v7, 0);
  if ( !arg
    || (Task_48204052 = (Il2CppObject *)BaseAiActArgument__MakeTask_48204052(
                                          arg,
                                          (BaseAiActBattleLogicTask_o *)v7,
                                          this,
                                          v10),
        !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1D0F30C(Task_48204052, v9);
  }
  size = retList->fields._size;
  v20 = Task_48204052;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      Task_48204052,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v21 = &items->obj.klass + size;
    v21[4] = (Il2CppClass *)v20;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
  }
}


void BattleLogicBaseAi__AddNoneTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  ;
}


void BattleLogicBaseAi__AddOverwriteAddUniqueCameraTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleOverwriteAddUniqueCameraTask_o *v7; // x22
  Il2CppObject *NoMotionTask; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4E7A808 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleOverwriteAddUniqueCameraTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7A808 = 1;
  }
  v7 = (BattleOverwriteAddUniqueCameraTask_o *)sub_1D0F300(BattleOverwriteAddUniqueCameraTask_TypeInfo);
  BattleOverwriteAddUniqueCameraTask___ctor(v7, 0);
  if ( !arg
    || (NoMotionTask = (Il2CppObject *)BaseAiActArgument__MakeNoMotionTask(
                                         arg,
                                         (BaseAiActBattleLogicTask_o *)v7,
                                         this,
                                         v10),
        !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1D0F30C(NoMotionTask, v9);
  }
  size = retList->fields._size;
  v20 = NoMotionTask;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      NoMotionTask,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v21 = &items->obj.klass + size;
    v21[4] = (Il2CppClass *)v20;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
  }
}


void BattleLogicBaseAi__AddOverwriteFieldMotionTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleOverwriteFieldMotionTask_o *v7; // x22
  Il2CppObject *NoMotionTask; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4E7A804 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleOverwriteFieldMotionTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7A804 = 1;
  }
  v7 = (BattleOverwriteFieldMotionTask_o *)sub_1D0F300(BattleOverwriteFieldMotionTask_TypeInfo);
  BattleOverwriteFieldMotionTask___ctor(v7, 0);
  if ( !arg
    || (NoMotionTask = (Il2CppObject *)BaseAiActArgument__MakeNoMotionTask(
                                         arg,
                                         (BaseAiActBattleLogicTask_o *)v7,
                                         this,
                                         v10),
        !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1D0F30C(NoMotionTask, v9);
  }
  size = retList->fields._size;
  v20 = NoMotionTask;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      NoMotionTask,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v21 = &items->obj.klass + size;
    v21[4] = (Il2CppClass *)v20;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
  }
}


void BattleLogicBaseAi__AddPlayMotionTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x22
  const MethodInfo *v7; // x3
  BattleLogicTask_o *Task; // x20
  System_String_o *v9; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x22
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  int32_t ActionValue; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4E7A7FB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    this = (BattleLogicBaseAi_o *)sub_1D0F0B4(&StringLiteral_8842/*"MOTION_"*/);
    byte_4E7A7FB = 1;
  }
  if ( !arg )
    goto LABEL_15;
  this = (BattleLogicBaseAi_o *)arg->fields._AiEnt_k__BackingField;
  if ( !this )
    goto LABEL_15;
  ActionValue = AiBaseEntity__getActionValue((AiBaseEntity_o *)this, 0);
  if ( ActionValue < 1 )
    return;
  Task = BaseAiActArgument__MakeTask(arg, v6, 0, v7);
  v9 = System_Int32__ToString((int32_t)&ActionValue, 0);
  this = (BattleLogicBaseAi_o *)System_String__Concat_65562772((System_String_o *)StringLiteral_8842/*"MOTION_"*/, v9, 0);
  if ( !Task )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton(Task, (System_String_o *)this, 0);
  logic = v6->fields.logic;
  if ( !logic )
    goto LABEL_15;
  perf = logic->fields.perf;
  this = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
                                  arg,
                                  arg->klass->vtable._4_get_UniqueId.method);
  if ( !perf
    || (ServantGameObject = BattlePerformance__getServantGameObject(perf, (int32_t)this, 0),
        Task->fields.targetObject = ServantGameObject,
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&Task->fields.targetObject,
          (int32_t)ServantGameObject,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        !retList)
    || (items = retList->fields._items,
        v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_15:
    sub_1D0F30C(this, retList);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)Task,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v28[4] = (Il2CppClass *)Task;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)Task, v19, v20, v21, v22, v23, v24);
  }
}


void BattleLogicBaseAi__AddPlayMovieTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattlePlayMovieTask_o *v7; // x22
  Il2CppObject *NoMotionTask; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4E7A806 & 1) == 0 )
  {
    sub_1D0F0B4(&BattlePlayMovieTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7A806 = 1;
  }
  v7 = (BattlePlayMovieTask_o *)sub_1D0F300(BattlePlayMovieTask_TypeInfo);
  BattlePlayMovieTask___ctor(v7, 0);
  if ( !arg
    || (NoMotionTask = (Il2CppObject *)BaseAiActArgument__MakeNoMotionTask(
                                         arg,
                                         (BaseAiActBattleLogicTask_o *)v7,
                                         this,
                                         v10),
        !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1D0F30C(NoMotionTask, v9);
  }
  size = retList->fields._size;
  v20 = NoMotionTask;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      NoMotionTask,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v21 = &items->obj.klass + size;
    v21[4] = (Il2CppClass *)v20;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
  }
}


void BattleLogicBaseAi__AddSkillTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x20
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  struct AiActEntity_o *v8; // x8
  int32_t v9; // w23
  int32_t v10; // w24
  const MethodInfo *v11; // x3
  BattleLogicTask_o *Task; // x22
  int32_t v13; // w26
  TempBattleSkillInfoData_o *v14; // x25
  BattleLogicBaseAi_o *v15; // x0
  const MethodInfo *v16; // x3
  bool IsNeedUpHate; // w0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  BattleLogicTask_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct BattleLogicTask_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  System_Int32_array *v39; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *v40; // [xsp+8h] [xbp-58h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4E7A7FD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_IndexValue_int____80375232);
    sub_1D0F0B4(&BattleLogicTask_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    this = (BattleLogicBaseAi_o *)sub_1D0F0B4(&TempBattleSkillInfoData_TypeInfo);
    byte_4E7A7FD = 1;
  }
  entity = 0;
  v39 = 0;
  v40 = 0;
  if ( !arg )
    goto LABEL_23;
  AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
  if ( !AiActEnt_k__BackingField )
    goto LABEL_23;
  this = (BattleLogicBaseAi_o *)BasicHelper__IndexValue_int_(
                                  AiActEnt_k__BackingField->fields.skillVals,
                                  0,
                                  0,
                                  (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
  v8 = arg->fields._AiActEnt_k__BackingField;
  if ( !v8 )
    goto LABEL_23;
  v9 = (int)this;
  v10 = BasicHelper__IndexValue_int_(
          v8->fields.skillVals,
          1,
          1,
          (const MethodInfo_323D408 *)Method_BasicHelper_IndexValue_int____80375232);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleLogicBaseAi_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this )
    goto LABEL_23;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v9, v10, 0) )
  {
    Task = BaseAiActArgument__MakeTask(arg, v6, 0, v11);
    if ( (((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BaseAiActArgument_o *, SkillLvEntity_o *, System_Int32_array **, System_Int32_array **, BattleLogicTask_o *, const MethodInfo *))v6->klass->vtable._16_TryGetAiActTargets.methodPtr)(
            v6,
            arg,
            entity,
            &v40,
            &v39,
            Task,
            v6->klass->vtable._16_TryGetAiActTargets.method)
        & 1) != 0 )
    {
      v13 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
              arg,
              arg->klass->vtable._4_get_UniqueId.method);
      v14 = (TempBattleSkillInfoData_o *)sub_1D0F300(TempBattleSkillInfoData_TypeInfo);
      TempBattleSkillInfoData___ctor(v14, v9, v10, v13, 0);
      BattleLogicBaseAi__SetSkillSelectAddIndex(
        v15,
        (BattleSkillInfoData_o *)v14,
        arg->fields._AiEnt_k__BackingField,
        v16);
      if ( Task )
      {
        BattleLogicTask__setActionSkill(Task, (BattleSkillInfoData_o *)v14, v40, v39, 0, 0, 0);
        this = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BattleLogicTask_o *, const MethodInfo *))v6->klass->vtable._17_SetAddSkillTaskParam.methodPtr)(
                                        v6,
                                        Task,
                                        v6->klass->vtable._17_SetAddSkillTaskParam.method);
        if ( v14 )
        {
          IsNeedUpHate = BattleSkillInfoData__IsNeedUpHate((BattleSkillInfoData_o *)v14, 0);
          BattleLogicTask__RevertUnusedNoNeedUpHateBuff(Task, IsNeedUpHate, 0);
          if ( retList )
          {
            items = retList->fields._items;
            v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++retList->fields._version;
            if ( items )
            {
              size = retList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)retList,
                  (Il2CppObject *)Task,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                retList->fields._size = size + 1;
                v27[4] = (Il2CppClass *)Task;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)Task, v18, v19, v20, v21, v22, v23);
              }
              v28 = (BattleLogicTask_o *)sub_1D0F300(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v28, 0);
              v35 = retList->fields._items;
              v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++retList->fields._version;
              if ( v35 )
              {
                v37 = retList->fields._size;
                if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)retList,
                    (Il2CppObject *)v28,
                    *(const MethodInfo_395C410 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v38 = &v35->obj.klass + v37;
                  retList->fields._size = v37 + 1;
                  v38[4] = (Il2CppClass *)v28;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v28, v29, v30, v31, v32, v33, v34);
                }
                return;
              }
            }
          }
        }
      }
LABEL_23:
      sub_1D0F30C(this, retList);
    }
  }
}


void BattleLogicBaseAi__AddWaitFinishMovieTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleWaitFinishMovieTask_o *v7; // x22
  Il2CppObject *NoMotionTask; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4E7A807 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleWaitFinishMovieTask_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7A807 = 1;
  }
  v7 = (BattleWaitFinishMovieTask_o *)sub_1D0F300(BattleWaitFinishMovieTask_TypeInfo);
  BattleWaitFinishMovieTask___ctor(v7, 0);
  if ( !arg
    || (NoMotionTask = (Il2CppObject *)BaseAiActArgument__MakeNoMotionTask(
                                         arg,
                                         (BaseAiActBattleLogicTask_o *)v7,
                                         this,
                                         v10),
        !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1D0F30C(NoMotionTask, v9);
  }
  size = retList->fields._size;
  v20 = NoMotionTask;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      NoMotionTask,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v21 = &items->obj.klass + size;
    v21[4] = (Il2CppClass *)v20;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
  }
}


bool BattleLogicBaseAi__CheckAiCanActionFromTargets(
        BattleLogicBaseAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  return 1;
}


void BattleLogicBaseAi__CommonWinBattleEnd(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  BattleData_o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4E7A7FA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4E7A7FA = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = (BattleData_o *)BattleData__isBreakOnBattleWin(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    return;
  if ( !arg
    || (data = (BattleData_o *)BaseAiActArgument__MakeTask(arg, this, 35, v8), !retList)
    || (items = retList->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_12:
    sub_1D0F30C(data, retList);
  }
  size = retList->fields._size;
  v18 = data;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)data,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v19 = &items->obj.klass + size;
    v19[4] = (Il2CppClass *)v18;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
  }
}


void BattleLogicBaseAi__DebugLog(BattleLogicBaseAi_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicBaseAi__ExistProcAiAct(BattleLogicBaseAi_o *this, int32_t type, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicNoTargetAiActFunc; // x0

  if ( (byte_4E7A802 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
    byte_4E7A802 = 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         dicNoTargetAiActFunc,
         type,
         (const MethodInfo_35C8994 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__) )
  {
    return 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  if ( !dicNoTargetAiActFunc )
LABEL_8:
    sub_1D0F30C(dicNoTargetAiActFunc, *(_QWORD *)&type);
  return System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
           dicNoTargetAiActFunc,
           type,
           (const MethodInfo_35C8994 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
AiActEntity_o *BattleLogicBaseAi__GetAiActEntity(BattleLogicBaseAi_o *this, int32_t aiActId, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *aiActMst; // x0

  if ( (byte_4E7A7FF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    byte_4E7A7FF = 1;
  }
  aiActMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.aiActMst;
  if ( !aiActMst )
    sub_1D0F30C(0, *(_QWORD *)&aiActId);
  return (AiActEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            aiActMst,
                            aiActId,
                            (const MethodInfo_3535B7C *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
}


System_Int32_array *BattleLogicBaseAi__GetLogicTargetIds(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        System_Int32_array *svtIds,
        bool isCheckHate,
        bool isResurrectable,
        System_Int32_array *addIndiv,
        BattleLogicTask_o *execTask,
        const MethodInfo *method)
{
  __int64 TargetAiAct; // x0
  __int64 v16; // x1
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  BattleLogicTarget_o *logictarget; // x27
  int32_t target; // w26
  __int64 v20; // x24
  struct AiActEntity_o *aiActEnt; // x8

  if ( (byte_4E7A7FE & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E7A7FE = 1;
  }
  TargetAiAct = sub_1D0F15C(int___TypeInfo, 1);
  if ( !arg
    || (AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField) == 0
    || (logictarget = this->fields.logictarget,
        target = AiActEnt_k__BackingField->fields.target,
        v20 = TargetAiAct,
        TargetAiAct = ((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
                        arg,
                        arg->klass->vtable._4_get_UniqueId.method),
        (aiActEnt = arg->fields._AiActEnt_k__BackingField) == 0)
    || !logictarget
    || (TargetAiAct = BattleLogicTarget__getTargetAiAct(
                        logictarget,
                        target,
                        TargetAiAct,
                        aiActEnt->fields.targetIndividuality,
                        svtIds,
                        isCheckHate,
                        isResurrectable,
                        addIndiv,
                        aiActEnt,
                        1,
                        execTask,
                        0),
        !v20) )
  {
    sub_1D0F30C(TargetAiAct, v16);
  }
  if ( !*(_DWORD *)(v20 + 24) )
    sub_1D0F314(TargetAiAct);
  *(_DWORD *)(v20 + 32) = TargetAiAct;
  return (System_Int32_array *)v20;
}


void BattleLogicBaseAi__InitAiActTaskFunction(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  Il2CppObject *v7; // x21
  BattleLogicBaseAi_taskAiActFunction_o *v8; // x21
  const MethodInfo *v9; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v10; // x21
  const MethodInfo *v11; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v12; // x21
  const MethodInfo *v13; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v14; // x21
  const MethodInfo *v15; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v16; // x21
  const MethodInfo *v17; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v18; // x21
  const MethodInfo *v19; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v20; // x21
  const MethodInfo *v21; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v22; // x21
  const MethodInfo *v23; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v24; // x21
  const MethodInfo *v25; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v26; // x21
  const MethodInfo *v27; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v28; // x21
  const MethodInfo *v29; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v30; // x21
  const MethodInfo *v31; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v32; // x21
  const MethodInfo *v33; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v34; // x21
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v42; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v43; // x21
  const MethodInfo *v44; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v45; // x21
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7

  if ( (byte_4E7A7F9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
    sub_1D0F0B4(&BattleLogicBaseAi_taskAiActFunction_TypeInfo);
    byte_4E7A7F9 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1D0F300(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v3,
    (const MethodInfo_35C7DCC *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v4 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  if ( !this )
    goto LABEL_7;
  v7 = (Il2CppObject *)v4;
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._9_AddNoneTask.method,
    v6);
  if ( !v3 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    0,
    v7,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v8 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_AddBattleEndTask.method,
    v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    90,
    (Il2CppObject *)v8,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v10 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._12_AddBattleLoseEndTask.method,
    v11);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    91,
    (Il2CppObject *)v10,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v12 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._13_AddPlayMotionTask.method,
    v13);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    71,
    (Il2CppObject *)v12,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v14 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.method,
    v15);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    72,
    (Il2CppObject *)v14,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v16 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v16,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.method,
    v17);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    73,
    (Il2CppObject *)v16,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v18 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v18,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._11_AddBattleEndNotRelatedSurvivalStatusTask.method,
    v19);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    92,
    (Il2CppObject *)v18,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v20 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v20,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._19_AddBattleEndNotRelatedSurvivalStatusInstantlyTask.method,
    v21);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    93,
    (Il2CppObject *)v20,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v22 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._20_AddAllBattleEndTask.method,
    v23);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    94,
    (Il2CppObject *)v22,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v24 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._26_AddBattleScriptTask.method,
    v25);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    50,
    (Il2CppObject *)v24,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v26 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v26,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._21_AddOverwriteFieldMotionTask.method,
    v27);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    74,
    (Il2CppObject *)v26,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v28 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._22_AddLoadMovieTask.method,
    v29);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    95,
    (Il2CppObject *)v28,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v30 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v30,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._23_AddPlayMovieTask.method,
    v31);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    96,
    (Il2CppObject *)v30,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v32 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v32,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._24_AddWaitFinishMovieTask.method,
    v33);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    97,
    (Il2CppObject *)v32,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v34 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v34,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._25_AddOverwriteAddUniqueCameraTask.method,
    v35);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    75,
    (Il2CppObject *)v34,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v3;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.dicNoTargetAiActFunc,
    (int32_t)v3,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1D0F300(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v42,
    (const MethodInfo_35C7DCC *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v43 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v43,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.method,
    v44);
  if ( !v42 )
LABEL_7:
    sub_1D0F30C(v4, v5);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v42,
    40,
    (Il2CppObject *)v43,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v45 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1D0F300(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v45,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.method,
    v46);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v42,
    41,
    (Il2CppObject *)v45,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v42;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.dicAiActFunc, (int32_t)v42, v47, v48, v49, v50, v51, v52);
}


void BattleLogicBaseAi__InitDebugLog(BattleLogicBaseAi_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  ;
}


void BattleLogicBaseAi__Initialize(BattleLogicBaseAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct BattleLogic_o *logic; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct BattleLogic_o *v25; // x8
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *Master_object; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4E7A7F8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    byte_4E7A7F8 = 1;
  }
  this->fields.data = data;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  if ( !data
    || (logic = data->fields.logic,
        this->fields.logic = logic,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.logic, (int32_t)logic, v12, v13, v14, v15, v16, v17),
        (v25 = this->fields.logic) == 0) )
  {
    sub_1D0F30C(v10, v11);
  }
  logictarget = v25->fields.logictarget;
  this->fields.logictarget = logictarget;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.logictarget,
    (int32_t)logictarget,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)Master_object;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.aiActMst,
    (int32_t)Master_object,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  ((void (__fastcall *)(BattleLogicBaseAi_o *, const MethodInfo *))this->klass->vtable._8_InitAiActTaskFunction.methodPtr)(
    this,
    this->klass->vtable._8_InitAiActTaskFunction.method);
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicBaseAi__IsChangeThinkingOnly(
        BattleLogicBaseAi_o *this,
        int32_t actType,
        AiBaseEntity_o *aiEnt,
        AiState_o *aiState,
        const MethodInfo *method)
{
  int32_t v5; // w20
  bool v7; // w20

  if ( !aiEnt )
LABEL_9:
    sub_1D0F30C(this, *(_QWORD *)&actType);
  v5 = actType;
  this = (BattleLogicBaseAi_o *)AiBaseEntity__getChangeAiId(aiEnt, 0);
  *(_QWORD *)&actType = (unsigned int)this;
  v7 = v5 == 99;
  if ( v7 )
  {
    if ( !aiState )
      goto LABEL_9;
  }
  else
  {
    if ( (int)this < 1 )
      return 0;
    if ( !aiState )
      goto LABEL_9;
  }
  AiState__changeThinking(aiState, (int32_t)this, 0);
  return v7;
}


bool BattleLogicBaseAi__IsNotPlayedActionFirstTime(
        BattleLogicBaseAi_o *this,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  BattleData_o *data; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( aiEnt && AiBaseEntity__IsForcedActionSpeedFirstTime(aiEnt, 0) )
  {
    data = this->fields.data;
    v6 = (System_String_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, const MethodInfo *))aiEnt->klass->vtable._7_get_FirstTimeSaveKey.methodPtr)(
                              aiEnt,
                              aiEnt->klass->vtable._7_get_FirstTimeSaveKey.method);
    if ( !data )
      sub_1D0F30C(v6, v7);
    return !BattleData__IsExistPlayedFirstTimeNormalSpeedAiList(data, v6, 0);
  }
  else
  {
    return 0;
  }
}


bool BattleLogicBaseAi__IsNotPlayedBackStepFirstTime(
        BattleLogicBaseAi_o *this,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  BattleData_o *data; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( aiEnt && AiBaseEntity__IsForcedBackStepSpeedFirstTime(aiEnt, 0) )
  {
    data = this->fields.data;
    v6 = (System_String_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, const MethodInfo *))aiEnt->klass->vtable._7_get_FirstTimeSaveKey.methodPtr)(
                              aiEnt,
                              aiEnt->klass->vtable._7_get_FirstTimeSaveKey.method);
    if ( !data )
      sub_1D0F30C(v6, v7);
    return !BattleData__IsExistPlayedFirstTimeNormalSpeedAiList(data, v6, 0);
  }
  else
  {
    return 0;
  }
}


bool BattleLogicBaseAi__IsNotPlayedStepInFirstTime(
        BattleLogicBaseAi_o *this,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  BattleData_o *data; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( aiEnt && AiBaseEntity__IsForcedStepInSpeedFirstTime(aiEnt, 0) )
  {
    data = this->fields.data;
    v6 = (System_String_o *)((__int64 (__fastcall *)(AiBaseEntity_o *, const MethodInfo *))aiEnt->klass->vtable._7_get_FirstTimeSaveKey.methodPtr)(
                              aiEnt,
                              aiEnt->klass->vtable._7_get_FirstTimeSaveKey.method);
    if ( !data )
      sub_1D0F30C(v6, v7);
    return !BattleData__IsExistPlayedFirstTimeNormalSpeedAiList(data, v6, 0);
  }
  else
  {
    return 0;
  }
}


void BattleLogicBaseAi__OutputDebugLog(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  ;
}


void BattleLogicBaseAi__SetAddSkillTaskParam(
        BattleLogicBaseAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  ;
}


bool BattleLogicBaseAi__SetNoTargetAiActTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        int32_t type,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *dicNoTargetAiActFunc; // x0
  char v10; // w21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E7A801 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
    byte_4E7A801 = 1;
  }
  value = 0;
  dicNoTargetAiActFunc = this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicNoTargetAiActFunc, type, &value, (const MethodInfo_35C9F14 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
  v10 = (char)dicNoTargetAiActFunc;
  if ( ((unsigned __int8)dicNoTargetAiActFunc & 1) != 0 )
  {
    if ( value )
    {
      ((void (__fastcall *)(Il2CppClass *, System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, void *))value[1].monitor)(
        value[4].klass,
        retList,
        arg,
        value[2].monitor);
      return v10 & 1;
    }
LABEL_8:
    sub_1D0F30C(dicNoTargetAiActFunc, retList);
  }
  return v10 & 1;
}


bool BattleLogicBaseAi__SetProcAiActTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        int32_t type,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x4

  return BattleLogicBaseAi__SetNoTargetAiActTask(this, retList, type, arg, method)
      || BattleLogicBaseAi__SetTargetAiActTask(this, retList, type, arg, v9);
}


void BattleLogicBaseAi__SetSkillSelectAddIndex(
        BattleLogicBaseAi_o *this,
        BattleSkillInfoData_o *skillInfo,
        AiBaseEntity_o *aiEnt,
        const MethodInfo *method)
{
  int32_t MaxSelectAddIndexBySkill; // w0
  int32_t ActSelectIndex; // w1

  if ( skillInfo )
  {
    if ( aiEnt )
    {
      MaxSelectAddIndexBySkill = BattleSkillInfoData__GetMaxSelectAddIndexBySkill(skillInfo, 0);
      ActSelectIndex = AiBaseEntity__GetActSelectIndex(aiEnt, MaxSelectAddIndexBySkill, 0);
      BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, ActSelectIndex, 0);
    }
  }
}


bool BattleLogicBaseAi__SetTargetAiActTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        int32_t type,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *dicAiActFunc; // x0
  char v10; // w21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E7A800 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
    byte_4E7A800 = 1;
  }
  value = 0;
  dicAiActFunc = this->fields.dicAiActFunc;
  if ( !dicAiActFunc )
    goto LABEL_8;
  dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicAiActFunc, type, &value, (const MethodInfo_35C9F14 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
  v10 = (char)dicAiActFunc;
  if ( ((unsigned __int8)dicAiActFunc & 1) != 0 )
  {
    if ( value )
    {
      ((void (__fastcall *)(Il2CppClass *, System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, void *))value[1].monitor)(
        value[4].klass,
        retList,
        arg,
        value[2].monitor);
      return v10 & 1;
    }
LABEL_8:
    sub_1D0F30C(dicAiActFunc, retList);
  }
  return v10 & 1;
}


bool BattleLogicBaseAi__TryGetAiActTargets(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        SkillLvEntity_o *skillLvEnt,
        System_Int32_array **targets,
        System_Int32_array **ptTargets,
        BattleLogicTask_o *execTask,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  *ptTargets = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)ptTargets,
    0,
    (int32_t)skillLvEnt,
    (int32_t)targets,
    (System_String_o *)ptTargets,
    (int32_t)execTask,
    (int64_t)method,
    v7);
  *targets = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)targets, 0, v9, v10, v11, v12, v13, v14);
  return 0;
}


int32_t BattleLogicBaseAi__get_ActorType(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  return 0;
}


System_Int32_array *BattleLogicBaseAi__get_OpponentSvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A7F7 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E7A7F7 = 1;
  }
  return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
}


System_Int32_array *BattleLogicBaseAi__get_PartySvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_4E7A7F6 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E7A7F6 = 1;
  }
  return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
}


void BattleLogicBaseAi___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E7A80F & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicBaseAi___c_TypeInfo);
    byte_4E7A80F = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(BattleLogicBaseAi___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicBaseAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicBaseAi___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)BattleLogicBaseAi___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicBaseAi___c___ctor(BattleLogicBaseAi___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicBaseAi___c___AddBattleScriptTask_b__43_0(
        BattleLogicBaseAi___c_o *this,
        BattleScriptEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1D0F30C(this, 0);
  return BattleScriptAction__IsSingleExec(e->fields.battleScriptAction, 0);
}


void BattleLogicBaseAi_taskAiActFunction___ctor(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  char v14; // w21
  char v15; // w0
  Il2CppObject *m_target; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_1B40CF8;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 1 )
    {
      if ( this->fields.method_is_virtual )
      {
        v14 = sub_1D0F16C(method);
        v15 = sub_1D0F700(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_1B40E14;
          else
            v13 = sub_1B40DC8;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_1B40D3C;
        }
        else
        {
          v13 = sub_1B40D0C;
        }
      }
      else
      {
        v13 = sub_1B40CD4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1B40C7C;
}


System_IAsyncResult_o *BattleLogicBaseAi_taskAiActFunction__BeginInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v7[2]; // [xsp+8h] [xbp-28h] BYREF

  v7[0] = retList;
  v7[1] = arg;
  return (System_IAsyncResult_o *)sub_1D0F068(this, v7, callback, object);
}


void BattleLogicBaseAi_taskAiActFunction__EndInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
}


void BattleLogicBaseAi_taskAiActFunction__Invoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    retList,
    arg,
    this->fields.method);
}