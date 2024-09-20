void __fastcall EventItemSelectDlgComponent___cctor(const MethodInfo *method)
{
  struct EventItemSelectDlgComponent_StaticFields *static_fields; // x8
  struct EventItemSelectDlgComponent_StaticFields *v2; // x8

  if ( (byte_4A5D1A8 & 1) == 0 )
  {
    sub_1B885B0(&EventItemSelectDlgComponent_TypeInfo);
    byte_4A5D1A8 = 1;
  }
  static_fields = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_POS_DEFAULT.fields.x = 0x4369000000000000LL;
  static_fields->TITLE_POS_DEFAULT.fields.z = 0.0;
  v2 = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&v2->TITLE_POS_NONE_DETAIL.fields.x = 0x435C000000000000LL;
  v2->TITLE_POS_NONE_DETAIL.fields.z = 0.0;
}


void __fastcall EventItemSelectDlgComponent___ctor(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5D1A7 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5D1A7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventItemSelectDlgComponent__ClearInfoGrid(
        EventItemSelectDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4A5D1A5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D1A5 = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 && (v5 & 0x80000000) == 0 )
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
                                                      v5,
                                                      0LL);
      if ( !itemListInfoGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListInfoGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_1B8880C(itemListInfoGrid, method);
  }
}


void __fastcall EventItemSelectDlgComponent__Close(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A5D1A3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventItemSelectDlgComponent_EndClose__);
    byte_4A5D1A3 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventItemSelectDlgComponent_EndClose__, 0LL);
  EventItemSelectDlgComponent__Close_42167412(this, v3, v4);
}


