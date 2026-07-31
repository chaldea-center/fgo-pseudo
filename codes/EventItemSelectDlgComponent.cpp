void EventItemSelectDlgComponent___cctor(const MethodInfo *method)
{
  struct EventItemSelectDlgComponent_StaticFields *static_fields; // x8
  EventItemSelectDlgComponent_c *v2; // x9
  struct EventItemSelectDlgComponent_StaticFields *v3; // x8

  if ( (byte_593ADCE & 1) == 0 )
  {
    sub_21FFC50(&EventItemSelectDlgComponent_TypeInfo);
    byte_593ADCE = 1;
  }
  static_fields = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_POS_DEFAULT.fields.x = 0x4369000000000000LL;
  v2 = EventItemSelectDlgComponent_TypeInfo;
  static_fields->TITLE_POS_DEFAULT.fields.z = 0.0;
  v3 = v2->static_fields;
  *(_QWORD *)&v3->TITLE_POS_NONE_DETAIL.fields.x = 0x435C000000000000LL;
  v3->TITLE_POS_NONE_DETAIL.fields.z = 0.0;
}


void EventItemSelectDlgComponent___ctor(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_593ADCD & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593ADCD = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventItemSelectDlgComponent__ClearInfoGrid(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int v5; // w22
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_593ADCB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593ADCB = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
      if ( !itemListInfoGrid )
        break;
      itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0);
      if ( !itemListInfoGrid )
        break;
      itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)itemListInfoGrid,
                                                      v5 - 2,
                                                      0);
      if ( !itemListInfoGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListInfoGrid, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
      if ( (unsigned int)--v5 <= 1 )
        return;
    }
LABEL_14:
    sub_21FFECC(itemListInfoGrid, method);
  }
}


void EventItemSelectDlgComponent__Close(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_593ADC9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventItemSelectDlgComponent_EndClose__);
    byte_593ADC9 = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventItemSelectDlgComponent_EndClose__, 0);
  EventItemSelectDlgComponent__Close_52579212(this, v3, v4);
}


