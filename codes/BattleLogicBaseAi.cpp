void BattleLogicBaseAi___ctor(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct BattleLogicTask_array **v14; // x8
  struct BattleLogicTask_array *v15; // x1

  if ( (byte_5973A70 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleLogicTask___);
    byte_5973A70 = 1;
  }
  v10 = Method_System_Array_Empty_BattleLogicTask___;
  v11 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v11 )
  {
    sub_224B964(Method_System_Array_Empty_BattleLogicTask___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908(v8);
  if ( !*(_DWORD *)(v12 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v8);
  v14 = *(struct BattleLogicTask_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.emptyTask = *v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.emptyTask, (int32_t)v15, v2, v3, v4, v5, v6, v7);
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
    sub_2213CDC(this, retList);
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
  BattleEndNotRelatedSurvivalStatusInstantlyTask_o *v7; // x20
  BattleLogicTask_o *Task_53882624; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5973A64 & 1) == 0 )
  {
    sub_2213A60(&BattleEndNotRelatedSurvivalStatusInstantlyTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A64 = 1;
  }
  v7 = (BattleEndNotRelatedSurvivalStatusInstantlyTask_o *)sub_2213CCC(BattleEndNotRelatedSurvivalStatusInstantlyTask_TypeInfo);
  BattleEndNotRelatedSurvivalStatusInstantlyTask___ctor(v7, arg, 0);
  if ( !arg
    || (Task_53882624 = BaseAiActArgument__MakeTask_53882624(arg, (BaseAiActBattleLogicTask_o *)v7, this, v10), !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_2213CDC(Task_53882624, v9);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
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
    sub_2213CDC(this, retList);
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
    sub_2213CDC(this, retList);
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
    sub_2213CDC(this, retList);
  *(_WORD *)&data->fields.endbattleFlg = 257;
}


void BattleLogicBaseAi__AddBattleScriptTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x23
  int32_t v7; // w22
  const MethodInfo *v8; // x2
  struct BattleData_o *data; // x8
  struct BattleLogic_o *logic; // x8
  char v11; // w20
  BattleScriptEntity_array *BattleScriptEntities; // x22
  _BOOL8 IsNullOrEmpty; // x0
  BaseAiActArgument_o *v14; // x2
  const MethodInfo *v15; // x5
  BaseAiActArgument_o *v16; // x2
  const MethodInfo *v17; // x5
  BattleScriptEntity_o *v18; // x8
  int32_t playOrder; // w20
  __int64 v20; // x25
  System_Collections_Generic_List_object__o *v21; // x24
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int max_length; // w8
  __int64 v29; // x27
  BattleScriptEntity_o *v30; // x26
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
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
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  char v53; // w20
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  BattleLogicBaseAi_o *v57; // x1
  Il2CppClass **v58; // x0
  __int64 v59; // x1
  BattleLogicBaseAi___c_c *v60; // x0
  System_Object_array *current; // x24
  struct BattleLogicBaseAi___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__45_0; // x25
  Il2CppObject *v64; // x26
  struct BattleLogicBaseAi___c_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  BattleScriptEntity_o *object; // x0
  BaseAiActArgument_o *v73; // x2
  const MethodInfo *v74; // x4
  const MethodInfo *v75; // x6
  int32_t battleScriptAction; // w8
  BattleLogicBaseAi_o *v77; // x0
  BaseAiActArgument_o *v78; // x2
  const MethodInfo *v79; // x5
  BattleLogicBaseAi_o *v80; // x0
  BaseAiActArgument_o *v81; // x2
  const MethodInfo *v82; // x5
  char v83; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+20h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_5973A6B & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_BattleScriptEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____get_Current__);
    sub_2213A60(&System_Func_BattleScriptEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleScriptEntity____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleScriptEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleScriptEntity__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleScriptEntity____GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleScriptEntity_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleScriptEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleScriptEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_BattleScriptEntity____TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleScriptEntity__TypeInfo);
    sub_2213A60(&Method_BattleLogicBaseAi___c__AddBattleScriptTask_b__45_0__);
    this = (BattleLogicBaseAi_o *)sub_2213A60(&BattleLogicBaseAi___c_TypeInfo);
    byte_5973A6B = 1;
  }
  memset(&v85, 0, sizeof(v85));
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
  v83 = v11;
  if ( !v18 )
    goto LABEL_44;
  playOrder = v18->fields.playOrder;
  v20 = sub_2213CCC(System_Collections_Generic_List_BattleScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v20,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleScriptEntity___ctor__);
  v21 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleScriptEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleScriptEntity_____ctor__);
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
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
        }
        v22 = (System_String_o *)*(unsigned int *)(v20 + 24);
        v42 = *(_DWORD *)(v20 + 28) + 1;
        *(_DWORD *)(v20 + 24) = 0;
        *(_DWORD *)(v20 + 28) = v42;
        if ( (int)v22 >= 1 )
          System_Array__Clear(*(System_Array_o **)(v20 + 16), 0, (int32_t)v22, 0);
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
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = v43 + 8 * v45;
        *(_DWORD *)(v20 + 24) = v45 + 1;
        *(_QWORD *)(v46 + 32) = v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 32), (int32_t)v30, v22, v23, v24, v25, v26, v27);
      }
      max_length = BattleScriptEntities->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_38;
    }
