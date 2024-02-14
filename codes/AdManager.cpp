void __fastcall AdManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4212912 & 1) == 0 )
  {
    sub_B0D8A4(&AdManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AdImplementation_Base___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_List_AdImplementation_Base__TypeInfo, v4);
    byte_4212912 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_AdImplementation_Base__TypeInfo,
                                                                                                 v1,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
  static_fields = (BattleServantConfConponent_o *)AdManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall AdManager___ctor(AdManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Boolean_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4212911 & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager___ctor__, v3);
    byte_4212911 = 1;
  }
  v4 = (struct System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, 3LL);
  this->fields._isInitializedAdLibraries = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._isInitializedAdLibraries,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_AdManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__Initialize(AdManager_o *this, int32_t adLibrary, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0

  if ( (byte_4212909 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, *(_QWORD *)&adLibrary);
    byte_4212909 = 1;
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
  AdManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v7; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Base_o *v9; // x21
  const MethodInfo *v10; // x1
  struct System_Boolean_array *v11; // x8
  __int64 v12; // x0

  v3 = this;
  if ( (byte_421290A & 1) == 0 )
  {
    sub_B0D8A4(&Framework_Core_Ad_AdImplementation_Adjust_TypeInfo, method);
    sub_B0D8A4(&AdManager_TypeInfo, v4);
    this = (AdManager_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v5);
    byte_421290A = 1;
  }
  isInitializedAdLibraries = v3->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_15;
  if ( !isInitializedAdLibraries->max_length )
    goto LABEL_16;
  if ( isInitializedAdLibraries->m_Items[4] )
    return;
  v7 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v7 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7->static_fields->_adInstanceList;
  v9 = (Framework_Core_Ad_AdImplementation_Base_o *)sub_B0D974(
                                                      Framework_Core_Ad_AdImplementation_Adjust_TypeInfo,
                                                      method,
                                                      v2);
  Framework_Core_Ad_AdImplementation_Base___ctor(v9, v10);
  if ( !v9
    || (this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, Il2CppMethodPointer))v9->klass->vtable._4_Initialize.method)(
                                v9,
                                v9->klass->vtable._5_GetAppToken.methodPtr),
        !adInstanceList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          adInstanceList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AdImplementation_Base__Add__),
        (v11 = v3->fields._isInitializedAdLibraries) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(this);
  }
  if ( !v11->max_length )
  {
LABEL_16:
    v12 = sub_B0D9A8(this);
    sub_B0D948(v12, 0LL);
  }
  v11->m_Items[4] = 1;
}


void __fastcall AdManager__InitializeRepro(AdManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AdManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v7; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Base_o *v9; // x21
  const MethodInfo *v10; // x1
  struct System_Boolean_array *v11; // x8
  __int64 v12; // x0

  v3 = this;
  if ( (byte_421290B & 1) == 0 )
  {
    sub_B0D8A4(&Framework_Core_Ad_AdImplementation_Repro_TypeInfo, method);
    sub_B0D8A4(&AdManager_TypeInfo, v4);
    this = (AdManager_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v5);
    byte_421290B = 1;
  }
  isInitializedAdLibraries = v3->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_15;
  if ( isInitializedAdLibraries->max_length <= 1 )
    goto LABEL_16;
  if ( isInitializedAdLibraries->m_Items[5] )
    return;
  v7 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v7 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7->static_fields->_adInstanceList;
  v9 = (Framework_Core_Ad_AdImplementation_Base_o *)sub_B0D974(
                                                      Framework_Core_Ad_AdImplementation_Repro_TypeInfo,
                                                      method,
                                                      v2);
  Framework_Core_Ad_AdImplementation_Base___ctor(v9, v10);
  if ( !v9
    || (this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, Il2CppMethodPointer))v9->klass->vtable._4_Initialize.method)(
                                v9,
                                v9->klass->vtable._5_GetAppToken.methodPtr),
        !adInstanceList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          adInstanceList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AdImplementation_Base__Add__),
        (v11 = v3->fields._isInitializedAdLibraries) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(this);
  }
  if ( v11->max_length <= 1 )
  {
LABEL_16:
    v12 = sub_B0D9A8(this);
    sub_B0D948(v12, 0LL);
  }
  v11->m_Items[5] = 1;
}


