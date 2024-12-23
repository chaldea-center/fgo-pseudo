void __fastcall BattlePopupController___ctor(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4B694DC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__, perf);
    sub_1BE4ACC(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo, v5);
    byte_4B694DC = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v6;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.popupList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattlePopupController__InitWrapPopup(this, perf, v13);
}


void __fastcall BattlePopupController__InitWrapPopup(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  WrapBattlePopupControl_o *v11; // x22
  const MethodInfo *v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  WrapBattleUIFrontPopupControl_o *v25; // x22
  const MethodInfo *v26; // x2
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *object; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B694DD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___, perf);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo, v7);
    sub_1BE4ACC(&WrapBattlePopupControl_TypeInfo, v8);
    sub_1BE4ACC(&WrapBattleUIFrontPopupControl_TypeInfo, v9);
    byte_4B694DD = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  v11 = (WrapBattlePopupControl_o *)sub_1BE4D18(WrapBattlePopupControl_TypeInfo);
  WrapBattlePopupControl___ctor(v11, perf, v12);
  if ( !v10 )
    goto LABEL_13;
  items = v10->fields._items;
  v22 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v11,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v11;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v11, v15, v16, v17, v18, v19, v20);
  }
  v25 = (WrapBattleUIFrontPopupControl_o *)sub_1BE4D18(WrapBattleUIFrontPopupControl_TypeInfo);
  WrapBattleUIFrontPopupControl___ctor(v25, perf, v26);
  v33 = v10->fields._items;
  v34 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v10->fields._version;
  if ( !v33 )
LABEL_13:
    sub_1BE4D28(v13, v14);
  v35 = v10->fields._size;
  if ( (unsigned int)v35 >= v33->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v25,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    v10->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)v25;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v25, v27, v28, v29, v30, v31, v32);
  }
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v10;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.popupList, (int64_t)v10, v37, v38, v39, v40, v41, v42);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
             (const MethodInfo_2F79B74 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)object, v44, v45, v46, v47, v48, v49);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePopupController__SwitchDisplayPopup(
        BattlePopupController_o *this,
        int32_t targetLayer,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *popupList; // x20
  System_Func_object__bool__o *v13; // x22
  Il2CppObject *object; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B694DE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___, *(_QWORD *)&targetLayer);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___, v5);
    sub_1BE4ACC(&System_Func_WrapBaseBattlePopupControl__bool__TypeInfo, v6);
    sub_1BE4ACC(&Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__, v7);
    sub_1BE4ACC(&BattlePopupController___c__DisplayClass7_0_TypeInfo, v8);
    byte_4B694DE = 1;
  }
  v9 = sub_1BE4D18(BattlePopupController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BE4D28(v10, v11);
  *(_DWORD *)(v9 + 16) = targetLayer;
  popupList = this->fields.popupList;
  v13 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__,
    0LL);
  object = System_Linq_Enumerable__FirstOrDefault_object__49793520(
             (System_Collections_Generic_IEnumerable_TSource__o *)popupList,
             (System_Func_TSource__bool__o *)v13,
             (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
  if ( !object )
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
               (const MethodInfo_2F79B74 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)object, v15, v16, v17, v18, v19, v20);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CurPopup_k__BackingField = value;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BE4D28(this, 0LL);
  return x->fields._Layer_k__BackingField == this->fields.targetLayer;
}