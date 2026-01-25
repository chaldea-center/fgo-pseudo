void BattleResultEventFortificationItemComponent___ctor(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  struct System_Int32_array *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4CF1F5B & 1) == 0 )
  {
    sub_1C7BAE8(&BattleResultEventItemComponent_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1);
    byte_4CF1F5B = 1;
  }
  v3 = (System_Array_o *)sub_1C7BB90(int___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  v5 = (struct System_Int32_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64876136(v3, v4, 0);
  this->fields.workTypeOrder = v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.workTypeOrder, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, v12);
}


bool BattleResultEventFortificationItemComponent__IsFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *gaugeListRoot; // x0

  gaugeListRoot = this->fields.gaugeListRoot;
  if ( !gaugeListRoot )
    sub_1C7BD40(0, method);
  return UnityEngine_Transform__get_childCount(gaugeListRoot, 0) > 0;
}


void BattleResultEventFortificationItemComponent__SetFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        BattleFortificationInfo_array *fortificationInfos,
        const MethodInfo *method)
{
  BattleResultEventFortificationItemComponent_o *v4; // x20
  struct System_Int32_array *workTypeOrder; // x23
  unsigned __int64 v6; // x24
  __int64 v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x0
  System_Action_object__o *v15; // x22
  Il2CppObject *Component_object; // x19

  v4 = this;
  if ( (byte_4CF1F5A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_BattleFortificationInfo__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_BattleFortificationInfo___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__);
    this = (BattleResultEventFortificationItemComponent_o *)sub_1C7BAE8(&BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo);
    byte_4CF1F5A = 1;
  }
  if ( fortificationInfos && fortificationInfos->max_length )
  {
    workTypeOrder = v4->fields.workTypeOrder;
    if ( !workTypeOrder )
      goto LABEL_18;
    if ( SLODWORD(workTypeOrder->max_length) >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = sub_1C7BD34(BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v7, 0);
        if ( !v7 )
          break;
        *(_QWORD *)(v7 + 24) = v4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v4, v8, v9, v10, v11, v12, v13);
        if ( v6 >= LODWORD(workTypeOrder->max_length) )
          sub_1C7BD48(v14);
        *(_DWORD *)(v7 + 16) = workTypeOrder->m_Items[v6];
        v15 = (System_Action_object__o *)sub_1C7BD34(System_Action_BattleFortificationInfo__TypeInfo);
        System_Action_object____ctor(
          v15,
          (Il2CppObject *)v7,
          Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
          0);
        BasicHelper__ForEach_object_(
          (System_Collections_Generic_IEnumerable_T__o *)fortificationInfos,
          (System_Action_T__o *)v15,
          (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_BattleFortificationInfo___);
        if ( (__int64)++v6 >= SLODWORD(workTypeOrder->max_length) )
          goto LABEL_11;
      }
LABEL_18:
      sub_1C7BD40(this, fortificationInfos);
    }
LABEL_11:
    this = (BattleResultEventFortificationItemComponent_o *)v4->fields.gaugeListRoot;
    if ( !this )
      goto LABEL_18;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleResultEventFortificationItemComponent_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)Component_object,
                                                              0,
                                                              0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_18;
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
        Component_object,
        Component_object->klass->vtable[8].method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleResultEventFortificationItemComponent__setResultData(
        BattleResultEventFortificationItemComponent_o *this,
        BattleDropItem_array *drop,
        int32_t eventId,
        QuestRewardInfo_array *resultBoostItemRewardInfos,
        QuestRewardInfo_array *rewardInfos,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x2

  if ( !drop )
    this->fields.currentGroupIndex = -1;
  this->fields.currentEventId = eventId;
  if ( eventId >= 1 )
  {
    BattleResultEventItemComponent__createDropInfo(
      (BattleResultEventItemComponent_o *)this,
      drop,
      *(const MethodInfo **)&eventId);
    BattleResultEventItemComponent__SetItemWindow_48334120((BattleResultEventItemComponent_o *)this, drop, v8);
  }
}


void BattleResultEventFortificationItemComponent___c__DisplayClass4_0___ctor(
        BattleResultEventFortificationItemComponent___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultEventFortificationItemComponent___c__DisplayClass4_0___SetFortificationInfos_b__0(
        BattleResultEventFortificationItemComponent___c__DisplayClass4_0_o *this,
        BattleFortificationInfo_o *info,
        const MethodInfo *method)
{
  UnityEngine_Component_o *FortificationWorkType; // x0
  __int64 v6; // x1
  struct BattleResultEventFortificationItemComponent_o *_4__this; // x8
  UnityEngine_Transform_o *gaugeListRoot; // x20
  Il2CppObject *fortificationGaugePrefab; // x21
  UnityEngine_Component_o *v10; // x20

  if ( (byte_4CF1F5C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_FortificationGauge___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1F5C = 1;
  }
  if ( info )
  {
    FortificationWorkType = (UnityEngine_Component_o *)BattleFortificationInfo__GetFortificationWorkType(info, 0);
    if ( (_DWORD)FortificationWorkType == this->fields.workType )
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_12;
      fortificationGaugePrefab = (Il2CppObject *)_4__this->fields.fortificationGaugePrefab;
      gaugeListRoot = _4__this->fields.gaugeListRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      FortificationWorkType = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__52412380(
                                                           fortificationGaugePrefab,
                                                           gaugeListRoot,
                                                           (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_FortificationGauge___);
      if ( !FortificationWorkType
        || (v10 = FortificationWorkType,
            FortificationGauge__SetData((FortificationGauge_o *)FortificationWorkType, info, 0),
            (FortificationWorkType = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v10, 0)) == 0) )
      {
LABEL_12:
        sub_1C7BD40(FortificationWorkType, v6);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FortificationWorkType, 1, 0);
    }
  }
}