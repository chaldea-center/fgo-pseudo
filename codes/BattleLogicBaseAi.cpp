void __fastcall BattleLogicBaseAi___ctor(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  struct BattleLogicTask_array **v9; // x8
  struct BattleLogicTask_array *v10; // x1

  if ( (byte_4A0B78A & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Array_Empty_BattleLogicTask___, method);
    byte_4A0B78A = 1;
  }
  v5 = Method_System_Array_Empty_BattleLogicTask___;
  v6 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v6 )
  {
    sub_1BBA60C(Method_System_Array_Empty_BattleLogicTask___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BBA5B0(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BBA5B0(v8);
  v9 = *(struct BattleLogicTask_array ***)(v8 + 184);
  v10 = *v9;
  this->fields.emptyTask = *v9;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.emptyTask, (int32_t)v10, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicBaseAi__AddBattleEndNotRelatedSurvivalStatusTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B68930(this, retList);
  data->fields.endbattleFlg = 1;
  data->fields.winBattleNotRelatedSurvivalStatus = 1;
  BattleLogicBaseAi__CommonWinBattleEnd(this, retList, arg, method);
}


void __fastcall BattleLogicBaseAi__AddBattleEndTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B68930(this, retList);
  data->fields.endbattleFlg = 1;
  BattleLogicBaseAi__CommonWinBattleEnd(this, retList, arg, method);
}


void __fastcall BattleLogicBaseAi__AddBattleLoseEndTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B68930(this, retList);
  *(_WORD *)&data->fields.endbattleFlg = 257;
}


void __fastcall BattleLogicBaseAi__AddMessageTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  MessageBattleLogicTask_o *v8; // x22
  Il2CppObject *Task_43171208; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  int32_t v13; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppObject *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4A0B783 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, retList);
    sub_1B686D4(&MessageBattleLogicTask_TypeInfo, v7);
    byte_4A0B783 = 1;
  }
  v8 = (MessageBattleLogicTask_o *)sub_1B68920(MessageBattleLogicTask_TypeInfo);
  MessageBattleLogicTask___ctor(v8, 0LL);
  if ( !arg
    || (Task_43171208 = (Il2CppObject *)BaseAiActArgument__MakeTask_43171208(
                                          arg,
                                          (BaseAiActBattleLogicTask_o *)v8,
                                          this,
                                          v11),
        !retList)
    || (items = retList->fields._items,
        v15 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1B68930(Task_43171208, v10);
  }
  size = retList->fields._size;
  v17 = Task_43171208;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      Task_43171208,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v18 = &items->obj.klass + size;
    v18[4] = (Il2CppClass *)v17;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
  }
}


void __fastcall BattleLogicBaseAi__AddNoneTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicBaseAi__AddPlayMotionTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x22
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  BattleLogicTask_o *Task; // x20
  System_String_o *v10; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x22
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  int32_t ActionValue; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4A0B782 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, retList);
    this = (BattleLogicBaseAi_o *)sub_1B686D4(&StringLiteral_8673/*"MOTION_"*/, v7);
    byte_4A0B782 = 1;
  }
  if ( !arg )
    goto LABEL_15;
  this = (BattleLogicBaseAi_o *)arg->fields._AiEnt_k__BackingField;
  if ( !this )
    goto LABEL_15;
  ActionValue = AiBaseEntity__getActionValue((AiBaseEntity_o *)this, 0LL);
  if ( ActionValue < 1 )
    return;
  Task = BaseAiActArgument__MakeTask(arg, v6, 0, v8);
  v10 = System_Int32__ToString((int32_t)&ActionValue, 0LL);
  this = (BattleLogicBaseAi_o *)System_String__Concat_61419468((System_String_o *)StringLiteral_8673/*"MOTION_"*/, v10, 0LL);
  if ( !Task )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton(Task, (System_String_o *)this, 0LL);
  logic = v6->fields.logic;
  if ( !logic )
    goto LABEL_15;
  perf = logic->fields.perf;
  this = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))arg->klass->vtable._4_get_UniqueId.method)(
                                  arg,
                                  arg->klass->vtable._5_InitCommonTask.methodPtr);
  if ( !perf
    || (ServantGameObject = BattlePerformance__getServantGameObject(perf, (int32_t)this, 0LL),
        Task->fields.targetObject = ServantGameObject,
        sub_1B68678(
          (ServantStatusBattleListViewItem_o *)&Task->fields.targetObject,
          (int32_t)ServantGameObject,
          v14,
          v15),
        !retList)
    || (items = retList->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_15:
    sub_1B68930(this, retList);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)Task,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)Task;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)Task, v16, v17);
  }
}


