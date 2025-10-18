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

  if ( (byte_4C46011 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4C46011 = 1;
  }
  v6 = Method_System_Array_Empty_BattleLogicTask___;
  v7 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v7 )
  {
    sub_1C877C8(Method_System_Array_Empty_BattleLogicTask___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C(inited);
  v10 = *(struct BattleLogicTask_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.emptyTask = *v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.emptyTask, (int32_t)v11, v2, v3);
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
    sub_1C372B4(this);
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
  Il2CppObject *Task_46787308; // x0
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppObject *v15; // x1
  Il2CppClass **v16; // x0

  if ( (byte_4C4600C & 1) == 0 )
  {
    sub_1C37058(&BattleEndNotRelatedSurvivalStatusInstantlyTask_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4C4600C = 1;
  }
  v7 = (BattleEndNotRelatedSurvivalStatusInstantlyTask_o *)sub_1C372A4(BattleEndNotRelatedSurvivalStatusInstantlyTask_TypeInfo);
  BattleEndNotRelatedSurvivalStatusInstantlyTask___ctor(v7, arg, 0);
  if ( !arg
    || (Task_46787308 = (Il2CppObject *)BaseAiActArgument__MakeTask_46787308(
                                          arg,
                                          (BaseAiActBattleLogicTask_o *)v7,
                                          this,
                                          v9),
        !retList)
    || (items = retList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1C372B4(Task_46787308);
  }
  size = retList->fields._size;
  v15 = Task_46787308;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      Task_46787308,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v16 = &items->obj.klass + size;
    v16[4] = (Il2CppClass *)v15;
    sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  *(_WORD *)&data->fields.endbattleFlg = 257;
}


void BattleLogicBaseAi__AddBattleScriptTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x25
  int32_t BattleScriptId; // w22
  BattleScriptEntity_array *BattleScriptEntities; // x23
  BattleScriptEntity_o *v9; // x8
  int32_t playOrder; // w19
  __int64 v11; // x24
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int max_length; // w8
  __int64 v16; // x26
  BattleScriptEntity_o *v17; // x25
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  BattleLogicBaseAi_o *v23; // x1
  Il2CppClass **v24; // x0
  int v25; // w8
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  BaseAiActArgument_o *v32; // x19
  BattleLogicBaseAi_o *v33; // x29
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  BattleLogicBaseAi_o *v37; // x1
  Il2CppClass **v38; // x0
  BattleLogicBaseAi___c_c *v39; // x8
  System_Object_array *current; // x22
  System_Func_object__bool__o *_9__38_0; // x23
  Il2CppObject *v42; // x24
  struct BattleLogicBaseAi___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *object; // x0
  BaseAiActArgument_o *v47; // x2
  const MethodInfo *v48; // x4
  int monitor_high; // w8
  BattleLogicBaseAi_o *v50; // [xsp+8h] [xbp-A8h]
  BaseAiActArgument_o *v51; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+30h] [xbp-80h] BYREF

  v6 = this;
  if ( (byte_4C4600D & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Find_BattleScriptEntity___);
    sub_1C37058(&Method_DataManager_GetMaster_BattleScriptMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____get_Current__);
    sub_1C37058(&System_Func_BattleScriptEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleScriptEntity____Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleScriptEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleScriptEntity__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleScriptEntity____GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleScriptEntity_____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleScriptEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleScriptEntity__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_BattleScriptEntity____TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_BattleScriptEntity__TypeInfo);
    sub_1C37058(&Method_BattleLogicBaseAi___c__AddBattleScriptTask_b__38_0__);
    this = (BattleLogicBaseAi_o *)sub_1C37058(&BattleLogicBaseAi___c_TypeInfo);
    byte_4C4600D = 1;
  }
  memset(&v53, 0, sizeof(v53));
  if ( !arg )
    goto LABEL_41;
  this = (BattleLogicBaseAi_o *)arg->fields._AiActEnt_k__BackingField;
  if ( !this )
    goto LABEL_41;
  BattleScriptId = AiActEntity__GetBattleScriptId((AiActEntity_o *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleLogicBaseAi_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattleScriptMaster___);
  if ( !this )
    goto LABEL_41;
  BattleScriptEntities = BattleScriptMaster__GetBattleScriptEntities((BattleScriptMaster_o *)this, BattleScriptId, 0);
  this = (BattleLogicBaseAi_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BattleScriptEntities, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  if ( !BattleScriptEntities )
    goto LABEL_41;
  if ( !LODWORD(BattleScriptEntities->max_length) )
    goto LABEL_58;
  v9 = BattleScriptEntities->m_Items[0];
  if ( !v9 )
    goto LABEL_41;
  v50 = v6;
  v51 = arg;
  playOrder = v9->fields.playOrder;
  v11 = sub_1C372A4(System_Collections_Generic_List_BattleScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleScriptEntity___ctor__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleScriptEntity____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleScriptEntity_____ctor__);
  max_length = BattleScriptEntities->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( (unsigned int)v16 < max_length )
    {
      v17 = BattleScriptEntities->m_Items[v16];
      if ( !v17 )
        goto LABEL_41;
      if ( playOrder == v17->fields.playOrder )
      {
        if ( !v11 )
          goto LABEL_41;
      }
      else
      {
        if ( !v11 )
          goto LABEL_41;
        this = (BattleLogicBaseAi_o *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)v11,
                                        (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
        if ( !v12 )
          goto LABEL_41;
        items = v12->fields._items;
        v21 = Method_System_Collections_Generic_List_BattleScriptEntity____Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_41;
        size = v12->fields._size;
        v23 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)this,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v23;
          sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
        }
        v13 = *(_DWORD *)(v11 + 24);
        v25 = *(_DWORD *)(v11 + 28) + 1;
        *(_DWORD *)(v11 + 24) = 0;
        *(_DWORD *)(v11 + 28) = v25;
        if ( v13 >= 1 )
          System_Array__Clear(*(System_Array_o **)(v11 + 16), 0, v13, 0);
        playOrder = v17->fields.playOrder;
      }
      v26 = *(_QWORD *)(v11 + 16);
      v27 = Method_System_Collections_Generic_List_BattleScriptEntity__Add__;
      ++*(_DWORD *)(v11 + 28);
      if ( !v26 )
        goto LABEL_41;
      v28 = *(int *)(v11 + 24);
      if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v11,
          (Il2CppObject *)v17,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = v26 + 8 * v28;
        *(_DWORD *)(v11 + 24) = v28 + 1;
        *(_QWORD *)(v29 + 32) = v17;
        sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 32), (int32_t)v17, v13, v14);
      }
      max_length = BattleScriptEntities->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_35;
    }
