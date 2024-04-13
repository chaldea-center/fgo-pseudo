void __fastcall BattleResultEventFortificationItemComponent___ctor(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Array_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_RuntimeFieldHandle_o v19; // 0:w1.4

  if ( (byte_42E88D7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultEventItemComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1,
      v8,
      v9,
      v10);
    byte_42E88D7 = 1;
  }
  v11 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 3LL);
  v19.fields.value = Field__PrivateImplementationDetails__88A785E43F0814338C5CB47BDE7DE708C7172EABAD671E4511199C78A3B4DAA1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v11, v19, 0LL);
  this->fields.workTypeOrder = (struct System_Int32_array *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.workTypeOrder,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(BattleResultEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleResultEventItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultEventItemComponent_TypeInfo);
  }
  BattleResultEventItemComponent___ctor((BattleResultEventItemComponent_o *)this, v18);
}


bool __fastcall BattleResultEventFortificationItemComponent__IsFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *gaugeListRoot; // x0

  gaugeListRoot = this->fields.gaugeListRoot;
  if ( !gaugeListRoot )
    sub_B5D69C(0LL, method);
  return UnityEngine_Transform__get_childCount(gaugeListRoot, 0LL) > 0;
}


void __fastcall BattleResultEventFortificationItemComponent__SetFortificationInfos(
        BattleResultEventFortificationItemComponent_o *this,
        BattleFortificationInfo_array *fortificationInfos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleResultEventFortificationItemComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Int32_array *workTypeOrder; // x23
  unsigned __int64 v25; // x24
  __int64 v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v34; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x19
  __int64 v36; // x0

  v5 = this;
  if ( (byte_42E88D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleFortificationInfo___ctor__, (_DWORD)fortificationInfos, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleFortificationInfo__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleFortificationInfo___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIGrid___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(
      &Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
      v18,
      v19,
      v20);
    this = (BattleResultEventFortificationItemComponent_o *)sub_B5D5C4(
                                                              &BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo,
                                                              v21,
                                                              v22,
                                                              v23);
    byte_42E88D6 = 1;
  }
  if ( fortificationInfos && *(_QWORD *)&fortificationInfos->max_length )
  {
    workTypeOrder = v5->fields.workTypeOrder;
    if ( !workTypeOrder )
      goto LABEL_19;
    if ( (int)workTypeOrder->max_length >= 1 )
    {
      v25 = 0LL;
      while ( 1 )
      {
        v26 = sub_B5D694(BattleResultEventFortificationItemComponent___c__DisplayClass4_0_TypeInfo);
        BattleResultEventFortificationItemComponent___c__DisplayClass4_0___ctor(
          (BattleResultEventFortificationItemComponent___c__DisplayClass4_0_o *)v26,
          0LL);
        if ( !v26 )
          break;
        *(_QWORD *)(v26 + 24) = v5;
        sub_B5D560((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)v5, v27, v28, v29, v30, v31, v32);
        if ( v25 >= workTypeOrder->max_length )
        {
          v36 = sub_B5D6C8(v33);
          sub_B5D668(v36, 0LL);
        }
        *(_DWORD *)(v26 + 16) = workTypeOrder->m_Items[v25 + 1];
        v34 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleFortificationInfo__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v34,
          (Il2CppObject *)v26,
          Method_BattleResultEventFortificationItemComponent___c__DisplayClass4_0__SetFortificationInfos_b__0__,
          (const MethodInfo_258B320 *)Method_System_Action_BattleFortificationInfo___ctor__);
        BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_T__o *)fortificationInfos,
          (System_Action_T__o *)v34,
          (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleFortificationInfo___);
        if ( (__int64)++v25 >= (int)workTypeOrder->max_length )
          goto LABEL_11;
      }
LABEL_19:
      sub_B5D69C(this, fortificationInfos);
    }
LABEL_11:
    this = (BattleResultEventFortificationItemComponent_o *)v5->fields.gaugeListRoot;
    if ( !this )
      goto LABEL_19;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
    BattleResultEventItemComponent__SetItemWindow_25221252((BattleResultEventItemComponent_o *)this, drop, v8);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Component_o *FortificationWorkType; // x0
  __int64 v10; // x1
  struct BattleResultEventFortificationItemComponent_o *_4__this; // x8
  UnityEngine_Transform_o *gaugeListRoot; // x20
  UILabel_o *fortificationGaugePrefab; // x21
  UnityEngine_Component_o *v14; // x20

  if ( (byte_42E60AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_FortificationGauge___, (_DWORD)info, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E60AA = 1;
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
                                                           (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_FortificationGauge___);
      if ( !FortificationWorkType
        || (v14 = FortificationWorkType,
            FortificationGauge__SetData((FortificationGauge_o *)FortificationWorkType, info, 0LL),
            (FortificationWorkType = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v14, 0LL)) == 0LL) )
      {
LABEL_13:
        sub_B5D69C(FortificationWorkType, v10);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)FortificationWorkType, 1, 0LL);
    }
  }
}