void NpcAiCheckTask___ctor(
        NpcAiCheckTask_o *this,
        BattleLogicNpcAi_o *logicNpcAi,
        NpcAiCheckTask_Argument_o *arg,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  struct AiNpcBattleServantData_o *v22; // x8

  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)logicNpcAi);
  this->fields.actiontype = 60;
  this->fields.logicNpcAi = logicNpcAi;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.logicNpcAi,
    (int32_t)logicNpcAi,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.arg = arg;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.arg, (int32_t)arg, v13, v14, v15, v16, v17, v18);
  if ( !arg
    || (Npc_k__BackingField = arg->fields._Npc_k__BackingField) == 0
    || (Npc_k__BackingField = (struct AiNpcBattleServantData_o *)((__int64 (__fastcall *)(struct AiNpcBattleServantData_o *, const MethodInfo *))Npc_k__BackingField->klass->vtable._25_get_ActorType.methodPtr)(
                                                                   Npc_k__BackingField,
                                                                   Npc_k__BackingField->klass->vtable._25_get_ActorType.method),
        (v22 = arg->fields._Npc_k__BackingField) == 0) )
  {
    sub_2213CDC(Npc_k__BackingField, v20);
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
  this = (NpcAiCheckTask_o *)(*(__int64 (__fastcall **)(NpcAiCheckTask_o *, struct AiEntity_o *, _QWORD))&this->klass[1]._2.thread_static_fields_offset)(
                               this,
                               arg->fields._AiEnt_k__BackingField,
                               *(_QWORD *)&this->klass[1]._2.token);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_10;
  v4 = v3->fields.arg;
  if ( !v4 )
    goto LABEL_16;
  this = (NpcAiCheckTask_o *)v3->fields.logicNpcAi;
  if ( !this )
    goto LABEL_16;
  this = (NpcAiCheckTask_o *)(*(__int64 (__fastcall **)(NpcAiCheckTask_o *, struct AiEntity_o *, _QWORD))&this->klass[1]._2.field_count)(
                               this,
                               v4->fields._AiEnt_k__BackingField,
                               *(_QWORD *)&this->klass[1]._2.interfaces_count);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_10;
  v5 = v3->fields.arg;
  if ( !v5 )
    goto LABEL_16;
  this = (NpcAiCheckTask_o *)v3->fields.logicNpcAi;
  if ( !this )
    goto LABEL_16;
  this = (NpcAiCheckTask_o *)(*(__int64 (__fastcall **)(NpcAiCheckTask_o *, struct AiEntity_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
                               this,
                               v5->fields._AiEnt_k__BackingField,
                               this->klass[1].vtable._0_Equals.methodPtr);
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
    sub_2213CDC(this, method);
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

  if ( (byte_5973CAC & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_NpcAiCheckTask__MakeActionTask_b__4_0__);
    byte_5973CAC = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        v9 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleLogicTask__TypeInfo),
        System_Action_object____ctor(v9, (Il2CppObject *)this, Method_NpcAiCheckTask__MakeActionTask_b__4_0__, 0),
        !v4) )
  {
    sub_2213CDC(logicNpcAi, v5);
  }
  System_Collections_Generic_List_object___ForEach(
    v4,
    (System_Action_T__o *)v9,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleLogicTask__ForEach__);
  NpcAiCheckTask__AfterMakeActionTask(this, v10);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v4,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void NpcAiCheckTask___MakeActionTask_b__4_0(NpcAiCheckTask_o *this, BattleLogicTask_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  x->fields._AiTimingPriority_k__BackingField = this->fields._AiTimingPriority_k__BackingField;
}


void NpcAiCheckTask_Argument___ctor(
        NpcAiCheckTask_Argument_o *this,
        int32_t state,
        System_Collections_Generic_List_AiNpcBattleServantData__o *npcList,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo_3814C2C *v9; // x3
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  AiNpcBattleServantData_o *Npc_k__BackingField; // x0
  int v19; // w22
  NpcAiCheckTask_Argument_o *v20; // x23
  const MethodInfo *v21; // x4
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5973CAD & 1) == 0 )
  {
    sub_2213A60(&NpcAiCheckTask_Argument_TypeInfo);
    sub_2213A60(&Method_BasicHelper_IndexValue_AiNpcBattleServantData___);
    sub_2213A60(&Method_System_Collections_Generic_List_AiNpcBattleServantData__get_Count__);
    byte_5973CAD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = (const MethodInfo_3814C2C *)Method_BasicHelper_IndexValue_AiNpcBattleServantData___;
  this->fields._State_k__BackingField = state;
  v10 = BasicHelper__IndexValue_object__58805292((System_Collections_Generic_List_T__o *)npcList, index, 0, v9);
  this->fields._Npc_k__BackingField = (struct AiNpcBattleServantData_o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Npc_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  if ( !Npc_k__BackingField || (AiNpcBattleServantData__AddCheckAiProcState(Npc_k__BackingField, state, 0), !npcList) )
    sub_2213CDC(Npc_k__BackingField, v17);
  v19 = index + 1;
  if ( v19 < npcList->fields._size )
  {
    v20 = (NpcAiCheckTask_Argument_o *)sub_2213CCC(NpcAiCheckTask_Argument_TypeInfo);
    NpcAiCheckTask_Argument___ctor(v20, state, npcList, v19, v21);
    this->fields.nextNpcArg = v20;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.nextNpcArg,
      (int32_t)v20,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
}


void NpcAiCheckTask_Argument___ctor_54228396(
        NpcAiCheckTask_Argument_o *this,
        int32_t state,
        AiNpcBattleServantData_o *npcSvt,
        const MethodInfo *method)
{
  NpcAiCheckTask_Argument_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._Npc_k__BackingField = npcSvt;
  v6 = (NpcAiCheckTask_Argument_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.nextNpcArg) = state;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6, (int32_t)npcSvt, v7, v8, v9, v10, v11, v12);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t v21; // w8
  int32_t v22; // w1
  MissionNaviTransitionBoardItem_o *v23; // x0
  struct AiNpcBattleServantData_o *v24; // x8
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  System_Collections_Generic_List_object__o *v27; // x0
  Il2CppObject *v28; // x1
  struct AiNpcBattleServantData_o *v29; // x8
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct BattleLogicTask_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  AiNpcBattleServantData_o *v39; // x1
  Il2CppClass **v40; // x0
  NpcAiCheckTask_Argument_o *nextNpcArg; // x22
  NpcAiCheckTask_o *v42; // x21
  const MethodInfo *v43; // x3
  struct BattleLogicTask_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0

  if ( (byte_5973CAE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&NpcAiCheckTask_TypeInfo);
    byte_5973CAE = 1;
  }
  Npc_k__BackingField = this->fields._Npc_k__BackingField;
  v8 = (unsigned int)(this->fields._AiStateIndex_k__BackingField + 1);
  this->fields._AiStateIndex_k__BackingField = v8;
  if ( !Npc_k__BackingField )
    goto LABEL_33;
  if ( AiNpcBattleServantData__UpdateAiStateTargetIndex(Npc_k__BackingField, v8, 0) )
  {
    v9 = (NpcAiCheckTask_o *)sub_2213CCC(NpcAiCheckTask_TypeInfo);
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
          v21 = size + 1;
          v22 = (int)v9;
          v20[4] = (Il2CppClass *)v9;
          v23 = (MissionNaviTransitionBoardItem_o *)(v20 + 4);
LABEL_29:
          taskList->fields._size = v21;
          sub_2213A04(v23, v22, v11, v12, v13, v14, v15, v16);
          return;
        }
        v26 = v18[4];
        v27 = (System_Collections_Generic_List_object__o *)taskList;
        v28 = (Il2CppObject *)v9;
LABEL_32:
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v28,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26 + 192) + 112LL));
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
    v24 = this->fields._Npc_k__BackingField;
    if ( !v24 )
      goto LABEL_33;
    if ( !v24->fields.isNoBackStep )
    {
      if ( !logicNpcAi )
        goto LABEL_33;
      Npc_k__BackingField = (AiNpcBattleServantData_o *)((((__int64 (__fastcall *)(BattleLogicNpcAi_o *, struct AiEntity_o *, const MethodInfo *))logicNpcAi->klass->vtable._29_IsNotPlayedActionFirstTime.methodPtr)(
                                                            logicNpcAi,
                                                            this->fields._AiEnt_k__BackingField,
                                                            logicNpcAi->klass->vtable._29_IsNotPlayedActionFirstTime.method)
                                                        & 1) != 0
                                                       ? 1LL
                                                       : ((__int64 (__fastcall *)(BattleLogicNpcAi_o *, struct AiEntity_o *, const MethodInfo *))logicNpcAi->klass->vtable._31_IsNotPlayedBackStepFirstTime.methodPtr)(
                                                           logicNpcAi,
                                                           this->fields._AiEnt_k__BackingField,
                                                           logicNpcAi->klass->vtable._31_IsNotPlayedBackStepFirstTime.method));
      v29 = this->fields._Npc_k__BackingField;
      if ( !v29 )
        goto LABEL_33;
      Npc_k__BackingField = (AiNpcBattleServantData_o *)BattleLogicNpcAi__MakeBackStepTask(
                                                          (BattleLogicNpcAi_o *)Npc_k__BackingField,
                                                          v29->fields.uniqueId,
                                                          (unsigned __int8)Npc_k__BackingField & 1,
                                                          v25);
      if ( !taskList )
        goto LABEL_33;
      v36 = taskList->fields._items;
      v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( !v36 )
        goto LABEL_33;
      v38 = taskList->fields._size;
      v39 = Npc_k__BackingField;
      if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)Npc_k__BackingField,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &v36->obj.klass + v38;
        taskList->fields._size = v38 + 1;
        v40[4] = (Il2CppClass *)v39;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v39, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  nextNpcArg = this->fields.nextNpcArg;
  if ( nextNpcArg )
  {
    v42 = (NpcAiCheckTask_o *)sub_2213CCC(NpcAiCheckTask_TypeInfo);
    NpcAiCheckTask___ctor(v42, logicNpcAi, nextNpcArg, v43);
    if ( taskList )
    {
      v44 = taskList->fields._items;
      v45 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++taskList->fields._version;
      if ( v44 )
      {
        v46 = taskList->fields._size;
        if ( (unsigned int)v46 < LODWORD(v44->max_length) )
        {
          v47 = &v44->obj.klass + v46;
          v21 = v46 + 1;
          v22 = (int)v42;
          v47[4] = (Il2CppClass *)v42;
          v23 = (MissionNaviTransitionBoardItem_o *)(v47 + 4);
          goto LABEL_29;
        }
        v26 = v45[4];
        v27 = (System_Collections_Generic_List_object__o *)taskList;
        v28 = (Il2CppObject *)v42;
        goto LABEL_32;
      }
    }
LABEL_33:
    sub_2213CDC(Npc_k__BackingField, v8);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AiEnt_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AiEnt_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Npc_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Npc_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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