LABEL_66:
    sub_2213CE4(this);
  }
  if ( !v20 )
    goto LABEL_44;
LABEL_38:
  if ( *(int *)(v20 + 24) < 1 )
  {
    v53 = v83;
    if ( v21 )
      goto LABEL_46;
LABEL_44:
    sub_2213CDC(this, retList);
  }
  this = (BattleLogicBaseAi_o *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)v20,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
  v53 = v83;
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v54->obj.klass + v56;
    v21->fields._size = v56 + 1;
    v58[4] = (Il2CppClass *)v57;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v58 + 4), (int32_t)v57, v47, v48, v49, v50, v51, v52);
  }
LABEL_46:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    v21,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleScriptEntity____GetEnumerator__);
  v85 = v84;
  v84.fields._list = 0;
  *(_QWORD *)&v84.fields._index = &v85;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____MoveNext__) )
  {
    v60 = BattleLogicBaseAi___c_TypeInfo;
    current = (System_Object_array *)v85.fields._current;
    if ( !*(&BattleLogicBaseAi___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicBaseAi___c_TypeInfo, v59);
      v60 = BattleLogicBaseAi___c_TypeInfo;
    }
    static_fields = v60->static_fields;
    _9__45_0 = (System_Func_object__bool__o *)static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !*(&v60->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v60, v59);
        static_fields = BattleLogicBaseAi___c_TypeInfo->static_fields;
      }
      v64 = (Il2CppObject *)static_fields->__9;
      _9__45_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleScriptEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__45_0, v64, Method_BattleLogicBaseAi___c__AddBattleScriptTask_b__45_0__, 0);
      v65 = BattleLogicBaseAi___c_TypeInfo->static_fields;
      v65->__9__45_0 = (struct System_Func_BattleScriptEntity__bool__o *)_9__45_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->__9__45_0, (int32_t)_9__45_0, v66, v67, v68, v69, v70, v71);
    }
    object = (BattleScriptEntity_o *)BasicHelper__Find_object_(
                                       current,
                                       (System_Func_T__bool__o *)_9__45_0,
                                       (const MethodInfo_3810A1C *)Method_BasicHelper_Find_BattleScriptEntity___);
    if ( object )
    {
      battleScriptAction = object->fields.battleScriptAction;
      if ( battleScriptAction == 1 )
      {
        BattleLogicBaseAi__AddBattleScriptTaskSingle(v6, retList, arg, object, v53 & 1, 1, v75);
      }
      else if ( battleScriptAction == 2 )
      {
        BattleLogicBaseAi__AddBattleScriptTaskWait((BattleLogicBaseAi_o *)object, retList, v73, object, v74);
      }
      else if ( (unsigned int)(battleScriptAction - 9) >= 0xFFFFFFFE )
      {
        BattleLogicBaseAi__AddBattleScriptTaskSingle(v6, retList, arg, object, v53 & 1, 0, v75);
      }
    }
    else
    {
      BattleLogicBaseAi__AddBattleScriptTaskSync(v6, retList, arg, (BattleScriptEntity_array *)current, v53 & 1, 0, v75);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____Dispose__);
  BattleLogicBaseAi__AddBattleScriptTaskSystem(v77, retList, v78, BattleScriptEntities, 5, v79);
  if ( (v53 & 1) == 0 )
    BattleLogicBaseAi__AddBattleScriptTaskSystem(v80, retList, v81, BattleScriptEntities, 2, v82);
  BattleLogicBaseAi__AddBattleScriptTaskSystem(v80, retList, v81, BattleScriptEntities, 4, v82);
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x25
  __int64 v22; // x1
  const MethodInfo *v23; // x6
  __int64 v24; // x0

  if ( (byte_5973A6F & 1) == 0 )
  {
    sub_2213A60(&BattleScriptEntity___TypeInfo);
    byte_5973A6F = 1;
  }
  v13 = sub_2213B20(BattleScriptEntity___TypeInfo, 1);
  if ( !v13 )
    sub_2213CDC(0, v14);
  v21 = v13;
  if ( entity )
  {
    v13 = sub_2213BB4(entity, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !v13 )
    {
      v24 = sub_2213D00(0, v22);
      sub_2213BA0(v24, 0);
    }
  }
  if ( !*(_DWORD *)(v21 + 24) )
    sub_2213CE4(v13);
  *(_QWORD *)(v21 + 32) = entity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 32), (int32_t)entity, v15, v16, v17, v18, v19, v20);
  BattleLogicBaseAi__AddBattleScriptTaskSync(
    this,
    retList,
    arg,
    (BattleScriptEntity_array *)v21,
    isEachLoad,
    isSkipStep,
    v23);
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_5973A6E & 1) == 0 )
  {
    sub_2213A60(&BattleLogicBattleScriptTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A6E = 1;
  }
  v13 = (BattleLogicBattleScriptTask_o *)sub_2213CCC(BattleLogicBattleScriptTask_TypeInfo);
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
    sub_2213CDC(v14, v15);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v13,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v17, v18, v19, v20, v21, v22);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_5973A6C & 1) == 0 )
  {
    sub_2213A60(&BattleLogicBattleScriptSystemTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A6C = 1;
  }
  v9 = (BattleLogicBattleScriptSystemTask_o *)sub_2213CCC(BattleLogicBattleScriptSystemTask_TypeInfo);
  BattleLogicBattleScriptSystemTask___ctor(v9, 0);
  if ( !v9
    || (BattleLogicBattleScriptSystemTask__Init(v9, entities, systemType, 0), !retList)
    || (items = retList->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_2213CDC(v10, v11);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v9,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5973A6D & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask_TypeInfo);
    this = (BattleLogicBaseAi_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A6D = 1;
  }
  if ( !entity )
    goto LABEL_10;
  WaitTime = BattleScriptEntity__GetWaitTime(entity, 0);
  v8 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v8, 0);
  if ( !v8
    || (BattleLogicTask__setSystem(v8, 0), v8->fields.systemTime = (float)WaitTime / 1000.0, !retList)
    || (items = retList->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_10:
    sub_2213CDC(this, retList);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v8,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v8;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
}


void BattleLogicBaseAi__AddGimmickSkillTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  BattleLogicBaseAi_o *v6; // x20
  BattleLogicBaseAi_o *v7; // x24
  System_Collections_ICollection_o *GimmickSkillRates; // x22
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v10; // x3
  unsigned int v11; // w25
  BattleLogicTask_o *Task; // x22
  __int64 v13; // x23
  unsigned int v14; // w9
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  BattleLogicBaseAi_o *v21; // x24
  BattleLogicBaseAi_o *v22; // x25
  BattleLogicBaseAi_o *v23; // x26
  BattleLogicBaseAi_o *v24; // x27
  int32_t v25; // w28
  BattleLogicBaseAi_o *v26; // x29
  bool GimmickFixedReelOrder; // w0
  BattleData_o *data; // x8
  BattleLogicBaseAi_o *v29; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  v5 = (System_Collections_Generic_List_object__o *)retList;
  v6 = this;
  if ( (byte_5973A6A & 1) == 0 )
  {
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    this = (BattleLogicBaseAi_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A6A = 1;
  }
  if ( !arg )
    goto LABEL_33;
  this = (BattleLogicBaseAi_o *)arg->fields._AiActEnt_k__BackingField;
  if ( !this )
    goto LABEL_33;
  this = (BattleLogicBaseAi_o *)AiActEntity__GetGimmickSkillIds((AiActEntity_o *)this, 0);
  if ( !arg->fields._AiActEnt_k__BackingField )
    goto LABEL_33;
  v7 = this;
  GimmickSkillRates = (System_Collections_ICollection_o *)AiActEntity__GetGimmickSkillRates(
                                                            arg->fields._AiActEnt_k__BackingField,
                                                            0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v7, 0) )
  {
    this = (BattleLogicBaseAi_o *)BasicHelper__IsNullOrEmpty(GimmickSkillRates, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      logic = v6->fields.logic;
      if ( logic )
      {
        this = (BattleLogicBaseAi_o *)logic->fields.logicSkill;
        if ( this )
        {
          this = (BattleLogicBaseAi_o *)BattleLogicSkill__GetHitGimmickSkillId(
                                          (BattleLogicSkill_o *)this,
                                          (System_Int32_array *)GimmickSkillRates,
                                          0);
          if ( ((unsigned int)this & 0x80000000) != 0 )
            return;
          if ( v7 )
          {
            v11 = (unsigned int)this;
            if ( (int)this >= SLODWORD(v7->fields.logic) )
              return;
            Task = BaseAiActArgument__MakeTask(arg, v6, 0, v10);
            v13 = sub_2213CCC(BattleSkillInfoData_TypeInfo);
            BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v13, 0);
            if ( v13 )
            {
              v14 = (unsigned int)v7->fields.logic;
              *(_DWORD *)(v13 + 24) = -1;
              *(_QWORD *)(v13 + 16) = 20;
              if ( v11 >= v14 )
                goto LABEL_34;
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 376LL))(
                v13,
                *((unsigned int *)&v7->fields.logictarget + v11),
                *(_QWORD *)(*(_QWORD *)v13 + 384LL));
              *(_DWORD *)(v13 + 36) = 1;
              this = (BattleLogicBaseAi_o *)sub_2213B20(int___TypeInfo, 1);
              if ( !this )
                goto LABEL_33;
              retList = (System_Collections_Generic_List_BattleLogicTask__o *)this;
              if ( !LODWORD(this->fields.logic) )
LABEL_34:
                sub_2213CE4(this);
              LODWORD(this->fields.logictarget) = v11;
              if ( Task )
              {
                Task->fields.gimmickIndexArray = (struct System_Int32_array *)this;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&Task->fields.gimmickIndexArray,
                  (int32_t)this,
                  v15,
                  v16,
                  v17,
                  v18,
                  v19,
                  v20);
                this = (BattleLogicBaseAi_o *)arg->fields._AiActEnt_k__BackingField;
                if ( this )
                {
                  this = (BattleLogicBaseAi_o *)AiActEntity__GetGimmickStartVoices((AiActEntity_o *)this, 0);
                  if ( arg->fields._AiActEnt_k__BackingField )
                  {
                    v21 = this;
                    this = (BattleLogicBaseAi_o *)AiActEntity__GetGimmickResultVoices(
                                                    arg->fields._AiActEnt_k__BackingField,
                                                    0);
                    if ( arg->fields._AiActEnt_k__BackingField )
                    {
                      v22 = this;
                      this = (BattleLogicBaseAi_o *)AiActEntity__GetGimmickAnimTypes(
                                                      arg->fields._AiActEnt_k__BackingField,
                                                      0);
                      if ( arg->fields._AiActEnt_k__BackingField )
                      {
                        v23 = this;
                        this = (BattleLogicBaseAi_o *)AiActEntity__GetGimmickObjName(
                                                        arg->fields._AiActEnt_k__BackingField,
                                                        0);
                        if ( arg->fields._AiActEnt_k__BackingField )
                        {
                          v24 = this;
                          this = (BattleLogicBaseAi_o *)AiActEntity__GetGimmickSvtId(
                                                          arg->fields._AiActEnt_k__BackingField,
                                                          0);
                          if ( arg->fields._AiActEnt_k__BackingField )
                          {
                            v25 = (int)this;
                            this = (BattleLogicBaseAi_o *)AiActEntity__GetGimmickReelIcons(
                                                            arg->fields._AiActEnt_k__BackingField,
                                                            0);
                            if ( arg->fields._AiActEnt_k__BackingField )
                            {
                              v26 = this;
                              GimmickFixedReelOrder = AiActEntity__GetGimmickFixedReelOrder(
                                                        arg->fields._AiActEnt_k__BackingField,
                                                        0);
                              BattleLogicTask__SetGimmickPerformanceData(
                                Task,
                                (System_String_array *)v21,
                                (System_Object_array *)v22,
                                (System_Int32_array *)v23,
                                (System_String_o *)v24,
                                v25,
                                (System_Int32_array *)v26,
                                GimmickFixedReelOrder,
                                0);
                              ((void (__fastcall *)(BattleLogicBaseAi_o *, System_Collections_Generic_List_object__o *, BaseAiActArgument_o *, BattleLogicTask_o *, const MethodInfo *))v6->klass->vtable._26_OnAddGimmickSkillScriptTask.methodPtr)(
                                v6,
                                v5,
                                arg,
                                Task,
                                v6->klass->vtable._26_OnAddGimmickSkillScriptTask.method);
                              this = (BattleLogicBaseAi_o *)v6->fields.data;
                              if ( this )
                              {
                                this = (BattleLogicBaseAi_o *)BattleData__getFieldEnemyServantIDList(
                                                                (BattleData_o *)this,
                                                                0,
                                                                0);
                                data = v6->fields.data;
                                if ( data )
                                {
                                  v29 = this;
                                  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
                                  BattleLogicTask__setActionSkill(
                                    Task,
                                    (BattleSkillInfoData_o *)v13,
                                    (System_Int32_array *)v29,
                                    FieldPlayerServantIDList,
                                    0,
                                    0,
                                    0);
                                  if ( v5 )
                                  {
                                    items = v5->fields._items;
                                    v38 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                                    ++v5->fields._version;
                                    if ( items )
                                    {
                                      size = v5->fields._size;
                                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                                      {
                                        System_Collections_Generic_List_object___AddWithResize(
                                          v5,
                                          (Il2CppObject *)Task,
                                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                                      }
                                      else
                                      {
                                        v40 = &items->obj.klass + size;
                                        v5->fields._size = size + 1;
                                        v40[4] = (Il2CppClass *)Task;
                                        sub_2213A04(
                                          (MissionNaviTransitionBoardItem_o *)(v40 + 4),
                                          (int32_t)Task,
                                          v31,
                                          v32,
                                          v33,
                                          v34,
                                          v35,
                                          v36);
                                      }
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_33:
      sub_2213CDC(this, retList);
    }
  }
}


void BattleLogicBaseAi__AddLoadMovieTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLoadMovieTask_o *v7; // x20
  BattleLogicTask_o *NoMotionTask; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5973A66 & 1) == 0 )
  {
    sub_2213A60(&BattleLoadMovieTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A66 = 1;
  }
  v7 = (BattleLoadMovieTask_o *)sub_2213CCC(BattleLoadMovieTask_TypeInfo);
  BattleLoadMovieTask___ctor(v7, 0);
  if ( !arg
    || (NoMotionTask = BaseAiActArgument__MakeNoMotionTask(arg, (BaseAiActBattleLogicTask_o *)v7, this, v10), !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_2213CDC(NoMotionTask, v9);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
  }
}


void BattleLogicBaseAi__AddMessageTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  MessageBattleLogicTask_o *v7; // x20
  BattleLogicTask_o *Task_53882624; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5973A5D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&MessageBattleLogicTask_TypeInfo);
    byte_5973A5D = 1;
  }
  v7 = (MessageBattleLogicTask_o *)sub_2213CCC(MessageBattleLogicTask_TypeInfo);
  MessageBattleLogicTask___ctor(v7, 0);
  if ( !arg
    || (Task_53882624 = BaseAiActArgument__MakeTask_53882624(arg, (BaseAiActBattleLogicTask_o *)v7, this, v10), !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_2213CDC(Task_53882624, v9);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
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
  BattleOverwriteAddUniqueCameraTask_o *v7; // x20
  BattleLogicTask_o *NoMotionTask; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5973A69 & 1) == 0 )
  {
    sub_2213A60(&BattleOverwriteAddUniqueCameraTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A69 = 1;
  }
  v7 = (BattleOverwriteAddUniqueCameraTask_o *)sub_2213CCC(BattleOverwriteAddUniqueCameraTask_TypeInfo);
  BattleOverwriteAddUniqueCameraTask___ctor(v7, 0);
  if ( !arg
    || (NoMotionTask = BaseAiActArgument__MakeNoMotionTask(arg, (BaseAiActBattleLogicTask_o *)v7, this, v10), !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_2213CDC(NoMotionTask, v9);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
  }
}


void BattleLogicBaseAi__AddOverwriteFieldMotionTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleOverwriteFieldMotionTask_o *v7; // x20
  BattleLogicTask_o *NoMotionTask; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5973A65 & 1) == 0 )
  {
    sub_2213A60(&BattleOverwriteFieldMotionTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A65 = 1;
  }
  v7 = (BattleOverwriteFieldMotionTask_o *)sub_2213CCC(BattleOverwriteFieldMotionTask_TypeInfo);
  BattleOverwriteFieldMotionTask___ctor(v7, 0);
  if ( !arg
    || (NoMotionTask = BaseAiActArgument__MakeNoMotionTask(arg, (BaseAiActBattleLogicTask_o *)v7, this, v10), !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_2213CDC(NoMotionTask, v9);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  int32_t ActionValue; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_5973A5C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    this = (BattleLogicBaseAi_o *)sub_2213A60(&StringLiteral_9103/*"MOTION_"*/);
    byte_5973A5C = 1;
  }
  ActionValue = 0;
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
  this = (BattleLogicBaseAi_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_9103/*"MOTION_"*/, v9, 0);
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
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&Task->fields.targetObject,
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
    sub_2213CDC(this, retList);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)Task,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v28[4] = (Il2CppClass *)Task;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)Task, v19, v20, v21, v22, v23, v24);
  }
}


void BattleLogicBaseAi__AddPlayMovieTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattlePlayMovieTask_o *v7; // x20
  BattleLogicTask_o *NoMotionTask; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5973A67 & 1) == 0 )
  {
    sub_2213A60(&BattlePlayMovieTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A67 = 1;
  }
  v7 = (BattlePlayMovieTask_o *)sub_2213CCC(BattlePlayMovieTask_TypeInfo);
  BattlePlayMovieTask___ctor(v7, 0);
  if ( !arg
    || (NoMotionTask = BaseAiActArgument__MakeNoMotionTask(arg, (BaseAiActBattleLogicTask_o *)v7, this, v10), !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_2213CDC(NoMotionTask, v9);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
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
  __int64 v10; // x1
  int32_t v11; // w24
  const MethodInfo *v12; // x3
  BattleLogicTask_o *Task; // x22
  int32_t v14; // w26
  TempBattleSkillInfoData_o *v15; // x25
  BattleLogicBaseAi_o *v16; // x0
  const MethodInfo *v17; // x3
  bool IsNeedUpHate; // w0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  BattleLogicTask_o *v29; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct BattleLogicTask_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_Int32_array *v40; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *v41; // [xsp+8h] [xbp-58h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_5973A5E & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_int____91713824);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    this = (BattleLogicBaseAi_o *)sub_2213A60(&TempBattleSkillInfoData_TypeInfo);
    byte_5973A5E = 1;
  }
  entity = 0;
  v40 = 0;
  v41 = 0;
  if ( !arg )
    goto LABEL_23;
  AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
  if ( !AiActEnt_k__BackingField )
    goto LABEL_23;
  this = (BattleLogicBaseAi_o *)BasicHelper__IndexValue_int_(
                                  AiActEnt_k__BackingField->fields.skillVals,
                                  0,
                                  0,
                                  (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824);
  v8 = arg->fields._AiActEnt_k__BackingField;
  if ( !v8 )
    goto LABEL_23;
  v9 = (int)this;
  v11 = BasicHelper__IndexValue_int_(
          v8->fields.skillVals,
          1,
          1,
          (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  this = (BattleLogicBaseAi_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this )
    goto LABEL_23;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v9, v11, 0) )
  {
    Task = BaseAiActArgument__MakeTask(arg, v6, 0, v12);
    if ( (((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BaseAiActArgument_o *, SkillLvEntity_o *, System_Int32_array **, System_Int32_array **, BattleLogicTask_o *, const MethodInfo *))v6->klass->vtable._16_TryGetAiActTargets.methodPtr)(
            v6,
            arg,
            entity,
            &v41,
            &v40,
            Task,
            v6->klass->vtable._16_TryGetAiActTargets.method)
        & 1) != 0 )
    {
      v14 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
              arg,
              arg->klass->vtable._4_get_UniqueId.method);
      v15 = (TempBattleSkillInfoData_o *)sub_2213CCC(TempBattleSkillInfoData_TypeInfo);
      TempBattleSkillInfoData___ctor(v15, v9, v11, v14, 0);
      BattleLogicBaseAi__SetSkillSelectAddIndex(
        v16,
        (BattleSkillInfoData_o *)v15,
        arg->fields._AiEnt_k__BackingField,
        v17);
      if ( Task )
      {
        BattleLogicTask__setActionSkill(Task, (BattleSkillInfoData_o *)v15, v41, v40, 0, 0, 0);
        this = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BattleLogicTask_o *, const MethodInfo *))v6->klass->vtable._17_SetAddSkillTaskParam.methodPtr)(
                                        v6,
                                        Task,
                                        v6->klass->vtable._17_SetAddSkillTaskParam.method);
        if ( v15 )
        {
          IsNeedUpHate = BattleSkillInfoData__IsNeedUpHate((BattleSkillInfoData_o *)v15, 0);
          BattleLogicTask__RevertUnusedNoNeedUpHateBuff(Task, IsNeedUpHate, 0);
          if ( retList )
          {
            items = retList->fields._items;
            v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++retList->fields._version;
            if ( items )
            {
              size = retList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)retList,
                  (Il2CppObject *)Task,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                retList->fields._size = size + 1;
                v28[4] = (Il2CppClass *)Task;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)Task, v19, v20, v21, v22, v23, v24);
              }
              v29 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v29, 0);
              v36 = retList->fields._items;
              v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++retList->fields._version;
              if ( v36 )
              {
                v38 = retList->fields._size;
                if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)retList,
                    (Il2CppObject *)v29,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                }
                else
                {
                  v39 = &v36->obj.klass + v38;
                  retList->fields._size = v38 + 1;
                  v39[4] = (Il2CppClass *)v29;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v29, v30, v31, v32, v33, v34, v35);
                }
                return;
              }
            }
          }
        }
      }
