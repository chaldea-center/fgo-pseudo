void __fastcall BattleResultEventFortificationItemComponent___ctor(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_4352118 & 1) == 0 )
  {
    sub_B70694(&BattleResultEventItemComponent_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1);
    byte_4352118 = 1;
  }
  v3 = (System_Array_o *)sub_B706AC(int___TypeInfo, 3LL);
  v11.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v3, v11, 0LL);
  this->fields.workTypeOrder = (struct System_Int32_array *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.workTypeOrder,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  }
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, v10);
}


bool __fastcall BattleResultEventFortificationItemComponent__IsFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *gaugeListRoot; // x0

  gaugeListRoot = this->fields.gaugeListRoot;
  if ( !gaugeListRoot )
    sub_B7076C(0LL, method);
  return UnityEngine_Transform__get_childCount(gaugeListRoot, 0LL) > 0;
}


void __fastcall BattleResultEventFortificationItemComponent__SetFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        BattleFortificationInfo_array *fortificationInfos,
        const MethodInfo *method)
{
  BattleResultEventFortificationItemComponent_o *v4; // x20
  struct System_Int32_array *workTypeOrder; // x23
  unsigned __int64 v6; // x24
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x19
  __int64 v17; // x0

  v4 = this;
  if ( (byte_4352117 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleFortificationInfo___ctor__);
    sub_B70694(&System_Action_BattleFortificationInfo__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_BattleFortificationInfo___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__);
    this = (BattleResultEventFortificationItemComponent_o *)sub_B70694(&BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo);
    byte_4352117 = 1;
  }
  if ( fortificationInfos && *(_QWORD *)&fortificationInfos->max_length )
  {
    workTypeOrder = v4->fields.workTypeOrder;
    if ( !workTypeOrder )
      goto LABEL_19;
    if ( (int)workTypeOrder->max_length >= 1 )
    {
      v6 = 0LL;
      while ( 1 )
      {
        v7 = sub_B70764(BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo);
        BattleResultEventFortificationItemComponent___c__DisplayClass4_0___ctor(
          (BattleResultEventFortificationItemComponent___c__DisplayClass4_0_o *)v7,
          0LL);
        if ( !v7 )
          break;
        *(_QWORD *)(v7 + 24) = v4;
        sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)v4, v8, v9, v10, v11, v12, v13);
        if ( v6 >= workTypeOrder->max_length )
        {
          v17 = sub_B70798(v14);
          sub_B70738(v17, 0LL);
        }
        *(_DWORD *)(v7 + 16) = workTypeOrder->m_Items[v6 + 1];
        v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleFortificationInfo__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v15,
          (Il2CppObject *)v7,
          Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
          (const MethodInfo_264C148 *)Method_System_Action_BattleFortificationInfo___ctor__);
        BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_T__o *)fortificationInfos,
          (System_Action_T__o *)v15,
          (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_BattleFortificationInfo___);
        if ( (__int64)++v6 >= (int)workTypeOrder->max_length )
          goto LABEL_11;
      }
LABEL_19:
      sub_B7076C(this, fortificationInfos);
    }
LABEL_11:
    this = (BattleResultEventFortificationItemComponent_o *)v4->fields.gaugeListRoot;
    if ( !this )
      goto LABEL_19;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleResultEventFortificationItemComponent_o *)UnityEngine_Object__op_Inequality(
                                                              Component_WebViewObject,
                                                              0LL,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_19;
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))Component_WebViewObject->klass[1]._1.castClass)(
        Component_WebViewObject,
        Component_WebViewObject->klass[1]._1.declaringType);
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
    BattleResultEventItemComponent__SetItemWindow_25705704((BattleResultEventItemComponent_o *)this, drop, v8);
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
  UnityEngine_Component_o *FortificationWorkType; // x0
  __int64 v6; // x1
  struct BattleResultEventFortificationItemComponent_o *_4__this; // x8
  UnityEngine_Transform_o *gaugeListRoot; // x20
  UILabel_o *fortificationGaugePrefab; // x21
  UnityEngine_Component_o *v10; // x20

  if ( (byte_434F80C & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_FortificationGauge___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F80C = 1;
  }
  if ( info )
  {
    FortificationWorkType = (UnityEngine_Component_o *)BattleFortificationInfo__GetFortificationWorkType(info, 0LL);
    if ( (_DWORD)FortificationWorkType == this->fields.workType )
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_13;
      fortificationGaugePrefab = (UILabel_o *)_4__this->fields.fortificationGaugePrefab;
      gaugeListRoot = _4__this->fields.gaugeListRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      FortificationWorkType = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                           fortificationGaugePrefab,
                                                           gaugeListRoot,
                                                           (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_FortificationGauge___);
      if ( !FortificationWorkType
        || (v10 = FortificationWorkType,
            FortificationGauge__SetData((FortificationGauge_o *)FortificationWorkType, info, 0LL),
            (FortificationWorkType = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v10, 0LL)) == 0LL) )
      {
LABEL_13:
        sub_B7076C(FortificationWorkType, v6);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FortificationWorkType, 1, 0LL);
    }
  }
}