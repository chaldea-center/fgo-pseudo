void __fastcall AdManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438CE5D & 1) == 0 )
  {
    sub_B775C4(&AdManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
    sub_B775C4(&System_Collections_Generic_List_AdImplementation_Base__TypeInfo);
    byte_438CE5D = 1;
  }
  v1 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_AdImplementation_Base__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v1,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
  static_fields = (BattleServantConfConponent_o *)AdManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall AdManager___ctor(AdManager_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438CE5C & 1) == 0 )
  {
    sub_B775C4(&bool___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AdManager___ctor__);
    byte_438CE5C = 1;
  }
  v3 = (struct System_Boolean_array *)sub_B775DC(bool___TypeInfo, 3LL);
  this->fields._isInitializedAdLibraries = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._isInitializedAdLibraries,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2D168A8 *)Method_SingletonMonoBehaviour_AdManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__Initialize(AdManager_o *this, int32_t adLibrary, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0

  if ( (byte_438CE54 & 1) == 0 )
  {
    sub_B775C4(&ManagerConfig_TypeInfo);
    byte_438CE54 = 1;
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
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v4; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Base_o *v6; // x21
  const MethodInfo *v7; // x1
  struct System_Boolean_array *v8; // x8
  __int64 v9; // x0

  v2 = this;
  if ( (byte_438CE55 & 1) == 0 )
  {
    sub_B775C4(&Framework_Core_Ad_AdImplementation_Adjust_TypeInfo);
    sub_B775C4(&AdManager_TypeInfo);
    this = (AdManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__);
    byte_438CE55 = 1;
  }
  isInitializedAdLibraries = v2->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_15;
  if ( !isInitializedAdLibraries->max_length )
    goto LABEL_16;
  if ( isInitializedAdLibraries->m_Items[4] )
    return;
  v4 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v4 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->static_fields->_adInstanceList;
  v6 = (Framework_Core_Ad_AdImplementation_Base_o *)sub_B77694(Framework_Core_Ad_AdImplementation_Adjust_TypeInfo);
  Framework_Core_Ad_AdImplementation_Base___ctor(v6, v7);
  if ( !v6
    || (this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, Il2CppMethodPointer))v6->klass->vtable._4_Initialize.method)(
                                v6,
                                v6->klass->vtable._5_GetAppToken.methodPtr),
        !adInstanceList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          adInstanceList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_AdImplementation_Base__Add__),
        (v8 = v2->fields._isInitializedAdLibraries) == 0LL) )
  {
LABEL_15:
    sub_B7769C(this, method);
  }
  if ( !v8->max_length )
  {
LABEL_16:
    v9 = sub_B776C8(this);
    sub_B77668(v9, 0LL);
  }
  v8->m_Items[4] = 1;
}


void __fastcall AdManager__InitializeRepro(AdManager_o *this, const MethodInfo *method)
{
  AdManager_o *v2; // x19
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v4; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Base_o *v6; // x21
  const MethodInfo *v7; // x1
  struct System_Boolean_array *v8; // x8
  __int64 v9; // x0

  v2 = this;
  if ( (byte_438CE56 & 1) == 0 )
  {
    sub_B775C4(&Framework_Core_Ad_AdImplementation_Repro_TypeInfo);
    sub_B775C4(&AdManager_TypeInfo);
    this = (AdManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__);
    byte_438CE56 = 1;
  }
  isInitializedAdLibraries = v2->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_15;
  if ( isInitializedAdLibraries->max_length <= 1 )
    goto LABEL_16;
  if ( isInitializedAdLibraries->m_Items[5] )
    return;
  v4 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v4 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->static_fields->_adInstanceList;
  v6 = (Framework_Core_Ad_AdImplementation_Base_o *)sub_B77694(Framework_Core_Ad_AdImplementation_Repro_TypeInfo);
  Framework_Core_Ad_AdImplementation_Base___ctor(v6, v7);
  if ( !v6
    || (this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, Il2CppMethodPointer))v6->klass->vtable._4_Initialize.method)(
                                v6,
                                v6->klass->vtable._5_GetAppToken.methodPtr),
        !adInstanceList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          adInstanceList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_AdImplementation_Base__Add__),
        (v8 = v2->fields._isInitializedAdLibraries) == 0LL) )
  {
LABEL_15:
    sub_B7769C(this, method);
  }
  if ( v8->max_length <= 1 )
  {
LABEL_16:
    v9 = sub_B776C8(this);
    sub_B77668(v9, 0LL);
  }
  v8->m_Items[5] = 1;
}