LABEL_23:
      sub_2213CDC(this, retList);
    }
  }
}


void BattleLogicBaseAi__AddWaitFinishMovieTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleWaitFinishMovieTask_o *v7; // x20
  BattleLogicTask_o *NoMotionTask; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5973A68 & 1) == 0 )
  {
    sub_2213A60(&BattleWaitFinishMovieTask_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A68 = 1;
  }
  v7 = (BattleWaitFinishMovieTask_o *)sub_2213CCC(BattleWaitFinishMovieTask_TypeInfo);
  BattleWaitFinishMovieTask___ctor(v7, 0);
  if ( !arg
    || (NoMotionTask = BaseAiActArgument__MakeNoMotionTask(arg, (BaseAiActBattleLogicTask_o *)v7, this, v10), !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_2213CDC(NoMotionTask, v9);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v7,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v7, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  BattleData_o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_5973A5B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_5973A5B = 1;
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
    sub_2213CDC(data, retList);
  }
  size = retList->fields._size;
  v18 = data;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)data,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_5973A63 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
    byte_5973A63 = 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         dicNoTargetAiActFunc,
         type,
         (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__) )
  {
    return 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  if ( !dicNoTargetAiActFunc )
LABEL_8:
    sub_2213CDC(dicNoTargetAiActFunc, *(_QWORD *)&type);
  return System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
           dicNoTargetAiActFunc,
           type,
           (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
AiActEntity_o *BattleLogicBaseAi__GetAiActEntity(BattleLogicBaseAi_o *this, int32_t aiActId, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *aiActMst; // x0

  if ( (byte_5973A60 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    byte_5973A60 = 1;
  }
  aiActMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.aiActMst;
  if ( !aiActMst )
    sub_2213CDC(0, *(_QWORD *)&aiActId);
  return (AiActEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            aiActMst,
                            aiActId,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
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
  int32_t target; // w27
  __int64 v19; // x23
  BattleLogicTarget_o *logictarget; // x26
  struct AiActEntity_o *aiActEnt; // x8

  if ( (byte_5973A5F & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973A5F = 1;
  }
  TargetAiAct = sub_2213B20(int___TypeInfo, 1);
  if ( !arg
    || (AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField) == 0
    || (target = AiActEnt_k__BackingField->fields.target,
        v19 = TargetAiAct,
        logictarget = this->fields.logictarget,
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
        !v19) )
  {
    sub_2213CDC(TargetAiAct, v16);
  }
  if ( !*(_DWORD *)(v19 + 24) )
    sub_2213CE4(TargetAiAct);
  *(_DWORD *)(v19 + 32) = TargetAiAct;
  return (System_Int32_array *)v19;
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
  BattleLogicBaseAi_taskAiActFunction_o *v36; // x21
  const MethodInfo *v37; // x3
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v44; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v45; // x21
  const MethodInfo *v46; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v47; // x21
  const MethodInfo *v48; // x3
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7

  if ( (byte_5973A5A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
    sub_2213A60(&BattleLogicBaseAi_taskAiActFunction_TypeInfo);
    byte_5973A5A = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v3,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v4 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
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
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v8 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_AddBattleEndTask.method,
    v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    90,
    (Il2CppObject *)v8,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v10 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._12_AddBattleLoseEndTask.method,
    v11);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    91,
    (Il2CppObject *)v10,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v12 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._13_AddPlayMotionTask.method,
    v13);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    71,
    (Il2CppObject *)v12,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v14 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.method,
    v15);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    72,
    (Il2CppObject *)v14,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v16 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v16,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.method,
    v17);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    73,
    (Il2CppObject *)v16,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v18 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v18,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._11_AddBattleEndNotRelatedSurvivalStatusTask.method,
    v19);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    92,
    (Il2CppObject *)v18,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v20 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v20,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._19_AddBattleEndNotRelatedSurvivalStatusInstantlyTask.method,
    v21);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    93,
    (Il2CppObject *)v20,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v22 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._20_AddAllBattleEndTask.method,
    v23);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    94,
    (Il2CppObject *)v22,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v24 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._28_AddBattleScriptTask.method,
    v25);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    50,
    (Il2CppObject *)v24,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v26 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v26,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._21_AddOverwriteFieldMotionTask.method,
    v27);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    74,
    (Il2CppObject *)v26,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v28 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._22_AddLoadMovieTask.method,
    v29);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    95,
    (Il2CppObject *)v28,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v30 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v30,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._23_AddPlayMovieTask.method,
    v31);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    96,
    (Il2CppObject *)v30,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v32 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v32,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._24_AddWaitFinishMovieTask.method,
    v33);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    97,
    (Il2CppObject *)v32,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v34 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v34,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._25_AddOverwriteAddUniqueCameraTask.method,
    v35);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    75,
    (Il2CppObject *)v34,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v36 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v36,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._27_AddGimmickSkillTask.method,
    v37);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    76,
    (Il2CppObject *)v36,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicNoTargetAiActFunc,
    (int32_t)v3,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v44,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v45 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v45,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.method,
    v46);
  if ( !v44 )
