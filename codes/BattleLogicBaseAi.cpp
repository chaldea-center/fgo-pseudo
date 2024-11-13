void __fastcall BattleLogicBaseAi___ctor(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct BattleLogicTask_array **v14; // x8
  struct BattleLogicTask_array *v15; // x1

  if ( (byte_4B18DD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BattleLogicTask___, method, v2);
    byte_4B18DD8 = 1;
  }
  v10 = Method_System_Array_Empty_BattleLogicTask___;
  v11 = *((_QWORD *)Method_System_Array_Empty_BattleLogicTask___ + 7);
  if ( !v11 )
  {
    sub_1C1C718(Method_System_Array_Empty_BattleLogicTask___, method);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(inited);
  v14 = *(struct BattleLogicTask_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.emptyTask = *v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.emptyTask, (int64_t)v15, v2, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, retList);
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
    sub_1BCAA3C(this, retList);
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
    sub_1BCAA3C(this, retList);
  *(_WORD *)&data->fields.endbattleFlg = 257;
}


void __fastcall BattleLogicBaseAi__AddMessageTask(
        BattleLogicBaseAi_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *retList,
        BaseAiActArgument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  MessageBattleLogicTask_o *v9; // x22
  Il2CppObject *Task_44230892; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  int64_t v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_4B18DD1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, retList, arg);
    sub_1BCA7E0(&MessageBattleLogicTask_TypeInfo, v7, v8);
    byte_4B18DD1 = 1;
  }
  v9 = (MessageBattleLogicTask_o *)sub_1BCAA2C(MessageBattleLogicTask_TypeInfo, retList, arg, method);
  MessageBattleLogicTask___ctor(v9, 0LL);
  if ( !arg
    || (Task_44230892 = (Il2CppObject *)BaseAiActArgument__MakeTask_44230892(
                                          arg,
                                          (BaseAiActBattleLogicTask_o *)v9,
                                          this,
                                          v12),
        !retList)
    || (items = retList->fields._items,
        v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1BCAA3C(Task_44230892, v11);
  }
  size = retList->fields._size;
  v22 = (int64_t)Task_44230892;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      Task_44230892,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v23 = &items->obj.klass + size;
    v23[4] = (Il2CppClass *)v22;
    sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 4), v22, v13, v14, v15, v16, v17, v18);
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
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  BattleLogicTask_o *Task; // x20
  System_String_o *v11; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x22
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int32_t ActionValue; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4B18DD0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, retList, arg);
    this = (BattleLogicBaseAi_o *)sub_1BCA7E0(&StringLiteral_8835/*"MOTION_"*/, v7, v8);
    byte_4B18DD0 = 1;
  }
  if ( !arg )
    goto LABEL_15;
  this = (BattleLogicBaseAi_o *)arg->fields._AiEnt_k__BackingField;
  if ( !this )
    goto LABEL_15;
  ActionValue = AiBaseEntity__getActionValue((AiBaseEntity_o *)this, 0LL);
  if ( ActionValue < 1 )
    return;
  Task = BaseAiActArgument__MakeTask(arg, v6, 0, v9);
  v11 = System_Int32__ToString((int32_t)&ActionValue, 0LL);
  this = (BattleLogicBaseAi_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_8835/*"MOTION_"*/, v11, 0LL);
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
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&Task->fields.targetObject,
          (int64_t)ServantGameObject,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        !retList)
    || (items = retList->fields._items,
        v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_15:
    sub_1BCAA3C(this, retList);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)Task,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    retList->fields._size = size + 1;
    v30[4] = (Il2CppClass *)Task;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)Task, v21, v22, v23, v24, v25, v26);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct AiActEntity_o *AiActEnt_k__BackingField; // x8
  struct AiActEntity_o *v18; // x8
  int32_t v19; // w22
  __int64 v20; // x1
  int32_t v21; // w23
  int32_t v22; // w25
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  TempBattleSkillInfoData_o *v26; // x24
  const MethodInfo *v27; // x3
  BattleLogicBaseAi_o *Task; // x0
  AiBaseEntity_o *AiEnt_k__BackingField; // x2
  BattleLogicTask_o *v30; // x21
  const MethodInfo *v31; // x3
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  BattleLogicTask_o *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct BattleLogicTask_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  System_Int32_array *v56; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *v57; // [xsp+10h] [xbp-50h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4B18DD2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, retList, arg);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v13, v14);
    this = (BattleLogicBaseAi_o *)sub_1BCA7E0(&TempBattleSkillInfoData_TypeInfo, v15, v16);
    byte_4B18DD2 = 1;
  }
  v57 = 0LL;
  entity = 0LL;
  v56 = 0LL;
  if ( !arg )
    goto LABEL_22;
  AiActEnt_k__BackingField = arg->fields._AiActEnt_k__BackingField;
  if ( !AiActEnt_k__BackingField )
    goto LABEL_22;
  this = (BattleLogicBaseAi_o *)BasicHelper__IndexValue_int_(
                                  AiActEnt_k__BackingField->fields.skillVals,
                                  0,
                                  0,
                                  (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  v18 = arg->fields._AiActEnt_k__BackingField;
  if ( !v18 )
    goto LABEL_22;
  v19 = (int)this;
  v21 = BasicHelper__IndexValue_int_(
          v18->fields.skillVals,
          1,
          1,
          (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  this = (BattleLogicBaseAi_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this )
    goto LABEL_22;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v19, v21, 0LL)
    && (((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BaseAiActArgument_o *, SkillLvEntity_o *, System_Int32_array **, System_Int32_array **, Il2CppMethodPointer))v6->klass->vtable._16_GetAiActTargets.method)(
          v6,
          arg,
          entity,
          &v57,
          &v56,
          v6->klass->vtable._17_SetAddSkillTaskParam.methodPtr) & 1) != 0 )
  {
    v22 = ((__int64 (__fastcall *)(BaseAiActArgument_o *, Il2CppMethodPointer))arg->klass->vtable._4_get_UniqueId.method)(
            arg,
            arg->klass->vtable._5_InitCommonTask.methodPtr);
    v26 = (TempBattleSkillInfoData_o *)sub_1BCAA2C(TempBattleSkillInfoData_TypeInfo, v23, v24, v25);
    TempBattleSkillInfoData___ctor(v26, v19, v21, v22, 0LL);
    Task = (BattleLogicBaseAi_o *)BaseAiActArgument__MakeTask(arg, v6, 0, v27);
    AiEnt_k__BackingField = arg->fields._AiEnt_k__BackingField;
    v30 = (BattleLogicTask_o *)Task;
    BattleLogicBaseAi__SetSkillSelectAddIndex(Task, (BattleSkillInfoData_o *)v26, AiEnt_k__BackingField, v31);
    if ( v30 )
    {
      BattleLogicTask__setActionSkill(v30, (BattleSkillInfoData_o *)v26, v57, v56, 0, 0, 0LL);
      this = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleLogicBaseAi_o *, BattleLogicTask_o *, Il2CppMethodPointer))v6->klass->vtable._17_SetAddSkillTaskParam.method)(
                                      v6,
                                      v30,
                                      v6->klass->vtable._18_CheckAiCanActionFromTargets.methodPtr);
      if ( retList )
      {
        items = retList->fields._items;
        v39 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++retList->fields._version;
        if ( items )
        {
          size = retList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)retList,
              (Il2CppObject *)v30,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            retList->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v30;
            sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v30, v32, v33, v34, v35, v36, v37);
          }
          v45 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v42, v43, v44);
          BattleLogicTask___ctor(v45, 0LL);
          v52 = retList->fields._items;
          v53 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++retList->fields._version;
          if ( v52 )
          {
            v54 = retList->fields._size;
            if ( (unsigned int)v54 >= v52->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retList,
                (Il2CppObject *)v45,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v55 = &v52->obj.klass + v54;
              retList->fields._size = v54 + 1;
              v55[4] = (Il2CppClass *)v45;
              sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v45, v46, v47, v48, v49, v50, v51);
            }
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(this, retList);
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
  int64_t data; // x0
  const MethodInfo *v8; // x3
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  int64_t v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4B18DCF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, retList, arg);
    byte_4B18DCF = 1;
  }
  data = (int64_t)this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = BattleData__isBreakOnBattleWin((BattleData_o *)data, 0LL);
  if ( (data & 1) == 0 )
    return;
  if ( !arg
    || (data = (int64_t)BaseAiActArgument__MakeTask(arg, this, 35, v8), !retList)
    || (items = retList->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++retList->fields._version,
        !items) )
  {
LABEL_12:
    sub_1BCAA3C(data, retList);
  }
  size = retList->fields._size;
  v18 = data;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)retList,
      (Il2CppObject *)data,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    v19 = &items->obj.klass + size;
    v19[4] = (Il2CppClass *)v18;
    sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 4), v18, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4B18DD7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__,
      *(_QWORD *)&type,
      method);
    byte_4B18DD7 = 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         dicNoTargetAiActFunc,
         type,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__) )
  {
    return 1;
  }
  dicNoTargetAiActFunc = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicAiActFunc;
  if ( !dicNoTargetAiActFunc )
