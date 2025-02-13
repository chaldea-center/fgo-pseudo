void __fastcall NpcAiCheckTask___ctor(
        NpcAiCheckTask_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        NpcAiCheckTask_Argument_o *arg,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v20; // x1
  struct AiNpcBattleServantData_o *v21; // x8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 60;
  this->fields.logicNpcAi = logicNpcAi;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.logicNpcAi, (int64_t)logicNpcAi, v7, v8, v9, v10, v11, v12);
  this->fields.arg = arg;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.arg, (int64_t)arg, v13, v14, v15, v16, v17, v18);
  if ( !arg
    || (Npc_k__BackingField = arg->fields._Npc_k__BackingField) == 0LL
    || (Npc_k__BackingField = (struct AiNpcBattleServantData_o *)((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, void *))Npc_k__BackingField->klass->vtable._25_get_ActorType.method)(
                                                                   Npc_k__BackingField,
                                                                   Npc_k__BackingField->klass[1]._1.image),
        (v21 = arg->fields._Npc_k__BackingField) == 0LL) )
  {
    sub_1C22094(Npc_k__BackingField, v20);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)this, (int32_t)Npc_k__BackingField, v21->fields.uniqueId, 0LL);
}


BattleLogicTask_array *__fastcall NpcAiCheckTask__MakeActionTask(
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

  if ( (byte_4BDF2C2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__);
    byte_4BDF2C2 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logicNpcAi = this->fields.logicNpcAi;
  if ( !logicNpcAi
    || (BattleLogicNpcAi__AddAiActionTask(
          logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v4,
          this->fields.arg,
          this->fields._AiTimingPriority_k__BackingField,
          v6),
        (logicNpcAi = (BattleLogicNpcAi_o *)this->fields.arg) == 0LL)
    || (NpcAiCheckTask_Argument__AddNextAiCheckTask(
          (NpcAiCheckTask_Argument_o *)logicNpcAi,
          this->fields.logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v4,
          v8),
        v9 = (System_Action_object__o *)sub_1C22084(System_Action_BattleLogicTask__TypeInfo),
        System_Action_object____ctor(v9, (Il2CppObject *)this, Method_NpcAiCheckTask__MakeActionTask_b__4_0__, 0LL),
        !v4) )
  {
    sub_1C22094(logicNpcAi, v5);
  }
  System_Collections_Generic_List_object___ForEach(
    v4,
    (System_Action_T__o *)v9,
    (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall NpcAiCheckTask___MakeActionTask_b__4_0(
        NpcAiCheckTask_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  BattleLogicTask__SetAiPriority(x, this->fields._AiTimingPriority_k__BackingField, 0LL);
}


void __fastcall NpcAiCheckTask_Argument___ctor(
        NpcAiCheckTask_Argument_o *this,
        int32_t state,
        System_Collections_Generic_List_AiNpcBattleServantData__o *npcList,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  int v18; // w22
  NpcAiCheckTask_Argument_o *v19; // x23
  const MethodInfo *v20; // x4
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BDF2C3 & 1) == 0 )
  {
    sub_1C21E38(&NpcAiCheckTask_Argument_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
    sub_1C21E38(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__);
    byte_4BDF2C3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._State_k__BackingField = state;
  v9 = BasicHelper__IndexValue_object__49932624(
         (System_Collections_Generic_List_T__o *)npcList,
         index,
         0LL,
         (const MethodInfo_2F9E950 *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
  this->fields._Npc_k__BackingField = (struct AiNpcBattleServantData_o *)v9;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._Npc_k__BackingField,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0LL), !npcList) )
    sub_1C22094(Npc_k__BackingField, v16);
  v18 = index + 1;
  if ( v18 < npcList->fields._size )
  {
    v19 = (NpcAiCheckTask_Argument_o *)sub_1C22084(NpcAiCheckTask_Argument_TypeInfo);
    NpcAiCheckTask_Argument___ctor(v19, state, npcList, v18, v20);
    this->fields.nextNpcArg = v19;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.nextNpcArg, (int64_t)v19, v21, v22, v23, v24, v25, v26);
  }
}


void __fastcall NpcAiCheckTask_Argument__AddNextAiCheckTask(
        NpcAiCheckTask_Argument_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        const MethodInfo *method)
{
  int64_t Npc_k__BackingField; // x0
  __int64 v8; // x1
  NpcAiCheckTask_o *v9; // x22
  const MethodInfo *v10; // x3
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  PartyOrganizationUtility_o *v21; // x0
  int64_t v22; // x1
  const MethodInfo *v23; // x2
  struct AiNpcBattleServantData_o *v24; // x8
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct BattleLogicTask_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  int64_t v34; // x1
  Il2CppClass **v35; // x0
  __int64 v36; // x8
  System_Collections_Generic_List_object__o *v37; // x0
  Il2CppObject *v38; // x1
  NpcAiCheckTask_Argument_o *nextNpcArg; // x22
  NpcAiCheckTask_o *v40; // x21
  const MethodInfo *v41; // x3
  struct BattleLogicTask_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0

  if ( (byte_4BDF2C4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&NpcAiCheckTask_TypeInfo);
    byte_4BDF2C4 = 1;
  }
  Npc_k__BackingField = (int64_t)this->fields._Npc_k__BackingField;
  v8 = (unsigned int)(this->fields._AiStateIndex_k__BackingField + 1);
  this->fields._AiStateIndex_k__BackingField = v8;
  if ( !Npc_k__BackingField )
    goto LABEL_29;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex((AiNpcBattleServantData_o *)Npc_k__BackingField, v8, 0LL) )
  {
    v9 = (NpcAiCheckTask_o *)sub_1C22084(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v9, logicNpcAi, this, v10);
    if ( taskList )
    {
      items = taskList->fields._items;
      v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( items )
      {
        size = taskList->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v20 = &items->obj.klass + size;
          taskList->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v9;
          v21 = (PartyOrganizationUtility_o *)(v20 + 4);
          v22 = (int64_t)v9;
LABEL_25:
          sub_1C21DDC(v21, v22, v11, v12, v13, v14, v15, v16);
          return;
        }
        v36 = v18[4];
        v37 = (System_Collections_Generic_List_object__o *)taskList;
        v38 = (Il2CppObject *)v9;
LABEL_28:
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          v38,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36 + 192) + 112LL));
        return;
      }
    }
    goto LABEL_29;
  }
  Npc_k__BackingField = (int64_t)this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField )
    goto LABEL_29;
  Npc_k__BackingField = AiNpcBattleServantData__RemoveCheckAiProcState(
                          (AiNpcBattleServantData_o *)Npc_k__BackingField,
                          this->fields._State_k__BackingField,
                          0LL);
  if ( (Npc_k__BackingField & 1) != 0 )
  {
    v24 = this->fields._Npc_k__BackingField;
    if ( !v24 )
      goto LABEL_29;
    if ( !v24->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_29;
      Npc_k__BackingField = (int64_t)BattleLogicNpcAi__MakeBackStepTask(
                                       (BattleLogicNpcAi_o *)Npc_k__BackingField,
                                       v24->fields.uniqueId,
                                       v23);
      if ( !taskList )
        goto LABEL_29;
      v31 = taskList->fields._items;
      v32 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( !v31 )
        goto LABEL_29;
      v33 = taskList->fields._size;
      v34 = Npc_k__BackingField;
      if ( (unsigned int)v33 >= v31->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)Npc_k__BackingField,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &v31->obj.klass + v33;
        taskList->fields._size = v33 + 1;
        v35[4] = (Il2CppClass *)v34;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), v34, v25, v26, v27, v28, v29, v30);
      }
    }
  }
  nextNpcArg = this->fields.nextNpcArg;
  if ( nextNpcArg )
  {
    v40 = (NpcAiCheckTask_o *)sub_1C22084(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v40, logicNpcAi, nextNpcArg, v41);
    if ( taskList )
    {
      v42 = taskList->fields._items;
      v43 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( v42 )
      {
        v44 = taskList->fields._size;
        if ( (unsigned int)v44 < v42->max_length )
        {
          v45 = &v42->obj.klass + v44;
          taskList->fields._size = v44 + 1;
          v45[4] = (Il2CppClass *)v40;
          v21 = (PartyOrganizationUtility_o *)(v45 + 4);
          v22 = (int64_t)v40;
          goto LABEL_25;
        }
        v36 = v43[4];
        v37 = (System_Collections_Generic_List_object__o *)taskList;
        v38 = (Il2CppObject *)v40;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1C22094(Npc_k__BackingField, v8);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Npc_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._Npc_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall NpcAiCheckTask_Argument__set_State(
        NpcAiCheckTask_Argument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._State_k__BackingField = value;
}