void __fastcall AdManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E67FF & 1) == 0 )
  {
    sub_B5D5C4(&AdManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AdImplementation_Base___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_List_AdImplementation_Base__TypeInfo, v7, v8, v9);
    byte_42E67FF = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AdImplementation_Base__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
  static_fields = (BattleServantConfConponent_o *)AdManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall AdManager___ctor(AdManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Boolean_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E67FE & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager___ctor__, v5, v6, v7);
    byte_42E67FE = 1;
  }
  v8 = (struct System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, 3LL);
  this->fields._isInitializedAdLibraries = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._isInitializedAdLibraries,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_AdManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__Initialize(AdManager_o *this, int32_t adLibrary, const MethodInfo *method)
{
  __int64 v3; // x3
  ManagerConfig_c *v6; // x0

  if ( (byte_42E67F6 & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, adLibrary, (_DWORD)method, v3);
    byte_42E67F6 = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v6->static_fields->UseMock )
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
  int v2; // w2
  __int64 v3; // x3
  AdManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v12; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Base_o *v14; // x21
  const MethodInfo *v15; // x1
  struct System_Boolean_array *v16; // x8
  __int64 v17; // x0

  v4 = this;
  if ( (byte_42E67F7 & 1) == 0 )
  {
    sub_B5D5C4(&Framework_Core_Ad_AdImplementation_Adjust_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AdManager_TypeInfo, v5, v6, v7);
    this = (AdManager_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v8, v9, v10);
    byte_42E67F7 = 1;
  }
  isInitializedAdLibraries = v4->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_15;
  if ( !isInitializedAdLibraries->max_length )
    goto LABEL_16;
  if ( isInitializedAdLibraries->m_Items[4] )
    return;
  v12 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v12 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v12->static_fields->_adInstanceList;
  v14 = (Framework_Core_Ad_AdImplementation_Base_o *)sub_B5D694(Framework_Core_Ad_AdImplementation_Adjust_TypeInfo);
  Framework_Core_Ad_AdImplementation_Base___ctor(v14, v15);
  if ( !v14
    || (this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, Il2CppMethodPointer))v14->klass->vtable._4_Initialize.method)(
                                v14,
                                v14->klass->vtable._5_GetAppToken.methodPtr),
        !adInstanceList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          adInstanceList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AdImplementation_Base__Add__),
        (v16 = v4->fields._isInitializedAdLibraries) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(this, method);
  }
  if ( !v16->max_length )
  {
LABEL_16:
    v17 = sub_B5D6C8(this);
    sub_B5D668(v17, 0LL);
  }
  v16->m_Items[4] = 1;
}


void __fastcall AdManager__InitializeRepro(AdManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AdManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v12; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Base_o *v14; // x21
  const MethodInfo *v15; // x1
  struct System_Boolean_array *v16; // x8
  __int64 v17; // x0

  v4 = this;
  if ( (byte_42E67F8 & 1) == 0 )
  {
    sub_B5D5C4(&Framework_Core_Ad_AdImplementation_Repro_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AdManager_TypeInfo, v5, v6, v7);
    this = (AdManager_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v8, v9, v10);
    byte_42E67F8 = 1;
  }
  isInitializedAdLibraries = v4->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_15;
  if ( isInitializedAdLibraries->max_length <= 1 )
    goto LABEL_16;
  if ( isInitializedAdLibraries->m_Items[5] )
    return;
  v12 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v12 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v12->static_fields->_adInstanceList;
  v14 = (Framework_Core_Ad_AdImplementation_Base_o *)sub_B5D694(Framework_Core_Ad_AdImplementation_Repro_TypeInfo);
  Framework_Core_Ad_AdImplementation_Base___ctor(v14, v15);
  if ( !v14
    || (this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, Il2CppMethodPointer))v14->klass->vtable._4_Initialize.method)(
                                v14,
                                v14->klass->vtable._5_GetAppToken.methodPtr),
        !adInstanceList)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          adInstanceList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AdImplementation_Base__Add__),
        (v16 = v4->fields._isInitializedAdLibraries) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(this, method);
  }
  if ( v16->max_length <= 1 )
  {
LABEL_16:
    v17 = sub_B5D6C8(this);
    sub_B5D668(v17, 0LL);
  }
  v16->m_Items[5] = 1;
}