void EventItemSelectDlgComponent__Close_52579212(
        EventItemSelectDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_c *v20; // x0
  System_Action_o *v21; // x20

  if ( (byte_593ADCA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__);
    sub_21FFC50(&EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo);
    byte_593ADCA = 1;
  }
  v5 = sub_21FFEBC(EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = System_Action_TypeInfo;
  this->fields.isClosed = 1;
  v21 = (System_Action_o *)sub_21FFEBC(v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0);
}


void EventItemSelectDlgComponent__EndClose(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  EventItemSelectDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void EventItemSelectDlgComponent__EndOpen(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventItemSelectDlgComponent__Init(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  EventItemSelectDlgComponent__ClearInfoGrid(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventItemSelectDlgComponent__OnClickClose(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *onCloseDialogFunc; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593ADCC & 1) == 0 )
  {
    sub_21FFC50(&Method_EventItemSelectDlgComponent_OnClickClose__);
    byte_593ADCC = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_EventItemSelectDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_EventItemSelectDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventItemSelectDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    onCloseDialogFunc = this->fields.onCloseDialogFunc;
    this->fields.onCloseDialogFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onCloseDialogFunc, 0, v6, v7, v8, v9, v10, v11);
    ActionExtensions__Call(onCloseDialogFunc, 0);
  }
}


void EventItemSelectDlgComponent__OpenDlg(
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  char v45; // w23
  EventItemSelectDlgComponent_c *v46; // x8
  UnityEngine_Transform_o *v47; // x24
  int v48; // w9
  struct EventItemSelectDlgComponent_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  const MethodInfo_4450604 *v53; // x1
  __int64 v54; // x1
  UnityEngine_Component_o *itemListInfoGrid; // x0
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *itemListObj; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x23
  __int64 v60; // x0
  __int64 v61; // x1
  Il2CppObject *Component_object; // x24
  EventItemBoardComponent_CallbackFunc_o *v63; // x25
  const MethodInfo *v64; // x3
  __int64 v65; // x0
  __int64 v66; // x1
  const MethodInfo *v67; // x4
  System_Action_o *v68; // x20
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593ADC8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&EventItemBoardComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__);
    sub_21FFC50(&Method_EventItemSelectDlgComponent_SelectItem__);
    sub_21FFC50(&EventItemSelectDlgComponent_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
    sub_21FFC50(&Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__);
    sub_21FFC50(&EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo);
    byte_593ADC8 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v17 = sub_21FFEBC(EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_31;
  *(_QWORD *)(v17 + 16) = endOpenFunc;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)endOpenFunc, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 24), (int32_t)this, v26, v27, v28, v29, v30, v31);
  EventItemSelectDlgComponent__ClearInfoGrid(this, v32);
  if ( !viewItemList )
    return;
  this->fields.onSelectItemFunc = onSelectItemFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectItemFunc,
    (int32_t)onSelectItemFunc,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.onCloseDialogFunc = onCloseDialogFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onCloseDialogFunc,
    (int32_t)onCloseDialogFunc,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, title, 0);
  titleLabel = this->fields.titleDetailLabel;
  if ( !titleLabel )
    goto LABEL_31;
  UILabel__set_text(titleLabel, detail, 0);
  titleLabel = (UILabel_o *)System_String__IsNullOrEmpty(detail, 0);
  if ( !this->fields.titleLabel )
    goto LABEL_31;
  v45 = (char)titleLabel;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.titleLabel, 0);
  v46 = EventItemSelectDlgComponent_TypeInfo;
  v47 = (UnityEngine_Transform_o *)titleLabel;
  v48 = *(&EventItemSelectDlgComponent_TypeInfo->_2.cctor_finished + 1);
  if ( (v45 & 1) != 0 )
  {
    if ( !v48 )
    {
      j_il2cpp_runtime_class_init_0(EventItemSelectDlgComponent_TypeInfo, v19);
      v46 = EventItemSelectDlgComponent_TypeInfo;
    }
    static_fields = v46->static_fields;
    p_x = &static_fields->TITLE_POS_NONE_DETAIL.fields.x;
    p_y = &static_fields->TITLE_POS_NONE_DETAIL.fields.y;
    p_z = &static_fields->TITLE_POS_NONE_DETAIL.fields.z;
  }
  else
  {
    if ( !v48 )
    {
      j_il2cpp_runtime_class_init_0(EventItemSelectDlgComponent_TypeInfo, v19);
      v46 = EventItemSelectDlgComponent_TypeInfo;
    }
    p_x = &v46->static_fields->TITLE_POS_DEFAULT.fields.x;
    p_y = p_x + 1;
    p_z = p_x + 2;
  }
  if ( !v47 )
    goto LABEL_31;
  v71.fields.z = *p_z;
  v71.fields.y = *p_y;
  v71.fields.x = *p_x;
  UnityEngine_Transform__set_localPosition(v47, v71, 0);
  titleLabel = this->fields.titleDetailLabel;
  if ( !titleLabel )
    goto LABEL_31;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  if ( !titleLabel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, (v45 & 1) == 0, 0);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
  v53 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__;
  this->fields.isClosed = 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    (System_Collections_Generic_List_object__o *)viewItemList,
    v53);
  v70 = v69;
  v69.fields._list = 0;
  *(_QWORD *)&v69.fields._index = &v70;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__) )
  {
    itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
    if ( !itemListInfoGrid )
      sub_21FFECC(0, v54);
    current = v70.fields._current;
    itemListObj = this->fields.itemListObj;
    transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0, 0);
    GameObjectExtensions__ResetLocalPosition(Object, 0);
    if ( !Object )
      sub_21FFECC(v60, v61);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___);
    v63 = (EventItemBoardComponent_CallbackFunc_o *)sub_21FFEBC(EventItemBoardComponent_CallbackFunc_TypeInfo);
    EventItemBoardComponent_CallbackFunc___ctor(
      v63,
      (Il2CppObject *)this,
      Method_EventItemSelectDlgComponent_SelectItem__,
      v64);
    if ( !Component_object )
      sub_21FFECC(v65, v66);
    EventItemBoardComponent__SetItemBoardInfo(
      (EventItemBoardComponent_o *)Component_object,
      (ItemEntity_o *)current,
      v63,
      this,
      v67);
    UnityEngine_GameObject__SetActive(Object, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  titleLabel = (UILabel_o *)this->fields.itemListInfoGrid;
  if ( !titleLabel )
LABEL_31:
    sub_21FFECC(titleLabel, v19);
  UIGrid__set_repositionNow((UIGrid_o *)titleLabel, 1, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v68 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v17,
    Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v68, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventItemSelectDlgComponent__SelectItem(
        EventItemSelectDlgComponent_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onSelectItemFunc; // x0
  struct EventItemSelectDlgComponent_CallbackFunc_o *v11; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1

  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectItemFunc;
  v11 = onSelectItemFunc;
  p_onSelectItemFunc->klass = 0;
  sub_21FFBF4(p_onSelectItemFunc, 0, *(System_String_o **)&spendNum, (System_String_o *)method, v4, v5, v6, v7);
  if ( onSelectItemFunc )
    ((void (__fastcall *)(intptr_t, ItemEntity_o *, _QWORD, intptr_t))v11->fields.invoke_impl)(
      v11->fields.method_code,
      selectedItem,
      (unsigned int)spendNum,
      v11->fields.method);
}


void EventItemSelectDlgComponent__add_onCloseDialogFunc(
        EventItemSelectDlgComponent_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onCloseDialogFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onCloseDialogFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  EventItemSelectDlgComponent_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_593ADC6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593ADC6 = 1;
  }
  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v6 = (System_Delegate_o *)onCloseDialogFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_223767C(p_onCloseDialogFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, System_Action_TypeInfo, v9);
  EventItemSelectDlgComponent__remove_onCloseDialogFunc(v12, v13, v14);
}


void EventItemSelectDlgComponent__add_onSelectItemFunc(
        EventItemSelectDlgComponent_o *this,
        EventItemSelectDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventItemSelectDlgComponent_CallbackFunc_o **p_onSelectItemFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  EventItemSelectDlgComponent_o *v12; // x0
  EventItemSelectDlgComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_593ADC4 & 1) == 0 )
  {
    sub_21FFC50(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo);
    byte_593ADC4 = 1;
  }
  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = &this->fields.onSelectItemFunc;
  v6 = (System_Delegate_o *)onSelectItemFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (EventItemSelectDlgComponent_CallbackFunc_c *)v8->klass != EventItemSelectDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_223767C(p_onSelectItemFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, EventItemSelectDlgComponent_CallbackFunc_TypeInfo, v9);
  EventItemSelectDlgComponent__remove_onSelectItemFunc(v12, v13, v14);
}


