void BattlePopupController___ctor(BattlePopupController_o *this, BattlePerformance_o *perf, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x2

  if ( (byte_4CCA20D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
    byte_4CCA20D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.popupList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  WrapBattleUIFrontPopupControl_o *v20; // x22
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *object; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4CCA20E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
    sub_1C713B0(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
    sub_1C713B0(&WrapBattlePopupControl_TypeInfo);
    sub_1C713B0(&WrapBattleUIFrontPopupControl_TypeInfo);
    byte_4CCA20E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_WrapBaseBattlePopupControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_WrapBaseBattlePopupControl___ctor__);
  v6 = (WrapBattlePopupControl_o *)sub_1C715FC(WrapBattlePopupControl_TypeInfo);
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
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v6;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
  }
  v20 = (WrapBattleUIFrontPopupControl_o *)sub_1C715FC(WrapBattleUIFrontPopupControl_TypeInfo);
  WrapBattleUIFrontPopupControl___ctor(v20, perf, v21);
  v28 = v5->fields._items;
  v29 = Method_System_Collections_Generic_List_WrapBaseBattlePopupControl__Add__;
  ++v5->fields._version;
  if ( !v28 )
LABEL_13:
    sub_1C71608(v8, v9);
  v30 = v5->fields._size;
  if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v20,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    v5->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)v20;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v20, v22, v23, v24, v25, v26, v27);
  }
  this->fields.popupList = (struct System_Collections_Generic_List_WrapBaseBattlePopupControl__o *)v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.popupList, (int32_t)v5, v32, v33, v34, v35, v36, v37);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
             (const MethodInfo_3171AC0 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)object, v39, v40, v41, v42, v43, v44);
}


void BattlePopupController__SwitchDisplayPopup(
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
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCA20F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
    sub_1C713B0(&Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
    sub_1C713B0(&System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
    sub_1C713B0(&Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__);
    sub_1C713B0(&BattlePopupController___c__DisplayClass7_0_TypeInfo);
    byte_4CCA20F = 1;
  }
  v5 = sub_1C715FC(BattlePopupController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = targetLayer;
  popupList = this->fields.popupList;
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_WrapBaseBattlePopupControl__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattlePopupController___c__DisplayClass7_0__SwitchDisplayPopup_b__0__,
    0);
  object = System_Linq_Enumerable__FirstOrDefault_object__51858576(
             (System_Collections_Generic_IEnumerable_TSource__o *)popupList,
             (System_Func_TSource__bool__o *)v9,
             (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_WrapBaseBattlePopupControl___);
  if ( !object )
    object = System_Linq_Enumerable__First_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.popupList,
               (const MethodInfo_3171AC0 *)Method_System_Linq_Enumerable_First_WrapBaseBattlePopupControl___);
  this->fields._CurPopup_k__BackingField = (struct WrapBaseBattlePopupControl_o *)object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)object, v11, v12, v13, v14, v15, v16);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CurPopup_k__BackingField = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
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
    sub_1C71608(this, 0);
  return x->fields._Layer_k__BackingField == this->fields.targetLayer;
}