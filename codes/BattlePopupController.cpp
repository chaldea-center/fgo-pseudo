void BattlePopupController___ctor(BattlePopupController_o *this, BattlePerformance_o *perf, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x2

  if ( (byte_59737C7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
    byte_59737C7 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.popupList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  BattlePopupController__InitWrapPopup(this, perf, v12);
}


void BattlePopupController__InitWrapPopup(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  WrapBattlePopupControl_o *v6; // x22
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  WrapBattleUIFrontPopupControl_o *v20; // x22
  const MethodInfo *v21; // x2
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *object; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_59737C8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
    sub_2213A60(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
    sub_2213A60(&WrapBattlePopupControl_TypeInfo);
    sub_2213A60(&WrapBattleUIFrontPopupControl_TypeInfo);
    byte_59737C8 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  v6 = (WrapBattlePopupControl_o *)sub_2213CCC(WrapBattlePopupControl_TypeInfo);
  WrapBattlePopupControl___ctor(v6, perf, v7);
  if ( !v5 )
    goto LABEL_13;
  items = v5->fields._items;
  v17 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
  }
  v20 = (WrapBattleUIFrontPopupControl_o *)sub_2213CCC(WrapBattleUIFrontPopupControl_TypeInfo);
  WrapBattleUIFrontPopupControl___ctor(v20, perf, v21);
  v28 = v5->fields._items;
  v29 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v5->fields._version;
  if ( !v28 )
LABEL_13:
    sub_2213CDC(v8, v9);
  v30 = v5->fields._size;
  if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v20,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    v5->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)v20;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v20, v22, v23, v24, v25, v26, v27);
  }
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.popupList, (int32_t)v5, v32, v33, v34, v35, v36, v37);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
             (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)object, v39, v40, v41, v42, v43, v44);
}


void BattlePopupController__SwitchDisplayPopup(
        BattlePopupController_o *this,
        int32_t targetLayer,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *popupList; // x22
  System_Func_object__bool__o *v9; // x20
  Il2CppObject *object; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59737C9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
    sub_2213A60(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
    sub_2213A60(&System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
    sub_2213A60(&Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__);
    sub_2213A60(&BattlePopupController___c__DisplayClass7_0_TypeInfo);
    byte_59737C9 = 1;
  }
  v5 = sub_2213CCC(BattlePopupController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  popupList = this->fields.popupList;
  *(_DWORD *)(v5 + 16) = targetLayer;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__,
    0);
  object = System_Linq_Enumerable__FirstOrDefault_object__59254852(
             (System_Collections_Generic_IEnumerable_TSource__o *)popupList,
             (System_Func_TSource__bool__o *)v9,
             (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
  if ( !object )
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
               (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)object, v11, v12, v13, v14, v15, v16);
}


WrapBaseBattlePopupControl_o *BattlePopupController__get_CurPopup(
        BattlePopupController_o *this,
        const MethodInfo *method)
{
  return this->fields._CurPopup_k__BackingField;
}


void BattlePopupController__set_CurPopup(
        BattlePopupController_o *this,
        WrapBaseBattlePopupControl_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CurPopup_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePopupController___c__DisplayClass7_0___ctor(
        BattlePopupController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattlePopupController___c__DisplayClass7_0___SwitchDisplayPopup_b__0(
        BattlePopupController___c__DisplayClass7_0_o *this,
        WrapBaseBattlePopupControl_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._Layer_k__BackingField == this->fields.targetLayer;
}