void __fastcall AdManager__SendPushRegistrationId(AdManager_o *this, System_String_o *regId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  AdManager_c *v29; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x21

  if ( (byte_42E67FB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AdImplementation_Base___ctor__, (_DWORD)regId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_AdImplementation_Base__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AdManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v11, v12, v13);
    sub_B5D5C4(&Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__, v14, v15, v16);
    sub_B5D5C4(&AdManager___c__DisplayClass12_0_TypeInfo, v17, v18, v19);
    byte_42E67FB = 1;
  }
  v20 = sub_B5D694(AdManager___c__DisplayClass12_0_TypeInfo);
  AdManager___c__DisplayClass12_0___ctor((AdManager___c__DisplayClass12_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_9;
  *(_QWORD *)(v20 + 16) = regId;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)regId, v23, v24, v25, v26, v27, v28);
  v29 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v29 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v29->static_fields->_adInstanceList;
  v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v31,
    (Il2CppObject *)v20,
    Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B5D69C(v21, v22);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v31,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetFriendCode(AdManager_o *this, System_String_o *friendCode, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  AdManager_c *v29; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x21

  if ( (byte_42E67F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AdImplementation_Base___ctor__, (_DWORD)friendCode, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_AdImplementation_Base__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AdManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v11, v12, v13);
    sub_B5D5C4(&Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__, v14, v15, v16);
    sub_B5D5C4(&AdManager___c__DisplayClass10_0_TypeInfo, v17, v18, v19);
    byte_42E67F9 = 1;
  }
  v20 = sub_B5D694(AdManager___c__DisplayClass10_0_TypeInfo);
  AdManager___c__DisplayClass10_0___ctor((AdManager___c__DisplayClass10_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_9;
  *(_QWORD *)(v20 + 16) = friendCode;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v20 + 16),
    (System_Int32_array **)friendCode,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v29 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v29->static_fields->_adInstanceList;
  v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v31,
    (Il2CppObject *)v20,
    Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B5D69C(v21, v22);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v31,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetOpenedStoryQuest(AdManager_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  AdManager___c__DisplayClass11_0_o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  AdManager_c *v23; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x21

  if ( (byte_42E67FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AdImplementation_Base___ctor__, questId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_AdImplementation_Base__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AdManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v11, v12, v13);
    sub_B5D5C4(&Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__, v14, v15, v16);
    sub_B5D5C4(&AdManager___c__DisplayClass11_0_TypeInfo, v17, v18, v19);
    byte_42E67FA = 1;
  }
  v20 = (AdManager___c__DisplayClass11_0_o *)sub_B5D694(AdManager___c__DisplayClass11_0_TypeInfo);
  AdManager___c__DisplayClass11_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_9;
  v20->fields.questId = questId;
  v23 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v23 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v23->static_fields->_adInstanceList;
  v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v25,
    (Il2CppObject *)v20,
    Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B5D69C(v21, v22);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v25,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  sub_B5D560(
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  AdManager_c *v43; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v45; // x21

  if ( (byte_42E67FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AdImplementation_Base___ctor__, category, checkPoint, *(_QWORD *)&num);
    sub_B5D5C4(&System_Action_AdImplementation_Base__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&AdManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v19, v20, v21);
    sub_B5D5C4(&Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, v22, v23, v24);
    sub_B5D5C4(&AdManager___c__DisplayClass13_0_TypeInfo, v25, v26, v27);
    byte_42E67FC = 1;
  }
  v28 = sub_B5D694(AdManager___c__DisplayClass13_0_TypeInfo);
  AdManager___c__DisplayClass13_0___ctor((AdManager___c__DisplayClass13_0_o *)v28, 0LL);
  if ( !v28 )
    goto LABEL_9;
  *(_DWORD *)(v28 + 16) = category;
  *(_DWORD *)(v28 + 20) = checkPoint;
  *(_DWORD *)(v28 + 24) = num;
  *(_DWORD *)(v28 + 28) = num2;
  *(_QWORD *)(v28 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v28 + 32), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  *(_QWORD *)(v28 + 40) = propertyStr;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v28 + 40),
    (System_Int32_array **)propertyStr,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v43 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v43->static_fields->_adInstanceList;
  v45 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v45,
    (Il2CppObject *)v28,
    Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B5D69C(v29, v30);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v45,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__TrackPurchase(
        AdManager_o *this,
        int32_t actionId,
        double price,
        System_String_o *currency,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  AdManager_c *v47; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *adInstanceList; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v49; // x20

  if ( (byte_42E67FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_AdImplementation_Base___ctor__, actionId, (_DWORD)currency, transactionId);
    sub_B5D5C4(&System_Action_AdImplementation_Base__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&AdManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v17, v18, v19);
    sub_B5D5C4(&Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__, v20, v21, v22);
    sub_B5D5C4(&AdManager___c__DisplayClass14_0_TypeInfo, v23, v24, v25);
    byte_42E67FD = 1;
  }
  v26 = sub_B5D694(AdManager___c__DisplayClass14_0_TypeInfo);
  AdManager___c__DisplayClass14_0___ctor((AdManager___c__DisplayClass14_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_9;
  *(_DWORD *)(v26 + 16) = actionId;
  *(double *)(v26 + 24) = price;
  *(_QWORD *)(v26 + 32) = currency;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 32), (System_Int32_array **)currency, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v26 + 40) = transactionId;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v26 + 40),
    (System_Int32_array **)transactionId,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  *(_QWORD *)(v26 + 48) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 48), (System_Int32_array **)this, v41, v42, v43, v44, v45, v46);
  v47 = AdManager_TypeInfo;
  if ( (BYTE3(AdManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v47 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v47->static_fields->_adInstanceList;
  v49 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v49,
    (Il2CppObject *)v26,
    Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_AdImplementation_Base___ctor__);
  if ( !adInstanceList )
LABEL_9:
    sub_B5D69C(v27, v28);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    adInstanceList,
    (System_Action_T__o *)v49,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, ad);
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
    sub_B5D69C(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, void *, double))ad->klass->vtable._11_TrackPurchase.method)(
    ad,
    (unsigned int)v4->fields.actionId,
    v4->fields.currency,
    v4->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass[1]._1.image,
    v4->fields.price);
}