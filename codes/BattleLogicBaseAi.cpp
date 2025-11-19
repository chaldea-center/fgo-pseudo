void BattleLogicBaseAi___ctor(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  struct BattleLogicTask_array **v10; // x8
  struct BattleLogicTask_array *v11; // x1

  if ( (byte_4CB934F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4CB934F = 1;
  }
  v6 = Method_System_Array_Empty_BattleLogicTask___;
  v7 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v7 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BattleLogicTask___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(inited);
  v10 = *(struct BattleLogicTask_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.emptyTask = *v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.emptyTask, (int32_t)v11, v2, v3);
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
    sub_1C6BC60(this, retList);
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
  Il2CppObject *Task_46985388; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppObject *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4CB9348 & 1) == 0 )
  {
    sub_1C6BA08(&BattleEndNotRelatedSurvivalStatusInstantlyTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4CB9348 = 1;
  }
  v7 = (BattleEndNotRelatedSurvivalStatusInstantlyTask_o *)sub_1C6BC54(BattleEndNotRelatedSurvivalStatusInstantlyTask_TypeInfo);
  BattleEndNotRelatedSurvivalStatusInstantlyTask___ctor(v7, arg, 0);
  if ( !arg
    || (Task_46985388 = (Il2CppObject *)BaseAiActArgument__MakeTask_46985388(
                                          arg,
                                          (BaseAiActBattleLogicTask_o *)v7,
                                          this,
                                          v10),
        !retList)
    || (items = retList->fields._items,
        v14 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1C6BC60(Task_46985388, v9);
  }
  size = retList->fields._size;
  v16 = Task_46985388;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      Task_46985388,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v17 = &items->obj.klass + size;
    v17[4] = (Il2CppClass *)v16;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
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
    sub_1C6BC60(this, retList);
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
    sub_1C6BC60(this, retList);
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
    sub_1C6BC60(this, retList);
  *(_WORD *)&data->fields.endbattleFlg = 257;
}


void BattleLogicBaseAi__AddBattleScriptTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  int32_t v6; // w23
  const MethodInfo *v7; // x2
  struct BattleData_o *data; // x8
  struct BattleLogic_o *logic; // x8
  BattleScriptEntity_array *BattleScriptEntities; // x23
  BaseAiActArgument_o *v11; // x2
  const MethodInfo *v12; // x5
  BattleScriptEntity_o *v13; // x8
  int32_t playOrder; // w22
  __int64 v15; // x25
  System_Collections_Generic_List_object__o *v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int max_length; // w8
  __int64 v20; // x27
  BattleScriptEntity_o *v21; // x26
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  BattleLogicBaseAi_o *v27; // x1
  Il2CppClass **v28; // x0
  int v29; // w8
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  BaseAiActArgument_o *v36; // x22
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  BattleLogicBaseAi_o *v40; // x1
  Il2CppClass **v41; // x0
  BattleLogicBaseAi___c_c *v42; // x8
  System_Object_array *current; // x24
  System_Func_object__bool__o *_9__38_0; // x25
  Il2CppObject *v45; // x26
  struct BattleLogicBaseAi___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *object; // x0
  BaseAiActArgument_o *v50; // x2
  const MethodInfo *v51; // x4
  const MethodInfo *v52; // x5
  int monitor_high; // w8
  BattleLogicBaseAi_o *v54; // x0
  BaseAiActArgument_o *v55; // x2
  const MethodInfo *v56; // x5
  BattleLogicBaseAi_o *v57; // [xsp+8h] [xbp-A8h]
  char v58; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+30h] [xbp-80h] BYREF

  v57 = this;
  if ( (byte_4CB9349 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Find_BattleScriptEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____get_Current__);
    sub_1C6BA08(&System_Func_BattleScriptEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleScriptEntity____Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleScriptEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleScriptEntity__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleScriptEntity____GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleScriptEntity_____ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleScriptEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleScriptEntity__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleScriptEntity____TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_BattleScriptEntity__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicBaseAi___c__AddBattleScriptTask_b__38_0__);
    this = (BattleLogicBaseAi_o *)sub_1C6BA08(&BattleLogicBaseAi___c_TypeInfo);
    byte_4CB9349 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( !arg )
    goto LABEL_44;
  this = (BattleLogicBaseAi_o *)arg->fields._AiActEnt_k__BackingField;
  if ( !this )
    goto LABEL_44;
  this = (BattleLogicBaseAi_o *)AiActEntity__GetBattleScriptId((AiActEntity_o *)this, 0);
  if ( !arg->fields._AiActEnt_k__BackingField )
    goto LABEL_44;
  v6 = (int)this;
  this = (BattleLogicBaseAi_o *)AiActEntity__IsBattleScriptEachLoad(arg->fields._AiActEnt_k__BackingField, 0);
  v58 = (char)this;
  data = v57->fields.data;
  if ( !data )
    goto LABEL_44;
  logic = data->fields.logic;
  if ( !logic )
    goto LABEL_44;
  this = (BattleLogicBaseAi_o *)logic->fields.logicBattleScript;
  if ( !this )
    goto LABEL_44;
  BattleScriptEntities = BattleLogicBattleScript__GetBattleScriptEntities((BattleLogicBattleScript_o *)this, v6, v7);
  this = (BattleLogicBaseAi_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BattleScriptEntities, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  if ( (v58 & 1) == 0 )
    BattleLogicBaseAi__AddBattleScriptTaskSystem(this, retList, v11, BattleScriptEntities, 1, v12);
  if ( !BattleScriptEntities )
    goto LABEL_44;
  if ( !LODWORD(BattleScriptEntities->max_length) )
    goto LABEL_63;
  v13 = BattleScriptEntities->m_Items[0];
  if ( !v13 )
    goto LABEL_44;
  playOrder = v13->fields.playOrder;
  v15 = sub_1C6BC54(System_Collections_Generic_List_BattleScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v15,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleScriptEntity___ctor__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleScriptEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleScriptEntity_____ctor__);
  max_length = BattleScriptEntities->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( (unsigned int)v20 < max_length )
    {
      v21 = BattleScriptEntities->m_Items[v20];
      if ( !v21 )
        goto LABEL_44;
      if ( playOrder == v21->fields.playOrder )
      {
        if ( !v15 )
          goto LABEL_44;
      }
      else
      {
        if ( !v15 )
          goto LABEL_44;
        this = (BattleLogicBaseAi_o *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)v15,
                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
        if ( !v16 )
          goto LABEL_44;
        items = v16->fields._items;
        v25 = Method_System_Collections_Generic_List_BattleScriptEntity____Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_44;
        size = v16->fields._size;
        v27 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)this,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
        }
        v17 = *(_DWORD *)(v15 + 24);
        v29 = *(_DWORD *)(v15 + 28) + 1;
        *(_DWORD *)(v15 + 24) = 0;
        *(_DWORD *)(v15 + 28) = v29;
        if ( v17 >= 1 )
          System_Array__Clear(*(System_Array_o **)(v15 + 16), 0, v17, 0);
        playOrder = v21->fields.playOrder;
      }
      v30 = *(_QWORD *)(v15 + 16);
      v31 = Method_System_Collections_Generic_List_BattleScriptEntity__Add__;
      ++*(_DWORD *)(v15 + 28);
      if ( !v30 )
        goto LABEL_44;
      v32 = *(int *)(v15 + 24);
      if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v15,
          (Il2CppObject *)v21,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = v30 + 8 * v32;
        *(_DWORD *)(v15 + 24) = v32 + 1;
        *(_QWORD *)(v33 + 32) = v21;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v33 + 32), (int32_t)v21, v17, v18);
      }
      max_length = BattleScriptEntities->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_38;
    }