void __fastcall BattleLogicBaseAi__AddSkillTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  struct AiActEntity_o *v13; // x8
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t v16; // w25
  TempBattleSkillInfoData_o *v17; // x24
  const MethodInfo *v18; // x3
  BattleLogicBaseAi_o *Task; // x0
  AiBaseEntity_o *AiEnt_k__BackingField; // x2
  BattleLogicTask_o *v21; // x21
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  int32_t v24; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  BattleLogicTask_o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  struct BattleLogicTask_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  System_Int32_array *v36; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *v37; // [xsp+10h] [xbp-50h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4A0B784 & 1) == 0 )
  {
    sub_1B686D4(&Method_BasicHelper_IndexValue_int____75760472, retList);
    sub_1B686D4(&BattleLogicTask_TypeInfo, v7);
    sub_1B686D4(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1B686D4(&DataManager_TypeInfo, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    this = (BattleLogicBaseAi_o *)sub_1B686D4(&TempBattleSkillInfoData_TypeInfo, v11);
    byte_4A0B784 = 1;
  }
  v37 = 0LL;
  entity = 0LL;
  v36 = 0LL;
  if ( !arg )
    goto LABEL_22;
  AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
  if ( !AiActEnt_k__BackingField )
    goto LABEL_22;
  this = (BattleLogicBaseAi_o *)BasicHelper__IndexValue_int_(
                                  AiActEnt_k__BackingField->fields.skillVals,
                                  0,
                                  0,
                                  (const MethodInfo_2E38AB8 *)Method_BasicHelper_IndexValue_int____75760472);
  v13 = arg->fields._AiActEnt_k__BackingField;
  if ( !v13 )
    goto LABEL_22;
  v14 = (int)this;
  v15 = BasicHelper__IndexValue_int_(
          v13->fields.skillVals,
          1,
          1,
          (const MethodInfo_2E38AB8 *)Method_BasicHelper_IndexValue_int____75760472);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleLogicBaseAi_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this )
    goto LABEL_22;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v14, v15, 0LL)
    && (((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BaseAiActArgument_o *, SkillLvEntity_o *, System_Int32_array **, System_Int32_array **, Il2CppMethodPointer))v6->klass->vtable._16_GetAiActTargets.method)(
          v6,
          arg,
          entity,
          &v37,
          &v36,
          v6->klass->vtable._17_SetAddSkillTaskParam.methodPtr) & 1) != 0 )
  {
    v16 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))arg->klass->vtable._4_get_UniqueId.method)(
            arg,
            arg->klass->vtable._5_InitCommonTask.methodPtr);
    v17 = (TempBattleSkillInfoData_o *)sub_1B68920(TempBattleSkillInfoData_TypeInfo);
    TempBattleSkillInfoData___ctor(v17, v14, v15, v16, 0LL);
    Task = (BattleLogicBaseAi_o *)BaseAiActArgument__MakeTask(arg, v6, 0, v18);
    AiEnt_k__BackingField = arg->fields._AiEnt_k__BackingField;
    v21 = (BattleLogicTask_o *)Task;
    BattleLogicBaseAi__SetSkillSelectAddIndex(Task, (BattleSkillInfoData_o *)v17, AiEnt_k__BackingField, v22);
    if ( v21 )
    {
      BattleLogicTask__setActionSkill(v21, (BattleSkillInfoData_o *)v17, v37, v36, 0, 0, 0LL);
      this = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BattleLogicTask_o *, Il2CppMethodPointer))v6->klass->vtable._17_SetAddSkillTaskParam.method)(
                                      v6,
                                      v21,
                                      v6->klass->vtable._18_CheckAiCanActionFromTargets.methodPtr);
      if ( retList )
      {
        items = retList->fields._items;
        v26 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++retList->fields._version;
        if ( items )
        {
          size = retList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)retList,
              (Il2CppObject *)v21,
              *(const MethodInfo_34BC278 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            retList->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v21;
            sub_1B68678((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v21, v23, v24);
          }
          v29 = (BattleLogicTask_o *)sub_1B68920(BattleLogicTask_TypeInfo);
          BattleLogicTask___ctor(v29, 0LL);
          v32 = retList->fields._items;
          v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++retList->fields._version;
          if ( v32 )
          {
            v34 = retList->fields._size;
            if ( (unsigned int)v34 >= v32->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retList,
                (Il2CppObject *)v29,
                *(const MethodInfo_34BC278 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &v32->obj.klass + v34;
              retList->fields._size = v34 + 1;
              v35[4] = (Il2CppClass *)v29;
              sub_1B68678((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v29, v30, v31);
            }
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1B68930(this, retList);
  }
}


bool __fastcall BattleLogicBaseAi__CheckAiCanActionFromTargets(
        BattleLogicBaseAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall BattleLogicBaseAi__CommonWinBattleEnd(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  int32_t v10; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  BattleData_o *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4A0B781 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, retList);
    byte_4A0B781 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = (BattleData_o *)BattleData__isBreakOnBattleWin(data, 0LL);
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
    sub_1B68930(data, retList);
  }
  size = retList->fields._size;
  v14 = data;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)data,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v15 = &items->obj.klass + size;
    v15[4] = (Il2CppClass *)v14;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
  }
}


