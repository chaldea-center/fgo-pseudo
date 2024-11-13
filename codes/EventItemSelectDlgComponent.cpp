void __fastcall EventItemSelectDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct EventItemSelectDlgComponent_StaticFields *static_fields; // x8
  struct EventItemSelectDlgComponent_StaticFields *v4; // x8

  if ( (byte_4B181C0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemSelectDlgComponent_TypeInfo, v1, v2);
    byte_4B181C0 = 1;
  }
  static_fields = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_POS_DEFAULT.fields.x = 0x4369000000000000LL;
  static_fields->TITLE_POS_DEFAULT.fields.z = 0.0;
  v4 = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&v4->TITLE_POS_NONE_DETAIL.fields.x = 0x435C000000000000LL;
  v4->TITLE_POS_NONE_DETAIL.fields.z = 0.0;
}


void __fastcall EventItemSelectDlgComponent___ctor(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B181BF & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B181BF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventItemSelectDlgComponent__ClearInfoGrid(
        EventItemSelectDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4B181BD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B181BD = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 && (v6 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
      if ( !itemListInfoGrid )
        break;
      itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
      if ( !itemListInfoGrid )
        break;
      itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)itemListInfoGrid,
                                                      v6,
                                                      0LL);
      if ( !itemListInfoGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListInfoGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v6 < 0 )
        return;
    }
LABEL_14:
    sub_1BCAA3C(itemListInfoGrid, method);
  }
}


void __fastcall EventItemSelectDlgComponent__Close(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B181BB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventItemSelectDlgComponent_EndClose__, v5, v6);
    byte_4B181BB = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventItemSelectDlgComponent_EndClose__, 0LL);
  EventItemSelectDlgComponent__Close_42812940(this, v7, v8);
}


void __fastcall EventItemSelectDlgComponent__Close_42812940(
        EventItemSelectDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20

  if ( (byte_4B181BC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__, v6, v7);
    sub_1BCA7E0(&EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo, v8, v9);
    byte_4B181BC = 1;
  }
  v10 = sub_1BCAA2C(EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)callback, v19, v20, v21, v22, v23, v24);
  this->fields.isClosed = 1;
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v28, 0LL);
}


