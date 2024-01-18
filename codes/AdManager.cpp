void __fastcall AdManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  struct AdManager_StaticFields *static_fields; // x0

  if ( (byte_4185A21 & 1) == 0 )
  {
    sub_B2C35C(&AdManager_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_AdImplementation_Base___ctor__, v2);
    sub_B2C35C(&System_Collections_Generic_List_AdImplementation_Base__TypeInfo, v3);
    byte_4185A21 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AdImplementation_Base__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
  static_fields = AdManager_TypeInfo->static_fields;
  static_fields->_adInstanceList = (struct System_Collections_Generic_List_AdImplementation_Base__o *)v4;
  sub_B2C2F8(static_fields, v4);
}


void __fastcall AdManager___ctor(AdManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Boolean_array *v4; // x0

  if ( (byte_4185A20 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AdManager___ctor__, v3);
    byte_4185A20 = 1;
  }
  v4 = (struct System_Boolean_array *)sub_B2C374(bool___TypeInfo, 3LL);
  this->fields._isInitializedAdLibraries = v4;
  sub_B2C2F8(&this->fields._isInitializedAdLibraries, v4);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_AdManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__Initialize(AdManager_o *this, int32_t adLibrary, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0

  if ( (byte_4185A18 & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, *(_QWORD *)&adLibrary);
    byte_4185A18 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    if ( adLibrary == 2 )
    {
      AdManager__InitializeAdjust(this, *(const MethodInfo **)&adLibrary);
    }
    else if ( adLibrary != 1 )
    {
      if ( !adLibrary )
        AdManager__InitializeAdjust(this, *(const MethodInfo **)&adLibrary);
      return;
    }
    AdManager__InitializeRepro(this, *(const MethodInfo **)&adLibrary);
  }
}


void __fastcall AdManager__InitializeAdjust(AdManager_o *this, const MethodInfo *method)
{
  AdManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v6; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Base_o *v8; // x21
  const MethodInfo *v9; // x1
  struct System_Boolean_array *v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_4185A19 & 1) == 0 )
  {
    sub_B2C35C(&Framework_Core_Ad_AdImplementation_Adjust_TypeInfo, method);
    sub_B2C35C(&AdManager_TypeInfo, v3);
    this = (AdManager_o *)sub_B2C35C(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v4);
    byte_4185A19 = 1;
  }
  isInitializedAdLibraries = v2->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_15;
  if ( !isInitializedAdLibraries->max_length )
    goto LABEL_16;
  if ( isInitializedAdLibraries->m_Items[4] )
    return;
  v6 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v6 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->static_fields->_adInstanceList;
  v8 = (Framework_Core_Ad_AdImplementation_Base_o *)sub_B2C42C(Framework_Core_Ad_AdImplementation_Adjust_TypeInfo);
  Framework_Core_Ad_AdImplementation_Base___ctor(v8, v9);
  if ( !v8
    || (this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, Il2CppMethodPointer))v8->klass->vtable._4_Initialize.method)(
                                v8,
                                v8->klass->vtable._5_GetAppToken.methodPtr),
        !adInstanceList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          adInstanceList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AdImplementation_Base__Add__),
        (v10 = v2->fields._isInitializedAdLibraries) == 0LL) )
  {
LABEL_15:
    sub_B2C434(this, method);
  }
  if ( !v10->max_length )
  {
LABEL_16:
    v11 = sub_B2C460(this);
    sub_B2C400(v11, 0LL);
  }
  v10->m_Items[4] = 1;
}


void __fastcall AdManager__InitializeRepro(AdManager_o *this, const MethodInfo *method)
{
  AdManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v6; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Base_o *v8; // x21
  const MethodInfo *v9; // x1
  struct System_Boolean_array *v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_4185A1A & 1) == 0 )
  {
    sub_B2C35C(&Framework_Core_Ad_AdImplementation_Repro_TypeInfo, method);
    sub_B2C35C(&AdManager_TypeInfo, v3);
    this = (AdManager_o *)sub_B2C35C(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v4);
    byte_4185A1A = 1;
  }
  isInitializedAdLibraries = v2->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_15;
  if ( isInitializedAdLibraries->max_length <= 1 )
    goto LABEL_16;
  if ( isInitializedAdLibraries->m_Items[5] )
    return;
  v6 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v6 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->static_fields->_adInstanceList;
  v8 = (Framework_Core_Ad_AdImplementation_Base_o *)sub_B2C42C(Framework_Core_Ad_AdImplementation_Repro_TypeInfo);
  Framework_Core_Ad_AdImplementation_Base___ctor(v8, v9);
  if ( !v8
    || (this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, Il2CppMethodPointer))v8->klass->vtable._4_Initialize.method)(
                                v8,
                                v8->klass->vtable._5_GetAppToken.methodPtr),
        !adInstanceList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          adInstanceList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AdImplementation_Base__Add__),
        (v10 = v2->fields._isInitializedAdLibraries) == 0LL) )
  {
LABEL_15:
    sub_B2C434(this, method);
  }
  if ( v10->max_length <= 1 )
  {
LABEL_16:
    v11 = sub_B2C460(this);
    sub_B2C400(v11, 0LL);
  }
  v10->m_Items[5] = 1;
}


