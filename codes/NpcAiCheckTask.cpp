void NpcAiCheckTask___ctor(
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
  const MethodInfo *v13; // x3
  struct AiNpcBattleServantData_o *v14; // x8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)logicNpcAi);
  this->fields.actiontype = 60;
  this->fields.logicNpcAi = logicNpcAi;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.logicNpcAi, (int32_t)logicNpcAi, v7, v8);
  this->fields.arg = arg;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.arg, (int32_t)arg, v9, v10);
  if ( !arg
    || (Npc_k__BackingField = arg->fields._Npc_k__BackingField) == 0
    || (Npc_k__BackingField = (struct AiNpcBattleServantData_o *)((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, const MethodInfo *))Npc_k__BackingField->klass->vtable._25_get_ActorType.methodPtr)(
                                                                   Npc_k__BackingField,
                                                                   Npc_k__BackingField->klass->vtable._25_get_ActorType.method),
        (v14 = arg->fields._Npc_k__BackingField) == 0) )
  {
    sub_1C6BC60(Npc_k__BackingField, v12);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)this, (int32_t)Npc_k__BackingField, v14->fields.uniqueId, v13);
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

  if ( (byte_4CB957F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__);
    byte_4CB957F = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        v9 = (System_Action_object__o *)sub_1C6BC54(System_Action_BattleLogicTask__TypeInfo),
        System_Action_object____ctor(v9, (Il2CppObject *)this, Method_NpcAiCheckTask__MakeActionTask_b__4_0__, 0),
        !v4) )
  {
    sub_1C6BC60(logicNpcAi, v5);
  }
  System_Collections_Generic_List_object___ForEach(
    v4,
    (System_Action_T__o *)v9,
    (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void NpcAiCheckTask___MakeActionTask_b__4_0(NpcAiCheckTask_o *this, BattleLogicTask_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
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
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  int v14; // w22
  NpcAiCheckTask_Argument_o *v15; // x23
  const MethodInfo *v16; // x4
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4CB9580 & 1) == 0 )
  {
    sub_1C6BA08(&NpcAiCheckTask_Argument_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__);
    byte_4CB9580 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._State_k__BackingField = state;
  v9 = BasicHelper__IndexValue_object__51549620(
         (System_Collections_Generic_List_T__o *)npcList,
         index,
         0,
         (const MethodInfo_31295B4 *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
  this->fields._Npc_k__BackingField = (struct AiNpcBattleServantData_o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Npc_k__BackingField, (int32_t)v9, v10, v11);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0), !npcList) )
    sub_1C6BC60(Npc_k__BackingField, v12);
  v14 = index + 1;
  if ( v14 < npcList->fields._size )
  {
    v15 = (NpcAiCheckTask_Argument_o *)sub_1C6BC54(NpcAiCheckTask_Argument_TypeInfo);
    NpcAiCheckTask_Argument___ctor(v15, state, npcList, v14, v16);
    this->fields.nextNpcArg = v15;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.nextNpcArg, (int32_t)v15, v17, v18);
  }
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
  const MethodInfo *v12; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  CGThumbnailListItem_o *v17; // x0
  int32_t v18; // w1
  const MethodInfo *v19; // x2
  struct AiNpcBattleServantData_o *v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct BattleLogicTask_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  AiNpcBattleServantData_o *v26; // x1
  Il2CppClass **v27; // x0
  __int64 v28; // x8
  System_Collections_Generic_List_object__o *v29; // x0
  Il2CppObject *v30; // x1
  NpcAiCheckTask_Argument_o *nextNpcArg; // x22
  NpcAiCheckTask_o *v32; // x21
  const MethodInfo *v33; // x3
  struct BattleLogicTask_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4CB9581 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&NpcAiCheckTask_TypeInfo);
    byte_4CB9581 = 1;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  v8 = (unsigned int)(this->fields._AiStateIndex_k__BackingField + 1);
  this->fields._AiStateIndex_k__BackingField = v8;
  if ( !Npc_k__BackingField )
    goto LABEL_29;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex(Npc_k__BackingField, v8, 0) )
  {
    v9 = (NpcAiCheckTask_o *)sub_1C6BC54(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v9, logicNpcAi, this, v10);
    if ( taskList )
    {
      items = taskList->fields._items;
      v14 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( items )
      {
        size = taskList->fields._size;
        if ( (unsigned int)size < LODWORD(items->max_length) )
        {
          v16 = &items->obj.klass + size;
          taskList->fields._size = size + 1;
          v16[4] = (Il2CppClass *)v9;
          v17 = (CGThumbnailListItem_o *)(v16 + 4);
          v18 = (int)v9;
LABEL_25:
          sub_1C6B9AC(v17, v18, v11, v12);
          return;
        }
        v28 = v14[4];
        v29 = (System_Collections_Generic_List_object__o *)taskList;
        v30 = (Il2CppObject *)v9;
LABEL_28:
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          v30,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v28 + 192) + 112LL));
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
                                                      0);
  if ( ((unsigned __int8)Npc_k__BackingField & 1) != 0 )
  {
    v20 = this->fields._Npc_k__BackingField;
    if ( !v20 )
      goto LABEL_29;
    if ( !v20->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_29;
      Npc_k__BackingField = (AiNpcBattleServantData_o *)BattleLogicNpcAi__MakeBackStepTask(
                                                          (BattleLogicNpcAi_o *)Npc_k__BackingField,
                                                          v20->fields.uniqueId,
                                                          v19);
      if ( !taskList )
        goto LABEL_29;
      v23 = taskList->fields._items;
      v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( !v23 )
        goto LABEL_29;
      v25 = taskList->fields._size;
      v26 = Npc_k__BackingField;
      if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)Npc_k__BackingField,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &v23->obj.klass + v25;
        taskList->fields._size = v25 + 1;
        v27[4] = (Il2CppClass *)v26;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
      }
    }
  }
  nextNpcArg = this->fields.nextNpcArg;
  if ( nextNpcArg )
  {
    v32 = (NpcAiCheckTask_o *)sub_1C6BC54(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v32, logicNpcAi, nextNpcArg, v33);
    if ( taskList )
    {
      v34 = taskList->fields._items;
      v35 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( v34 )
      {
        v36 = taskList->fields._size;
        if ( (unsigned int)v36 < LODWORD(v34->max_length) )
        {
          v37 = &v34->obj.klass + v36;
          taskList->fields._size = v36 + 1;
          v37[4] = (Il2CppClass *)v32;
          v17 = (CGThumbnailListItem_o *)(v37 + 4);
          v18 = (int)v32;
          goto LABEL_25;
        }
        v28 = v35[4];
        v29 = (System_Collections_Generic_List_object__o *)taskList;
        v30 = (Il2CppObject *)v32;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1C6BC60(Npc_k__BackingField, v8);
  }
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
  const MethodInfo *v3; // x3

  this->fields._Npc_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Npc_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void NpcAiCheckTask_Argument__set_State(NpcAiCheckTask_Argument_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._State_k__BackingField = value;
}