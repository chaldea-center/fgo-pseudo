void __fastcall BattleResultEventFortificationItemComponent___ctor(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  struct System_Int32_array *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1
  System_RuntimeFieldHandle_o v14; // 0:w1.4

  if ( (byte_4C00BD4 & 1) == 0 )
  {
    sub_1C2E12C(&BattleResultEventItemComponent_TypeInfo, method);
    sub_1C2E12C(&int___TypeInfo, v3);
    sub_1C2E12C(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v4);
    byte_4C00BD4 = 1;
  }
  v5 = (System_Array_o *)sub_1C2E1D4(int___TypeInfo, 3LL);
  v14.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  v6 = (struct System_Int32_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63142920(v5, v14, 0LL);
  this->fields.workTypeOrder = v6;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.workTypeOrder, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, v13);
}


bool __fastcall BattleResultEventFortificationItemComponent__IsFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *gaugeListRoot; // x0

  gaugeListRoot = this->fields.gaugeListRoot;
  if ( !gaugeListRoot )
    sub_1C2E388(0LL, method);
  return UnityEngine_Transform__get_childCount(gaugeListRoot, 0LL) > 0;
}


void __fastcall BattleResultEventFortificationItemComponent__SetFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        BattleFortificationInfo_array *fortificationInfos,
        const MethodInfo *method)
{
  BattleResultEventFortificationItemComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Int32_array *workTypeOrder; // x23
  unsigned __int64 v11; // x24
  __int64 v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x1
  System_Action_object__o *v21; // x22
  Il2CppObject *Component_object; // x19

  v4 = this;
  if ( (byte_4C00BD3 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_BattleFortificationInfo__TypeInfo, fortificationInfos);
    sub_1C2E12C(&Method_BasicHelper_ForEach_BattleFortificationInfo___, v5);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UIGrid___, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(
      &Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
      v8);
    this = (BattleResultEventFortificationItemComponent_o *)sub_1C2E12C(
                                                              &BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo,
                                                              v9);
    byte_4C00BD3 = 1;
  }
  if ( fortificationInfos && *(_QWORD *)&fortificationInfos->max_length )
  {
    workTypeOrder = v4->fields.workTypeOrder;
    if ( !workTypeOrder )
      goto LABEL_18;
    if ( (int)workTypeOrder->max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = sub_1C2E378(BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v12, 0LL);
        if ( !v12 )
          break;
        *(_QWORD *)(v12 + 24) = v4;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)v4, v13, v14, v15, v16, v17, v18);
        if ( v11 >= workTypeOrder->max_length )
          sub_1C2E390(v19, v20);
        *(_DWORD *)(v12 + 16) = workTypeOrder->m_Items[v11 + 1];
        v21 = (System_Action_object__o *)sub_1C2E378(System_Action_BattleFortificationInfo__TypeInfo);
        System_Action_object____ctor(
          v21,
          (Il2CppObject *)v12,
          Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
          0LL);
        BasicHelper__ForEach_object_(
          (System_Collections_Generic_IEnumerable_T__o *)fortificationInfos,
          (System_Action_T__o *)v21,
          (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_BattleFortificationInfo___);
        if ( (__int64)++v11 >= (int)workTypeOrder->max_length )
          goto LABEL_11;
      }
LABEL_18:
      sub_1C2E388(this, fortificationInfos);
    }
LABEL_11:
    this = (BattleResultEventFortificationItemComponent_o *)v4->fields.gaugeListRoot;
    if ( !this )
      goto LABEL_18;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleResultEventFortificationItemComponent_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)Component_object,
                                                              0LL,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_18;
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Component_object->klass->vtable[8].method)(
        Component_object,
        Component_object->klass->vtable[9].methodPtr);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventFortificationItemComponent__setResultData(
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
    BattleResultEventItemComponent__SetItemWindow_45785288((BattleResultEventItemComponent_o *)this, drop, v8);
  }
}


void __fastcall BattleResultEventFortificationItemComponent___c__DisplayClass4_0___ctor(
        BattleResultEventFortificationItemComponent___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultEventFortificationItemComponent___c__DisplayClass4_0___SetFortificationInfos_b__0(
        BattleResultEventFortificationItemComponent___c__DisplayClass4_0_o *this,
        BattleFortificationInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *FortificationWorkType; // x0
  __int64 v7; // x1
  struct BattleResultEventFortificationItemComponent_o *_4__this; // x8
  UnityEngine_Transform_o *gaugeListRoot; // x20
  Il2CppObject *fortificationGaugePrefab; // x21
  UnityEngine_Component_o *v11; // x20

  if ( (byte_4C00BD5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_FortificationGauge___, info);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4C00BD5 = 1;
  }
  if ( info )
  {
    FortificationWorkType = (UnityEngine_Component_o *)BattleFortificationInfo__GetFortificationWorkType(info, 0LL);
    if ( (_DWORD)FortificationWorkType == this->fields.workType )
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_12;
      fortificationGaugePrefab = (Il2CppObject *)_4__this->fields.fortificationGaugePrefab;
      gaugeListRoot = _4__this->fields.gaugeListRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      FortificationWorkType = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__50692032(
                                                           fortificationGaugePrefab,
                                                           gaugeListRoot,
                                                           (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_FortificationGauge___);
      if ( !FortificationWorkType
        || (v11 = FortificationWorkType,
            FortificationGauge__SetData((FortificationGauge_o *)FortificationWorkType, info, 0LL),
            (FortificationWorkType = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v11, 0LL)) == 0LL) )
      {
LABEL_12:
        sub_1C2E388(FortificationWorkType, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FortificationWorkType, 1, 0LL);
    }
  }
}