void __fastcall AdManager__SendPushRegistrationId(AdManager_o *this, System_String_o *regId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AdManager___c__DisplayClass12_0_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  AdManager_c *v12; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x21

  if ( (byte_4185A1D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AdImplementation_Base___ctor__, regId);
    sub_B2C35C(&System_Action_AdImplementation_Base__TypeInfo, v4);
    sub_B2C35C(&AdManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v6);
    sub_B2C35C(&Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__, v7);
    sub_B2C35C(&AdManager___c__DisplayClass12_0_TypeInfo, v8);
    byte_4185A1D = 1;
  }
  v9 = (AdManager___c__DisplayClass12_0_o *)sub_B2C42C(AdManager___c__DisplayClass12_0_TypeInfo);
  AdManager___c__DisplayClass12_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.regId = regId;
  sub_B2C2F8(&v9->fields, regId);
  v12 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v12 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v12->static_fields->_adInstanceList;
  v14 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B2C434(v10, v11);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v14,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetFriendCode(AdManager_o *this, System_String_o *friendCode, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AdManager___c__DisplayClass10_0_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  AdManager_c *v12; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x21

  if ( (byte_4185A1B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AdImplementation_Base___ctor__, friendCode);
    sub_B2C35C(&System_Action_AdImplementation_Base__TypeInfo, v4);
    sub_B2C35C(&AdManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v6);
    sub_B2C35C(&Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__, v7);
    sub_B2C35C(&AdManager___c__DisplayClass10_0_TypeInfo, v8);
    byte_4185A1B = 1;
  }
  v9 = (AdManager___c__DisplayClass10_0_o *)sub_B2C42C(AdManager___c__DisplayClass10_0_TypeInfo);
  AdManager___c__DisplayClass10_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.friendCode = friendCode;
  sub_B2C2F8(&v9->fields, friendCode);
  v12 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v12 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v12->static_fields->_adInstanceList;
  v14 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B2C434(v10, v11);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v14,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__SetOpenedStoryQuest(AdManager_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AdManager___c__DisplayClass11_0_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  AdManager_c *v12; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x21

  if ( (byte_4185A1C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AdImplementation_Base___ctor__, *(_QWORD *)&questId);
    sub_B2C35C(&System_Action_AdImplementation_Base__TypeInfo, v4);
    sub_B2C35C(&AdManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v6);
    sub_B2C35C(&Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__, v7);
    sub_B2C35C(&AdManager___c__DisplayClass11_0_TypeInfo, v8);
    byte_4185A1C = 1;
  }
  v9 = (AdManager___c__DisplayClass11_0_o *)sub_B2C42C(AdManager___c__DisplayClass11_0_TypeInfo);
  AdManager___c__DisplayClass11_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.questId = questId;
  v12 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v12 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v12->static_fields->_adInstanceList;
  v14 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B2C434(v10, v11);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v14,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetUserId(AdManager_o *this, int64_t userId, const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int64_t v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = userId;
  v4 = System_Int64__ToString((int64_t)&v5, 0LL);
  this->fields._userIdStr = v4;
  sub_B2C2F8(&this->fields._userIdStr, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__TrackEvent(
        AdManager_o *this,
        int32_t category,
        int32_t checkPoint,
        int32_t num,
        int32_t num2,
        System_String_o *propertyStr,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  AdManager___c__DisplayClass13_0_o *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  AdManager_c *v21; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x21

  if ( (byte_4185A1E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AdImplementation_Base___ctor__, *(_QWORD *)&category);
    sub_B2C35C(&System_Action_AdImplementation_Base__TypeInfo, v13);
    sub_B2C35C(&AdManager_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v15);
    sub_B2C35C(&Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, v16);
    sub_B2C35C(&AdManager___c__DisplayClass13_0_TypeInfo, v17);
    byte_4185A1E = 1;
  }
  v18 = (AdManager___c__DisplayClass13_0_o *)sub_B2C42C(AdManager___c__DisplayClass13_0_TypeInfo);
  AdManager___c__DisplayClass13_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  v18->fields.category = category;
  v18->fields.checkPoint = checkPoint;
  v18->fields.num = num;
  v18->fields.num2 = num2;
  v18->fields.__4__this = this;
  sub_B2C2F8(&v18->fields.__4__this, this);
  v18->fields.propertyStr = propertyStr;
  sub_B2C2F8(&v18->fields.propertyStr, propertyStr);
  v21 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v21 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v21->static_fields->_adInstanceList;
  v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v23,
    (Il2CppObject *)v18,
    Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B2C434(v19, v20);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v23,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__TrackPurchase(
        AdManager_o *this,
        int32_t actionId,
        double price,
        System_String_o *currency,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  AdManager___c__DisplayClass14_0_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  AdManager_c *v19; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x20

  if ( (byte_4185A1F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_AdImplementation_Base___ctor__, *(_QWORD *)&actionId);
    sub_B2C35C(&System_Action_AdImplementation_Base__TypeInfo, v11);
    sub_B2C35C(&AdManager_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v13);
    sub_B2C35C(&Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__, v14);
    sub_B2C35C(&AdManager___c__DisplayClass14_0_TypeInfo, v15);
    byte_4185A1F = 1;
  }
  v16 = (AdManager___c__DisplayClass14_0_o *)sub_B2C42C(AdManager___c__DisplayClass14_0_TypeInfo);
  AdManager___c__DisplayClass14_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_9;
  v16->fields.actionId = actionId;
  v16->fields.price = price;
  v16->fields.currency = currency;
  sub_B2C2F8(&v16->fields.currency, currency);
  v16->fields.transactionId = transactionId;
  sub_B2C2F8(&v16->fields.transactionId, transactionId);
  v16->fields.__4__this = this;
  sub_B2C2F8(&v16->fields.__4__this, this);
  v19 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v19 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v19->static_fields->_adInstanceList;
  v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v21,
    (Il2CppObject *)v16,
    Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B2C434(v17, v18);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v21,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager___c__DisplayClass10_0___ctor(
        AdManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass10_0___SetFriendCode_b__0(
        AdManager___c__DisplayClass10_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  if ( !ad )
    sub_B2C434(this, 0LL);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, struct System_String_o *, Il2CppMethodPointer))ad->klass->vtable._7_SetFriendCode.method)(
    ad,
    this->fields.friendCode,
    ad->klass->vtable._8_SetOpenedStoryQuest.methodPtr);
}


void __fastcall AdManager___c__DisplayClass11_0___ctor(
        AdManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass11_0___SetOpenedStoryQuest_b__0(
        AdManager___c__DisplayClass11_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  if ( !ad )
    sub_B2C434(this, 0LL);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, Il2CppMethodPointer))ad->klass->vtable._8_SetOpenedStoryQuest.method)(
    ad,
    (unsigned int)this->fields.questId,
    ad->klass->vtable._9_SendPushRegistrationId.methodPtr);
}


void __fastcall AdManager___c__DisplayClass12_0___ctor(
        AdManager___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass12_0___SendPushRegistrationId_b__0(
        AdManager___c__DisplayClass12_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  if ( !ad )
    sub_B2C434(this, 0LL);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, struct System_String_o *, Il2CppMethodPointer))ad->klass->vtable._9_SendPushRegistrationId.method)(
    ad,
    this->fields.regId,
    ad->klass->vtable._10_TrackEvent.methodPtr);
}


void __fastcall AdManager___c__DisplayClass13_0___ctor(
        AdManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass13_0___TrackEvent_b__0(
        AdManager___c__DisplayClass13_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  struct AdManager_o *_4__this; // x9
  AdManager___c__DisplayClass13_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (AdManager___c__DisplayClass13_0_o *)ad) == 0LL) )
    sub_B2C434(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, _QWORD, _QWORD, _QWORD, struct System_String_o *, struct System_String_o *, Il2CppMethodPointer))ad->klass->vtable._10_TrackEvent.method)(
    ad,
    (unsigned int)v4->fields.category,
    (unsigned int)v4->fields.checkPoint,
    (unsigned int)v4->fields.num,
    (unsigned int)v4->fields.num2,
    _4__this->fields._userIdStr,
    v4->fields.propertyStr,
    ad->klass->vtable._11_TrackPurchase.methodPtr);
}


void __fastcall AdManager___c__DisplayClass14_0___ctor(
        AdManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass14_0___TrackPurchase_b__0(
        AdManager___c__DisplayClass14_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  struct AdManager_o *_4__this; // x9
  AdManager___c__DisplayClass14_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (AdManager___c__DisplayClass14_0_o *)ad) == 0LL) )
    sub_B2C434(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, void *, double))ad->klass->vtable._11_TrackPurchase.method)(
    ad,
    (unsigned int)v4->fields.actionId,
    v4->fields.currency,
    v4->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass[1]._1.image,
    v4->fields.price);
}