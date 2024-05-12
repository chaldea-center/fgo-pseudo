void __fastcall BattlePopupController___ctor(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2

  if ( (byte_438B45C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
    byte_438B45C = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.popupList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattlePopupController__InitWrapPopup(this, perf, v12);
}


void __fastcall BattlePopupController__InitWrapPopup(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  WrapBattlePopupControl_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  WrapBattleUIFrontPopupControl_o *v9; // x22
  struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o **p_popupList; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **StonePurchaseNotificationMenu_DialogOpenQueue; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_438B45D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
    sub_B775C4(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
    sub_B775C4(&WrapBattlePopupControl_TypeInfo);
    sub_B775C4(&WrapBattleUIFrontPopupControl_TypeInfo);
    byte_438B45D = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  v6 = (WrapBattlePopupControl_o *)sub_B77694(WrapBattlePopupControl_TypeInfo);
  WrapBattlePopupControl___ctor(v6, perf, 0LL);
  if ( !v5 )
    sub_B7769C(v7, v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__);
  v9 = (WrapBattleUIFrontPopupControl_o *)sub_B77694(WrapBattleUIFrontPopupControl_TypeInfo);
  WrapBattleUIFrontPopupControl___ctor(v9, perf, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__);
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v5;
  p_popupList = &this->fields.popupList;
  sub_B77560((BattleServantConfConponent_o *)p_popupList, (System_Int32_array **)v5, v11, v12, v13, v14, v15, v16);
  StonePurchaseNotificationMenu_DialogOpenQueue = (System_Int32_array **)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)*p_popupList,
                                                                           (const MethodInfo_1D30534 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  *(p_popupList - 1) = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)StonePurchaseNotificationMenu_DialogOpenQueue;
  sub_B77560(
    (BattleServantConfConponent_o *)(p_popupList - 1),
    StonePurchaseNotificationMenu_DialogOpenQueue,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall BattlePopupController__SwitchDisplayPopup(
        BattlePopupController_o *this,
        int32_t targetLayer,
        const MethodInfo *method)
{
  BattlePopupController___c__DisplayClass7_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *popupList; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x22
  struct WrapBaseBattlePopupControl_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438B45E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
    sub_B775C4(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
    sub_B775C4(&Method_System_Func_WrapBaseBattlePopupControl__bool___ctor__);
    sub_B775C4(&System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
    sub_B775C4(&Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__);
    sub_B775C4(&BattlePopupController___c__DisplayClass7_0_TypeInfo);
    byte_438B45E = 1;
  }
  v5 = (BattlePopupController___c__DisplayClass7_0_o *)sub_B77694(BattlePopupController___c__DisplayClass7_0_TypeInfo);
  BattlePopupController___c__DisplayClass7_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.targetLayer = targetLayer;
  popupList = this->fields.popupList;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_WrapBaseBattlePopupControl__bool___ctor__);
  StonePurchaseNotificationMenu_DialogOpenQueue = (struct WrapBaseBattlePopupControl_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)popupList,
                                                                                           (System_Func_TSource__bool__o *)v9,
                                                                                           (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
  if ( !StonePurchaseNotificationMenu_DialogOpenQueue )
    StonePurchaseNotificationMenu_DialogOpenQueue = (struct WrapBaseBattlePopupControl_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
                                                                                             (const MethodInfo_1D30534 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = StonePurchaseNotificationMenu_DialogOpenQueue;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)StonePurchaseNotificationMenu_DialogOpenQueue,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


WrapBaseBattlePopupControl_o *__fastcall BattlePopupController__get_CurPopup(
        BattlePopupController_o *this,
        const MethodInfo *method)
{
  return this->fields._CurPopup_k__BackingField;
}


void __fastcall BattlePopupController__set_CurPopup(
        BattlePopupController_o *this,
        WrapBaseBattlePopupControl_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CurPopup_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePopupController___c__DisplayClass7_0___ctor(
        BattlePopupController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePopupController___c__DisplayClass7_0___SwitchDisplayPopup_b__0(
        BattlePopupController___c__DisplayClass7_0_o *this,
        WrapBaseBattlePopupControl_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields._Layer_k__BackingField == this->fields.targetLayer;
}