void __fastcall AdManager__SendPushRegistrationId(AdManager_o *this, System_String_o *regId, const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  AdManager_c *v13; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21

  if ( (byte_438CE59 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AdImplementation_Base___ctor__);
    sub_B775C4(&System_Action_AdImplementation_Base__TypeInfo);
    sub_B775C4(&AdManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_B775C4(&Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__);
    sub_B775C4(&AdManager___c__DisplayClass12_0_TypeInfo);
    byte_438CE59 = 1;
  }
  v4 = sub_B77694(AdManager___c__DisplayClass12_0_TypeInfo);
  AdManager___c__DisplayClass12_0___ctor((AdManager___c__DisplayClass12_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_9;
  *(_QWORD *)(v4 + 16) = regId;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)regId, v7, v8, v9, v10, v11, v12);
  v13 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v13 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v13->static_fields->_adInstanceList;
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)v4,
    Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__,
    (const MethodInfo_26A0868 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B7769C(v5, v6);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v15,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetFriendCode(AdManager_o *this, System_String_o *friendCode, const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  AdManager_c *v13; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21

  if ( (byte_438CE57 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AdImplementation_Base___ctor__);
    sub_B775C4(&System_Action_AdImplementation_Base__TypeInfo);
    sub_B775C4(&AdManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_B775C4(&Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__);
    sub_B775C4(&AdManager___c__DisplayClass10_0_TypeInfo);
    byte_438CE57 = 1;
  }
  v4 = sub_B77694(AdManager___c__DisplayClass10_0_TypeInfo);
  AdManager___c__DisplayClass10_0___ctor((AdManager___c__DisplayClass10_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_9;
  *(_QWORD *)(v4 + 16) = friendCode;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 16), (System_Int32_array **)friendCode, v7, v8, v9, v10, v11, v12);
  v13 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v13 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v13->static_fields->_adInstanceList;
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)v4,
    Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__,
    (const MethodInfo_26A0868 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B7769C(v5, v6);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v15,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetOpenedStoryQuest(AdManager_o *this, int32_t questId, const MethodInfo *method)
{
  AdManager___c__DisplayClass11_0_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  AdManager_c *v7; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x21

  if ( (byte_438CE58 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AdImplementation_Base___ctor__);
    sub_B775C4(&System_Action_AdImplementation_Base__TypeInfo);
    sub_B775C4(&AdManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_B775C4(&Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__);
    sub_B775C4(&AdManager___c__DisplayClass11_0_TypeInfo);
    byte_438CE58 = 1;
  }
  v4 = (AdManager___c__DisplayClass11_0_o *)sub_B77694(AdManager___c__DisplayClass11_0_TypeInfo);
  AdManager___c__DisplayClass11_0___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_9;
  v4->fields.questId = questId;
  v7 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v7 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v7->static_fields->_adInstanceList;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__,
    (const MethodInfo_26A0868 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B7769C(v5, v6);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v9,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetUserId(AdManager_o *this, int64_t userId, const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int64_t v11; // [xsp+8h] [xbp-8h] BYREF

  v11 = userId;
  v4 = System_Int64__ToString((int64_t)&v11, 0LL);
  this->fields._userIdStr = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._userIdStr,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall AdManager__TrackEvent(
        AdManager_o *this,
        int32_t category,
        int32_t checkPoint,
        int32_t num,
        int32_t num2,
        System_String_o *propertyStr,
        const MethodInfo *method)
{
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  AdManager_c *v28; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x21

  if ( (byte_438CE5A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AdImplementation_Base___ctor__);
    sub_B775C4(&System_Action_AdImplementation_Base__TypeInfo);
    sub_B775C4(&AdManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_B775C4(&Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__);
    sub_B775C4(&AdManager___c__DisplayClass13_0_TypeInfo);
    byte_438CE5A = 1;
  }
  v13 = sub_B77694(AdManager___c__DisplayClass13_0_TypeInfo);
  AdManager___c__DisplayClass13_0___ctor((AdManager___c__DisplayClass13_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_DWORD *)(v13 + 16) = category;
  *(_DWORD *)(v13 + 20) = checkPoint;
  *(_DWORD *)(v13 + 24) = num;
  *(_DWORD *)(v13 + 28) = num2;
  *(_QWORD *)(v13 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = propertyStr;
  sub_B77560(
    (BattleServantConfConponent_o *)(v13 + 40),
    (System_Int32_array **)propertyStr,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v28 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v28->static_fields->_adInstanceList;
  v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v30,
    (Il2CppObject *)v13,
    Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__,
    (const MethodInfo_26A0868 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B7769C(v14, v15);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v30,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__TrackPurchase(
        AdManager_o *this,
        int32_t actionId,
        double price,
        System_String_o *currency,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  AdManager_c *v32; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v34; // x20

  if ( (byte_438CE5B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_AdImplementation_Base___ctor__);
    sub_B775C4(&System_Action_AdImplementation_Base__TypeInfo);
    sub_B775C4(&AdManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_B775C4(&Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__);
    sub_B775C4(&AdManager___c__DisplayClass14_0_TypeInfo);
    byte_438CE5B = 1;
  }
  v11 = sub_B77694(AdManager___c__DisplayClass14_0_TypeInfo);
  AdManager___c__DisplayClass14_0___ctor((AdManager___c__DisplayClass14_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_DWORD *)(v11 + 16) = actionId;
  *(double *)(v11 + 24) = price;
  *(_QWORD *)(v11 + 32) = currency;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)currency, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = transactionId;
  sub_B77560(
    (BattleServantConfConponent_o *)(v11 + 40),
    (System_Int32_array **)transactionId,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(_QWORD *)(v11 + 48) = this;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 48), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  v32 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v32 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v32->static_fields->_adInstanceList;
  v34 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v34,
    (Il2CppObject *)v11,
    Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__,
    (const MethodInfo_26A0868 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B7769C(v12, v13);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v34,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, ad);
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
    sub_B7769C(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, void *, double))ad->klass->vtable._11_TrackPurchase.method)(
    ad,
    (unsigned int)v4->fields.actionId,
    v4->fields.currency,
    v4->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass[1]._1.image,
    v4->fields.price);
}