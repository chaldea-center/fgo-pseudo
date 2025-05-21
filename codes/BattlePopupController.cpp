void __fastcall BattlePopupController___ctor(
        BattlePopupController_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B47693 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__, perf);
    sub_1BDB878(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo, v5);
    byte_4B47693 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.popupList, (int32_t)v6, v7, v8);
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
  WrapBattlePopupControl_o *v11; // x22
  const MethodInfo *v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  WrapBattleUIFrontPopupControl_o *v21; // x22
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *object; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4B47694 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___, perf);
    sub_1BDB878(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo, v7);
    sub_1BDB878(&WrapBattlePopupControl_TypeInfo, v8);
    sub_1BDB878(&WrapBattleUIFrontPopupControl_TypeInfo, v9);
    byte_4B47694 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  v11 = (WrapBattlePopupControl_o *)sub_1BDBAC4(WrapBattlePopupControl_TypeInfo);
  WrapBattlePopupControl___ctor(v11, perf, v12);
  if ( !v10 )
    goto LABEL_13;
  items = v10->fields._items;
  v18 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_13;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v11,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v11;
    sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
  }
  v21 = (WrapBattleUIFrontPopupControl_o *)sub_1BDBAC4(WrapBattleUIFrontPopupControl_TypeInfo);
  WrapBattleUIFrontPopupControl___ctor(v21, perf, v22);
  v25 = v10->fields._items;
  v26 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v10->fields._version;
  if ( !v25 )
LABEL_13:
    sub_1BDBAD4(v13, v14);
  v27 = v10->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v21,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v10->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v21;
    sub_1BDB81C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v21, v23, v24);
  }
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.popupList, (int32_t)v10, v29, v30);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
             (const MethodInfo_3056768 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)object, v32, v33);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B47695 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___, *(_QWORD *)&targetLayer);
    sub_1BDB878(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___, v5);
    sub_1BDB878(&System_Func_WrapBaseBattlePopupControl__bool__TypeInfo, v6);
    sub_1BDB878(&Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__, v7);
    sub_1BDB878(&BattlePopupController___c__DisplayClass7_0_TypeInfo, v8);
    byte_4B47695 = 1;
  }
  v9 = sub_1BDBAC4(BattlePopupController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  *(_DWORD *)(v9 + 16) = targetLayer;
  popupList = this->fields.popupList;
  v13 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__,
    0LL);
  object = System_Linq_Enumerable__FirstOrDefault_object__50698552(
             (System_Collections_Generic_IEnumerable_TSource__o *)popupList,
             (System_Func_TSource__bool__o *)v13,
             (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
  if ( !object )
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
               (const MethodInfo_3056768 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)object, v15, v16);
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
  const MethodInfo *v3; // x3

  this->fields._CurPopup_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
    sub_1BDBAD4(this, 0LL);
  return x->fields._Layer_k__BackingField == this->fields.targetLayer;
}