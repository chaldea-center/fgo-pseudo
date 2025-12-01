void EventItemSelectDlgComponent___cctor(const MethodInfo *method)
{
  struct EventItemSelectDlgComponent_StaticFields *static_fields; // x8
  struct EventItemSelectDlgComponent_StaticFields *v2; // x8

  if ( (byte_4CC9312 & 1) == 0 )
  {
    sub_1C713B0(&EventItemSelectDlgComponent_TypeInfo);
    byte_4CC9312 = 1;
  }
  static_fields = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_POS_DEFAULT.fields.x = 0x4369000000000000LL;
  static_fields->TITLE_POS_DEFAULT.fields.z = 0.0;
  v2 = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&v2->TITLE_POS_NONE_DETAIL.fields.x = 0x435C000000000000LL;
  v2->TITLE_POS_NONE_DETAIL.fields.z = 0.0;
}


void EventItemSelectDlgComponent___ctor(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CC9311 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC9311 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventItemSelectDlgComponent__ClearInfoGrid(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4CC930F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC930F = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0);
  v5 = childCount - 1;
  if ( childCount >= 1 && (v5 & 0x80000000) == 0 )
  {
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
                                                      v5,
                                                      0);
      if ( !itemListInfoGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListInfoGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(gameObject, 0);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_1C71608(itemListInfoGrid, method);
  }
}


void EventItemSelectDlgComponent__Close(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4CC930D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventItemSelectDlgComponent_EndClose__);
    byte_4CC930D = 1;
  }
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventItemSelectDlgComponent_EndClose__, 0);
  EventItemSelectDlgComponent__Close_45047076(this, v3, v4);
}


void EventItemSelectDlgComponent__Close_45047076(
        EventItemSelectDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x20

  if ( (byte_4CC930E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__);
    sub_1C713B0(&EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo);
    byte_4CC930E = 1;
  }
  v5 = sub_1C715FC(EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  this->fields.isClosed = 1;
  v20 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0);
}


void EventItemSelectDlgComponent__EndClose(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  EventItemSelectDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
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
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventItemSelectDlgComponent__OnClickClose(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *onCloseDialogFunc; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC9310 & 1) == 0 )
  {
    sub_1C713B0(&Method_EventItemSelectDlgComponent_OnClickClose__);
    byte_4CC9310 = 1;
  }
  if ( !this->fields.isClosed )
  {
    v3 = Method_EventItemSelectDlgComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_EventItemSelectDlgComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventItemSelectDlgComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    onCloseDialogFunc = this->fields.onCloseDialogFunc;
    this->fields.onCloseDialogFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onCloseDialogFunc, 0, v6, v7, v8, v9, v10, v11);
    ActionExtensions__Call(onCloseDialogFunc, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  char v45; // w23
  EventItemSelectDlgComponent_c *v46; // x8
  UnityEngine_Transform_o *v47; // x24
  int *static_fields; // x8
  __int64 v49; // x9
  __int64 v50; // x10
  int v51; // s2
  int v52; // s1 OVERLAPPED
  int v53; // s0
  __int64 v54; // x1
  UnityEngine_Component_o *itemListInfoGrid; // x0
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *itemListObj; // x23
  UnityEngine_Transform_o *transform; // x2
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

  if ( (byte_4CC930C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&EventItemBoardComponent_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__);
    sub_1C713B0(&Method_EventItemSelectDlgComponent_SelectItem__);
    sub_1C713B0(&EventItemSelectDlgComponent_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
    sub_1C713B0(&Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__);
    sub_1C713B0(&EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo);
    byte_4CC930C = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v17 = sub_1C715FC(EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_31;
  *(_QWORD *)(v17 + 16) = endOpenFunc;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 16), (int32_t)endOpenFunc, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 24), (int32_t)this, v26, v27, v28, v29, v30, v31);
  EventItemSelectDlgComponent__ClearInfoGrid(this, v32);
  if ( !viewItemList )
    return;
  this->fields.onSelectItemFunc = onSelectItemFunc;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.onSelectItemFunc,
    (int32_t)onSelectItemFunc,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.onCloseDialogFunc = onCloseDialogFunc;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.onCloseDialogFunc,
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
  if ( !EventItemSelectDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemSelectDlgComponent_TypeInfo);
    v46 = EventItemSelectDlgComponent_TypeInfo;
  }
  if ( !v47 )
    goto LABEL_31;
  static_fields = (int *)v46->static_fields;
  v49 = 2;
  if ( (v45 & 1) != 0 )
  {
    v49 = 5;
    v50 = 4;
  }
  else
  {
    v50 = 1;
  }
  v51 = static_fields[v49];
  v52 = static_fields[v50];
  if ( (v45 & 1) != 0 )
    static_fields += 3;
  v53 = *static_fields;
  UnityEngine_Transform__set_localPosition(v47, *(UnityEngine_Vector3_o *)(&v52 - 1), 0);
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
  this->fields.isClosed = 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    (System_Collections_Generic_List_object__o *)viewItemList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v70 = v69;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__) )
  {
    itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
    if ( !itemListInfoGrid )
      sub_1C71608(0, v54);
    current = v70.fields._current;
    itemListObj = this->fields.itemListObj;
    transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0, 0);
    GameObjectExtensions__ResetLocalPosition(Object, 0);
    if ( !Object )
      sub_1C71608(v60, v61);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___);
    v63 = (EventItemBoardComponent_CallbackFunc_o *)sub_1C715FC(EventItemBoardComponent_CallbackFunc_TypeInfo);
    EventItemBoardComponent_CallbackFunc___ctor(
      v63,
      (Il2CppObject *)this,
      Method_EventItemSelectDlgComponent_SelectItem__,
      v64);
    if ( !Component_object )
      sub_1C71608(v65, v66);
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
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  titleLabel = (UILabel_o *)this->fields.itemListInfoGrid;
  if ( !titleLabel )