LABEL_63:
    sub_1C6BC68(this);
  }
  if ( !v15 )
    goto LABEL_44;
LABEL_38:
  if ( *(int *)(v15 + 24) >= 1 )
  {
    this = (BattleLogicBaseAi_o *)System_Collections_Generic_List_object___ToArray(
                                    (System_Collections_Generic_List_object__o *)v15,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
    v36 = arg;
    if ( v16 )
    {
      v37 = v16->fields._items;
      v38 = Method_System_Collections_Generic_List_BattleScriptEntity____Add__;
      ++v16->fields._version;
      if ( v37 )
      {
        v39 = v16->fields._size;
        v40 = this;
        if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)this,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &v37->obj.klass + v39;
          v16->fields._size = v39 + 1;
          v41[4] = (Il2CppClass *)v40;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v34, v35);
        }
        goto LABEL_46;
      }
    }
LABEL_44:
    sub_1C6BC60(this, retList);
  }
  v36 = arg;
  if ( !v16 )
    goto LABEL_44;
LABEL_46:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    v16,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleScriptEntity____GetEnumerator__);
  v60 = v59;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____MoveNext__) )
  {
    v42 = BattleLogicBaseAi___c_TypeInfo;
    current = (System_Object_array *)v60.fields._current;
    if ( !BattleLogicBaseAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicBaseAi___c_TypeInfo);
      v42 = BattleLogicBaseAi___c_TypeInfo;
    }
    _9__38_0 = (System_Func_object__bool__o *)v42->static_fields->__9__38_0;
    if ( !_9__38_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = BattleLogicBaseAi___c_TypeInfo;
      }
      v45 = (Il2CppObject *)v42->static_fields->__9;
      _9__38_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleScriptEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__38_0, v45, Method_BattleLogicBaseAi___c__AddBattleScriptTask_b__38_0__, 0);
      static_fields = BattleLogicBaseAi___c_TypeInfo->static_fields;
      static_fields->__9__38_0 = (struct System_Func_BattleScriptEntity__bool__o *)_9__38_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v47, v48);
    }
    object = BasicHelper__Find_object_(
               current,
               (System_Func_T__bool__o *)_9__38_0,
               (const MethodInfo_3124FFC *)Method_BasicHelper_Find_BattleScriptEntity___);
    if ( object )
    {
      monitor_high = HIDWORD(object[1].monitor);
      if ( monitor_high == 2 )
      {
        BattleLogicBaseAi__AddBattleScriptTaskWait(
          (BattleLogicBaseAi_o *)object,
          retList,
          v50,
          (BattleScriptEntity_o *)object,
          v51);
      }
      else if ( monitor_high == 1 )
      {
        BattleLogicBaseAi__AddBattleScriptTaskAiAct(v57, retList, v36, (BattleScriptEntity_o *)object, v51);
      }
    }
    else
    {
      BattleLogicBaseAi__AddBattleScriptTaskSync(0, retList, v50, (BattleScriptEntity_array *)current, v58 & 1, v52);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____Dispose__);
  if ( (v58 & 1) == 0 )
    BattleLogicBaseAi__AddBattleScriptTaskSystem(v54, retList, v55, BattleScriptEntities, 2, v56);
}