LABEL_8:
    sub_1BCAA3C(dicNoTargetAiActFunc, *(_QWORD *)&type);
  return System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
           dicNoTargetAiActFunc,
           type,
           (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
AiActEntity_o *__fastcall BattleLogicBaseAi__GetAiActEntity(
        BattleLogicBaseAi_o *this,
        int32_t aiActId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *aiActMst; // x0

  if ( (byte_4B18DD4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, *(_QWORD *)&aiActId, method);
    byte_4B18DD4 = 1;
  }
  aiActMst = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.aiActMst;
  if ( !aiActMst )
    sub_1BCAA3C(0LL, *(_QWORD *)&aiActId);
  return (AiActEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            aiActMst,
                            aiActId,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
}


bool __fastcall BattleLogicBaseAi__GetAiActTargets(
        BattleLogicBaseAi_o *this,
        BaseAiActArgument_o *arg,
        SkillLvEntity_o *skillLvEnt,
        System_Int32_array **targets,
        System_Int32_array **ptTargets,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  *ptTargets = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ptTargets,
    0LL,
    (int64_t)skillLvEnt,
    (int32_t)targets,
    (System_String_o *)ptTargets,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  *targets = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)targets, 0LL, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4B18DD3 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, arg, svtIds);
    byte_4B18DD3 = 1;
  }
  TargetAiAct = sub_1BCA888(int___TypeInfo, 1LL);
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
    sub_1BCAA3C(TargetAiAct, v14);
  }
  if ( !v18->max_length )
    sub_1BCAA44(TargetAiAct, v14);
  v18->m_Items[1] = TargetAiAct;
  return v18;
}