LABEL_7:
    sub_2213CDC(v4, v5);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    40,
    (Il2CppObject *)v45,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v47 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_2213CCC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v47,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.method,
    v48);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v44,
    41,
    (Il2CppObject *)v47,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v44;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dicAiActFunc,
    (int32_t)v44,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
}


void BattleLogicBaseAi__InitDebugLog(BattleLogicBaseAi_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  ;
}


void BattleLogicBaseAi__Initialize(BattleLogicBaseAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct BattleLogic_o *logic; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct BattleLogic_o *v25; // x8
  struct BattleLogicTarget_o *logictarget; // x1
  __int64 v27; // x1
  Il2CppObject *Master_object; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_5973A59 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_AiActMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5973A59 = 1;
  }
  this->fields.data = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !data
    || (logic = data->fields.logic,
        this->fields.logic = logic,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.logic,
          (int32_t)logic,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (v25 = this->fields.logic) == 0) )
  {
    sub_2213CDC(v10, v11);
  }
  logictarget = v25->fields.logictarget;
  this->fields.logictarget = logictarget;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.logictarget,
    (int32_t)logictarget,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)Master_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.aiActMst,
    (int32_t)Master_object,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
  int32_t v5; // w19

  if ( !aiEnt )
    goto LABEL_8;
  v5 = actType;
  this = (BattleLogicBaseAi_o *)AiBaseEntity__getChangeAiId(aiEnt, 0);
  *(_QWORD *)&actType = (unsigned int)this;
  if ( v5 == 99 )
  {
    if ( aiState )
      goto LABEL_4;
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&actType);
  }
  if ( (int)this < 1 )
    return v5 == 99;
  if ( !aiState )
    goto LABEL_8;