void BattleLogicBaseAi__AddBattleScriptTaskAiAct(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  const MethodInfo *v12; // x5
  int32_t v13; // w27
  System_Collections_Generic_Dictionary_object__object__o *v14; // x23
  BattleFieldData_o *v15; // x22
  __int64 v16; // x23
  int32_t v17; // w3
  const MethodInfo *v18; // x5
  struct BattleData_o *data; // x8
  struct BattleLogic_o *logic; // x8
  BattleLogicTask_array *v21; // x0
  System_Collections_ICollection_o *v22; // x24
  unsigned int v23; // w23
  __int64 v24; // x22
  int32_t uniqueId; // w24
  int32_t v26; // w26
  AiState_o *v27; // x25
  AiLogic_AiInfo_o *v28; // x23
  struct BattleData_o *v29; // x8
  struct BattleLogic_o *v30; // x8
  struct BattleData_o *v31; // x8
  System_Collections_Generic_List_AiNpcBattleServantData__o *aiNpcDataList; // x24
  int32_t FromProcState_k__BackingField; // w23
  NpcAiCheckTask_Argument_o *v34; // x20
  struct BattleData_o *v35; // x8
  struct BattleLogic_o *v36; // x8
  __int64 naturalAligment; // x10
  struct BattleData_o *v38; // x8
  struct BattleLogic_o *v39; // x8
  BattleLogicBaseAi_o *v40; // x0
  System_Collections_Generic_List_BattleLogicTask__o *v41; // x1
  BaseAiActArgument_o *v42; // x2
  BattleScriptEntity_o *v43; // x3
  const MethodInfo *v44; // x4
  BattleServantData_o *servantData; // [xsp+8h] [xbp-68h] BYREF
  int32_t actorType; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CB934B & 1) == 0 )
  {
    sub_1C6BA08(&AiEntity_TypeInfo);
    sub_1C6BA08(&AiFieldEntity_TypeInfo);
    sub_1C6BA08(&AiLogic_AiInfo_TypeInfo);
    sub_1C6BA08(&AiNpcBattleServantData_TypeInfo);
    sub_1C6BA08(&NpcAiCheckTask_Argument_TypeInfo);
    sub_1C6BA08(&BattleFieldData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    byte_4CB934B = 1;
  }
  entitya = 0;
  actorType = 0;
  servantData = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !entity )
    goto LABEL_48;
  v11 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleScriptEntity__GetAiActId(entity, 0);
  if ( !v11 )
    goto LABEL_48;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v11,
         &entitya,
         (int32_t)Master_object,
         (const MethodInfo_33F9128 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__)
    && BattleLogicBaseAi__TryGetBattleScriptActor(this, arg, entity, &actorType, &servantData, v12) )
  {
    v13 = actorType;
    if ( actorType == 1 )
    {
      v14 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v14,
        (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v15 = (BattleFieldData_o *)sub_1C6BC54(BattleFieldData_TypeInfo);
      BattleFieldData___ctor_46349384(v15, 0x7FFFFFFF, (Il2CppObject *)v14, 0);
      v16 = sub_1C6BC54(AiFieldEntity_TypeInfo);
      AiFieldEntity___ctor((AiFieldEntity_o *)v16, 0);
      if ( !v16 )
        goto LABEL_48;
      *(_OWORD *)(v16 + 16) = xmmword_CECBC0;
      if ( !entitya )
        goto LABEL_48;
      *(_DWORD *)(v16 + 48) = entitya[1].klass;
      data = this->fields.data;
      if ( !data )
        goto LABEL_48;
      logic = data->fields.logic;
      if ( !logic )
        goto LABEL_48;
      if ( !arg )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)logic->fields.logicFieldAi;
      if ( !Master_object )
        goto LABEL_48;
      v21 = BattleLogicFieldAi__procAiAct(
              (BattleLogicFieldAi_o *)Master_object,
              v15,
              (AiFieldEntity_o *)v16,
              v17,
              arg->fields._FromProcState_k__BackingField,
              v18);
      goto LABEL_17;
    }
    v23 = actorType - 2;
    if ( (unsigned int)(actorType - 2) > 2 )
    {
      v22 = 0;
      goto LABEL_20;
    }
    v24 = sub_1C6BC54(AiEntity_TypeInfo);
    AiEntity___ctor((AiEntity_o *)v24, 0);
    if ( !v24 )
      goto LABEL_48;
    *(_OWORD *)(v24 + 16) = xmmword_CECBC0;
    if ( !entitya )
      goto LABEL_48;
    *(_DWORD *)(v24 + 48) = entitya[1].klass;
    if ( v23 > 1 )
    {
      if ( !arg )
        goto LABEL_48;
      v31 = this->fields.data;
      if ( !v31 )
        goto LABEL_48;
      aiNpcDataList = v31->fields.aiNpcDataList;
      FromProcState_k__BackingField = arg->fields._FromProcState_k__BackingField;
      v34 = (NpcAiCheckTask_Argument_o *)sub_1C6BC54(NpcAiCheckTask_Argument_TypeInfo);
      NpcAiCheckTask_Argument___ctor(v34, FromProcState_k__BackingField, aiNpcDataList, 0, 0);
      v35 = this->fields.data;
      if ( !v35 )
        goto LABEL_48;
      v36 = v35->fields.logic;
      if ( !v36 )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v36->fields.logicNpcAi;
      if ( !Master_object )
        goto LABEL_48;
      if ( servantData )
      {
        naturalAligment = AiNpcBattleServantData_TypeInfo->_2.naturalAligment;
        if ( servantData->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (AiNpcBattleServantData_c *)servantData->klass->_2.typeHierarchy[naturalAligment - 1] != AiNpcBattleServantData_TypeInfo )
        {
          sub_1C6BFFC(servantData);
          BattleLogicBaseAi__AddBattleScriptTaskWait(v40, v41, v42, v43, v44);
          return;
        }
      }
      v21 = BattleLogicNpcAi__ProcAiAct(
              (BattleLogicNpcAi_o *)Master_object,
              (AiNpcBattleServantData_o *)servantData,
              (AiEntity_o *)v24,
              v34,
              0);
      goto LABEL_17;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)servantData;
    if ( !servantData )
      goto LABEL_48;
    uniqueId = servantData->fields.uniqueId;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))servantData->klass->vtable._18_getAiState.methodPtr)(
                                                                    servantData,
                                                                    servantData->klass->vtable._18_getAiState.method);
    if ( !arg )
      goto LABEL_48;
    v26 = arg->fields._FromProcState_k__BackingField;
    v27 = (AiState_o *)Master_object;
    v28 = (AiLogic_AiInfo_o *)sub_1C6BC54(AiLogic_AiInfo_TypeInfo);
    AiLogic_AiInfo___ctor(v28, 1, uniqueId, v27, this, v26, 0);
    if ( v13 == 3 )
    {
      v38 = this->fields.data;
      if ( !v38 )
        goto LABEL_48;
      v39 = v38->fields.logic;
      if ( !v39 )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v39->fields.logicPlayerAi;
      if ( !Master_object )
        goto LABEL_48;
    }
    else
    {
      v22 = 0;
      if ( v13 != 2 )
      {
LABEL_20:
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(v22, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          return;
        if ( retList )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)retList,
            (System_Collections_Generic_IEnumerable_T__o *)v22,
            (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          return;
        }
LABEL_48:
        sub_1C6BC60(Master_object, v10);
      }
      v29 = this->fields.data;
      if ( !v29 )
        goto LABEL_48;
      v30 = v29->fields.logic;
      if ( !v30 )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v30->fields.logicEnemyAi;
      if ( !Master_object )
        goto LABEL_48;
    }
    v21 = (BattleLogicTask_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, BattleServantData_o *, __int64, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppClass *))Master_object->klass[1]._1.declaringType)(
                                     Master_object,
                                     servantData,
                                     v24,
                                     0,
                                     v28,
                                     (unsigned int)arg->fields._FromProcState_k__BackingField,
                                     Master_object->klass[1]._1.parent);