void __fastcall BattleLogicBaseAi__InitAiActTaskFunction(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v22; // x21
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v27; // x21
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v32; // x21
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v37; // x21
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v42; // x21
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v47; // x21
  const MethodInfo *v48; // x3
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v58; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v62; // x21
  const MethodInfo *v63; // x3
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  BattleLogicBaseAi_taskAiActFunction_o *v67; // x21
  const MethodInfo *v68; // x3
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7

  if ( (byte_4B18DCE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__,
      v5,
      v6);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo,
      v7,
      v8);
    sub_1BCA7E0(&BattleLogicBaseAi_taskAiActFunction_TypeInfo, v9, v10);
    byte_4B18DCE = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v11,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v15 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BCAA2C(
                                                   BattleLogicBaseAi_taskAiActFunction_TypeInfo,
                                                   v12,
                                                   v13,
                                                   v14);
  if ( !this )
    goto LABEL_7;
  v18 = (Il2CppObject *)v15;
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._10_AddBattleEndTask.methodPtr,
    v17);
  if ( !v11 )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    0,
    v18,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v22 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BCAA2C(
                                                   BattleLogicBaseAi_taskAiActFunction_TypeInfo,
                                                   v19,
                                                   v20,
                                                   v21);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v22,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._11_AddBattleEndNotRelatedSurvivalStatusTask.methodPtr,
    v23);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    90,
    (Il2CppObject *)v22,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v27 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BCAA2C(
                                                   BattleLogicBaseAi_taskAiActFunction_TypeInfo,
                                                   v24,
                                                   v25,
                                                   v26);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._13_AddPlayMotionTask.methodPtr,
    v28);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    91,
    (Il2CppObject *)v27,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v32 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BCAA2C(
                                                   BattleLogicBaseAi_taskAiActFunction_TypeInfo,
                                                   v29,
                                                   v30,
                                                   v31);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v32,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._14_AddMessageTask.methodPtr,
    v33);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    71,
    (Il2CppObject *)v32,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v37 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BCAA2C(
                                                   BattleLogicBaseAi_taskAiActFunction_TypeInfo,
                                                   v34,
                                                   v35,
                                                   v36);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v37,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.methodPtr,
    v38);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    72,
    (Il2CppObject *)v37,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v42 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BCAA2C(
                                                   BattleLogicBaseAi_taskAiActFunction_TypeInfo,
                                                   v39,
                                                   v40,
                                                   v41);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v42,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._15_AddSkillTask.methodPtr,
    v43);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    73,
    (Il2CppObject *)v42,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v47 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BCAA2C(
                                                   BattleLogicBaseAi_taskAiActFunction_TypeInfo,
                                                   v44,
                                                   v45,
                                                   v46);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v47,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._12_AddBattleLoseEndTask.methodPtr,
    v48);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v11,
    92,
    (Il2CppObject *)v47,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v11;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicNoTargetAiActFunc,
    (int64_t)v11,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TypeInfo,
                                                                   v55,
                                                                   v56,
                                                                   v57);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v58,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction___ctor__);
  v62 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BCAA2C(
                                                   BattleLogicBaseAi_taskAiActFunction_TypeInfo,
                                                   v59,
                                                   v60,
                                                   v61);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v62,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._16_GetAiActTargets.methodPtr,
    v63);
  if ( !v58 )
