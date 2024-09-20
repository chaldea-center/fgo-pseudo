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

  if ( (byte_4A5DCCB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BattleLogicTask___);
    byte_4A5DCCB = 1;
  }
  v5 = Method_System_Array_Empty_BattleLogicTask___;
  v6 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v6 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_BattleLogicTask___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  v9 = *(struct BattleLogicTask_array ***)(v8 + 184);
  v10 = *v9;
  this->fields.emptyTask = *v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.emptyTask, (int32_t)v10, v2, v3);
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
    sub_1B8880C(this, retList);
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
    sub_1B8880C(this, retList);
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
    sub_1B8880C(this, retList);
  *(_WORD *)&data->fields.endbattleFlg = 257;
}


void __fastcall BattleLogicBaseAi__AddMessageTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  MessageBattleLogicTask_o *v7; // x22
  Il2CppObject *Task_43455492; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppObject *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4A5DCC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&MessageBattleLogicTask_TypeInfo);
    byte_4A5DCC4 = 1;
  }
  v7 = (MessageBattleLogicTask_o *)sub_1B887FC(MessageBattleLogicTask_TypeInfo);
  MessageBattleLogicTask___ctor(v7, 0LL);
  if ( !arg
    || (Task_43455492 = (Il2CppObject *)BaseAiActArgument__MakeTask_43455492(
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
    sub_1B8880C(Task_43455492, v9);
  }
  size = retList->fields._size;
  v16 = Task_43455492;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      Task_43455492,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v17 = &items->obj.klass + size;
    v17[4] = (Il2CppClass *)v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
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
  const MethodInfo *v7; // x3
  BattleLogicTask_o *Task; // x20
  System_String_o *v9; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x22
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t ActionValue; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4A5DCC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    this = (BattleLogicBaseAi_o *)sub_1B885B0(&StringLiteral_8708/*"MOTION_"*/);
    byte_4A5DCC3 = 1;
  }
  if ( !arg )
    goto LABEL_15;
  this = (BattleLogicBaseAi_o *)arg->fields._AiEnt_k__BackingField;
  if ( !this )
    goto LABEL_15;
  ActionValue = AiBaseEntity__getActionValue((AiBaseEntity_o *)this, 0LL);
  if ( ActionValue < 1 )
    return;
  Task = BaseAiActArgument__MakeTask(arg, v6, 0, v7);
  v9 = System_Int32__ToString((int32_t)&ActionValue, 0LL);
  this = (BattleLogicBaseAi_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_8708/*"MOTION_"*/, v9, 0LL);
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
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&Task->fields.targetObject,
          (int32_t)ServantGameObject,
          v13,
          v14),
        !retList)
    || (items = retList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_15:
    sub_1B8880C(this, retList);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)Task,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)Task;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)Task, v15, v16);
  }
}