LABEL_4:
  AiState__changeThinking(aiState, (int32_t)this, 0);
  return v5 == 99;
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
      sub_2213CDC(v6, v7);
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
      sub_2213CDC(v6, v7);
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
      sub_2213CDC(v6, v7);
    return !BattleData__IsExistPlayedFirstTimeNormalSpeedAiList(data, v6, 0);
  }
  else
  {
    return 0;
  }
}


void BattleLogicBaseAi__OnAddGimmickSkillScriptTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  ;
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

  if ( (byte_5973A62 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
    byte_5973A62 = 1;
  }
  dicNoTargetAiActFunc = this->fields.dicNoTargetAiActFunc;
  value = 0;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicNoTargetAiActFunc, type, &value, (const MethodInfo_3FBDE7C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_2213CDC(dicNoTargetAiActFunc, retList);
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

  if ( (byte_5973A61 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
    byte_5973A61 = 1;
  }
  dicAiActFunc = this->fields.dicAiActFunc;
  value = 0;
  if ( !dicAiActFunc )
    goto LABEL_8;
  dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicAiActFunc, type, &value, (const MethodInfo_3FBDE7C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_2213CDC(dicAiActFunc, retList);
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
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  *ptTargets = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ptTargets,
    0,
    (System_String_o *)skillLvEnt,
    (System_String_o *)targets,
    (int32_t)ptTargets,
    (int32_t)execTask,
    (bool)method,
    v7);
  *targets = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)targets, 0, v9, v10, v11, v12, v13, v14);
  return 0;
}


