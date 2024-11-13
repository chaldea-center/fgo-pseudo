void __fastcall BattleResultEventFortificationItemComponent___ctor(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Array_o *v8; // x0
  struct System_Int32_array *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1
  System_RuntimeFieldHandle_o v17; // 0:w1.4

  if ( (byte_4B194F0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultEventItemComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v6,
      v7);
    byte_4B194F0 = 1;
  }
  v8 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 3LL);
  v17.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  v9 = (struct System_Int32_array *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v8, v17, 0LL);
  this->fields.workTypeOrder = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.workTypeOrder, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  if ( !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo, v16);
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, v16);
}


bool __fastcall BattleResultEventFortificationItemComponent__IsFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *gaugeListRoot; // x0

  gaugeListRoot = this->fields.gaugeListRoot;
  if ( !gaugeListRoot )
    sub_1BCAA3C(0LL, method);
  return UnityEngine_Transform__get_childCount(gaugeListRoot, 0LL) > 0;
}


void __fastcall BattleResultEventFortificationItemComponent__SetFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        BattleFortificationInfo_array *fortificationInfos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleResultEventFortificationItemComponent_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int32_array *workTypeOrder; // x23
  unsigned __int64 v17; // x24
  __int64 v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_object__o *v29; // x22
  __int64 v30; // x1
  Il2CppObject *Component_object; // x19

  v5 = this;
  if ( (byte_4B194EF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleFortificationInfo__TypeInfo, fortificationInfos, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleFortificationInfo___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
      v12,
      v13);
    this = (BattleResultEventFortificationItemComponent_o *)sub_1BCA7E0(
                                                              &BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo,
                                                              v14,
                                                              v15);
    byte_4B194EF = 1;
  }
  if ( fortificationInfos && *(_QWORD *)&fortificationInfos->max_length )
  {
    workTypeOrder = v5->fields.workTypeOrder;
    if ( !workTypeOrder )
      goto LABEL_18;
    if ( (int)workTypeOrder->max_length >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        v18 = sub_1BCAA2C(
                BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo,
                fortificationInfos,
                method,
                v3);
        System_Object___ctor((Il2CppObject *)v18, 0LL);
        if ( !v18 )
          break;
        *(_QWORD *)(v18 + 24) = v5;
        sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)v5, v19, v20, v21, v22, v23, v24);
        if ( v17 >= workTypeOrder->max_length )
          sub_1BCAA44(v25, v26);
        *(_DWORD *)(v18 + 16) = workTypeOrder->m_Items[v17 + 1];
        v29 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleFortificationInfo__TypeInfo, v26, v27, v28);
        System_Action_object____ctor(
          v29,
          (Il2CppObject *)v18,
          Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
          0LL);
        BasicHelper__ForEach_object_(
          (System_Collections_Generic_IEnumerable_T__o *)fortificationInfos,
          (System_Action_T__o *)v29,
          (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleFortificationInfo___);
        if ( (__int64)++v17 >= (int)workTypeOrder->max_length )
          goto LABEL_11;
      }
LABEL_18:
      sub_1BCAA3C(this, fortificationInfos);
    }
LABEL_11:
    this = (BattleResultEventFortificationItemComponent_o *)v5->fields.gaugeListRoot;
    if ( !this )
      goto LABEL_18;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
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
    BattleResultEventItemComponent__SetItemWindow_45044172((BattleResultEventItemComponent_o *)this, drop, v8);
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
  __int64 v6; // x2
  UnityEngine_Component_o *FortificationWorkType; // x0
  __int64 v8; // x1
  struct BattleResultEventFortificationItemComponent_o *_4__this; // x8
  UnityEngine_Transform_o *gaugeListRoot; // x20
  Il2CppObject *fortificationGaugePrefab; // x21
  UnityEngine_Component_o *v12; // x20

  if ( (byte_4B194F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_FortificationGauge___, info, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B194F1 = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      FortificationWorkType = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                           fortificationGaugePrefab,
                                                           gaugeListRoot,
                                                           (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_FortificationGauge___);
      if ( !FortificationWorkType
        || (v12 = FortificationWorkType,
            FortificationGauge__SetData((FortificationGauge_o *)FortificationWorkType, info, 0LL),
            (FortificationWorkType = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v12, 0LL)) == 0LL) )
      {
LABEL_12:
        sub_1BCAA3C(FortificationWorkType, v8);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FortificationWorkType, 1, 0LL);
    }
  }
}