void __fastcall BattleLogicBaseAi__AddSkillTask(
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
  int32_t v19; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  BattleLogicTask_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  struct BattleLogicTask_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  System_Int32_array *v31; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *v32; // [xsp+10h] [xbp-50h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4A5DCC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    this = (BattleLogicBaseAi_o *)sub_1B885B0(&TempBattleSkillInfoData_TypeInfo);
    byte_4A5DCC5 = 1;
  }
  v32 = 0LL;
  entity = 0LL;
  v31 = 0LL;
  if ( !arg )
    goto LABEL_22;
  AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
  if ( !AiActEnt_k__BackingField )
    goto LABEL_22;
  this = (BattleLogicBaseAi_o *)BasicHelper__IndexValue_int_(
                                  AiActEnt_k__BackingField->fields.skillVals,
                                  0,
                                  0,
                                  (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  v8 = arg->fields._AiActEnt_k__BackingField;
  if ( !v8 )
    goto LABEL_22;
  v9 = (int)this;
  v10 = BasicHelper__IndexValue_int_(
          v8->fields.skillVals,
          1,
          1,
          (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleLogicBaseAi_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this )
    goto LABEL_22;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v9, v10, 0LL)
    && (((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BaseAiActArgument_o *, SkillLvEntity_o *, System_Int32_array **, System_Int32_array **, Il2CppMethodPointer))v6->klass->vtable._16_GetAiActTargets.method)(
          v6,
          arg,
          entity,
          &v32,
          &v31,
          v6->klass->vtable._17_SetAddSkillTaskParam.methodPtr) & 1) != 0 )
  {
    v11 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))arg->klass->vtable._4_get_UniqueId.method)(
            arg,
            arg->klass->vtable._5_InitCommonTask.methodPtr);
    v12 = (TempBattleSkillInfoData_o *)sub_1B887FC(TempBattleSkillInfoData_TypeInfo);
    TempBattleSkillInfoData___ctor(v12, v9, v10, v11, 0LL);
    Task = (BattleLogicBaseAi_o *)BaseAiActArgument__MakeTask(arg, v6, 0, v13);
    AiEnt_k__BackingField = arg->fields._AiEnt_k__BackingField;
    v16 = (BattleLogicTask_o *)Task;
    BattleLogicBaseAi__SetSkillSelectAddIndex(Task, (BattleSkillInfoData_o *)v12, AiEnt_k__BackingField, v17);
    if ( v16 )
    {
      BattleLogicTask__setActionSkill(v16, (BattleSkillInfoData_o *)v12, v32, v31, 0, 0, 0LL);
      this = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BattleLogicTask_o *, Il2CppMethodPointer))v6->klass->vtable._17_SetAddSkillTaskParam.method)(
                                      v6,
                                      v16,
                                      v6->klass->vtable._18_CheckAiCanActionFromTargets.methodPtr);
      if ( retList )
      {
        items = retList->fields._items;
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++retList->fields._version;
        if ( items )
        {
          size = retList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)retList,
              (Il2CppObject *)v16,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            retList->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v16;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
          }
          v24 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
          BattleLogicTask___ctor(v24, 0LL);
          v27 = retList->fields._items;
          v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++retList->fields._version;
          if ( v27 )
          {
            v29 = retList->fields._size;
            if ( (unsigned int)v29 >= v27->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retList,
                (Il2CppObject *)v24,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &v27->obj.klass + v29;
              retList->fields._size = v29 + 1;
              v30[4] = (Il2CppClass *)v24;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
            }
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1B8880C(this, retList);
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

  if ( (byte_4A5DCC2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4A5DCC2 = 1;
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
    sub_1B8880C(data, retList);
  }
  size = retList->fields._size;
  v14 = data;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v15 = &items->obj.klass + size;
    v15[4] = (Il2CppClass *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
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

  if ( (byte_4A5DCCA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
    byte_4A5DCCA = 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         dicNoTargetAiActFunc,
         type,
         (const MethodInfo_319D434 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__) )
  {
    return 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  if ( !dicNoTargetAiActFunc )
LABEL_8:
    sub_1B8880C(dicNoTargetAiActFunc, *(_QWORD *)&type);
  return System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
           dicNoTargetAiActFunc,
           type,
           (const MethodInfo_319D434 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
AiActEntity_o *__fastcall BattleLogicBaseAi__GetAiActEntity(
        BattleLogicBaseAi_o *this,
        int32_t aiActId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *aiActMst; // x0

  if ( (byte_4A5DCC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    byte_4A5DCC7 = 1;
  }
  aiActMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.aiActMst;
  if ( !aiActMst )
    sub_1B8880C(0LL, *(_QWORD *)&aiActId);
  return (AiActEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            aiActMst,
                            aiActId,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)ptTargets, 0, (int32_t)skillLvEnt, (int32_t)targets);
  *targets = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)targets, 0, v7, v8);
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

  if ( (byte_4A5DCC6 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5DCC6 = 1;
  }
  TargetAiAct = sub_1B88658(int___TypeInfo, 1LL);
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
    sub_1B8880C(TargetAiAct, v14);
  }
  if ( !v18->max_length )
    sub_1B88814(TargetAiAct, v14);
  v18->m_Items[1] = TargetAiAct;
  return v18;
}


void __fastcall BattleLogicBaseAi__InitAiActTaskFunction(BattleLogicBaseAi_o *this, const MethodInfo *method)
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v22; // x20
  BattleLogicBaseAi_taskAiActFunction_o *v23; // x21
  const MethodInfo *v24; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v25; // x21
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_4A5DCC1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
    sub_1B885B0(&BattleLogicBaseAi_taskAiActFunction_TypeInfo);
    byte_4A5DCC1 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v3,
    (const MethodInfo_319C86C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v4 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B887FC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  if ( !this )
    goto LABEL_7;
  v7 = (Il2CppObject *)v4;
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_AddBattleEndTask.methodPtr,
    v6);
  if ( !v3 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    0,
    v7,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v8 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B887FC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._11_AddBattleEndNotRelatedSurvivalStatusTask.methodPtr,
    v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    90,
    (Il2CppObject *)v8,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v10 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B887FC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._13_AddPlayMotionTask.methodPtr,
    v11);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    91,
    (Il2CppObject *)v10,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v12 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B887FC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.methodPtr,
    v13);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    71,
    (Il2CppObject *)v12,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v14 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B887FC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.methodPtr,
    v15);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    72,
    (Il2CppObject *)v14,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v16 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B887FC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v16,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.methodPtr,
    v17);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    73,
    (Il2CppObject *)v16,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v18 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B887FC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v18,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._12_AddBattleLoseEndTask.methodPtr,
    v19);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v3,
    92,
    (Il2CppObject *)v18,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicNoTargetAiActFunc, (int32_t)v3, v20, v21);
  v22 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v22,
    (const MethodInfo_319C86C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v23 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B887FC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v23,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._16_GetAiActTargets.methodPtr,
    v24);
  if ( !v22 )
