void NpcAiCheckTask___ctor(
        NpcAiCheckTask_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        NpcAiCheckTask_Argument_o *arg,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  struct AiNpcBattleServantData_o *v22; // x8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)logicNpcAi);
  this->fields.actiontype = 60;
  this->fields.logicNpcAi = logicNpcAi;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.logicNpcAi, (int32_t)logicNpcAi, v7, v8, v9, v10, v11, v12);
  this->fields.arg = arg;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.arg, (int32_t)arg, v13, v14, v15, v16, v17, v18);
  if ( !arg
    || (Npc_k__BackingField = arg->fields._Npc_k__BackingField) == 0
    || (Npc_k__BackingField = (struct AiNpcBattleServantData_o *)((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, const MethodInfo *))Npc_k__BackingField->klass->vtable._25_get_ActorType.methodPtr)(
                                                                   Npc_k__BackingField,
                                                                   Npc_k__BackingField->klass->vtable._25_get_ActorType.method),
        (v22 = arg->fields._Npc_k__BackingField) == 0) )
  {
    sub_1C93D2C(Npc_k__BackingField, v20);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)this, (int32_t)Npc_k__BackingField, v22->fields.uniqueId, v21);
}


void NpcAiCheckTask__AfterMakeActionTask(NpcAiCheckTask_o *this, const MethodInfo *method)
{
  struct NpcAiCheckTask_Argument_o *arg; // x8
  NpcAiCheckTask_o *v3; // x19
  struct NpcAiCheckTask_Argument_o *v4; // x8
  struct NpcAiCheckTask_Argument_o *v5; // x8
  struct BattleLogicNpcAi_o *logicNpcAi; // x8
  struct NpcAiCheckTask_Argument_o *v7; // x9
  BattleData_o *data; // x19

  arg = this->fields.arg;
  if ( !arg )
    goto LABEL_16;
  v3 = this;
  this = (NpcAiCheckTask_o *)this->fields.logicNpcAi;
  if ( !this )
    goto LABEL_16;
  this = (NpcAiCheckTask_o *)((__int64 (__fastcall *)(NpcAiCheckTask_o *, struct AiEntity_o *, _QWORD))this->klass[1]._2.genericContainerHandle)(
                               this,
                               arg->fields._AiEnt_k__BackingField,
                               *(_QWORD *)&this->klass[1]._2.instance_size);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_10;
  v4 = v3->fields.arg;
  if ( !v4 )
    goto LABEL_16;
  this = (NpcAiCheckTask_o *)v3->fields.logicNpcAi;
  if ( !this )
    goto LABEL_16;
  this = (NpcAiCheckTask_o *)(*(__int64 (__fastcall **)(NpcAiCheckTask_o *, struct AiEntity_o *, _QWORD))&this->klass[1]._2.element_size)(
                               this,
                               v4->fields._AiEnt_k__BackingField,
                               *(_QWORD *)&this->klass[1]._2.static_fields_size);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_10;
  v5 = v3->fields.arg;
  if ( !v5 )
    goto LABEL_16;
  this = (NpcAiCheckTask_o *)v3->fields.logicNpcAi;
  if ( !this )
    goto LABEL_16;
  this = (NpcAiCheckTask_o *)(*(__int64 (__fastcall **)(NpcAiCheckTask_o *, struct AiEntity_o *, _QWORD))&this->klass[1]._2.thread_static_fields_offset)(
                               this,
                               v5->fields._AiEnt_k__BackingField,
                               *(_QWORD *)&this->klass[1]._2.token);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_10:
    logicNpcAi = v3->fields.logicNpcAi;
    if ( logicNpcAi )
    {
      v7 = v3->fields.arg;
      if ( v7 )
      {
        this = (NpcAiCheckTask_o *)v7->fields._AiEnt_k__BackingField;
        if ( this )
        {
          data = logicNpcAi->fields.data;
          this = (NpcAiCheckTask_o *)((__int64 (__fastcall *)(NpcAiCheckTask_o *, const MethodInfo *))this->klass->vtable._7_AfterCreateAction.methodPtr)(
                                       this,
                                       this->klass->vtable._7_AfterCreateAction.method);
          if ( data )
          {
            BattleData__AddPlayedFirstTimeNormalSpeedAiList(data, (System_String_o *)this, 0);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1C93D2C(this, method);
  }
}


BattleLogicTask_array *NpcAiCheckTask__MakeActionTask(
        NpcAiCheckTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  BattleLogicNpcAi_o *logicNpcAi; // x0
  const MethodInfo *v8; // x3
  System_Action_object__o *v9; // x21
  const MethodInfo *v10; // x1

  if ( (byte_4D33CDD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C93AD4(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__);
    byte_4D33CDD = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logicNpcAi = this->fields.logicNpcAi;
  if ( !logicNpcAi
    || (BattleLogicNpcAi__AddAiActionTask(
          logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v4,
          this->fields.arg,
          this->fields._AiTimingPriority_k__BackingField,
          v6),
        (logicNpcAi = (BattleLogicNpcAi_o *)this->fields.arg) == 0)
    || (NpcAiCheckTask_Argument__AddNextAiCheckTask(
          (NpcAiCheckTask_Argument_o *)logicNpcAi,
          this->fields.logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v4,
          v8),
        v9 = (System_Action_object__o *)sub_1C93D20(System_Action_BattleLogicTask__TypeInfo),
        System_Action_object____ctor(v9, (Il2CppObject *)this, Method_NpcAiCheckTask__MakeActionTask_b__4_0__, 0),
        !v4) )
  {
    sub_1C93D2C(logicNpcAi, v5);
  }
  System_Collections_Generic_List_object___ForEach(
    v4,
    (System_Action_T__o *)v9,
    (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  NpcAiCheckTask__AfterMakeActionTask(this, v10);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void NpcAiCheckTask___MakeActionTask_b__4_0(NpcAiCheckTask_o *this, BattleLogicTask_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  x->fields._AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
}


void NpcAiCheckTask_Argument___ctor(
        NpcAiCheckTask_Argument_o *this,
        int32_t state,
        System_Collections_Generic_List_AiNpcBattleServantData__o *npcList,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  int v18; // w22
  NpcAiCheckTask_Argument_o *v19; // x23
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4D33CDE & 1) == 0 )
  {
    sub_1C93AD4(&NpcAiCheckTask_Argument_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__);
    byte_4D33CDE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._State_k__BackingField = state;
  v9 = BasicHelper__IndexValue_object__51981564(
         (System_Collections_Generic_List_T__o *)npcList,
         index,
         0,
         (const MethodInfo_3192CFC *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
  this->fields._Npc_k__BackingField = (struct AiNpcBattleServantData_o *)v9;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._Npc_k__BackingField,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0), !npcList) )
    sub_1C93D2C(Npc_k__BackingField, v16);
  v18 = index + 1;
  if ( v18 < npcList->fields._size )
  {
    v19 = (NpcAiCheckTask_Argument_o *)sub_1C93D20(NpcAiCheckTask_Argument_TypeInfo);
    NpcAiCheckTask_Argument___ctor(v19, state, npcList, v18, v20);
    this->fields.nextNpcArg = v19;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.nextNpcArg, (int32_t)v19, v21, v22, v23, v24, v25, v26);
  }
}


void NpcAiCheckTask_Argument___ctor_47822532(
        NpcAiCheckTask_Argument_o *this,
        int32_t state,
        AiNpcBattleServantData_o *npcSvt,
        const MethodInfo *method)
{
  NpcAiCheckTask_Argument_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._Npc_k__BackingField = npcSvt;
  v6 = (NpcAiCheckTask_Argument_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.nextNpcArg) = state;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v6, (int32_t)npcSvt, v7, v8, v9, v10, v11, v12);
}


void NpcAiCheckTask_Argument__AddNextAiCheckTask(
        NpcAiCheckTask_Argument_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        const MethodInfo *method)
{
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v8; // x1
  NpcAiCheckTask_o *v9; // x22
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
  Il2CppClass **v20; // x0
  GrandQuestFolderBoardItem_o *v21; // x0
  int32_t v22; // w1
  struct AiNpcBattleServantData_o *v23; // x8
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  System_Collections_Generic_List_object__o *v26; // x0
  Il2CppObject *v27; // x1
  struct AiNpcBattleServantData_o *v28; // x8
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct BattleLogicTask_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  AiNpcBattleServantData_o *v38; // x1
  Il2CppClass **v39; // x0
  NpcAiCheckTask_Argument_o *nextNpcArg; // x22
  NpcAiCheckTask_o *v41; // x21
  const MethodInfo *v42; // x3
  struct BattleLogicTask_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0

  if ( (byte_4D33CDF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C93AD4(&NpcAiCheckTask_TypeInfo);
    byte_4D33CDF = 1;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  v8 = (unsigned int)(this->fields._AiStateIndex_k__BackingField + 1);
  this->fields._AiStateIndex_k__BackingField = v8;
  if ( !Npc_k__BackingField )
    goto LABEL_33;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex(Npc_k__BackingField, v8, 0) )
  {
    v9 = (NpcAiCheckTask_o *)sub_1C93D20(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v9, logicNpcAi, this, v10);
    if ( taskList )
    {
      items = taskList->fields._items;
      v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( items )
      {
        size = taskList->fields._size;
        if ( (unsigned int)size < LODWORD(items->max_length) )
        {
          v20 = &items->obj.klass + size;
          taskList->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v9;
          v21 = (GrandQuestFolderBoardItem_o *)(v20 + 4);
          v22 = (int)v9;
LABEL_29:
          sub_1C93A78(v21, v22, v11, v12, v13, v14, v15, v16);
          return;
        }
        v25 = v18[4];
        v26 = (System_Collections_Generic_List_object__o *)taskList;
        v27 = (Il2CppObject *)v9;
LABEL_32:
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          v27,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v25 + 192) + 112LL));
        return;
      }
    }
    goto LABEL_33;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField )
    goto LABEL_33;
  Npc_k__BackingField = (AiNpcBattleServantData_o *)AiNpcBattleServantData__RemoveCheckAiProcState(
                                                      Npc_k__BackingField,
                                                      this->fields._State_k__BackingField,
                                                      0);
  if ( ((unsigned __int8)Npc_k__BackingField & 1) != 0 )
  {
    v23 = this->fields._Npc_k__BackingField;
    if ( !v23 )
      goto LABEL_33;
    if ( !v23->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_33;
      Npc_k__BackingField = (AiNpcBattleServantData_o *)((((__int64 (__fastcall *)(BattleLogicNpcAi_o *, struct AiEntity_o *, const MethodInfo *))logicNpcAi->klass->vtable._27_IsNotPlayedActionFirstTime.methodPtr)(
                                                            logicNpcAi,
                                                            this->fields._AiEnt_k__BackingField,
                                                            logicNpcAi->klass->vtable._27_IsNotPlayedActionFirstTime.method)
                                                        & 1) != 0
                                                       ? 1LL
                                                       : ((__int64 (__fastcall *)(BattleLogicNpcAi_o *, struct AiEntity_o *, const MethodInfo *))logicNpcAi->klass->vtable._29_IsNotPlayedBackStepFirstTime.methodPtr)(
                                                           logicNpcAi,
                                                           this->fields._AiEnt_k__BackingField,
                                                           logicNpcAi->klass->vtable._29_IsNotPlayedBackStepFirstTime.method));
      v28 = this->fields._Npc_k__BackingField;
      if ( !v28 )
        goto LABEL_33;
      Npc_k__BackingField = (AiNpcBattleServantData_o *)BattleLogicNpcAi__MakeBackStepTask(
                                                          (BattleLogicNpcAi_o *)Npc_k__BackingField,
                                                          v28->fields.uniqueId,
                                                          (unsigned __int8)Npc_k__BackingField & 1,
                                                          v24);
      if ( !taskList )
        goto LABEL_33;
      v35 = taskList->fields._items;
      v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( !v35 )
        goto LABEL_33;
      v37 = taskList->fields._size;
      v38 = Npc_k__BackingField;
      if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)Npc_k__BackingField,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &v35->obj.klass + v37;
        taskList->fields._size = v37 + 1;
        v39[4] = (Il2CppClass *)v38;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v38, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  nextNpcArg = this->fields.nextNpcArg;
  if ( nextNpcArg )
  {
    v41 = (NpcAiCheckTask_o *)sub_1C93D20(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v41, logicNpcAi, nextNpcArg, v42);
    if ( taskList )
    {
      v43 = taskList->fields._items;
      v44 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( v43 )
      {
        v45 = taskList->fields._size;
        if ( (unsigned int)v45 < LODWORD(v43->max_length) )
        {
          v46 = &v43->obj.klass + v45;
          taskList->fields._size = v45 + 1;
          v46[4] = (Il2CppClass *)v41;
          v21 = (GrandQuestFolderBoardItem_o *)(v46 + 4);
          v22 = (int)v41;
          goto LABEL_29;
        }
        v25 = v44[4];
        v26 = (System_Collections_Generic_List_object__o *)taskList;
        v27 = (Il2CppObject *)v41;
        goto LABEL_32;
      }
    }
LABEL_33:
    sub_1C93D2C(Npc_k__BackingField, v8);
  }
}


AiEntity_o *NpcAiCheckTask_Argument__get_AiEnt(NpcAiCheckTask_Argument_o *this, const MethodInfo *method)
{
  return this->fields._AiEnt_k__BackingField;
}


int32_t NpcAiCheckTask_Argument__get_AiStateIndex(NpcAiCheckTask_Argument_o *this, const MethodInfo *method)
{
  return this->fields._AiStateIndex_k__BackingField;
}


AiNpcBattleServantData_o *NpcAiCheckTask_Argument__get_Npc(NpcAiCheckTask_Argument_o *this, const MethodInfo *method)
{
  return this->fields._Npc_k__BackingField;
}


int32_t NpcAiCheckTask_Argument__get_State(NpcAiCheckTask_Argument_o *this, const MethodInfo *method)
{
  return this->fields._State_k__BackingField;
}


void NpcAiCheckTask_Argument__set_AiEnt(NpcAiCheckTask_Argument_o *this, AiEntity_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._AiEnt_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._AiEnt_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void NpcAiCheckTask_Argument__set_AiStateIndex(
        NpcAiCheckTask_Argument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AiStateIndex_k__BackingField = value;
}


void NpcAiCheckTask_Argument__set_Npc(
        NpcAiCheckTask_Argument_o *this,
        AiNpcBattleServantData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Npc_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._Npc_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void NpcAiCheckTask_Argument__set_State(NpcAiCheckTask_Argument_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._State_k__BackingField = value;
}