LABEL_58:
    sub_1C372BC(this);
  }
  if ( !v11 )
    goto LABEL_41;
LABEL_35:
  if ( *(int *)(v11 + 24) < 1 )
  {
    v33 = v50;
    v32 = v51;
    if ( v12 )
      goto LABEL_43;
LABEL_41:
    sub_1C372B4(this);
  }
  this = (BattleLogicBaseAi_o *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)v11,
                                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleScriptEntity__ToArray__);
  v33 = v50;
  v32 = v51;
  if ( !v12 )
    goto LABEL_41;
  v34 = v12->fields._items;
  v35 = Method_System_Collections_Generic_List_BattleScriptEntity____Add__;
  ++v12->fields._version;
  if ( !v34 )
    goto LABEL_41;
  v36 = v12->fields._size;
  v37 = this;
  if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)this,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &v34->obj.klass + v36;
    v12->fields._size = v36 + 1;
    v38[4] = (Il2CppClass *)v37;
    sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v37, v30, v31);
  }
LABEL_43:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v12,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_BattleScriptEntity____GetEnumerator__);
  v53 = v52;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____MoveNext__) )
  {
    v39 = BattleLogicBaseAi___c_TypeInfo;
    current = (System_Object_array *)v53.fields._current;
    if ( !BattleLogicBaseAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicBaseAi___c_TypeInfo);
      v39 = BattleLogicBaseAi___c_TypeInfo;
    }
    _9__38_0 = (System_Func_object__bool__o *)v39->static_fields->__9__38_0;
    if ( !_9__38_0 )
    {
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = BattleLogicBaseAi___c_TypeInfo;
      }
      v42 = (Il2CppObject *)v39->static_fields->__9;
      _9__38_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleScriptEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__38_0, v42, Method_BattleLogicBaseAi___c__AddBattleScriptTask_b__38_0__, 0);
      static_fields = BattleLogicBaseAi___c_TypeInfo->static_fields;
      static_fields->__9__38_0 = (struct System_Func_BattleScriptEntity__bool__o *)_9__38_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v44, v45);
    }
    object = BasicHelper__Find_object_(
               current,
               (System_Func_T__bool__o *)_9__38_0,
               (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_BattleScriptEntity___);
    if ( object )
    {
      monitor_high = HIDWORD(object[1].monitor);
      if ( monitor_high == 2 )
      {
        BattleLogicBaseAi__AddBattleScriptTaskWait(
          (BattleLogicBaseAi_o *)object,
          retList,
          v47,
          (BattleScriptEntity_o *)object,
          v48);
      }
      else if ( monitor_high == 1 )
      {
        BattleLogicBaseAi__AddBattleScriptTaskAiAct(v33, retList, v32, (BattleScriptEntity_o *)object, v48);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_BattleScriptEntity____Dispose__);
}


void BattleLogicBaseAi__AddBattleScriptTaskAiAct(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_o *entity,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x23
  const MethodInfo *v11; // x5
  int32_t v12; // w27
  System_Collections_Generic_Dictionary_object__object__o *v13; // x23
  BattleFieldData_o *v14; // x22
  __int64 v15; // x23
  int32_t v16; // w3
  const MethodInfo *v17; // x5
  struct BattleData_o *data; // x8
  struct BattleLogic_o *logic; // x8
  BattleLogicTask_array *v20; // x0
  System_Collections_ICollection_o *v21; // x24
  unsigned int v22; // w23
  __int64 v23; // x22
  int32_t uniqueId; // w24
  int32_t v25; // w26
  AiState_o *v26; // x25
  AiLogic_AiInfo_o *v27; // x23
  struct BattleData_o *v28; // x8
  struct BattleLogic_o *v29; // x8
  struct BattleData_o *v30; // x8
  System_Collections_Generic_List_AiNpcBattleServantData__o *aiNpcDataList; // x24
  int32_t FromProcState_k__BackingField; // w23
  NpcAiCheckTask_Argument_o *v33; // x20
  struct BattleData_o *v34; // x8
  struct BattleLogic_o *v35; // x8
  __int64 naturalAligment; // x10
  struct BattleData_o *v37; // x8
  struct BattleLogic_o *v38; // x8
  BattleLogicBaseAi_o *v39; // x0
  System_Collections_Generic_List_BattleLogicTask__o *v40; // x1
  BaseAiActArgument_o *v41; // x2
  BattleScriptEntity_o *v42; // x3
  const MethodInfo *v43; // x4
  BattleServantData_o *servantData; // [xsp+8h] [xbp-68h] BYREF
  int32_t actorType; // [xsp+14h] [xbp-5Ch] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C4600E & 1) == 0 )
  {
    sub_1C37058(&AiEntity_TypeInfo);
    sub_1C37058(&AiFieldEntity_TypeInfo);
    sub_1C37058(&AiLogic_AiInfo_TypeInfo);
    sub_1C37058(&AiNpcBattleServantData_TypeInfo);
    sub_1C37058(&NpcAiCheckTask_Argument_TypeInfo);
    sub_1C37058(&BattleFieldData_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    byte_4C4600E = 1;
  }
  entitya = 0;
  actorType = 0;
  servantData = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !entity )
    goto LABEL_48;
  v10 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleScriptEntity__GetAiActId(entity, 0);
  if ( !v10 )
    goto LABEL_48;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v10,
         &entitya,
         (int32_t)Master_object,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__)
    && BattleLogicBaseAi__SetBattleScriptActor(this, arg, entity, &actorType, &servantData, v11) )
  {
    v12 = actorType;
    if ( actorType == 1 )
    {
      v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v13,
        (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      v14 = (BattleFieldData_o *)sub_1C372A4(BattleFieldData_TypeInfo);
      BattleFieldData___ctor_46073444(v14, 0x7FFFFFFF, (Il2CppObject *)v13, 0);
      v15 = sub_1C372A4(AiFieldEntity_TypeInfo);
      AiFieldEntity___ctor((AiFieldEntity_o *)v15, 0);
      if ( !v15 )
        goto LABEL_48;
      *(_OWORD *)(v15 + 16) = xmmword_C0F290;
      if ( !entitya )
        goto LABEL_48;
      *(_DWORD *)(v15 + 48) = entitya[1].klass;
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
      v20 = BattleLogicFieldAi__procAiAct(
              (BattleLogicFieldAi_o *)Master_object,
              v14,
              (AiFieldEntity_o *)v15,
              v16,
              arg->fields._FromProcState_k__BackingField,
              v17);
      goto LABEL_17;
    }
    v22 = actorType - 2;
    if ( (unsigned int)(actorType - 2) > 2 )
    {
      v21 = 0;
      goto LABEL_20;
    }
    v23 = sub_1C372A4(AiEntity_TypeInfo);
    AiEntity___ctor((AiEntity_o *)v23, 0);
    if ( !v23 )
      goto LABEL_48;
    *(_OWORD *)(v23 + 16) = xmmword_C0F290;
    if ( !entitya )
      goto LABEL_48;
    *(_DWORD *)(v23 + 48) = entitya[1].klass;
    if ( v22 > 1 )
    {
      if ( !arg )
        goto LABEL_48;
      v30 = this->fields.data;
      if ( !v30 )
        goto LABEL_48;
      aiNpcDataList = v30->fields.aiNpcDataList;
      FromProcState_k__BackingField = arg->fields._FromProcState_k__BackingField;
      v33 = (NpcAiCheckTask_Argument_o *)sub_1C372A4(NpcAiCheckTask_Argument_TypeInfo);
      NpcAiCheckTask_Argument___ctor(v33, FromProcState_k__BackingField, aiNpcDataList, 0, 0);
      v34 = this->fields.data;
      if ( !v34 )
        goto LABEL_48;
      v35 = v34->fields.logic;
      if ( !v35 )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v35->fields.logicNpcAi;
      if ( !Master_object )
        goto LABEL_48;
      if ( servantData )
      {
        naturalAligment = AiNpcBattleServantData_TypeInfo->_2.naturalAligment;
        if ( servantData->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (AiNpcBattleServantData_c *)servantData->klass->_2.typeHierarchy[naturalAligment - 1] != AiNpcBattleServantData_TypeInfo )
        {
          sub_1C37574(servantData);
          BattleLogicBaseAi__AddBattleScriptTaskWait(v39, v40, v41, v42, v43);
          return;
        }
      }
      v20 = BattleLogicNpcAi__ProcAiAct(
              (BattleLogicNpcAi_o *)Master_object,
              (AiNpcBattleServantData_o *)servantData,
              (AiEntity_o *)v23,
              v33,
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
    v25 = arg->fields._FromProcState_k__BackingField;
    v26 = (AiState_o *)Master_object;
    v27 = (AiLogic_AiInfo_o *)sub_1C372A4(AiLogic_AiInfo_TypeInfo);
    AiLogic_AiInfo___ctor(v27, 1, uniqueId, v26, this, v25, 0);
    if ( v12 == 3 )
    {
      v37 = this->fields.data;
      if ( !v37 )
        goto LABEL_48;
      v38 = v37->fields.logic;
      if ( !v38 )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v38->fields.logicPlayerAi;
      if ( !Master_object )
        goto LABEL_48;
    }
    else
    {
      v21 = 0;
      if ( v12 != 2 )
      {
LABEL_20:
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(v21, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          return;
        if ( retList )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)retList,
            (System_Collections_Generic_IEnumerable_T__o *)v21,
            (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          return;
        }
LABEL_48:
        sub_1C372B4(Master_object);
      }
      v28 = this->fields.data;
      if ( !v28 )
        goto LABEL_48;
      v29 = v28->fields.logic;
      if ( !v29 )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v29->fields.logicEnemyAi;
      if ( !Master_object )
        goto LABEL_48;
    }
    v20 = (BattleLogicTask_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, BattleServantData_o *, __int64, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppClass *))Master_object->klass[1]._1.declaringType)(
                                     Master_object,
                                     servantData,
                                     v23,
                                     0,
                                     v27,
                                     (unsigned int)arg->fields._FromProcState_k__BackingField,
                                     Master_object->klass[1]._1.parent);
LABEL_17:
    v21 = (System_Collections_ICollection_o *)v20;
    goto LABEL_20;
  }
}