LABEL_7:
    sub_1BCAA3C(v15, v16);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v58,
    40,
    (Il2CppObject *)v62,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  v67 = (BattleLogicBaseAi_taskAiActFunction_o *)sub_1BCAA2C(
                                                   BattleLogicBaseAi_taskAiActFunction_TypeInfo,
                                                   v64,
                                                   v65,
                                                   v66);
  BattleLogicBaseAi_taskAiActFunction___ctor(
    v67,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._16_GetAiActTargets.methodPtr,
    v68);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v58,
    41,
    (Il2CppObject *)v67,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__Add__);
  this->fields.dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)v58;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dicAiActFunc, (int64_t)v58, v69, v70, v71, v72, v73, v74);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct BattleLogic_o *logic; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct BattleLogic_o *v27; // x8
  struct BattleLogicTarget_o *logictarget; // x1
  __int64 v29; // x1
  Il2CppObject *Master_object; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B18DCD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_AiActMaster___, data, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    byte_4B18DCD = 1;
  }
  this->fields.data = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !data
    || (logic = data->fields.logic,
        this->fields.logic = logic,
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)logic, v14, v15, v16, v17, v18, v19),
        (v27 = this->fields.logic) == 0LL) )
  {
    sub_1BCAA3C(v12, v13);
  }
  logictarget = v27->fields.logictarget;
  this->fields.logictarget = logictarget;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.logictarget,
    (int64_t)logictarget,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.aiActMst,
    (int64_t)Master_object,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
    sub_1BCAA3C(this, *(_QWORD *)&actType);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B18DD6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__,
      retList,
      *(_QWORD *)&type);
    byte_4B18DD6 = 1;
  }
  value = 0LL;
  dicNoTargetAiActFunc = this->fields.dicNoTargetAiActFunc;
  if ( !dicNoTargetAiActFunc )
    goto LABEL_8;
  dicNoTargetAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicNoTargetAiActFunc, type, &value, (const MethodInfo_323676C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_1BCAA3C(dicNoTargetAiActFunc, retList);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B18DD5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__,
      retList,
      *(_QWORD *)&type);
    byte_4B18DD5 = 1;
  }
  value = 0LL;
  dicAiActFunc = this->fields.dicAiActFunc;
  if ( !dicAiActFunc )
    goto LABEL_8;
  dicAiActFunc = (struct System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__o *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue((System_Collections_Generic_Dictionary_TKey__TValue__o *)dicAiActFunc, type, &value, (const MethodInfo_323676C *)Method_System_Collections_Generic_Dictionary_AiAct_TYPE__BattleLogicBaseAi_taskAiActFunction__TryGetValue__);
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
    sub_1BCAA3C(dicAiActFunc, retList);
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
  __int64 v2; // x2

  if ( (byte_4B18DCC & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B18DCC = 1;
  }
  return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
}


System_Int32_array *__fastcall BattleLogicBaseAi__get_PartySvtIds(BattleLogicBaseAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18DCB & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B18DCB = 1;
  }
  return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicBaseAi_taskAiActFunction___ctor(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  char v14; // w21
  char v15; // w0
  struct System_Reflection_MethodInfo_o *v16; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = (Il2CppObject *)sub_1A0FE3C;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 1 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v14 = sub_1BCA898(v10);
        v15 = sub_1BCAD54(v10);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A0FF58;
          else
            v13 = (Il2CppObject *)sub_1A0FF0C;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A0FE80;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A0FE50;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A0FE18;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v16 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v16;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0FDC0;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, v7, callback, object);
}


void __fastcall BattleLogicBaseAi_taskAiActFunction__EndInvoke(
        BattleLogicBaseAi_taskAiActFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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