void __fastcall BattlePopupController___ctor(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4B18A96 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__, perf, method);
    sub_1BCA7E0(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo, v6, v7);
    byte_4B18A96 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo,
                                                      perf,
                                                      method,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.popupList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattlePopupController__InitWrapPopup(this, perf, v15);
}


void __fastcall BattlePopupController__InitWrapPopup(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  WrapBattlePopupControl_o *v20; // x22
  const MethodInfo *v21; // x2
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  WrapBattleUIFrontPopupControl_o *v37; // x22
  const MethodInfo *v38; // x2
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  Il2CppObject *object; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7

  if ( (byte_4B18A97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___, perf, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo, v10, v11);
    sub_1BCA7E0(&WrapBattlePopupControl_TypeInfo, v12, v13);
    sub_1BCA7E0(&WrapBattleUIFrontPopupControl_TypeInfo, v14, v15);
    byte_4B18A97 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo,
                                                       perf,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  v20 = (WrapBattlePopupControl_o *)sub_1BCAA2C(WrapBattlePopupControl_TypeInfo, v17, v18, v19);
  WrapBattlePopupControl___ctor(v20, perf, v21);
  if ( !v16 )
    goto LABEL_13;
  items = v16->fields._items;
  v31 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v16->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v20,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v20;
    sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v20, v24, v25, v26, v27, v28, v29);
  }
  v37 = (WrapBattleUIFrontPopupControl_o *)sub_1BCAA2C(WrapBattleUIFrontPopupControl_TypeInfo, v34, v35, v36);
  WrapBattleUIFrontPopupControl___ctor(v37, perf, v38);
  v45 = v16->fields._items;
  v46 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v16->fields._version;
  if ( !v45 )
LABEL_13:
    sub_1BCAA3C(v22, v23);
  v47 = v16->fields._size;
  if ( (unsigned int)v47 >= v45->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v37,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->obj.klass + v47;
    v16->fields._size = v47 + 1;
    v48[4] = (Il2CppClass *)v37;
    sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v37, v39, v40, v41, v42, v43, v44);
  }
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.popupList, (int64_t)v16, v49, v50, v51, v52, v53, v54);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
             (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)object, v56, v57, v58, v59, v60, v61);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePopupController__SwitchDisplayPopup(
        BattlePopupController_o *this,
        int32_t targetLayer,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *popupList; // x20
  System_Func_object__bool__o *v20; // x22
  Il2CppObject *object; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B18A98 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___,
      *(_QWORD *)&targetLayer,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___, v6, v7);
    sub_1BCA7E0(&System_Func_WrapBaseBattlePopupControl__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__, v10, v11);
    sub_1BCA7E0(&BattlePopupController___c__DisplayClass7_0_TypeInfo, v12, v13);
    byte_4B18A98 = 1;
  }
  v14 = sub_1BCAA2C(BattlePopupController___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&targetLayer, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_DWORD *)(v14 + 16) = targetLayer;
  popupList = this->fields.popupList;
  v20 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_WrapBaseBattlePopupControl__bool__TypeInfo,
                                         v16,
                                         v17,
                                         v18);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__,
    0LL);
  object = System_Linq_Enumerable__FirstOrDefault_object__49503160(
             (System_Collections_Generic_IEnumerable_TSource__o *)popupList,
             (System_Func_TSource__bool__o *)v20,
             (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
  if ( !object )
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
               (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)object, v22, v23, v24, v25, v26, v27);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields._Layer_k__BackingField == this->fields.targetLayer;
}