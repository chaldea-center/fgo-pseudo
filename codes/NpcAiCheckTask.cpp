void __fastcall NpcAiCheckTask___ctor(
        NpcAiCheckTask_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        NpcAiCheckTask_Argument_o *arg,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v12; // x1
  struct AiNpcBattleServantData_o *v13; // x8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 60;
  this->fields.logicNpcAi = logicNpcAi;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.logicNpcAi, (int32_t)logicNpcAi, v7, v8);
  this->fields.arg = arg;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.arg, (int32_t)arg, v9, v10);
  if ( !arg
    || (Npc_k__BackingField = arg->fields._Npc_k__BackingField) == 0LL
    || (Npc_k__BackingField = (struct AiNpcBattleServantData_o *)((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, void *))Npc_k__BackingField->klass->vtable._25_get_ActorType.method)(
                                                                   Npc_k__BackingField,
                                                                   Npc_k__BackingField->klass[1]._1.image),
        (v13 = arg->fields._Npc_k__BackingField) == 0LL) )
  {
    sub_1B4D1EC(Npc_k__BackingField, v12);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)this, (int32_t)Npc_k__BackingField, v13->fields.uniqueId, 0LL);
}


BattleLogicTask_array *__fastcall NpcAiCheckTask__MakeActionTask(
        NpcAiCheckTask_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  BattleLogicNpcAi_o *logicNpcAi; // x0
  const MethodInfo *v13; // x3
  System_Action_object__o *v14; // x21

  if ( (byte_49BDCB8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BattleLogicTask__TypeInfo, logic);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v7);
    sub_1B4CF90(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__, v8);
    byte_49BDCB8 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logicNpcAi = this->fields.logicNpcAi;
  if ( !logicNpcAi
    || (BattleLogicNpcAi__AddAiActionTask(
          logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v9,
          this->fields.arg,
          this->fields._AiTimingPriority_k__BackingField,
          v11),
        (logicNpcAi = (BattleLogicNpcAi_o *)this->fields.arg) == 0LL)
    || (NpcAiCheckTask_Argument__AddNextAiCheckTask(
          (NpcAiCheckTask_Argument_o *)logicNpcAi,
          this->fields.logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v9,
          v13),
        v14 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BattleLogicTask__TypeInfo),
        System_Action_object____ctor(v14, (Il2CppObject *)this, Method_NpcAiCheckTask__MakeActionTask_b__4_0__, 0LL),
        !v9) )
  {
    sub_1B4D1EC(logicNpcAi, v10);
  }
  System_Collections_Generic_List_object___ForEach(
    v9,
    (System_Action_T__o *)v14,
    (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall NpcAiCheckTask___MakeActionTask_b__4_0(
        NpcAiCheckTask_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  BattleLogicTask__SetAiPriority(x, this->fields._AiTimingPriority_k__BackingField, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NpcAiCheckTask_Argument___ctor(
        NpcAiCheckTask_Argument_o *this,
        int32_t state,
        System_Collections_Generic_List_AiNpcBattleServantData__o *npcList,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  int v16; // w22
  NpcAiCheckTask_Argument_o *v17; // x23
  const MethodInfo *v18; // x4
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_49BDCB9 & 1) == 0 )
  {
    sub_1B4CF90(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state);
    sub_1B4CF90(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v10);
    byte_49BDCB9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._State_k__BackingField = state;
  v11 = BasicHelper__IndexValue_object__49218432(
          (System_Collections_Generic_List_T__o *)npcList,
          index,
          0LL,
          (const MethodInfo_2EF0380 *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
  this->fields._Npc_k__BackingField = (struct AiNpcBattleServantData_o *)v11;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._Npc_k__BackingField, (int32_t)v11, v12, v13);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0LL), !npcList) )
    sub_1B4D1EC(Npc_k__BackingField, v14);
  v16 = index + 1;
  if ( v16 < npcList->fields._size )
  {
    v17 = (NpcAiCheckTask_Argument_o *)sub_1B4D1DC(NpcAiCheckTask_Argument_TypeInfo);
    NpcAiCheckTask_Argument___ctor(v17, state, npcList, v16, v18);
    this->fields.nextNpcArg = v17;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.nextNpcArg, (int32_t)v17, v19, v20);
  }
}