void BattleLogicBaseAi__AddBattleScriptTaskSync(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_array *entities,
        const MethodInfo *method)
{
  ;
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

  if ( (byte_4C46010 & 1) == 0 )
  {
    sub_1C37058(&BattleLogicTask_TypeInfo);
    this = (BattleLogicBaseAi_o *)sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4C46010 = 1;
  }
  if ( !entity )
    goto LABEL_10;
  WaitTime = BattleScriptEntity__GetWaitTime(entity, 0);
  v8 = (BattleLogicTask_o *)sub_1C372A4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v8, 0);
  if ( !v8
    || (BattleLogicTask__setSystem(v8, 0), v8->fields.systemTime = (float)WaitTime / 1000.0, !retList)
    || (items = retList->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_10:
    sub_1C372B4(this);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)v8,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
  }
}


void BattleLogicBaseAi__AddMessageTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  MessageBattleLogicTask_o *v7; // x22
  Il2CppObject *Task_46787308; // x0
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppObject *v15; // x1
  Il2CppClass **v16; // x0

  if ( (byte_4C46005 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C37058(&MessageBattleLogicTask_TypeInfo);
    byte_4C46005 = 1;
  }
  v7 = (MessageBattleLogicTask_o *)sub_1C372A4(MessageBattleLogicTask_TypeInfo);
  MessageBattleLogicTask___ctor(v7, 0);
  if ( !arg
    || (Task_46787308 = (Il2CppObject *)BaseAiActArgument__MakeTask_46787308(
                                          arg,
                                          (BaseAiActBattleLogicTask_o *)v7,
                                          this,
                                          v9),
        !retList)
    || (items = retList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1C372B4(Task_46787308);
  }
  size = retList->fields._size;
  v15 = Task_46787308;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      Task_46787308,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v16 = &items->obj.klass + size;
    v16[4] = (Il2CppClass *)v15;
    sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
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
  if ( (byte_4C46004 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    this = (BattleLogicBaseAi_o *)sub_1C37058(&StringLiteral_8740/*"MOTION_"*/);
    byte_4C46004 = 1;
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
  this = (BattleLogicBaseAi_o *)System_String__Concat_63561656((System_String_o *)StringLiteral_8740/*"MOTION_"*/, v9, 0);
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
        sub_1C36FFC((CGThumbnailListItem_o *)&Task->fields.targetObject, (int32_t)ServantGameObject, v13, v14),
        !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_15:
    sub_1C372B4(this);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)Task,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)Task;
    sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)Task, v15, v16);
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
  if ( (byte_4C46006 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_int____78110424);
    sub_1C37058(&BattleLogicTask_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    this = (BattleLogicBaseAi_o *)sub_1C37058(&TempBattleSkillInfoData_TypeInfo);
    byte_4C46006 = 1;
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
                                  (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
  v8 = arg->fields._AiActEnt_k__BackingField;
  if ( !v8 )
    goto LABEL_22;
  v9 = (int)this;
  v10 = BasicHelper__IndexValue_int_(
          v8->fields.skillVals,
          1,
          1,
          (const MethodInfo_30D6114 *)Method_BasicHelper_IndexValue_int____78110424);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleLogicBaseAi_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
    v12 = (TempBattleSkillInfoData_o *)sub_1C372A4(TempBattleSkillInfoData_TypeInfo);
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
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            retList->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v16;
            sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
          }
          v24 = (BattleLogicTask_o *)sub_1C372A4(BattleLogicTask_TypeInfo);
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
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &v27->obj.klass + v29;
              retList->fields._size = v29 + 1;
              v30[4] = (Il2CppClass *)v24;
              sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
            }
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1C372B4(this);
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

  if ( (byte_4C46003 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4C46003 = 1;
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
    sub_1C372B4(data);
  }
  size = retList->fields._size;
  v14 = data;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)data,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v15 = &items->obj.klass + size;
    v15[4] = (Il2CppClass *)v14;
    sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
  }
}