bool EventItemSelectDlgComponent__isListTouchable(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  return !this->fields.isClosed;
}


void EventItemSelectDlgComponent__remove_onCloseDialogFunc(
        EventItemSelectDlgComponent_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_onCloseDialogFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *onCloseDialogFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  EventItemSelectDlgComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593ADC7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593ADC7 = 1;
  }
  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v6 = (System_Delegate_o *)onCloseDialogFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_223767C(p_onCloseDialogFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, System_Action_TypeInfo, v9);
  EventItemSelectDlgComponent__Init(v12, v13);
}


void EventItemSelectDlgComponent__remove_onSelectItemFunc(
        EventItemSelectDlgComponent_o *this,
        EventItemSelectDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EventItemSelectDlgComponent_CallbackFunc_o **p_onSelectItemFunc; // x20
  System_Delegate_o *v6; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  EventItemSelectDlgComponent_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_593ADC5 & 1) == 0 )
  {
    sub_21FFC50(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo);
    byte_593ADC5 = 1;
  }
  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = &this->fields.onSelectItemFunc;
  v6 = (System_Delegate_o *)onSelectItemFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (EventItemSelectDlgComponent_CallbackFunc_c *)v8->klass != EventItemSelectDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_223767C(p_onSelectItemFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, EventItemSelectDlgComponent_CallbackFunc_TypeInfo, v9);
  EventItemSelectDlgComponent__add_onCloseDialogFunc(v12, v13, v14);
}


void EventItemSelectDlgComponent_CallbackFunc___ctor(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  char v14; // w21
  char v15; // w0
  Il2CppObject *m_target; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_1FFDB1C;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 1 )
    {
      if ( this->fields.method_is_virtual )
      {
        v14 = sub_21FFD20(method);
        v15 = sub_22002A4(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_1FFDC34;
          else
            v13 = sub_1FFDBE8;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_1FFDB5C;
        }
        else
        {
          v13 = sub_1FFDB30;
        }
      }
      else
      {
        v13 = sub_1FFDAFC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1FFDAA4;
}


System_IAsyncResult_o *EventItemSelectDlgComponent_CallbackFunc__BeginInvoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = spendNum;
  v10[0] = selectedItem;
  v10[2] = 0;
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void EventItemSelectDlgComponent_CallbackFunc__EndInvoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void EventItemSelectDlgComponent_CallbackFunc__Invoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, ItemEntity_o *, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    selectedItem,
    spendNum,
    this->fields.method);
}


void EventItemSelectDlgComponent___c__DisplayClass16_0___ctor(
        EventItemSelectDlgComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventItemSelectDlgComponent___c__DisplayClass16_0___OpenDlg_b__0(
        EventItemSelectDlgComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  ActionExtensions__Call(this->fields.endOpenFunc, 0);
  if ( !this->fields.__4__this )
    sub_21FFECC(v3, v4);
}


void EventItemSelectDlgComponent___c__DisplayClass19_0___ctor(
        EventItemSelectDlgComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventItemSelectDlgComponent___c__DisplayClass19_0___Close_b__0(
        EventItemSelectDlgComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventItemSelectDlgComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  EventItemSelectDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}