void __fastcall NpcAiCheckTask_Argument__AddNextAiCheckTask(
        NpcAiCheckTask_Argument_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v9; // x1
  NpcAiCheckTask_o *v10; // x22
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  CGThumbnailListItem_o *v18; // x0
  int32_t v19; // w1
  const MethodInfo *v20; // x2
  struct AiNpcBattleServantData_o *v21; // x8
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct BattleLogicTask_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  AiNpcBattleServantData_o *v27; // x1
  Il2CppClass **v28; // x0
  __int64 v29; // x8
  System_Collections_Generic_List_object__o *v30; // x0
  Il2CppObject *v31; // x1
  NpcAiCheckTask_Argument_o *nextNpcArg; // x22
  NpcAiCheckTask_o *v33; // x21
  const MethodInfo *v34; // x3
  struct BattleLogicTask_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0

  if ( (byte_49BDCBA & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, logicNpcAi);
    sub_1B4CF90(&NpcAiCheckTask_TypeInfo, v7);
    byte_49BDCBA = 1;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  v9 = (unsigned int)(this->fields._AiStateIndex_k__BackingField + 1);
  this->fields._AiStateIndex_k__BackingField = v9;
  if ( !Npc_k__BackingField )
    goto LABEL_29;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex(Npc_k__BackingField, v9, 0LL) )
  {
    v10 = (NpcAiCheckTask_o *)sub_1B4D1DC(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v10, logicNpcAi, this, v11);
    if ( taskList )
    {
      items = taskList->fields._items;
      v15 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( items )
      {
        size = taskList->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v17 = &items->obj.klass + size;
          taskList->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v10;
          v18 = (CGThumbnailListItem_o *)(v17 + 4);
          v19 = (int)v10;
LABEL_25:
          sub_1B4CF34(v18, v19, v12, v13);
          return;
        }
        v29 = v15[4];
        v30 = (System_Collections_Generic_List_object__o *)taskList;
        v31 = (Il2CppObject *)v10;
LABEL_28:
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          v31,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v29 + 192) + 112LL));
        return;
      }
    }
    goto LABEL_29;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField )
    goto LABEL_29;
  Npc_k__BackingField = (AiNpcBattleServantData_o *)AiNpcBattleServantData__RemoveCheckAiProcState(
                                                      Npc_k__BackingField,
                                                      this->fields._State_k__BackingField,
                                                      0LL);
  if ( ((unsigned __int8)Npc_k__BackingField & 1) != 0 )
  {
    v21 = this->fields._Npc_k__BackingField;
    if ( !v21 )
      goto LABEL_29;
    if ( !v21->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_29;
      Npc_k__BackingField = (AiNpcBattleServantData_o *)BattleLogicNpcAi__MakeBackStepTask(
                                                          (BattleLogicNpcAi_o *)Npc_k__BackingField,
                                                          v21->fields.uniqueId,
                                                          v20);
      if ( !taskList )
        goto LABEL_29;
      v24 = taskList->fields._items;
      v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( !v24 )
        goto LABEL_29;
      v26 = taskList->fields._size;
      v27 = Npc_k__BackingField;
      if ( (unsigned int)v26 >= v24->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)Npc_k__BackingField,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &v24->obj.klass + v26;
        taskList->fields._size = v26 + 1;
        v28[4] = (Il2CppClass *)v27;
        sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
      }
    }
  }
  nextNpcArg = this->fields.nextNpcArg;
  if ( nextNpcArg )
  {
    v33 = (NpcAiCheckTask_o *)sub_1B4D1DC(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v33, logicNpcAi, nextNpcArg, v34);
    if ( taskList )
    {
      v35 = taskList->fields._items;
      v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( v35 )
      {
        v37 = taskList->fields._size;
        if ( (unsigned int)v37 < v35->max_length )
        {
          v38 = &v35->obj.klass + v37;
          taskList->fields._size = v37 + 1;
          v38[4] = (Il2CppClass *)v33;
          v18 = (CGThumbnailListItem_o *)(v38 + 4);
          v19 = (int)v33;
          goto LABEL_25;
        }
        v29 = v36[4];
        v30 = (System_Collections_Generic_List_object__o *)taskList;
        v31 = (Il2CppObject *)v33;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1B4D1EC(Npc_k__BackingField, v9);
  }
}


int32_t __fastcall NpcAiCheckTask_Argument__get_AiStateIndex(NpcAiCheckTask_Argument_o *this, const MethodInfo *method)
{
  return this->fields._AiStateIndex_k__BackingField;
}


AiNpcBattleServantData_o *__fastcall NpcAiCheckTask_Argument__get_Npc(
        NpcAiCheckTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._Npc_k__BackingField;
}


int32_t __fastcall NpcAiCheckTask_Argument__get_State(NpcAiCheckTask_Argument_o *this, const MethodInfo *method)
{
  return this->fields._State_k__BackingField;
}


void __fastcall NpcAiCheckTask_Argument__set_AiStateIndex(
        NpcAiCheckTask_Argument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._AiStateIndex_k__BackingField = value;
}


void __fastcall NpcAiCheckTask_Argument__set_Npc(
        NpcAiCheckTask_Argument_o *this,
        AiNpcBattleServantData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Npc_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._Npc_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall NpcAiCheckTask_Argument__set_State(
        NpcAiCheckTask_Argument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._State_k__BackingField = value;
}