void BattleLogicBaseAi__DebugLog(BattleLogicBaseAi_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


bool BattleLogicBaseAi__ExistProcAiAct(BattleLogicBaseAi_o *this, int32_t type, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicNoTargetAiActFunc; // x0

  if ( (byte_4C4600B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
    byte_4C4600B = 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         dicNoTargetAiActFunc,
         type,
         (const MethodInfo_342D814 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__) )
  {
    return 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  if ( !dicNoTargetAiActFunc )
LABEL_8:
    sub_1C372B4(dicNoTargetAiActFunc);
  return System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
           dicNoTargetAiActFunc,
           type,
           (const MethodInfo_342D814 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
}


AiActEntity_o *BattleLogicBaseAi__GetAiActEntity(BattleLogicBaseAi_o *this, int32_t aiActId, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *aiActMst; // x0

  if ( (byte_4C46008 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    byte_4C46008 = 1;
  }
  aiActMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.aiActMst;
  if ( !aiActMst )
    sub_1C372B4(0);
  return (AiActEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            aiActMst,
                            aiActId,
                            (const MethodInfo_33A10A0 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
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
  sub_1C36FFC((CGThumbnailListItem_o *)ptTargets, 0, (int32_t)skillLvEnt, (const MethodInfo *)targets);
  *targets = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)targets, 0, v7, v8);
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
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  BattleLogicTarget_o *logictarget; // x26
  int32_t target; // w25
  __int64 v17; // x23
  struct AiActEntity_o *aiActEnt; // x8

  if ( (byte_4C46007 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C46007 = 1;
  }
  TargetAiAct = sub_1C37100(int___TypeInfo, 1);
  if ( !arg
    || (AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField) == 0
    || (logictarget = this->fields.logictarget,
        target = AiActEnt_k__BackingField->fields.target,
        v17 = TargetAiAct,
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
        !v17) )
  {
    sub_1C372B4(TargetAiAct);
  }
  if ( !*(_DWORD *)(v17 + 24) )
    sub_1C372BC(TargetAiAct);
  *(_DWORD *)(v17 + 32) = TargetAiAct;
  return (System_Int32_array *)v17;
}


void BattleLogicBaseAi__InitAiActTaskFunction(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v4; // x0
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x21
  BattleLogicBaseAi_taskAiActFunction_o *v7; // x21
  const MethodInfo *v8; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v9; // x21
  const MethodInfo *v10; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v11; // x21
  const MethodInfo *v12; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v13; // x21
  const MethodInfo *v14; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v15; // x21
  const MethodInfo *v16; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v17; // x21
  const MethodInfo *v18; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v19; // x21
  const MethodInfo *v20; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v21; // x21
  const MethodInfo *v22; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v23; // x21
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v27; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v28; // x21
  const MethodInfo *v29; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v30; // x21
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4C46002 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
    sub_1C37058(&BattleLogicBaseAi_taskAiActFunction_TypeInfo);
    byte_4C46002 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v3,
    (const MethodInfo_342CC4C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v4 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  if ( !this )
    goto LABEL_7;
  v6 = (Il2CppObject *)v4;
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._9_AddNoneTask.method,
    v5);
  if ( !v3 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    0,
    v6,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v7 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_AddBattleEndTask.method,
    v8);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    90,
    (Il2CppObject *)v7,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v9 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._12_AddBattleLoseEndTask.method,
    v10);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    91,
    (Il2CppObject *)v9,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v11 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._13_AddPlayMotionTask.method,
    v12);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    71,
    (Il2CppObject *)v11,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v13 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.method,
    v14);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    72,
    (Il2CppObject *)v13,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v15 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.method,
    v16);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    73,
    (Il2CppObject *)v15,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v17 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v17,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._11_AddBattleEndNotRelatedSurvivalStatusTask.method,
    v18);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    92,
    (Il2CppObject *)v17,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v19 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._19_AddBattleEndNotRelatedSurvivalStatusInstantlyTask.method,
    v20);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    93,
    (Il2CppObject *)v19,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v21 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v21,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._20_AddAllBattleEndTask.method,
    v22);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    94,
    (Il2CppObject *)v21,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v23 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v23,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._21_AddBattleScriptTask.method,
    v24);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    50,
    (Il2CppObject *)v23,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicNoTargetAiActFunc, (int32_t)v3, v25, v26);
  v27 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v27,
    (const MethodInfo_342CC4C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v28 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.method,
    v29);
  if ( !v27 )
