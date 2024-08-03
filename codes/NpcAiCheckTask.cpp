void __fastcall NpcAiCheckTask___ctor(
        NpcAiCheckTask_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        NpcAiCheckTask_Argument_o *arg,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  struct AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  struct AiNpcBattleServantData_o *v12; // x8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  this->fields.actiontype = 60;
  this->fields.logicNpcAi = logicNpcAi;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.logicNpcAi, (int32_t)logicNpcAi, v7, v8);
  this->fields.arg = arg;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.arg, (int32_t)arg, v9, v10);
  if ( !arg
    || (Npc_k__BackingField = arg->fields._Npc_k__BackingField) == 0LL
    || (Npc_k__BackingField = (struct AiNpcBattleServantData_o *)((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, void *))Npc_k__BackingField->klass->vtable._25_get_ActorType.method)(
                                                                   Npc_k__BackingField,
                                                                   Npc_k__BackingField->klass[1]._1.image),
        (v12 = arg->fields._Npc_k__BackingField) == 0LL) )
  {
    sub_1B64324(Npc_k__BackingField);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)this, (int32_t)Npc_k__BackingField, v12->fields.uniqueId, 0LL);
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
  const MethodInfo *v10; // x4
  BattleLogicNpcAi_o *logicNpcAi; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_object__o *v15; // x21

  if ( (byte_49FEFCE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleLogicTask__TypeInfo, logic);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v7);
    sub_1B640C8(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__, v8);
    byte_49FEFCE = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                      logic,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logicNpcAi = this->fields.logicNpcAi;
  if ( !logicNpcAi
    || (BattleLogicNpcAi__AddAiActionTask(
          logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v9,
          this->fields.arg,
          this->fields._AiTimingPriority_k__BackingField,
          v10),
        (logicNpcAi = (BattleLogicNpcAi_o *)this->fields.arg) == 0LL)
    || (NpcAiCheckTask_Argument__AddNextAiCheckTask(
          (NpcAiCheckTask_Argument_o *)logicNpcAi,
          this->fields.logicNpcAi,
          (System_Collections_Generic_List_BattleLogicTask__o *)v9,
          v12),
        v15 = (System_Action_object__o *)sub_1B64314(System_Action_BattleLogicTask__TypeInfo, v13, v14),
        System_Action_object____ctor(v15, (Il2CppObject *)this, Method_NpcAiCheckTask__MakeActionTask_b__4_0__, 0LL),
        !v9) )
  {
    sub_1B64324(logicNpcAi);
  }
  System_Collections_Generic_List_object___ForEach(
    v9,
    (System_Action_T__o *)v15,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall NpcAiCheckTask___MakeActionTask_b__4_0(
        NpcAiCheckTask_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
  int32_t v13; // w3
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int v17; // w22
  NpcAiCheckTask_Argument_o *v18; // x23
  const MethodInfo *v19; // x4
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FEFCF & 1) == 0 )
  {
    sub_1B640C8(&NpcAiCheckTask_Argument_TypeInfo, *(_QWORD *)&state);
    sub_1B640C8(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__, v10);
    byte_49FEFCF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._State_k__BackingField = state;
  v11 = BasicHelper__IndexValue_object__48398780(
          (System_Collections_Generic_List_T__o *)npcList,
          index,
          0LL,
          (const MethodInfo_2E281BC *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
  this->fields._Npc_k__BackingField = (struct AiNpcBattleServantData_o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Npc_k__BackingField, (int32_t)v11, v12, v13);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0LL), !npcList) )
    sub_1B64324(Npc_k__BackingField);
  v17 = index + 1;
  if ( v17 < npcList->fields._size )
  {
    v18 = (NpcAiCheckTask_Argument_o *)sub_1B64314(NpcAiCheckTask_Argument_TypeInfo, v15, v16);
    NpcAiCheckTask_Argument___ctor(v18, state, npcList, v17, v19);
    this->fields.nextNpcArg = v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nextNpcArg, (int32_t)v18, v20, v21);
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
  int32_t v9; // w1
  __int64 v10; // x1
  __int64 v11; // x2
  NpcAiCheckTask_o *v12; // x22
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  int32_t v15; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  ServantStatusBattleListViewItem_o *v20; // x0
  int32_t v21; // w1
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct AiNpcBattleServantData_o *v24; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  struct BattleLogicTask_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  AiNpcBattleServantData_o *v30; // x1
  Il2CppClass **v31; // x0
  __int64 v32; // x8
  System_Collections_Generic_List_object__o *v33; // x0
  Il2CppObject *v34; // x1
  NpcAiCheckTask_Argument_o *nextNpcArg; // x22
  NpcAiCheckTask_o *v36; // x21
  const MethodInfo *v37; // x3
  struct BattleLogicTask_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0

  if ( (byte_49FEFD0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, logicNpcAi);
    sub_1B640C8(&NpcAiCheckTask_TypeInfo, v7);
    byte_49FEFD0 = 1;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  v9 = this->fields._AiStateIndex_k__BackingField + 1;
  this->fields._AiStateIndex_k__BackingField = v9;
  if ( !Npc_k__BackingField )
    goto LABEL_29;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex(Npc_k__BackingField, v9, 0LL) )
  {
    v12 = (NpcAiCheckTask_o *)sub_1B64314(NpcAiCheckTask_TypeInfo, v10, v11);
    NpcAiCheckTask___ctor(v12, logicNpcAi, this, v13);
    if ( taskList )
    {
      items = taskList->fields._items;
      v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( items )
      {
        size = taskList->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v19 = &items->obj.klass + size;
          taskList->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v12;
          v20 = (ServantStatusBattleListViewItem_o *)(v19 + 4);
          v21 = (int)v12;
LABEL_25:
          sub_1B6406C(v20, v21, v14, v15);
          return;
        }
        v32 = v17[4];
        v33 = (System_Collections_Generic_List_object__o *)taskList;
        v34 = (Il2CppObject *)v12;
LABEL_28:
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          v34,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32 + 192) + 112LL));
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
    v24 = this->fields._Npc_k__BackingField;
    if ( !v24 )
      goto LABEL_29;
    if ( !v24->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_29;
      Npc_k__BackingField = (AiNpcBattleServantData_o *)BattleLogicNpcAi__MakeBackStepTask(
                                                          (BattleLogicNpcAi_o *)Npc_k__BackingField,
                                                          v24->fields.uniqueId,
                                                          v23);
      if ( !taskList )
        goto LABEL_29;
      v27 = taskList->fields._items;
      v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( !v27 )
        goto LABEL_29;
      v29 = taskList->fields._size;
      v30 = Npc_k__BackingField;
      if ( (unsigned int)v29 >= v27->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)Npc_k__BackingField,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &v27->obj.klass + v29;
        taskList->fields._size = v29 + 1;
        v31[4] = (Il2CppClass *)v30;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v30, v25, v26);
      }
    }
  }
  nextNpcArg = this->fields.nextNpcArg;
  if ( nextNpcArg )
  {
    v36 = (NpcAiCheckTask_o *)sub_1B64314(NpcAiCheckTask_TypeInfo, v22, v23);
    NpcAiCheckTask___ctor(v36, logicNpcAi, nextNpcArg, v37);
    if ( taskList )
    {
      v38 = taskList->fields._items;
      v39 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( v38 )
      {
        v40 = taskList->fields._size;
        if ( (unsigned int)v40 < v38->max_length )
        {
          v41 = &v38->obj.klass + v40;
          taskList->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)v36;
          v20 = (ServantStatusBattleListViewItem_o *)(v41 + 4);
          v21 = (int)v36;
          goto LABEL_25;
        }
        v32 = v39[4];
        v33 = (System_Collections_Generic_List_object__o *)taskList;
        v34 = (Il2CppObject *)v36;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_1B64324(Npc_k__BackingField);
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

  this->fields._Npc_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._Npc_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall NpcAiCheckTask_Argument__set_State(
        NpcAiCheckTask_Argument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._State_k__BackingField = value;
}