void __fastcall BattleLogicBaseAi__DebugLog(BattleLogicBaseAi_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicBaseAi__ExistProcAiAct(BattleLogicBaseAi_o *this, int32_t type, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicNoTargetAiActFunc; // x0

  if ( (byte_4A0B789 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__,
      *(_QWORD *)&type);
    byte_4A0B789 = 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         dicNoTargetAiActFunc,
         type,
         (const MethodInfo_31631A4 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__) )
  {
    return 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  if ( !dicNoTargetAiActFunc )
LABEL_8:
    sub_1B68930(dicNoTargetAiActFunc, *(_QWORD *)&type);
  return System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
           dicNoTargetAiActFunc,
           type,
           (const MethodInfo_31631A4 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
AiActEntity_o *__fastcall BattleLogicBaseAi__GetAiActEntity(
        BattleLogicBaseAi_o *this,
        int32_t aiActId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *aiActMst; // x0

  if ( (byte_4A0B786 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, *(_QWORD *)&aiActId);
    byte_4A0B786 = 1;
  }
  aiActMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.aiActMst;
  if ( !aiActMst )
    sub_1B68930(0LL, *(_QWORD *)&aiActId);
  return (AiActEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            aiActMst,
                            aiActId,
                            (const MethodInfo_30E44C0 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
}


bool __fastcall BattleLogicBaseAi__GetAiActTargets(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        SkillLvEntity_o *skillLvEnt,
        System_Int32_array **targets,
        System_Int32_array **ptTargets,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3

  *ptTargets = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)ptTargets, 0, (int32_t)skillLvEnt, (int32_t)targets);
  *targets = 0LL;
  sub_1B68678((ServantStatusBattleListViewItem_o *)targets, 0, v7, v8);
  return 0;
}


System_Int32_array *__fastcall BattleLogicBaseAi__GetLogicTargetIds(
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
  System_Int32_array *v18; // x23
  struct AiActEntity_o *aiActEnt; // x8

  if ( (byte_4A0B785 & 1) == 0 )
  {
    sub_1B686D4(&int___TypeInfo, arg);
    byte_4A0B785 = 1;
  }
  TargetAiAct = sub_1B6877C(int___TypeInfo, 1LL);
  if ( !arg
    || (AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField) == 0LL
    || (logictarget = this->fields.logictarget,
        target = AiActEnt_k__BackingField->fields.target,
        v18 = (System_Int32_array *)TargetAiAct,
        TargetAiAct = ((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))arg->klass->vtable._4_get_UniqueId.method)(
                        arg,
                        arg->klass->vtable._5_InitCommonTask.methodPtr),
        (aiActEnt = arg->fields._AiActEnt_k__BackingField) == 0LL)
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
                        0LL),
        !v18) )
  {
    sub_1B68930(TargetAiAct, v14);
  }
  if ( !v18->max_length )
    sub_1B68938(TargetAiAct, v14);
  v18->m_Items[1] = TargetAiAct;
  return v18;
}


void __fastcall BattleLogicBaseAi__InitAiActTaskFunction(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x21
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
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v25; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v26; // x21
  const MethodInfo *v27; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v28; // x21
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A0B780 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__,
      method);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__,
      v3);
    sub_1B686D4(&System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo, v4);
    sub_1B686D4(&BattleLogicBaseAi_taskAiActFunction_TypeInfo, v5);
    byte_4A0B780 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v6,
    (const MethodInfo_31625DC *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v7 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B68920(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  if ( !this )
    goto LABEL_7;
  v10 = (Il2CppObject *)v7;
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_AddBattleEndTask.methodPtr,
    v9);
  if ( !v6 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    0,
    v10,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v11 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B68920(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._11_AddBattleEndNotRelatedSurvivalStatusTask.methodPtr,
    v12);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    90,
    (Il2CppObject *)v11,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v13 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B68920(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._13_AddPlayMotionTask.methodPtr,
    v14);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    91,
    (Il2CppObject *)v13,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v15 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B68920(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.methodPtr,
    v16);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    71,
    (Il2CppObject *)v15,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v17 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B68920(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v17,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.methodPtr,
    v18);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    72,
    (Il2CppObject *)v17,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v19 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B68920(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.methodPtr,
    v20);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    73,
    (Il2CppObject *)v19,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v21 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B68920(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v21,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._12_AddBattleLoseEndTask.methodPtr,
    v22);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v6,
    92,
    (Il2CppObject *)v21,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v6;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.dicNoTargetAiActFunc, (int32_t)v6, v23, v24);
  v25 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B68920(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v25,
    (const MethodInfo_31625DC *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v26 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B68920(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v26,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._16_GetAiActTargets.methodPtr,
    v27);
  if ( !v25 )
LABEL_7:
    sub_1B68930(v7, v8);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v25,
    40,
    (Il2CppObject *)v26,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v28 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B68920(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v28,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._16_GetAiActTargets.methodPtr,
    v29);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v25,
    41,
    (Il2CppObject *)v28,
    (const MethodInfo_3162FB0 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v25;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.dicAiActFunc, (int32_t)v25, v30, v31);
}


void __fastcall BattleLogicBaseAi__InitDebugLog(
        BattleLogicBaseAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicBaseAi__Initialize(BattleLogicBaseAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct BattleLogic_o *logic; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct BattleLogic_o *v14; // x8
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *Master_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A0B77F & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_AiActMaster___, data);
    sub_1B686D4(&DataManager_TypeInfo, v6);
    byte_4A0B77F = 1;
  }
  this->fields.data = data;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  if ( !data
    || (logic = data->fields.logic,
        this->fields.logic = logic,
        sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.logic, (int32_t)logic, v9, v10),
        (v14 = this->fields.logic) == 0LL) )
  {
    sub_1B68930(v7, v8);
  }
  logictarget = v14->fields.logictarget;
  this->fields.logictarget = logictarget;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.logictarget, (int32_t)logictarget, v12, v13);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)Master_object;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)Master_object, v17, v18);
  ((void (__fastcall *)(BattleLogicBaseAi_o *, Il2CppMethodPointer))this->klass->vtable._8_InitAiActTaskFunction.method)(
    this,
    this->klass->vtable._9_AddNoneTask.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicBaseAi__IsChangeThinkingOnly(
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
    sub_1B68930(this, *(_QWORD *)&actType);
  v5 = actType;
  this = (BattleLogicBaseAi_o *)AiBaseEntity__getChangeAiId(aiEnt, 0LL);
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
  AiState__changeThinking(aiState, (int32_t)this, 0LL);
  return v7;
}


void __fastcall BattleLogicBaseAi__OutputDebugLog(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicBaseAi__SetAddSkillTaskParam(
        BattleLogicBaseAi_o *this,
        BattleLogicTask_o *addTask,
        const MethodInfo *method)
{
  ;
}


bool __fastcall BattleLogicBaseAi__SetNoTargetAiActTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        int32_t type,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *dicNoTargetAiActFunc; // x0
  char v10; // w21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A0B788 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__,
      retList);
    byte_4A0B788 = 1;
  }
  value = 0LL;
  dicNoTargetAiActFunc = this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicNoTargetAiActFunc, type, &value, (const MethodInfo_3164724 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_1B68930(dicNoTargetAiActFunc, retList);
  }
  return v10 & 1;
}