LABEL_7:
    sub_1C372B4(v4);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v27,
    40,
    (Il2CppObject *)v28,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v30 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1C372A4(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v30,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.method,
    v31);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v27,
    41,
    (Il2CppObject *)v30,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v27;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dicAiActFunc, (int32_t)v27, v32, v33);
}


void BattleLogicBaseAi__InitDebugLog(BattleLogicBaseAi_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  ;
}


void BattleLogicBaseAi__Initialize(BattleLogicBaseAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleLogic_o *logic; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleLogic_o *v12; // x8
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *Master_object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C46001 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C46001 = 1;
  }
  this->fields.data = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  if ( !data
    || (logic = data->fields.logic,
        this->fields.logic = logic,
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.logic, (int32_t)logic, v7, v8),
        (v12 = this->fields.logic) == 0) )
  {
    sub_1C372B4(v6);
  }
  logictarget = v12->fields.logictarget;
  this->fields.logictarget = logictarget;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.logictarget, (int32_t)logictarget, v10, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)Master_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)Master_object, v15, v16);
  ((void (__fastcall *)(BattleLogicBaseAi_o *, const MethodInfo *))this->klass->vtable._8_InitAiActTaskFunction.methodPtr)(
    this,
    this->klass->vtable._8_InitAiActTaskFunction.method);
}