void __fastcall AdManager__SendPushRegistrationId(AdManager_o *this, System_String_o *regId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  AdManager_c *v19; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x21

  if ( (byte_421290E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_AdImplementation_Base___ctor__, regId);
    sub_B0D8A4(&System_Action_AdImplementation_Base__TypeInfo, v4);
    sub_B0D8A4(&AdManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v6);
    sub_B0D8A4(&Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__, v7);
    sub_B0D8A4(&AdManager___c__DisplayClass12_0_TypeInfo, v8);
    byte_421290E = 1;
  }
  v9 = sub_B0D974(AdManager___c__DisplayClass12_0_TypeInfo, regId, method);
  AdManager___c__DisplayClass12_0___ctor((AdManager___c__DisplayClass12_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = regId;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)regId, v11, v12, v13, v14, v15, v16);
  v19 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v19 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v19->static_fields->_adInstanceList;
  v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_AdImplementation_Base__TypeInfo,
                                                                               v17,
                                                                               v18);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B0D97C(v10);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v21,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetFriendCode(AdManager_o *this, System_String_o *friendCode, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  AdManager_c *v19; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x21

  if ( (byte_421290C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_AdImplementation_Base___ctor__, friendCode);
    sub_B0D8A4(&System_Action_AdImplementation_Base__TypeInfo, v4);
    sub_B0D8A4(&AdManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v6);
    sub_B0D8A4(&Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__, v7);
    sub_B0D8A4(&AdManager___c__DisplayClass10_0_TypeInfo, v8);
    byte_421290C = 1;
  }
  v9 = sub_B0D974(AdManager___c__DisplayClass10_0_TypeInfo, friendCode, method);
  AdManager___c__DisplayClass10_0___ctor((AdManager___c__DisplayClass10_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = friendCode;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)friendCode, v11, v12, v13, v14, v15, v16);
  v19 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v19 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v19->static_fields->_adInstanceList;
  v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_AdImplementation_Base__TypeInfo,
                                                                               v17,
                                                                               v18);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B0D97C(v10);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v21,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  __int64 v12; // x2
  AdManager_c *v13; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21

  if ( (byte_421290D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_AdImplementation_Base___ctor__, *(_QWORD *)&questId);
    sub_B0D8A4(&System_Action_AdImplementation_Base__TypeInfo, v4);
    sub_B0D8A4(&AdManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v6);
    sub_B0D8A4(&Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__, v7);
    sub_B0D8A4(&AdManager___c__DisplayClass11_0_TypeInfo, v8);
    byte_421290D = 1;
  }
  v9 = (AdManager___c__DisplayClass11_0_o *)sub_B0D974(
                                              AdManager___c__DisplayClass11_0_TypeInfo,
                                              *(_QWORD *)&questId,
                                              method);
  AdManager___c__DisplayClass11_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.questId = questId;
  v13 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v13 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v13->static_fields->_adInstanceList;
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_AdImplementation_Base__TypeInfo,
                                                                               v11,
                                                                               v12);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B0D97C(v10);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v15,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  sub_B0D840(
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
  __int64 v19; // x0
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
  __int64 v32; // x1
  __int64 v33; // x2
  AdManager_c *v34; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v36; // x21

  if ( (byte_421290F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_AdImplementation_Base___ctor__, *(_QWORD *)&category);
    sub_B0D8A4(&System_Action_AdImplementation_Base__TypeInfo, v13);
    sub_B0D8A4(&AdManager_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v15);
    sub_B0D8A4(&Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, v16);
    sub_B0D8A4(&AdManager___c__DisplayClass13_0_TypeInfo, v17);
    byte_421290F = 1;
  }
  v18 = sub_B0D974(AdManager___c__DisplayClass13_0_TypeInfo, *(_QWORD *)&category, *(_QWORD *)&checkPoint);
  AdManager___c__DisplayClass13_0___ctor((AdManager___c__DisplayClass13_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  *(_DWORD *)(v18 + 16) = category;
  *(_DWORD *)(v18 + 20) = checkPoint;
  *(_DWORD *)(v18 + 24) = num;
  *(_DWORD *)(v18 + 28) = num2;
  *(_QWORD *)(v18 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v18 + 40) = propertyStr;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v18 + 40),
    (System_Int32_array **)propertyStr,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v34 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v34 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v34->static_fields->_adInstanceList;
  v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_AdImplementation_Base__TypeInfo,
                                                                               v32,
                                                                               v33);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v36,
    (Il2CppObject *)v18,
    Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B0D97C(v19);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v36,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  AdManager_c *v38; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x20

  if ( (byte_4212910 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_AdImplementation_Base___ctor__, *(_QWORD *)&actionId);
    sub_B0D8A4(&System_Action_AdImplementation_Base__TypeInfo, v11);
    sub_B0D8A4(&AdManager_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v13);
    sub_B0D8A4(&Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__, v14);
    sub_B0D8A4(&AdManager___c__DisplayClass14_0_TypeInfo, v15);
    byte_4212910 = 1;
  }
  v16 = sub_B0D974(AdManager___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&actionId, currency);
  AdManager___c__DisplayClass14_0___ctor((AdManager___c__DisplayClass14_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_9;
  *(_DWORD *)(v16 + 16) = actionId;
  *(double *)(v16 + 24) = price;
  *(_QWORD *)(v16 + 32) = currency;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)currency, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v16 + 40) = transactionId;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v16 + 40),
    (System_Int32_array **)transactionId,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  *(_QWORD *)(v16 + 48) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 48), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  v38 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v38 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v38->static_fields->_adInstanceList;
  v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_AdImplementation_Base__TypeInfo,
                                                                               v36,
                                                                               v37);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v40,
    (Il2CppObject *)v16,
    Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B0D97C(v17);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v40,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, void *, double))ad->klass->vtable._11_TrackPurchase.method)(
    ad,
    (unsigned int)v4->fields.actionId,
    v4->fields.currency,
    v4->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass[1]._1.image,
    v4->fields.price);
}