LABEL_17:
    v22 = (System_Collections_ICollection_o *)v21;
    goto LABEL_20;
  }
}


void BattleLogicBaseAi__AddBattleScriptTaskSync(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_array *entities,
        bool isEachLoad,
        const MethodInfo *method)
{
  BattleLogicBattleScriptTask_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4CB934E & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicBattleScriptTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4CB934E = 1;
  }
  v9 = (BattleLogicBattleScriptTask_o *)sub_1C6BC54(BattleLogicBattleScriptTask_TypeInfo);
  BattleLogicBattleScriptTask___ctor(v9, 0);
  if ( !v9
    || (BattleLogicBattleScriptTask__Init(v9, entities, isEachLoad, 0), !retList)
    || (items = retList->fields._items,
        v15 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1C6BC60(v10, v11);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v12, v13);
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
  const MethodInfo *v13; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4CB934A & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicBattleScriptSystemTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4CB934A = 1;
  }
  v9 = (BattleLogicBattleScriptSystemTask_o *)sub_1C6BC54(BattleLogicBattleScriptSystemTask_TypeInfo);
  BattleLogicBattleScriptSystemTask___ctor(v9, 0);
  if ( !v9
    || (BattleLogicBattleScriptSystemTask__Init(v9, entities, systemType, 0), !retList)
    || (items = retList->fields._items,
        v15 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1C6BC60(v10, v11);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v12, v13);
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
  const MethodInfo *v10; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4CB934D & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    this = (BattleLogicBaseAi_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4CB934D = 1;
  }
  if ( !entity )
    goto LABEL_10;
  WaitTime = BattleScriptEntity__GetWaitTime(entity, 0);
  v8 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v8, 0);
  if ( !v8
    || (BattleLogicTask__setSystem(v8, 0), v8->fields.systemTime = (float)WaitTime / 1000.0, !retList)
    || (items = retList->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_10:
    sub_1C6BC60(this, retList);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v8,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
  }
}


