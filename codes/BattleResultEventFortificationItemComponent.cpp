void __fastcall BattleResultEventFortificationItemComponent___ctor(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  System_RuntimeFieldHandle_o v14; // 0:w1.4

  if ( (byte_40FA374 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultEventItemComponent_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v5);
    byte_40FA374 = 1;
  }
  v6 = (System_Array_o *)sub_B17014(int___TypeInfo, 3LL, v2);
  v14.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v14, 0LL);
  this->fields.workTypeOrder = (struct System_Int32_array *)v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.workTypeOrder,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  }
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, v13);
}


bool __fastcall BattleResultEventFortificationItemComponent__IsFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *gaugeListRoot; // x0

  gaugeListRoot = this->fields.gaugeListRoot;
  if ( !gaugeListRoot )
    sub_B170D4();
  return UnityEngine_Transform__get_childCount(gaugeListRoot, 0LL) > 0;
}


void __fastcall BattleResultEventFortificationItemComponent__SetFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        BattleFortificationInfo_array *fortificationInfos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Int32_array *workTypeOrder; // x23
  unsigned __int64 v14; // x24
  __int64 v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x22
  UnityEngine_Component_o *gaugeListRoot; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x19

  if ( (byte_40FA373 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleFortificationInfo___ctor__, fortificationInfos);
    sub_B16FFC(&System_Action_BattleFortificationInfo__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleFortificationInfo___, v8);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIGrid___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(
      &Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
      v11);
    sub_B16FFC(&BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo, v12);
    byte_40FA373 = 1;
  }
  if ( fortificationInfos && *(_QWORD *)&fortificationInfos->max_length )
  {
    workTypeOrder = this->fields.workTypeOrder;
    if ( !workTypeOrder )
      goto LABEL_19;
    if ( (int)workTypeOrder->max_length >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        v15 = sub_B170CC(
                BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo,
                fortificationInfos,
                method,
                v3,
                v4);
        BattleResultEventFortificationItemComponent___c__DisplayClass4_0___ctor(
          (BattleResultEventFortificationItemComponent___c__DisplayClass4_0_o *)v15,
          0LL);
        if ( !v15 )
          break;
        *(_QWORD *)(v15 + 24) = this;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v15 + 24),
          (System_Int32_array **)this,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        if ( v14 >= workTypeOrder->max_length )
        {
          sub_B17100(v22, v23, v24);
          sub_B170A0();
        }
        *(_DWORD *)(v15 + 16) = workTypeOrder->m_Items[v14 + 1];
        v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_BattleFortificationInfo__TypeInfo,
                                                                                     v23,
                                                                                     v24,
                                                                                     v25,
                                                                                     v26);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v27,
          (Il2CppObject *)v15,
          Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
          (const MethodInfo_24B7310 *)Method_System_Action_BattleFortificationInfo___ctor__);
        BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_T__o *)fortificationInfos,
          (System_Action_T__o *)v27,
          (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleFortificationInfo___);
        if ( (__int64)++v14 >= (int)workTypeOrder->max_length )
          goto LABEL_11;
      }
LABEL_19:
      sub_B170D4();
    }
LABEL_11:
    gaugeListRoot = (UnityEngine_Component_o *)this->fields.gaugeListRoot;
    if ( !gaugeListRoot )
      goto LABEL_19;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        gaugeListRoot,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
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
    BattleResultEventItemComponent__SetItemWindow_25634268((BattleResultEventItemComponent_o *)this, drop, v8);
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
  struct BattleResultEventFortificationItemComponent_o *_4__this; // x8
  UnityEngine_Transform_o *gaugeListRoot; // x20
  UILabel_o *fortificationGaugePrefab; // x21
  UILabel_o *v9; // x0
  UnityEngine_Component_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F7188 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_FortificationGauge___, info);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7188 = 1;
  }
  if ( info && BattleFortificationInfo__GetFortificationWorkType(info, 0LL) == this->fields.workType )
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
    v9 = UnityEngine_Object__Instantiate_UILabel_(
           fortificationGaugePrefab,
           gaugeListRoot,
           (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_FortificationGauge___);
    if ( !v9
      || (v10 = (UnityEngine_Component_o *)v9,
          FortificationGauge__SetData((FortificationGauge_o *)v9, info, 0LL),
          (gameObject = UnityEngine_Component__get_gameObject(v10, 0LL)) == 0LL) )
    {
LABEL_13:
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
}