bool __fastcall BattleLogicBaseAi__SetProcAiActTask(
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


void __fastcall BattleLogicBaseAi__SetSkillSelectAddIndex(
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
      MaxSelectAddIndexBySkill = BattleSkillInfoData__GetMaxSelectAddIndexBySkill(skillInfo, 0LL);
      ActSelectIndex = AiBaseEntity__GetActSelectIndex(aiEnt, MaxSelectAddIndexBySkill, 0LL);
      BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, ActSelectIndex, 0LL);
    }
  }
}


bool __fastcall BattleLogicBaseAi__SetTargetAiActTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        int32_t type,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *dicAiActFunc; // x0
  char v10; // w21
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A0B787 & 1) == 0 )
  {
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__,
      retList);
    byte_4A0B787 = 1;
  }
  value = 0LL;
  dicAiActFunc = this->fields.dicAiActFunc;
  if ( !dicAiActFunc )
    goto LABEL_8;
  dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicAiActFunc, type, &value, (const MethodInfo_3164724 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_1B68930(dicAiActFunc, retList);
  }
  return v10 & 1;
}


int32_t __fastcall BattleLogicBaseAi__get_ActorType(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  return 0;
}


System_Int32_array *__fastcall BattleLogicBaseAi__get_OpponentSvtIds(
        BattleLogicBaseAi_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0B77E & 1) == 0 )
  {
    sub_1B686D4(&int___TypeInfo, method);
    byte_4A0B77E = 1;
  }
  return (System_Int32_array *)sub_1B6877C(int___TypeInfo, 0LL);
}