void BattleLogicBaseAi__AddMessageTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  MessageBattleLogicTask_o *v7; // x22
  Il2CppObject *Task_46985388; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppObject *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4CB9341 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&MessageBattleLogicTask_TypeInfo);
    byte_4CB9341 = 1;
  }
  v7 = (MessageBattleLogicTask_o *)sub_1C6BC54(MessageBattleLogicTask_TypeInfo);
  MessageBattleLogicTask___ctor(v7, 0);
  if ( !arg
    || (Task_46985388 = (Il2CppObject *)BaseAiActArgument__MakeTask_46985388(
                                          arg,
                                          (BaseAiActBattleLogicTask_o *)v7,
                                          this,
                                          v10),
        !retList)
    || (items = retList->fields._items,
        v14 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1C6BC60(Task_46985388, v9);
  }
  size = retList->fields._size;
  v16 = Task_46985388;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      Task_46985388,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v17 = &items->obj.klass + size;
    v17[4] = (Il2CppClass *)v16;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
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
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t ActionValue; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4CB9340 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    this = (BattleLogicBaseAi_o *)sub_1C6BA08(&StringLiteral_8737/*"MOTION_"*/);
    byte_4CB9340 = 1;
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
  this = (BattleLogicBaseAi_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_8737/*"MOTION_"*/, v9, 0);
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
        sub_1C6B9AC((CGThumbnailListItem_o *)&Task->fields.targetObject, (int32_t)ServantGameObject, v13, v14),
        !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_15:
    sub_1C6BC60(this, retList);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)Task,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)Task;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)Task, v15, v16);
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
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w25
  TempBattleSkillInfoData_o *v12; // x24
  const MethodInfo *v13; // x3
  BattleLogicBaseAi_o *Task; // x0
  AiBaseEntity_o *AiEnt_k__BackingField; // x2
  BattleLogicTask_o *v16; // x21
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  BattleLogicTask_o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct BattleLogicTask_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  System_Int32_array *v31; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *v32; // [xsp+10h] [xbp-50h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4CB9342 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IndexValue_int____78573472);
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    this = (BattleLogicBaseAi_o *)sub_1C6BA08(&TempBattleSkillInfoData_TypeInfo);
    byte_4CB9342 = 1;
  }
  v32 = 0;
  entity = 0;
  v31 = 0;
  if ( !arg )
    goto LABEL_22;
  AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
  if ( !AiActEnt_k__BackingField )
    goto LABEL_22;
  this = (BattleLogicBaseAi_o *)BasicHelper__IndexValue_int_(
                                  AiActEnt_k__BackingField->fields.skillVals,
                                  0,
                                  0,
                                  (const MethodInfo_312954C *)Method_BasicHelper_IndexValue_int____78573472);
  v8 = arg->fields._AiActEnt_k__BackingField;
  if ( !v8 )
    goto LABEL_22;
  v9 = (int)this;
  v10 = BasicHelper__IndexValue_int_(
          v8->fields.skillVals,
          1,
          1,
          (const MethodInfo_312954C *)Method_BasicHelper_IndexValue_int____78573472);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleLogicBaseAi_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this )
    goto LABEL_22;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v9, v10, 0)
    && (((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BaseAiActArgument_o *, SkillLvEntity_o *, System_Int32_array **, System_Int32_array **, const MethodInfo *))v6->klass->vtable._16_GetAiActTargets.methodPtr)(
          v6,
          arg,
          entity,
          &v32,
          &v31,
          v6->klass->vtable._16_GetAiActTargets.method)
      & 1) != 0 )
  {
    v11 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
            arg,
            arg->klass->vtable._4_get_UniqueId.method);
    v12 = (TempBattleSkillInfoData_o *)sub_1C6BC54(TempBattleSkillInfoData_TypeInfo);
    TempBattleSkillInfoData___ctor(v12, v9, v10, v11, 0);
    Task = (BattleLogicBaseAi_o *)BaseAiActArgument__MakeTask(arg, v6, 0, v13);
    AiEnt_k__BackingField = arg->fields._AiEnt_k__BackingField;
    v16 = (BattleLogicTask_o *)Task;
    BattleLogicBaseAi__SetSkillSelectAddIndex(Task, (BattleSkillInfoData_o *)v12, AiEnt_k__BackingField, v17);
    if ( v16 )
    {
      BattleLogicTask__setActionSkill(v16, (BattleSkillInfoData_o *)v12, v32, v31, 0, 0, 0);
      this = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BattleLogicTask_o *, const MethodInfo *))v6->klass->vtable._17_SetAddSkillTaskParam.methodPtr)(
                                      v6,
                                      v16,
                                      v6->klass->vtable._17_SetAddSkillTaskParam.method);
      if ( retList )
      {
        items = retList->fields._items;
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++retList->fields._version;
        if ( items )
        {
          size = retList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)retList,
              (Il2CppObject *)v16,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            retList->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v16;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
          }
          v24 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
          BattleLogicTask___ctor(v24, 0);
          v27 = retList->fields._items;
          v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++retList->fields._version;
          if ( v27 )
          {
            v29 = retList->fields._size;
            if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retList,
                (Il2CppObject *)v24,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &v27->obj.klass + v29;
              retList->fields._size = v29 + 1;
              v30[4] = (Il2CppClass *)v24;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
            }
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1C6BC60(this, retList);
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
  const MethodInfo *v10; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  BattleData_o *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4CB933F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4CB933F = 1;
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
        v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C6BC60(data, retList);
  }
  size = retList->fields._size;
  v14 = data;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)data,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v15 = &items->obj.klass + size;
    v15[4] = (Il2CppClass *)v14;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
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

  if ( (byte_4CB9347 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
    byte_4CB9347 = 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         dicNoTargetAiActFunc,
         type,
         (const MethodInfo_3485B20 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__) )
  {
    return 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  if ( !dicNoTargetAiActFunc )
LABEL_8:
    sub_1C6BC60(dicNoTargetAiActFunc, *(_QWORD *)&type);
  return System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
           dicNoTargetAiActFunc,
           type,
           (const MethodInfo_3485B20 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
AiActEntity_o *BattleLogicBaseAi__GetAiActEntity(BattleLogicBaseAi_o *this, int32_t aiActId, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *aiActMst; // x0

  if ( (byte_4CB9344 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    byte_4CB9344 = 1;
  }
  aiActMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.aiActMst;
  if ( !aiActMst )
    sub_1C6BC60(0, *(_QWORD *)&aiActId);
  return (AiActEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            aiActMst,
                            aiActId,
                            (const MethodInfo_33F90DC *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
}


bool BattleLogicBaseAi__GetAiActTargets(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        SkillLvEntity_o *skillLvEnt,
        System_Int32_array **targets,
        System_Int32_array **ptTargets,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  *ptTargets = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)ptTargets, 0, (int32_t)skillLvEnt, (const MethodInfo *)targets);
  *targets = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)targets, 0, v7, v8);
  return 0;
}


System_Int32_array *BattleLogicBaseAi__GetLogicTargetIds(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        System_Int32_array *svtIds,
        bool isCheckHate,
        bool isResurrectable,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 TargetAiAct; // x0
  __int64 v14; // x1
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  BattleLogicTarget_o *logictarget; // x26
  int32_t target; // w25
  __int64 v18; // x23
  struct AiActEntity_o *aiActEnt; // x8

  if ( (byte_4CB9343 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB9343 = 1;
  }
  TargetAiAct = sub_1C6BAB0(int___TypeInfo, 1);
  if ( !arg
    || (AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField) == 0
    || (logictarget = this->fields.logictarget,
        target = AiActEnt_k__BackingField->fields.target,
        v18 = TargetAiAct,
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
                        0),
        !v18) )
  {
    sub_1C6BC60(TargetAiAct, v14);
  }
  if ( !*(_DWORD *)(v18 + 24) )
    sub_1C6BC68(TargetAiAct);
  *(_DWORD *)(v18 + 32) = TargetAiAct;
  return (System_Int32_array *)v18;
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v28; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v29; // x21
  const MethodInfo *v30; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v31; // x21
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_4CB933E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
    sub_1C6BA08(&BattleLogicBaseAi_taskAiActFunction_TypeInfo);
    byte_4CB933E = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v3,
    (const MethodInfo_3484F58 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v4 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
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
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v8 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_AddBattleEndTask.method,
    v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    90,
    (Il2CppObject *)v8,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v10 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._12_AddBattleLoseEndTask.method,
    v11);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    91,
    (Il2CppObject *)v10,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v12 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._13_AddPlayMotionTask.method,
    v13);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    71,
    (Il2CppObject *)v12,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v14 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.method,
    v15);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    72,
    (Il2CppObject *)v14,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v16 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v16,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.method,
    v17);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    73,
    (Il2CppObject *)v16,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v18 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v18,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._11_AddBattleEndNotRelatedSurvivalStatusTask.method,
    v19);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    92,
    (Il2CppObject *)v18,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v20 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v20,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._19_AddBattleEndNotRelatedSurvivalStatusInstantlyTask.method,
    v21);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    93,
    (Il2CppObject *)v20,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v22 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._20_AddAllBattleEndTask.method,
    v23);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    94,
    (Il2CppObject *)v22,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v24 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v24,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._21_AddBattleScriptTask.method,
    v25);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    50,
    (Il2CppObject *)v24,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dicNoTargetAiActFunc, (int32_t)v3, v26, v27);
  v28 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v28,
    (const MethodInfo_3484F58 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v29 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v29,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.method,
    v30);
  if ( !v28 )