LABEL_31:
    sub_1C71608(titleLabel, v19);
  UIGrid__set_repositionNow((UIGrid_o *)titleLabel, 1, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v68 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v17,
    Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v68, 0, 0, 0);
}


void EventItemSelectDlgComponent__SelectItem(
        EventItemSelectDlgComponent_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onSelectItemFunc; // x0
  struct EventItemSelectDlgComponent_CallbackFunc_o *v9; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1

  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = (GrandQuestFolderBoardItem_o *)&this->fields.onSelectItemFunc;
  v9 = onSelectItemFunc;
  p_onSelectItemFunc->klass = 0;
  sub_1C71354(p_onSelectItemFunc, 0, spendNum, (int32_t)method, v4, v5, v6, v7);
  if ( onSelectItemFunc )
    ((void (__fastcall *)(intptr_t, ItemEntity_o *, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      selectedItem,
      (unsigned int)spendNum,
      v9->fields.method);
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
  __int64 v9; // x0
  bool v10; // zf
  EventItemSelectDlgComponent_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC930A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC930A = 1;
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
    v9 = sub_1CCD184(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  EventItemSelectDlgComponent__remove_onCloseDialogFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  EventItemSelectDlgComponent_o *v11; // x0
  EventItemSelectDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC9308 & 1) == 0 )
  {
    sub_1C713B0(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo);
    byte_4CC9308 = 1;
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
    v9 = sub_1CCD184(p_onSelectItemFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  EventItemSelectDlgComponent__remove_onSelectItemFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  EventItemSelectDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC930B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC930B = 1;
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
    v9 = sub_1CCD184(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  EventItemSelectDlgComponent__Init(v11, v12);
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
  __int64 v9; // x0
  bool v10; // zf
  EventItemSelectDlgComponent_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC9309 & 1) == 0 )
  {
    sub_1C713B0(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo);
    byte_4CC9309 = 1;
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
    v9 = sub_1CCD184(p_onSelectItemFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  EventItemSelectDlgComponent__add_onCloseDialogFunc(v11, v12, v13);
}


void EventItemSelectDlgComponent_CallbackFunc___ctor(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_1AA8878;
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
        v14 = sub_1C71468(method);
        v15 = sub_1C719FC(method);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = sub_1AA8994;
          else
            v13 = sub_1AA8948;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = sub_1AA88BC;
        }
        else
        {
          v13 = sub_1AA888C;
        }
      }
      else
      {
        v13 = sub_1AA8854;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AA87FC;
}


System_IAsyncResult_o *EventItemSelectDlgComponent_CallbackFunc__BeginInvoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = spendNum;
  if ( (byte_4CC9313 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    byte_4CC9313 = 1;
  }
  v11[2] = 0;
  v11[0] = selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


void EventItemSelectDlgComponent_CallbackFunc__EndInvoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
    sub_1C71608(v3, v4);
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
    sub_1C71608(0, method);
  EventItemSelectDlgComponent__EndClose(_4__this, method);
  ActionExtensions__Call(this->fields.callback, 0);
}