int32_t BattleLogicBaseAi__get_ActorType(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  return 0;
}


System_Int32_array *BattleLogicBaseAi__get_OpponentSvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_5973A58 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973A58 = 1;
  }
  return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
}


System_Int32_array *BattleLogicBaseAi__get_PartySvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_5973A57 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973A57 = 1;
  }
  return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
}


void BattleLogicBaseAi___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973A71 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicBaseAi___c_TypeInfo);
    byte_5973A71 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleLogicBaseAi___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicBaseAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicBaseAi___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleLogicBaseAi___c_TypeInfo->static_fields,
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


bool BattleLogicBaseAi___c___AddBattleScriptTask_b__45_0(
        BattleLogicBaseAi___c_o *this,
        BattleScriptEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return BattleScriptAction__IsSingleExec(e->fields.battleScriptAction, 0);
}


void BattleLogicBaseAi_taskAiActFunction___ctor(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_20125D8;
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
        v14 = sub_2213B30(method);
        v15 = sub_22140B4(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_20126F0;
          else
            v13 = sub_20126A4;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_2012618;
        }
        else
        {
          v13 = sub_20125EC;
        }
      }
      else
      {
        v13 = sub_20125B8;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)&loc_2012560;
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
  return sub_2213A14(this, v7, callback, object);
}


void BattleLogicBaseAi_taskAiActFunction__EndInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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