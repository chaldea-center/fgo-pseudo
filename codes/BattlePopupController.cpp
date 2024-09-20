void __fastcall BattlePopupController___ctor(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x2

  if ( (byte_4A5D996 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
    byte_4A5D996 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.popupList, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattlePopupController__InitWrapPopup(this, perf, v8);
}


void __fastcall BattlePopupController__InitWrapPopup(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  WrapBattlePopupControl_o *v6; // x22
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  WrapBattleUIFrontPopupControl_o *v16; // x22
  const MethodInfo *v17; // x2
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *object; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_4A5D997 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
    sub_1B885B0(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
    sub_1B885B0(&WrapBattlePopupControl_TypeInfo);
    sub_1B885B0(&WrapBattleUIFrontPopupControl_TypeInfo);
    byte_4A5D997 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  v6 = (WrapBattlePopupControl_o *)sub_1B887FC(WrapBattlePopupControl_TypeInfo);
  WrapBattlePopupControl___ctor(v6, perf, v7);
  if ( !v5 )
    goto LABEL_13;
  items = v5->fields._items;
  v13 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
  }
  v16 = (WrapBattleUIFrontPopupControl_o *)sub_1B887FC(WrapBattleUIFrontPopupControl_TypeInfo);
  WrapBattleUIFrontPopupControl___ctor(v16, perf, v17);
  v20 = v5->fields._items;
  v21 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v5->fields._version;
  if ( !v20 )
LABEL_13:
    sub_1B8880C(v8, v9);
  v22 = v5->fields._size;
  if ( (unsigned int)v22 >= v20->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v16,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v5->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
  }
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.popupList, (int32_t)v5, v24, v25);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
             (const MethodInfo_2EA17D4 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)object, v27, v28);
}


void __fastcall BattlePopupController__SwitchDisplayPopup(
        BattlePopupController_o *this,
        int32_t targetLayer,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *popupList; // x20
  System_Func_object__bool__o *v9; // x22
  Il2CppObject *object; // x1
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5D998 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
    sub_1B885B0(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
    sub_1B885B0(&System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
    sub_1B885B0(&Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__);
    sub_1B885B0(&BattlePopupController___c__DisplayClass7_0_TypeInfo);
    byte_4A5D998 = 1;
  }
  v5 = sub_1B887FC(BattlePopupController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = targetLayer;
  popupList = this->fields.popupList;
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__,
    0LL);
  object = System_Linq_Enumerable__FirstOrDefault_object__48907856(
             (System_Collections_Generic_IEnumerable_TSource__o *)popupList,
             (System_Func_TSource__bool__o *)v9,
             (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
  if ( !object )
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
               (const MethodInfo_2EA17D4 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)object, v11, v12);
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

  this->fields._CurPopup_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields._Layer_k__BackingField == this->fields.targetLayer;
}