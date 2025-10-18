void BattlePopupController___ctor(BattlePopupController_o *this, BattlePerformance_o *perf, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C45D37 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
    sub_1C37058(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
    byte_4C45D37 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.popupList, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
  BattlePopupController__InitWrapPopup(this, perf, v8);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  WrapBattleUIFrontPopupControl_o *v15; // x22
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *object; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C45D38 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
    sub_1C37058(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
    sub_1C37058(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
    sub_1C37058(&WrapBattlePopupControl_TypeInfo);
    sub_1C37058(&WrapBattleUIFrontPopupControl_TypeInfo);
    byte_4C45D38 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  v6 = (WrapBattlePopupControl_o *)sub_1C372A4(WrapBattlePopupControl_TypeInfo);
  WrapBattlePopupControl___ctor(v6, perf, v7);
  if ( !v5 )
    goto LABEL_13;
  items = v5->fields._items;
  v12 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v6;
    sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v6, v9, v10);
  }
  v15 = (WrapBattleUIFrontPopupControl_o *)sub_1C372A4(WrapBattleUIFrontPopupControl_TypeInfo);
  WrapBattleUIFrontPopupControl___ctor(v15, perf, v16);
  v19 = v5->fields._items;
  v20 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v5->fields._version;
  if ( !v19 )
LABEL_13:
    sub_1C372B4(v8);
  v21 = v5->fields._size;
  if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v15,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->obj.klass + v21;
    v5->fields._size = v21 + 1;
    v22[4] = (Il2CppClass *)v15;
    sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v15, v17, v18);
  }
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.popupList, (int32_t)v5, v23, v24);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
             (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)object, v26, v27);
}


void BattlePopupController__SwitchDisplayPopup(
        BattlePopupController_o *this,
        int32_t targetLayer,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *popupList; // x20
  System_Func_object__bool__o *v8; // x22
  Il2CppObject *object; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C45D39 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
    sub_1C37058(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
    sub_1C37058(&System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
    sub_1C37058(&Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__);
    sub_1C37058(&BattlePopupController___c__DisplayClass7_0_TypeInfo);
    byte_4C45D39 = 1;
  }
  v5 = sub_1C372A4(BattlePopupController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = targetLayer;
  popupList = this->fields.popupList;
  v8 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__,
    0);
  object = System_Linq_Enumerable__FirstOrDefault_object__51451648(
             (System_Collections_Generic_IEnumerable_TSource__o *)popupList,
             (System_Func_TSource__bool__o *)v8,
             (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
  if ( !object )
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
               (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)object, v10, v11);
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
  const MethodInfo *v3; // x3

  this->fields._CurPopup_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
    sub_1C372B4(this);
  return x->fields._Layer_k__BackingField == this->fields.targetLayer;
}