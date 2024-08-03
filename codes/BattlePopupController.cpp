void __fastcall BattlePopupController___ctor(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_49FEBDC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__, perf);
    sub_1B640C8(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo, v5);
    byte_49FEBDC = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo,
                                                      perf,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.popupList, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattlePopupController__InitWrapPopup(this, perf, v9);
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
  __int64 v11; // x1
  __int64 v12; // x2
  WrapBattlePopupControl_o *v13; // x22
  const MethodInfo *v14; // x2
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  WrapBattleUIFrontPopupControl_o *v24; // x22
  const MethodInfo *v25; // x2
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *object; // x0
  int32_t v35; // w2
  int32_t v36; // w3

  if ( (byte_49FEBDD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___, perf);
    sub_1B640C8(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo, v7);
    sub_1B640C8(&WrapBattlePopupControl_TypeInfo, v8);
    sub_1B640C8(&WrapBattleUIFrontPopupControl_TypeInfo, v9);
    byte_49FEBDD = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo,
                                                       perf,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  v13 = (WrapBattlePopupControl_o *)sub_1B64314(WrapBattlePopupControl_TypeInfo, v11, v12);
  WrapBattlePopupControl___ctor(v13, perf, v14);
  if ( !v10 )
    goto LABEL_13;
  items = v10->fields._items;
  v19 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v13,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
  }
  v24 = (WrapBattleUIFrontPopupControl_o *)sub_1B64314(WrapBattleUIFrontPopupControl_TypeInfo, v22, v23);
  WrapBattleUIFrontPopupControl___ctor(v24, perf, v25);
  v28 = v10->fields._items;
  v29 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v10->fields._version;
  if ( !v28 )
LABEL_13:
    sub_1B64324(v15);
  v30 = v10->fields._size;
  if ( (unsigned int)v30 >= v28->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v24,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    v10->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v24, v26, v27);
  }
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.popupList, (int32_t)v10, v32, v33);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
             (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)object, v35, v36);
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *popupList; // x20
  System_Func_object__bool__o *v14; // x22
  Il2CppObject *object; // x1
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FEBDE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___, *(_QWORD *)&targetLayer);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___, v5);
    sub_1B640C8(&System_Func_WrapBaseBattlePopupControl__bool__TypeInfo, v6);
    sub_1B640C8(&Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__, v7);
    sub_1B640C8(&BattlePopupController___c__DisplayClass7_0_TypeInfo, v8);
    byte_49FEBDE = 1;
  }
  v9 = sub_1B64314(BattlePopupController___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&targetLayer, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_DWORD *)(v9 + 16) = targetLayer;
  popupList = this->fields.popupList;
  v14 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WrapBaseBattlePopupControl__bool__TypeInfo, v11, v12);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__,
    0LL);
  object = System_Linq_Enumerable__FirstOrDefault_object__48617700(
             (System_Collections_Generic_IEnumerable_TSource__o *)popupList,
             (System_Func_TSource__bool__o *)v14,
             (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
  if ( !object )
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
               (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)object, v16, v17);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
    sub_1B64324(this);
  return x->fields._Layer_k__BackingField == this->fields.targetLayer;
}