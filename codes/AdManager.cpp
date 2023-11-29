void __fastcall AdManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F7E83 & 1) == 0 )
  {
    sub_B16FFC(&AdManager_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_AdImplementation_Base___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_AdImplementation_Base__TypeInfo, v6);
    byte_40F7E83 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_AdImplementation_Base__TypeInfo,
                                                                                                 v1,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
  static_fields = (BattleServantConfConponent_o *)AdManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall AdManager___ctor(AdManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct System_Boolean_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F7E82 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager___ctor__, v4);
    byte_40F7E82 = 1;
  }
  v5 = (struct System_Boolean_array *)sub_B17014(bool___TypeInfo, 3LL, v2);
  this->fields._isInitializedAdLibraries = v5;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._isInitializedAdLibraries,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_AdManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__Initialize(AdManager_o *this, int32_t adLibrary, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0

  if ( (byte_40F7E7A & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, *(_QWORD *)&adLibrary);
    byte_40F7E7A = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AdManager_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v9; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Base_o *v11; // x21
  const MethodInfo *v12; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x0
  struct System_Boolean_array *v14; // x8

  v5 = this;
  if ( (byte_40F7E7B & 1) == 0 )
  {
    sub_B16FFC(&Framework_Core_Ad_AdImplementation_Adjust_TypeInfo, method);
    sub_B16FFC(&AdManager_TypeInfo, v6);
    this = (AdManager_o *)sub_B16FFC(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v7);
    byte_40F7E7B = 1;
  }
  isInitializedAdLibraries = v5->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_15;
  if ( !isInitializedAdLibraries->max_length )
    goto LABEL_16;
  if ( isInitializedAdLibraries->m_Items[4] )
    return;
  v9 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v9 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v9->static_fields->_adInstanceList;
  v11 = (Framework_Core_Ad_AdImplementation_Base_o *)sub_B170CC(
                                                       Framework_Core_Ad_AdImplementation_Adjust_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  Framework_Core_Ad_AdImplementation_Base___ctor(v11, v12);
  if ( !v11
    || (v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, Il2CppMethodPointer))v11->klass->vtable._4_Initialize.method)(
                                                                       v11,
                                                                       v11->klass->vtable._5_GetAppToken.methodPtr),
        !adInstanceList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          adInstanceList,
          v13,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AdImplementation_Base__Add__),
        (v14 = v5->fields._isInitializedAdLibraries) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  if ( !v14->max_length )
  {
LABEL_16:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v14->m_Items[4] = 1;
}


void __fastcall AdManager__InitializeRepro(AdManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AdManager_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v9; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Base_o *v11; // x21
  const MethodInfo *v12; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x0
  struct System_Boolean_array *v14; // x8

  v5 = this;
  if ( (byte_40F7E7C & 1) == 0 )
  {
    sub_B16FFC(&Framework_Core_Ad_AdImplementation_Repro_TypeInfo, method);
    sub_B16FFC(&AdManager_TypeInfo, v6);
    this = (AdManager_o *)sub_B16FFC(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v7);
    byte_40F7E7C = 1;
  }
  isInitializedAdLibraries = v5->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_15;
  if ( isInitializedAdLibraries->max_length <= 1 )
    goto LABEL_16;
  if ( isInitializedAdLibraries->m_Items[5] )
    return;
  v9 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v9 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v9->static_fields->_adInstanceList;
  v11 = (Framework_Core_Ad_AdImplementation_Base_o *)sub_B170CC(
                                                       Framework_Core_Ad_AdImplementation_Repro_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  Framework_Core_Ad_AdImplementation_Base___ctor(v11, v12);
  if ( !v11
    || (v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, Il2CppMethodPointer))v11->klass->vtable._4_Initialize.method)(
                                                                       v11,
                                                                       v11->klass->vtable._5_GetAppToken.methodPtr),
        !adInstanceList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          adInstanceList,
          v13,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AdImplementation_Base__Add__),
        (v14 = v5->fields._isInitializedAdLibraries) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  if ( v14->max_length <= 1 )
  {
LABEL_16:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v14->m_Items[5] = 1;
}


void __fastcall AdManager__SendPushRegistrationId(AdManager_o *this, System_String_o *regId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  AdManager_c *v22; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x21

  if ( (byte_40F7E7F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AdImplementation_Base___ctor__, regId);
    sub_B16FFC(&System_Action_AdImplementation_Base__TypeInfo, v6);
    sub_B16FFC(&AdManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v8);
    sub_B16FFC(&Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__, v9);
    sub_B16FFC(&AdManager___c__DisplayClass12_0_TypeInfo, v10);
    byte_40F7E7F = 1;
  }
  v11 = sub_B170CC(AdManager___c__DisplayClass12_0_TypeInfo, regId, method, v3, v4);
  AdManager___c__DisplayClass12_0___ctor((AdManager___c__DisplayClass12_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = regId;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)regId, v12, v13, v14, v15, v16, v17);
  v22 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v22 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v22->static_fields->_adInstanceList;
  v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_AdImplementation_Base__TypeInfo,
                                                                               v18,
                                                                               v19,
                                                                               v20,
                                                                               v21);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v24,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetFriendCode(AdManager_o *this, System_String_o *friendCode, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  AdManager_c *v22; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v24; // x21

  if ( (byte_40F7E7D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AdImplementation_Base___ctor__, friendCode);
    sub_B16FFC(&System_Action_AdImplementation_Base__TypeInfo, v6);
    sub_B16FFC(&AdManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v8);
    sub_B16FFC(&Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__, v9);
    sub_B16FFC(&AdManager___c__DisplayClass10_0_TypeInfo, v10);
    byte_40F7E7D = 1;
  }
  v11 = sub_B170CC(AdManager___c__DisplayClass10_0_TypeInfo, friendCode, method, v3, v4);
  AdManager___c__DisplayClass10_0___ctor((AdManager___c__DisplayClass10_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = friendCode;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)friendCode,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v22 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v22->static_fields->_adInstanceList;
  v24 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_AdImplementation_Base__TypeInfo,
                                                                               v18,
                                                                               v19,
                                                                               v20,
                                                                               v21);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v24,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__SetOpenedStoryQuest(AdManager_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AdManager___c__DisplayClass11_0_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  AdManager_c *v16; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x21

  if ( (byte_40F7E7E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AdImplementation_Base___ctor__, *(_QWORD *)&questId);
    sub_B16FFC(&System_Action_AdImplementation_Base__TypeInfo, v6);
    sub_B16FFC(&AdManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v8);
    sub_B16FFC(&Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__, v9);
    sub_B16FFC(&AdManager___c__DisplayClass11_0_TypeInfo, v10);
    byte_40F7E7E = 1;
  }
  v11 = (AdManager___c__DisplayClass11_0_o *)sub_B170CC(
                                               AdManager___c__DisplayClass11_0_TypeInfo,
                                               *(_QWORD *)&questId,
                                               method,
                                               v3,
                                               v4);
  AdManager___c__DisplayClass11_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  v11->fields.questId = questId;
  v16 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v16 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v16->static_fields->_adInstanceList;
  v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_AdImplementation_Base__TypeInfo,
                                                                               v12,
                                                                               v13,
                                                                               v14,
                                                                               v15);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v18,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._userIdStr,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  AdManager_c *v35; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v37; // x21

  if ( (byte_40F7E80 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AdImplementation_Base___ctor__, *(_QWORD *)&category);
    sub_B16FFC(&System_Action_AdImplementation_Base__TypeInfo, v13);
    sub_B16FFC(&AdManager_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v15);
    sub_B16FFC(&Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, v16);
    sub_B16FFC(&AdManager___c__DisplayClass13_0_TypeInfo, v17);
    byte_40F7E80 = 1;
  }
  v18 = sub_B170CC(
          AdManager___c__DisplayClass13_0_TypeInfo,
          *(_QWORD *)&category,
          *(_QWORD *)&checkPoint,
          *(_QWORD *)&num,
          *(_QWORD *)&num2);
  AdManager___c__DisplayClass13_0___ctor((AdManager___c__DisplayClass13_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  *(_DWORD *)(v18 + 16) = category;
  *(_DWORD *)(v18 + 20) = checkPoint;
  *(_DWORD *)(v18 + 24) = num;
  *(_DWORD *)(v18 + 28) = num2;
  *(_QWORD *)(v18 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 40) = propertyStr;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v18 + 40),
    (System_Int32_array **)propertyStr,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v35 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v35 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v35->static_fields->_adInstanceList;
  v37 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_AdImplementation_Base__TypeInfo,
                                                                               v31,
                                                                               v32,
                                                                               v33,
                                                                               v34);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v37,
    (Il2CppObject *)v18,
    Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v37,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  AdManager_c *v39; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v41; // x20

  if ( (byte_40F7E81 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_AdImplementation_Base___ctor__, *(_QWORD *)&actionId);
    sub_B16FFC(&System_Action_AdImplementation_Base__TypeInfo, v11);
    sub_B16FFC(&AdManager_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v13);
    sub_B16FFC(&Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__, v14);
    sub_B16FFC(&AdManager___c__DisplayClass14_0_TypeInfo, v15);
    byte_40F7E81 = 1;
  }
  v16 = sub_B170CC(AdManager___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&actionId, currency, transactionId, method);
  AdManager___c__DisplayClass14_0___ctor((AdManager___c__DisplayClass14_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_9;
  *(_DWORD *)(v16 + 16) = actionId;
  *(double *)(v16 + 24) = price;
  *(_QWORD *)(v16 + 32) = currency;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)currency, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 40) = transactionId;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v16 + 40),
    (System_Int32_array **)transactionId,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  *(_QWORD *)(v16 + 48) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 48), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  v39 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v39 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v39->static_fields->_adInstanceList;
  v41 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_AdImplementation_Base__TypeInfo,
                                                                               v35,
                                                                               v36,
                                                                               v37,
                                                                               v38);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v41,
    (Il2CppObject *)v16,
    Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v41,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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

  _4__this = this->fields.__4__this;
  if ( !_4__this || !ad )
    sub_B170D4();
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, _QWORD, _QWORD, _QWORD, struct System_String_o *, struct System_String_o *, Il2CppMethodPointer))ad->klass->vtable._10_TrackEvent.method)(
    ad,
    (unsigned int)this->fields.category,
    (unsigned int)this->fields.checkPoint,
    (unsigned int)this->fields.num,
    (unsigned int)this->fields.num2,
    _4__this->fields._userIdStr,
    this->fields.propertyStr,
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

  _4__this = this->fields.__4__this;
  if ( !_4__this || !ad )
    sub_B170D4();
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, void *, double))ad->klass->vtable._11_TrackPurchase.method)(
    ad,
    (unsigned int)this->fields.actionId,
    this->fields.currency,
    this->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass[1]._1.image,
    this->fields.price);
}