LABEL_7:
    sub_1C6BC60(v4, v5);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v28,
    40,
    (Il2CppObject *)v29,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v31 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C6BC54(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v31,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.method,
    v32);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v28,
    41,
    (Il2CppObject *)v31,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v28;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dicAiActFunc, (int32_t)v28, v33, v34);
}


void BattleLogicBaseAi__InitDebugLog(BattleLogicBaseAi_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  ;
}


void BattleLogicBaseAi__Initialize(BattleLogicBaseAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleLogic_o *logic; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleLogic_o *v13; // x8
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *Master_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4CB933D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB933D = 1;
  }
  this->fields.data = data;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  if ( !data
    || (logic = data->fields.logic,
        this->fields.logic = logic,
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.logic, (int32_t)logic, v8, v9),
        (v13 = this->fields.logic) == 0) )
  {
    sub_1C6BC60(v6, v7);
  }
  logictarget = v13->fields.logictarget;
  this->fields.logictarget = logictarget;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.logictarget, (int32_t)logictarget, v11, v12);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)Master_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)Master_object, v16, v17);
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
    sub_1C6BC60(this, *(_QWORD *)&actType);
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

  if ( (byte_4CB9346 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
    byte_4CB9346 = 1;
  }
  value = 0;
  dicNoTargetAiActFunc = this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicNoTargetAiActFunc, type, &value, (const MethodInfo_34870A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_1C6BC60(dicNoTargetAiActFunc, retList);
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

  if ( (byte_4CB9345 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
    byte_4CB9345 = 1;
  }
  value = 0;
  dicAiActFunc = this->fields.dicAiActFunc;
  if ( !dicAiActFunc )
    goto LABEL_8;
  dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicAiActFunc, type, &value, (const MethodInfo_34870A0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_1C6BC60(dicAiActFunc, retList);
  }
  return v10 & 1;
}


bool BattleLogicBaseAi__TryGetBattleScriptActor(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_o *entity,
        int32_t *actorType,
        BattleServantData_o **servantData,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  int32_t v14; // w8
  bool result; // w0
  BattleServantData_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BattleServantData_o *v19; // x21
  int32_t uniqueId; // [xsp+Ch] [xbp-34h] BYREF

  uniqueId = 0;
  *actorType = 0;
  *servantData = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)servantData, 0, (int32_t)entity, (const MethodInfo *)actorType);
  if ( !entity )
    goto LABEL_14;
  if ( BattleScriptEntity__GetAiActType(entity, 0) == 1 )
    goto LABEL_3;
  if ( BattleLogicBaseAi__TryGetBattleScriptActorUniqueId(this, arg, entity, &uniqueId, v13) )
  {
    data = this->fields.data;
    if ( data )
    {
      v16 = BattleData__getServantData(data, uniqueId, 0);
      if ( v16 )
      {
        v19 = v16;
        *servantData = v16;
        sub_1C6B9AC((CGThumbnailListItem_o *)servantData, (int32_t)v16, v17, v18);
        if ( (((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v19->klass->vtable._15_get_IsAiNpc.methodPtr)(
                v19,
                v19->klass->vtable._15_get_IsAiNpc.method)
            & 1) != 0 )
        {
          v14 = 4;
        }
        else if ( v19->fields.isEnemy )
        {
          v14 = 2;
        }
        else
        {
          v14 = 3;
        }
        goto LABEL_4;
      }
LABEL_3:
      v14 = 1;
LABEL_4:
      result = 1;
      *actorType = v14;
      return result;
    }
LABEL_14:
    sub_1C6BC60(data, v12);
  }
  return 0;
}


bool BattleLogicBaseAi__TryGetBattleScriptActorUniqueId(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_o *entity,
        int32_t *uniqueId,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v8; // x21
  char *v9; // x0
  struct BattleData_o *data; // x8
  char *v12; // x21
  int32_t AiActIndividuality; // w22
  BattleLogicBaseAi_o *v14; // x20
  int v15; // w8
  unsigned int v16; // w23
  char *v17; // x8
  __int64 v18; // x22

  v8 = this;
  if ( (byte_4CB934C & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    this = (BattleLogicBaseAi_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ToArray__);
    byte_4CB934C = 1;
  }
  *uniqueId = -1;
  if ( !entity )
    goto LABEL_33;
  this = (BattleLogicBaseAi_o *)BattleScriptEntity__GetAiActType(entity, 0);
  if ( !(_DWORD)this )
  {
    if ( arg )
    {
      *uniqueId = ((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
                    arg,
                    arg->klass->vtable._4_get_UniqueId.method);
      return 1;
    }
    goto LABEL_33;
  }
  if ( (unsigned int)((_DWORD)this - 2) > 2 )
    return 0;
  switch ( (_DWORD)this )
  {
    case 4:
      data = v8->fields.data;
      if ( !data )
        goto LABEL_33;
      this = (BattleLogicBaseAi_o *)data->fields.aiNpcDataList;
      if ( !this )
        goto LABEL_33;
      v9 = (char *)System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)this,
                     (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ToArray__);
      goto LABEL_19;
    case 3:
      this = (BattleLogicBaseAi_o *)v8->fields.data;
      if ( !this )
        goto LABEL_33;
      v9 = (char *)BattleData__GetOnFieldPlayerServantList((BattleData_o *)this, 0);
      goto LABEL_19;
    case 2:
      this = (BattleLogicBaseAi_o *)v8->fields.data;
      if ( !this )
        goto LABEL_33;
      v9 = (char *)BattleData__GetOnFieldEnemyServantList((BattleData_o *)this, 0, 0);
LABEL_19:
      v12 = v9;
      goto LABEL_21;
  }
  v12 = 0;
LABEL_21:
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v12, 0) )
    return 0;
  AiActIndividuality = BattleScriptEntity__GetAiActIndividuality(entity, 0);
  this = (BattleLogicBaseAi_o *)sub_1C6BAB0(int___TypeInfo, 1);
  if ( !this )
    goto LABEL_33;
  v14 = this;
  if ( !LODWORD(this->fields.logic) )
LABEL_34:
    sub_1C6BC68(this);
  LODWORD(this->fields.logictarget) = AiActIndividuality;
  if ( !v12 )
LABEL_33:
    sub_1C6BC60(this, arg);
  v15 = *((_DWORD *)v12 + 6);
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v15 )
        goto LABEL_34;
      v17 = &v12[8 * v16];
      v18 = *((_QWORD *)v17 + 4);
      if ( !v18 )
        goto LABEL_33;
      this = (BattleLogicBaseAi_o *)BattleServantData__checkIndividualities(
                                      *((BattleServantData_o **)v17 + 4),
                                      (System_Int32_array *)v14,
                                      0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      v15 = *((_DWORD *)v12 + 6);
      if ( (int)++v16 >= v15 )
        return 0;
    }
    *uniqueId = *(_DWORD *)(v18 + 24);
    return 1;
  }
  return 0;
}


