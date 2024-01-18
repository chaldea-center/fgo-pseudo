void __fastcall BattleResultEventFortificationItemComponent___ctor(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_4187E93 & 1) == 0 )
  {
    sub_B2C35C(&BattleResultEventItemComponent_TypeInfo, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v4);
    byte_4187E93 = 1;
  }
  v5 = (System_Array_o *)sub_B2C374(int___TypeInfo, 3LL);
  v13.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v5, v13, 0LL);
  this->fields.workTypeOrder = (struct System_Int32_array *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.workTypeOrder,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  }
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, v12);
}


bool __fastcall BattleResultEventFortificationItemComponent__IsFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *gaugeListRoot; // x0

  gaugeListRoot = this->fields.gaugeListRoot;
  if ( !gaugeListRoot )
    sub_B2C434(0LL, method);
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
  __int64 v10; // x1
  struct System_Int32_array *workTypeOrder; // x23
  unsigned __int64 v12; // x24
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x19
  __int64 v23; // x0

  v4 = this;
  if ( (byte_4187E92 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleFortificationInfo___ctor__, fortificationInfos);
    sub_B2C35C(&System_Action_BattleFortificationInfo__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattleFortificationInfo___, v6);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIGrid___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(
      &Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
      v9);
    this = (BattleResultEventFortificationItemComponent_o *)sub_B2C35C(
                                                              &BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo,
                                                              v10);
    byte_4187E92 = 1;
  }
  if ( fortificationInfos && *(_QWORD *)&fortificationInfos->max_length )
  {
    workTypeOrder = v4->fields.workTypeOrder;
    if ( !workTypeOrder )
      goto LABEL_19;
    if ( (int)workTypeOrder->max_length >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = sub_B2C42C(BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo);
        BattleResultEventFortificationItemComponent___c__DisplayClass4_0___ctor(
          (BattleResultEventFortificationItemComponent___c__DisplayClass4_0_o *)v13,
          0LL);
        if ( !v13 )
          break;
        *(_QWORD *)(v13 + 24) = v4;
        sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)v4, v14, v15, v16, v17, v18, v19);
        if ( v12 >= workTypeOrder->max_length )
        {
          v23 = sub_B2C460(v20);
          sub_B2C400(v23, 0LL);
        }
        *(_DWORD *)(v13 + 16) = workTypeOrder->m_Items[v12 + 1];
        v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleFortificationInfo__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v21,
          (Il2CppObject *)v13,
          Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_BattleFortificationInfo___ctor__);
        BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_T__o *)fortificationInfos,
          (System_Action_T__o *)v21,
          (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattleFortificationInfo___);
        if ( (__int64)++v12 >= (int)workTypeOrder->max_length )
          goto LABEL_11;
      }
LABEL_19:
      sub_B2C434(this, fortificationInfos);
    }
LABEL_11:
    this = (BattleResultEventFortificationItemComponent_o *)v4->fields.gaugeListRoot;
    if ( !this )
      goto LABEL_19;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
    BattleResultEventItemComponent__SetItemWindow_25644588((BattleResultEventItemComponent_o *)this, drop, v8);
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
  UILabel_o *fortificationGaugePrefab; // x21
  UnityEngine_Component_o *v11; // x20

  if ( (byte_4185092 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_FortificationGauge___, info);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4185092 = 1;
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
                                                           (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_FortificationGauge___);
      if ( !FortificationWorkType
        || (v11 = FortificationWorkType,
            FortificationGauge__SetData((FortificationGauge_o *)FortificationWorkType, info, 0LL),
            (FortificationWorkType = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v11, 0LL)) == 0LL) )
      {
LABEL_13:
        sub_B2C434(FortificationWorkType, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FortificationWorkType, 1, 0LL);
    }
  }
}