LABEL_7:
    sub_1B8880C(v4, v5);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    40,
    (Il2CppObject *)v23,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v25 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1B887FC(BattleLogicBaseAi_taskAiActFunction_TypeInfo);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v25,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._16_GetAiActTargets.methodPtr,
    v26);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v22,
    41,
    (Il2CppObject *)v25,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicAiActFunc, (int32_t)v22, v27, v28);
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
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleLogic_o *logic; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct BattleLogic_o *v13; // x8
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *Master_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5DCC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5DCC0 = 1;
  }
  this->fields.data = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
  if ( !data
    || (logic = data->fields.logic,
        this->fields.logic = logic,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.logic, (int32_t)logic, v8, v9),
        (v13 = this->fields.logic) == 0LL) )
  {
    sub_1B8880C(v6, v7);
  }
  logictarget = v13->fields.logictarget;
  this->fields.logictarget = logictarget;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.logictarget, (int32_t)logictarget, v11, v12);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)Master_object, v16, v17);
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
    sub_1B8880C(this, *(_QWORD *)&actType);
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

  if ( (byte_4A5DCC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
    byte_4A5DCC9 = 1;
  }
  value = 0LL;
  dicNoTargetAiActFunc = this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicNoTargetAiActFunc, type, &value, (const MethodInfo_319E9B4 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_1B8880C(dicNoTargetAiActFunc, retList);
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

  if ( (byte_4A5DCC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
    byte_4A5DCC8 = 1;
  }
  value = 0LL;
  dicAiActFunc = this->fields.dicAiActFunc;
  if ( !dicAiActFunc )
    goto LABEL_8;
  dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicAiActFunc, type, &value, (const MethodInfo_319E9B4 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_1B8880C(dicAiActFunc, retList);
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
  if ( (byte_4A5DCBF & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5DCBF = 1;
  }
  return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
}


System_Int32_array *__fastcall BattleLogicBaseAi__get_PartySvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  if ( (byte_4A5DCBE & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5DCBE = 1;
  }
  return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 2 )
    {
      v9 = (Il2CppObject *)sub_19D199C;
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
        v10 = sub_1B88668(v6);
        v11 = sub_1B88B24(v6);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19D1AB8;
          else
            v9 = (Il2CppObject *)sub_19D1A6C;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19D19E0;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19D19B0;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19D1978;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v13, 0LL);
    }
  }
  v12 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v12;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1920;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, v7, callback, object);
}


void __fastcall BattleLogicBaseAi_taskAiActFunction__EndInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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