int32_t BattleLogicBaseAi__get_ActorType(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  return 0;
}


System_Int32_array *BattleLogicBaseAi__get_OpponentSvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_4CB933C & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB933C = 1;
  }
  return (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
}


System_Int32_array *BattleLogicBaseAi__get_PartySvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_4CB933B & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB933B = 1;
  }
  return (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
}


void BattleLogicBaseAi___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB9350 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicBaseAi___c_TypeInfo);
    byte_4CB9350 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleLogicBaseAi___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicBaseAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicBaseAi___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleLogicBaseAi___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleLogicBaseAi___c___ctor(BattleLogicBaseAi___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicBaseAi___c___AddBattleScriptTask_b__38_0(
        BattleLogicBaseAi___c_o *this,
        BattleScriptEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C6BC60(this, 0);
  return BattleScriptAction__IsSingleExec(e->fields.battleScriptAction, 0);
}


void BattleLogicBaseAi_taskAiActFunction___ctor(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  char v10; // w21
  char v11; // w0
  Il2CppObject *m_target; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) != 0 )
  {
    if ( v8 == 2 )
    {
      v9 = sub_1AA4F70;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 1 )
    {
      if ( this->fields.method_is_virtual )
      {
        v10 = sub_1C6BAC0(method);
        v11 = sub_1C6C054(method);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = sub_1AA508C;
          else
            v9 = sub_1AA5040;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = sub_1AA4FB4;
        }
        else
        {
          v9 = sub_1AA4F84;
        }
      }
      else
      {
        v9 = sub_1AA4F4C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AA4EF4;
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
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v7, callback, object);
}


void BattleLogicBaseAi_taskAiActFunction__EndInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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