bool BattleLogicBaseAi__IsChangeThinkingOnly(
        BattleLogicBaseAi_o *this,
        int32_t actType,
        AiBaseEntity_o *aiEnt,
        AiState_o *aiState,
        const MethodInfo *method)
{
  bool v7; // w20

  if ( !aiEnt )
LABEL_9:
    sub_1C372B4(this);
  this = (BattleLogicBaseAi_o *)AiBaseEntity__getChangeAiId(aiEnt, 0);
  v7 = actType == 99;
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


bool BattleLogicBaseAi__SetBattleScriptActor(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        BattleScriptEntity_o *entity,
        int32_t *actorType,
        BattleServantData_o **servantData,
        const MethodInfo *method)
{
  __int64 AiActType; // x0
  int32_t v12; // w20
  BattleServantData_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  BattleServantData_o *v16; // x23
  int32_t v17; // w8
  System_Collections_ICollection_o *v18; // x21
  System_Collections_ICollection_o *v19; // x0
  BattleServantData_o *AiNpcServantData; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct BattleData_o *data; // x8
  int32_t AiActIndividuality; // w22
  System_Int32_array *v25; // x20
  int monitor; // w8
  unsigned int v27; // w23
  System_Collections_ICollection_c **v28; // x8
  BattleServantData_o *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C4600F & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ToArray__);
    byte_4C4600F = 1;
  }
  *actorType = 0;
  *servantData = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)servantData, 0, (int32_t)entity, (const MethodInfo *)actorType);
  if ( !entity )
    goto LABEL_42;
  AiActType = BattleScriptEntity__GetAiActType(entity, 0);
  if ( (_DWORD)AiActType != 1 )
  {
    if ( (unsigned int)(AiActType - 2) > 2 )
    {
      if ( arg )
      {
        AiActType = ((__int64 (__fastcall *)(BaseAiActArgument_o *, const MethodInfo *))arg->klass->vtable._4_get_UniqueId.methodPtr)(
                      arg,
                      arg->klass->vtable._4_get_UniqueId.method);
        if ( this->fields.data )
        {
          v12 = AiActType;
          v13 = BattleData__getServantData(this->fields.data, AiActType, 0);
          if ( v13 )
          {
            v16 = v13;
            *servantData = v13;
            sub_1C36FFC((CGThumbnailListItem_o *)servantData, (int32_t)v13, v14, v15);
            if ( v16->fields.isEnemy )
              v17 = 2;
            else
              v17 = 3;
LABEL_21:
            *actorType = v17;
LABEL_22:
            LOBYTE(AiActType) = 1;
            return AiActType;
          }
          AiActType = (__int64)this->fields.data;
          if ( AiActType )
          {
            AiNpcServantData = BattleData__GetAiNpcServantData((BattleData_o *)AiActType, v12, 0);
            if ( !AiNpcServantData )
            {
              LOBYTE(AiActType) = 1;
              goto LABEL_5;
            }
            *servantData = AiNpcServantData;
            sub_1C36FFC((CGThumbnailListItem_o *)servantData, (int32_t)AiNpcServantData, v21, v22);
            v17 = 4;
            goto LABEL_21;
          }
        }
      }
LABEL_42:
      sub_1C372B4(AiActType);
    }
    AiActType = BattleScriptEntity__GetAiActType(entity, 0);
    *actorType = AiActType;
    if ( (_DWORD)AiActType == 4 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      AiActType = (__int64)data->fields.aiNpcDataList;
      if ( !AiActType )
        goto LABEL_42;
      v19 = (System_Collections_ICollection_o *)System_Collections_Generic_List_object___ToArray(
                                                  (System_Collections_Generic_List_object__o *)AiActType,
                                                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ToArray__);
    }
    else if ( (_DWORD)AiActType == 3 )
    {
      AiActType = (__int64)this->fields.data;
      if ( !AiActType )
        goto LABEL_42;
      v19 = (System_Collections_ICollection_o *)BattleData__GetOnFieldPlayerServantList((BattleData_o *)AiActType, 0);
    }
    else
    {
      v18 = 0;
      if ( (_DWORD)AiActType != 2 )
        goto LABEL_29;
      AiActType = (__int64)this->fields.data;
      if ( !AiActType )
        goto LABEL_42;
      v19 = (System_Collections_ICollection_o *)BattleData__GetOnFieldEnemyServantList((BattleData_o *)AiActType, 0, 0);
    }
    v18 = v19;
LABEL_29:
    if ( !BasicHelper__IsNullOrEmpty(v18, 0) )
    {
      AiActIndividuality = BattleScriptEntity__GetAiActIndividuality(entity, 0);
      AiActType = sub_1C37100(int___TypeInfo, 1);
      if ( !AiActType )
        goto LABEL_42;
      v25 = (System_Int32_array *)AiActType;
      if ( !*(_DWORD *)(AiActType + 24) )
LABEL_43:
        sub_1C372BC(AiActType);
      *(_DWORD *)(AiActType + 32) = AiActIndividuality;
      if ( !v18 )
        goto LABEL_42;
      monitor = (int)v18[1].monitor;
      if ( monitor >= 1 )
      {
        v27 = 0;
        while ( 1 )
        {
          if ( v27 >= monitor )
            goto LABEL_43;
          v28 = &v18->klass + (int)v27;
          v29 = (BattleServantData_o *)v28[4];
          if ( !v29 )
            goto LABEL_42;
          AiActType = BattleServantData__checkIndividualities((BattleServantData_o *)v28[4], v25, 0);
          if ( (AiActType & 1) != 0 )
            break;
          monitor = (int)v18[1].monitor;
          if ( (int)++v27 >= monitor )
            goto LABEL_39;
        }
        *servantData = v29;
        sub_1C36FFC((CGThumbnailListItem_o *)servantData, (int32_t)v29, v30, v31);
        goto LABEL_22;
      }
    }
LABEL_39:
    LOBYTE(AiActType) = 0;
    return AiActType;
  }
