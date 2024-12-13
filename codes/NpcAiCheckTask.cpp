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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.logicNpcAi, (int64_t)logicNpcAi, v7, v8, v9, v10, v11, v12);
  this->fields.arg = arg;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.arg, (int64_t)arg, v13, v14, v15, v16, v17, v18);
  if ( !arg
    || (Npc_k__BackingField = arg->fields._Npc_k__BackingField) == 0LL
    || (Npc_k__BackingField = (struct AiNpcBattleServantData_o *)((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, void *))Npc_k__BackingField->klass->vtable._25_get_ActorType.method)(
                                                                   Npc_k__BackingField,
                                                                   Npc_k__BackingField->klass[1]._1.image),
        (v21 = arg->fields._Npc_k__BackingField) == 0LL) )
  {
    sub_1BD36B4(Npc_k__BackingField, v20);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)this, (int32_t)Npc_k__BackingField, v21->fields.uniqueId, 0LL);
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

  if ( (byte_4B39E7A & 1) == 0 )
  {
    sub_1BD3458(&System_Action_BattleLogicTask__TypeInfo, logic);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v6);
    sub_1BD3458(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v7);
    sub_1BD3458(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__, v8);
    byte_4B39E7A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        v14 = (System_Action_object__o *)sub_1BD36A4(System_Action_BattleLogicTask__TypeInfo),
        System_Action_object____ctor(v14, (Il2CppObject *)this, Method_NpcAiCheckTask__MakeActionTask_b__4_0__, 0LL),
        !v9) )
  {
    sub_1BD36B4(logicNpcAi, v10);
  }
  System_Collections_Generic_List_object___ForEach(
    v9,
    (System_Action_T__o *)v14,
    (const MethodInfo_35C17D0 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall NpcAiCheckTask___MakeActionTask_b__4_0(
        NpcAiCheckTask_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  int v20; // w22
  NpcAiCheckTask_Argument_o *v21; // x23
  const MethodInfo *v22; // x4
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B39E7B & 1) == 0 )
  {
    sub_1BD3458(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state);
    sub_1BD3458(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v10);
    byte_4B39E7B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._State_k__BackingField = state;
  v11 = BasicHelper__IndexValue_object__49414608(
          (System_Collections_Generic_List_T__o *)npcList,
          index,
          0LL,
          (const MethodInfo_2F201D0 *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
  this->fields._Npc_k__BackingField = (struct AiNpcBattleServantData_o *)v11;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields._Npc_k__BackingField,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0LL), !npcList) )
    sub_1BD36B4(Npc_k__BackingField, v18);
  v20 = index + 1;
  if ( v20 < npcList->fields._size )
  {
    v21 = (NpcAiCheckTask_Argument_o *)sub_1BD36A4(NpcAiCheckTask_Argument_TypeInfo);
    NpcAiCheckTask_Argument___ctor(v21, state, npcList, v20, v22);
    this->fields.nextNpcArg = v21;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.nextNpcArg, (int64_t)v21, v23, v24, v25, v26, v27, v28);
  }
}


void __fastcall NpcAiCheckTask_Argument__AddNextAiCheckTask(
        NpcAiCheckTask_Argument_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int64_t Npc_k__BackingField; // x0
  __int64 v9; // x1
  NpcAiCheckTask_o *v10; // x22
  const MethodInfo *v11; // x3
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  PartyOrganizationUtility_o *v22; // x0
  int64_t v23; // x1
  const MethodInfo *v24; // x2
  struct AiNpcBattleServantData_o *v25; // x8
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct BattleLogicTask_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0
  __int64 v37; // x8
  System_Collections_Generic_List_object__o *v38; // x0
  Il2CppObject *v39; // x1
  NpcAiCheckTask_Argument_o *nextNpcArg; // x22
  NpcAiCheckTask_o *v41; // x21
  const MethodInfo *v42; // x3
  struct BattleLogicTask_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0

  if ( (byte_4B39E7C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, logicNpcAi);
    sub_1BD3458(&NpcAiCheckTask_TypeInfo, v7);
    byte_4B39E7C = 1;
  }
  Npc_k__BackingField = (int64_t)this->fields._Npc_k__BackingField;
  v9 = (unsigned int)(this->fields._AiStateIndex_k__BackingField + 1);
  this->fields._AiStateIndex_k__BackingField = v9;
  if ( !Npc_k__BackingField )
    goto LABEL_29;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex((AiNpcBattleServantData_o *)Npc_k__BackingField, v9, 0LL) )
  {
    v10 = (NpcAiCheckTask_o *)sub_1BD36A4(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v10, logicNpcAi, this, v11);
    if ( taskList )
    {
      items = taskList->fields._items;
      v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( items )
      {
        size = taskList->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v21 = &items->obj.klass + size;
          taskList->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v10;
          v22 = (PartyOrganizationUtility_o *)(v21 + 4);
          v23 = (int64_t)v10;
LABEL_25:
          sub_1BD33FC(v22, v23, v12, v13, v14, v15, v16, v17);
          return;
        }
        v37 = v19[4];
        v38 = (System_Collections_Generic_List_object__o *)taskList;
        v39 = (Il2CppObject *)v10;
LABEL_28:
        System_Collections_Generic_List_object___AddWithResize(
          v38,
          v39,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v37 + 192) + 112LL));
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
    v25 = this->fields._Npc_k__BackingField;
    if ( !v25 )
      goto LABEL_29;
    if ( !v25->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_29;
      Npc_k__BackingField = (int64_t)BattleLogicNpcAi__MakeBackStepTask(
                                       (BattleLogicNpcAi_o *)Npc_k__BackingField,
                                       v25->fields.uniqueId,
                                       v24);
      if ( !taskList )
        goto LABEL_29;
      v32 = taskList->fields._items;
      v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( !v32 )
        goto LABEL_29;
      v34 = taskList->fields._size;
      v35 = Npc_k__BackingField;
      if ( (unsigned int)v34 >= v32->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)Npc_k__BackingField,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &v32->obj.klass + v34;
        taskList->fields._size = v34 + 1;
        v36[4] = (Il2CppClass *)v35;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
      }
    }
  }
  nextNpcArg = this->fields.nextNpcArg;
  if ( nextNpcArg )
  {
    v41 = (NpcAiCheckTask_o *)sub_1BD36A4(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v41, logicNpcAi, nextNpcArg, v42);
    if ( taskList )
    {
      v43 = taskList->fields._items;
      v44 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( v43 )
      {
        v45 = taskList->fields._size;
        if ( (unsigned int)v45 < v43->max_length )
        {
          v46 = &v43->obj.klass + v45;
          taskList->fields._size = v45 + 1;
          v46[4] = (Il2CppClass *)v41;
          v22 = (PartyOrganizationUtility_o *)(v46 + 4);
          v23 = (int64_t)v41;
          goto LABEL_25;
        }
        v37 = v44[4];
        v38 = (System_Collections_Generic_List_object__o *)taskList;
        v39 = (Il2CppObject *)v41;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1BD36B4(Npc_k__BackingField, v9);
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
  sub_1BD33FC(
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