void __fastcall EventItemSelectDlgComponent__EndClose(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  EventItemSelectDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall EventItemSelectDlgComponent__EndOpen(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventItemSelectDlgComponent__Init(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  EventItemSelectDlgComponent__ClearInfoGrid(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventItemSelectDlgComponent__OnClickClose(
        EventItemSelectDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *onCloseDialogFunc; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B181BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventItemSelectDlgComponent_OnClickClose__, method, v2);
    byte_4B181BE = 1;
  }
  if ( !this->fields.isClosed )
  {
    v4 = Method_EventItemSelectDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_EventItemSelectDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventItemSelectDlgComponent_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    onCloseDialogFunc = this->fields.onCloseDialogFunc;
    this->fields.onCloseDialogFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onCloseDialogFunc, 0LL, v7, v8, v9, v10, v11, v12);
    ActionExtensions__Call(onCloseDialogFunc, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemSelectDlgComponent__OpenDlg(
        EventItemSelectDlgComponent_o *this,
        System_Collections_Generic_List_ItemEntity__o *viewItemList,
        System_String_o *title,
        System_String_o *detail,
        System_Action_o *endOpenFunc,
        EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc,
        System_Action_o *onCloseDialogFunc,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x21
  UILabel_o *titleLabel; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  const MethodInfo *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  char v65; // w23
  EventItemSelectDlgComponent_c *v66; // x8
  UnityEngine_Transform_o *v67; // x24
  int *static_fields; // x8
  __int64 v69; // x9
  __int64 v70; // x10
  int v71; // s2
  int v72; // s1
  int v73; // s0
  __int64 v74; // x1
  UnityEngine_Component_o *itemListInfoGrid; // x0
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *itemListObj; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x23
  __int64 v80; // x0
  __int64 v81; // x1
  Il2CppObject *Component_object; // x24
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  EventItemBoardComponent_CallbackFunc_o *v86; // x25
  const MethodInfo *v87; // x3
  __int64 v88; // x0
  __int64 v89; // x1
  const MethodInfo *v90; // x4
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Action_o *v94; // x20
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B181BA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, viewItemList, title);
    sub_1BCA7E0(&EventItemBoardComponent_CallbackFunc_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_EventItemSelectDlgComponent_SelectItem__, v25, v26);
    sub_1BCA7E0(&EventItemSelectDlgComponent_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v31, v32);
    sub_1BCA7E0(&Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__, v33, v34);
    sub_1BCA7E0(&EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo, v35, v36);
    byte_4B181BA = 1;
  }
  memset(&v96, 0, sizeof(v96));
  v37 = sub_1BCAA2C(EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo, viewItemList, title, detail);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_33;
  *(_QWORD *)(v37 + 16) = endOpenFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)endOpenFunc, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v37 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 24), (int64_t)this, v46, v47, v48, v49, v50, v51);
  EventItemSelectDlgComponent__ClearInfoGrid(this, v52);
  if ( !viewItemList )
    return;
  this->fields.onSelectItemFunc = onSelectItemFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onSelectItemFunc,
    (int64_t)onSelectItemFunc,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.onCloseDialogFunc = onCloseDialogFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onCloseDialogFunc,
    (int64_t)onCloseDialogFunc,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, title, 0LL);
  titleLabel = this->fields.titleDetailLabel;
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, detail, 0LL);
  titleLabel = (UILabel_o *)System_String__IsNullOrEmpty(detail, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_33;
  v65 = (char)titleLabel;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.titleLabel,
                              0LL);
  v66 = EventItemSelectDlgComponent_TypeInfo;
  v67 = (UnityEngine_Transform_o *)titleLabel;
  if ( !EventItemSelectDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemSelectDlgComponent_TypeInfo, v39);
    v66 = EventItemSelectDlgComponent_TypeInfo;
  }
  if ( !v67 )
    goto LABEL_33;
  static_fields = (int *)v66->static_fields;
  v69 = 2LL;
  if ( (v65 & 1) != 0 )
    v69 = 5LL;
  if ( (v65 & 1) != 0 )
    v70 = 4LL;
  else
    v70 = 1LL;
  v71 = static_fields[v69];
  v72 = static_fields[v70];
  if ( (v65 & 1) != 0 )
    static_fields += 3;
  v73 = *static_fields;
  UnityEngine_Transform__set_localPosition(v67, *(UnityEngine_Vector3_o *)(&v72 - 1), 0LL);
  titleLabel = this->fields.titleDetailLabel;
  if ( !titleLabel )
    goto LABEL_33;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, (v65 & 1) == 0, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
  this->fields.isClosed = 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v95,
    (System_Collections_Generic_List_object__o *)viewItemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v96 = v95;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v96,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__) )
  {
    itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
    if ( !itemListInfoGrid )
      sub_1BCAA3C(0LL, v74);
    current = v96.fields._current;
    itemListObj = this->fields.itemListObj;
    transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0LL, 0LL);
    GameObjectExtensions__ResetLocalPosition(Object, 0LL);
    if ( !Object )
      sub_1BCAA3C(v80, v81);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___);
    v86 = (EventItemBoardComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                      EventItemBoardComponent_CallbackFunc_TypeInfo,
                                                      v83,
                                                      v84,
                                                      v85);
    EventItemBoardComponent_CallbackFunc___ctor(
      v86,
      (Il2CppObject *)this,
      Method_EventItemSelectDlgComponent_SelectItem__,
      v87);
    if ( !Component_object )
      sub_1BCAA3C(v88, v89);
    EventItemBoardComponent__SetItemBoardInfo(
      (EventItemBoardComponent_o *)Component_object,
      (ItemEntity_o *)current,
      v86,
      this,
      v90);
    UnityEngine_GameObject__SetActive(Object, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v96,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  titleLabel = (UILabel_o *)this->fields.itemListInfoGrid;
  if ( !titleLabel )
LABEL_33:
    sub_1BCAA3C(titleLabel, v39);
  UIGrid__set_repositionNow((UIGrid_o *)titleLabel, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v94 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v91, v92, v93);
  System_Action___ctor(
    v94,
    (Il2CppObject *)v37,
    Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v94, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemSelectDlgComponent__SelectItem(
        EventItemSelectDlgComponent_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onSelectItemFunc; // x0
  struct EventItemSelectDlgComponent_CallbackFunc_o *v9; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1

  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = (PartyOrganizationUtility_o *)&this->fields.onSelectItemFunc;
  v9 = onSelectItemFunc;
  p_onSelectItemFunc->klass = 0LL;
  sub_1BCA784(p_onSelectItemFunc, 0LL, *(int64_t *)&spendNum, (int32_t)method, v4, v5, v6, v7);
  if ( onSelectItemFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ItemEntity_o *, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      selectedItem,
      (unsigned int)spendNum,
      *(_QWORD *)&v9->fields.extra_arg);
}


void __fastcall EventItemSelectDlgComponent__add_onCloseDialogFunc(
        EventItemSelectDlgComponent_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onCloseDialogFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onCloseDialogFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventItemSelectDlgComponent_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B181B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B181B8 = 1;
  }
  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v6 = (System_Delegate_o *)onCloseDialogFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  EventItemSelectDlgComponent__remove_onCloseDialogFunc(v11, v12, v13);
}


void __fastcall EventItemSelectDlgComponent__add_onSelectItemFunc(
        EventItemSelectDlgComponent_o *this,
        EventItemSelectDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventItemSelectDlgComponent_CallbackFunc_o **p_onSelectItemFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventItemSelectDlgComponent_o *v11; // x0
  EventItemSelectDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B181B6 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B181B6 = 1;
  }
  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = &this->fields.onSelectItemFunc;
  v6 = (System_Delegate_o *)onSelectItemFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventItemSelectDlgComponent_CallbackFunc_c *)v8->klass != EventItemSelectDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_onSelectItemFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  EventItemSelectDlgComponent__remove_onSelectItemFunc(v11, v12, v13);
}