void __fastcall EventItemSelectDlgComponent__Close_42167412(
        EventItemSelectDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o *v12; // x20

  if ( (byte_4A5D1A4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__);
    sub_1B885B0(&EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo);
    byte_4A5D1A4 = 1;
  }
  v5 = sub_1B887FC(EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  this->fields.isClosed = 1;
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall EventItemSelectDlgComponent__EndClose(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  EventItemSelectDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
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
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventItemSelectDlgComponent__OnClickClose(
        EventItemSelectDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *onCloseDialogFunc; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D1A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventItemSelectDlgComponent_OnClickClose__);
    byte_4A5D1A6 = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_EventItemSelectDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_EventItemSelectDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventItemSelectDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    onCloseDialogFunc = this->fields.onCloseDialogFunc;
    this->fields.onCloseDialogFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onCloseDialogFunc, 0, v6, v7);
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
  __int64 v17; // x21
  UILabel_o *titleLabel; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  char v29; // w23
  EventItemSelectDlgComponent_c *v30; // x8
  UnityEngine_Transform_o *v31; // x24
  int *static_fields; // x8
  __int64 v33; // x9
  __int64 v34; // x10
  int v35; // s2
  int v36; // s1
  int v37; // s0
  __int64 v38; // x1
  UnityEngine_Component_o *itemListInfoGrid; // x0
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *itemListObj; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x23
  __int64 v44; // x0
  __int64 v45; // x1
  Il2CppObject *Component_object; // x24
  EventItemBoardComponent_CallbackFunc_o *v47; // x25
  const MethodInfo *v48; // x3
  __int64 v49; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x4
  System_Action_o *v52; // x20
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5D1A2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&EventItemBoardComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__);
    sub_1B885B0(&Method_EventItemSelectDlgComponent_SelectItem__);
    sub_1B885B0(&EventItemSelectDlgComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
    sub_1B885B0(&Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__);
    sub_1B885B0(&EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo);
    byte_4A5D1A2 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v17 = sub_1B887FC(EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_33;
  *(_QWORD *)(v17 + 16) = endOpenFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)endOpenFunc, v20, v21);
  *(_QWORD *)(v17 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v22, v23);
  EventItemSelectDlgComponent__ClearInfoGrid(this, v24);
  if ( !viewItemList )
    return;
  this->fields.onSelectItemFunc = onSelectItemFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onSelectItemFunc, (int32_t)onSelectItemFunc, v25, v26);
  this->fields.onCloseDialogFunc = onCloseDialogFunc;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onCloseDialogFunc,
    (int32_t)onCloseDialogFunc,
    v27,
    v28);
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
  v29 = (char)titleLabel;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.titleLabel,
                              0LL);
  v30 = EventItemSelectDlgComponent_TypeInfo;
  v31 = (UnityEngine_Transform_o *)titleLabel;
  if ( !EventItemSelectDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemSelectDlgComponent_TypeInfo);
    v30 = EventItemSelectDlgComponent_TypeInfo;
  }
  if ( !v31 )
    goto LABEL_33;
  static_fields = (int *)v30->static_fields;
  v33 = 2LL;
  if ( (v29 & 1) != 0 )
    v33 = 5LL;
  if ( (v29 & 1) != 0 )
    v34 = 4LL;
  else
    v34 = 1LL;
  v35 = static_fields[v33];
  v36 = static_fields[v34];
  if ( (v29 & 1) != 0 )
    static_fields += 3;
  v37 = *static_fields;
  UnityEngine_Transform__set_localPosition(v31, *(UnityEngine_Vector3_o *)(&v36 - 1), 0LL);
  titleLabel = this->fields.titleDetailLabel;
  if ( !titleLabel )
    goto LABEL_33;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, (v29 & 1) == 0, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
  this->fields.isClosed = 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)viewItemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v54 = v53;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__) )
  {
    itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
    if ( !itemListInfoGrid )
      sub_1B8880C(0LL, v38);
    current = v54.fields._current;
    itemListObj = this->fields.itemListObj;
    transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0LL, 0LL);
    GameObjectExtensions__ResetLocalPosition(Object, 0LL);
    if ( !Object )
      sub_1B8880C(v44, v45);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___);
    v47 = (EventItemBoardComponent_CallbackFunc_o *)sub_1B887FC(EventItemBoardComponent_CallbackFunc_TypeInfo);
    EventItemBoardComponent_CallbackFunc___ctor(
      v47,
      (Il2CppObject *)this,
      Method_EventItemSelectDlgComponent_SelectItem__,
      v48);
    if ( !Component_object )
      sub_1B8880C(v49, v50);
    EventItemBoardComponent__SetItemBoardInfo(
      (EventItemBoardComponent_o *)Component_object,
      (ItemEntity_o *)current,
      v47,
      this,
      v51);
    UnityEngine_GameObject__SetActive(Object, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  titleLabel = (UILabel_o *)this->fields.itemListInfoGrid;
  if ( !titleLabel )
LABEL_33:
    sub_1B8880C(titleLabel, v19);
  UIGrid__set_repositionNow((UIGrid_o *)titleLabel, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v52 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v17,
    Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
}


void __fastcall EventItemSelectDlgComponent__SelectItem(
        EventItemSelectDlgComponent_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_onSelectItemFunc; // x0
  struct EventItemSelectDlgComponent_CallbackFunc_o *v5; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1

  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = (ServantStatusBattleListViewItem_o *)&this->fields.onSelectItemFunc;
  v5 = onSelectItemFunc;
  p_onSelectItemFunc->klass = 0LL;
  sub_1B88554(p_onSelectItemFunc, 0, spendNum, (int32_t)method);
  if ( onSelectItemFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ItemEntity_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      selectedItem,
      (unsigned int)spendNum,
      *(_QWORD *)&v5->fields.extra_arg);
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

  if ( (byte_4A5D1A0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5D1A0 = 1;
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
    v9 = sub_1BC3AA0(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A5D19E & 1) == 0 )
  {
    sub_1B885B0(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo);
    byte_4A5D19E = 1;
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
    v9 = sub_1BC3AA0(p_onSelectItemFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A5D1A1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5D1A1 = 1;
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
    v9 = sub_1BC3AA0(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A5D19F & 1) == 0 )
  {
    sub_1B885B0(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo);
    byte_4A5D19F = 1;
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
    v9 = sub_1BC3AA0(p_onSelectItemFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  EventItemSelectDlgComponent__add_onCloseDialogFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemSelectDlgComponent_CallbackFunc___ctor(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  char v10; // w21
  char v11; // w0
  struct System_Reflection_MethodInfo_o *v12; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 2 )
    {
      v9 = (Il2CppObject *)sub_19D0724;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 1 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v10 = sub_1B88668(v6);
        v11 = sub_1B88B24(v6);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19D0840;
          else
            v9 = (Il2CppObject *)sub_19D07F4;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19D0768;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19D0738;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19D0700;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v13, 0LL);
    }
  }
  v12 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v12;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D06A8;
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
  if ( (byte_4A5D1A9 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A5D1A9 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, *(_QWORD *)&spendNum, callback, object);
  return (System_IAsyncResult_o *)sub_1B88564(this, v11, callback, object);
}


void __fastcall EventItemSelectDlgComponent_CallbackFunc__EndInvoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
    sub_1B8880C(v3, v4);
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
    sub_1B8880C(0LL, method);
  EventItemSelectDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0LL);
}