LABEL_5:
  *actorType = 1;
  return AiActType;
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

  if ( (byte_4C4600A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
    byte_4C4600A = 1;
  }
  value = 0;
  dicNoTargetAiActFunc = this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicNoTargetAiActFunc, type, &value, (const MethodInfo_342ED94 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_1C372B4(dicNoTargetAiActFunc);
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

  if ( (byte_4C46009 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
    byte_4C46009 = 1;
  }
  value = 0;
  dicAiActFunc = this->fields.dicAiActFunc;
  if ( !dicAiActFunc )
    goto LABEL_8;
  dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicAiActFunc, type, &value, (const MethodInfo_342ED94 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_1C372B4(dicAiActFunc);
  }
  return v10 & 1;
}


int32_t BattleLogicBaseAi__get_ActorType(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  return 0;
}


System_Int32_array *BattleLogicBaseAi__get_OpponentSvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_4C46000 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C46000 = 1;
  }
  return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
}


System_Int32_array *BattleLogicBaseAi__get_PartySvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_4C45FFF & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C45FFF = 1;
  }
  return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
}


void BattleLogicBaseAi___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46012 & 1) == 0 )
  {
    sub_1C37058(&BattleLogicBaseAi___c_TypeInfo);
    byte_4C46012 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleLogicBaseAi___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicBaseAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicBaseAi___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleLogicBaseAi___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 2 )
    {
      v9 = sub_1A7E8F8;
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
        v10 = sub_1C37110(method);
        v11 = sub_1C375CC(method);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = sub_1A7EA14;
          else
            v9 = sub_1A7E9C8;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = sub_1A7E93C;
        }
        else
        {
          v9 = sub_1A7E90C;
        }
      }
      else
      {
        v9 = sub_1A7E8D4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A7E87C;
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
  return (System_IAsyncResult_o *)sub_1C3700C(this, v7, callback, object);
}


void BattleLogicBaseAi_taskAiActFunction__EndInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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