bool __fastcall EventItemSelectDlgComponent__isListTouchable(
        EventItemSelectDlgComponent_o *this,
        const MethodInfo *method)
{
  return !this->fields.isClosed;
}


void __fastcall EventItemSelectDlgComponent__remove_onCloseDialogFunc(
        EventItemSelectDlgComponent_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onCloseDialogFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onCloseDialogFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventItemSelectDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B181B9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B181B9 = 1;
  }
  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v6 = (System_Delegate_o *)onCloseDialogFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  EventItemSelectDlgComponent__Init(v11, v12);
}


void __fastcall EventItemSelectDlgComponent__remove_onSelectItemFunc(
        EventItemSelectDlgComponent_o *this,
        EventItemSelectDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventItemSelectDlgComponent_CallbackFunc_o **p_onSelectItemFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventItemSelectDlgComponent_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B181B7 & 1) == 0 )
  {
    sub_1BCA7E0(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B181B7 = 1;
  }
  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = &this->fields.onSelectItemFunc;
  v6 = (System_Delegate_o *)onSelectItemFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventItemSelectDlgComponent_CallbackFunc_c *)v8->klass != EventItemSelectDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_onSelectItemFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  EventItemSelectDlgComponent__add_onCloseDialogFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemSelectDlgComponent_CallbackFunc___ctor(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  char v14; // w21
  char v15; // w0
  struct System_Reflection_MethodInfo_o *v16; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = (Il2CppObject *)sub_1A0EBC4;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 1 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v14 = sub_1BCA898(v10);
        v15 = sub_1BCAD54(v10);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A0ECE0;
          else
            v13 = (Il2CppObject *)sub_1A0EC94;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A0EC08;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A0EBD8;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A0EBA0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v16 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v16;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0EB48;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventItemSelectDlgComponent_CallbackFunc__BeginInvoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = spendNum;
  if ( (byte_4B181C1 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, selectedItem, *(_QWORD *)&spendNum);
    byte_4B181C1 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall EventItemSelectDlgComponent_CallbackFunc__EndInvoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall EventItemSelectDlgComponent_CallbackFunc__Invoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ItemEntity_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    selectedItem,
    spendNum,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall EventItemSelectDlgComponent___c__DisplayClass16_0___ctor(
        EventItemSelectDlgComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventItemSelectDlgComponent___c__DisplayClass16_0___OpenDlg_b__0(
        EventItemSelectDlgComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  ActionExtensions__Call(this->fields.endOpenFunc, 0LL);
  if ( !this->fields.__4__this )
    sub_1BCAA3C(v3, v4);
}


void __fastcall EventItemSelectDlgComponent___c__DisplayClass19_0___ctor(
        EventItemSelectDlgComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventItemSelectDlgComponent___c__DisplayClass19_0___Close_b__0(
        EventItemSelectDlgComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventItemSelectDlgComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventItemSelectDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0LL);
}