System_Int32_array *__fastcall BattleLogicBaseAi__get_PartySvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_4A0B77D & 1) == 0 )
  {
    sub_1B686D4(&int___TypeInfo, method);
    byte_4A0B77D = 1;
  }
  return (System_Int32_array *)sub_1B6877C(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicBaseAi_taskAiActFunction___ctor(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  char v10; // w21
  char v11; // w0
  struct System_Reflection_MethodInfo_o *v12; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) != 0 )
  {
    if ( v8 == 2 )
    {
      v9 = (Il2CppObject *)sub_19B3748;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 1 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v10 = sub_1B6878C(v6);
        v11 = sub_1B68C48(v6);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19B3864;
          else
            v9 = (Il2CppObject *)sub_19B3818;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19B378C;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19B375C;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19B3724;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v13, 0LL);
    }
  }
  v12 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v12;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B36CC;
}


System_IAsyncResult_o *__fastcall BattleLogicBaseAi_taskAiActFunction__BeginInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7[2]; // [xsp+8h] [xbp-28h] BYREF

  v7[0] = (__int64)retList;
  v7[1] = (__int64)arg;
  return (System_IAsyncResult_o *)sub_1B68688(this, v7, callback, object);
}


void __fastcall BattleLogicBaseAi_taskAiActFunction__EndInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
}


void __fastcall BattleLogicBaseAi_taskAiActFunction__Invoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Generic_List_BattleLogicTask__o *, BaseAiActArgument_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    retList,
    arg,
    *(_QWORD *)&this->fields.extra_arg);
}