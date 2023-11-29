void __fastcall EventItemSelectDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventItemSelectDlgComponent_StaticFields *static_fields; // x9
  struct EventItemSelectDlgComponent_StaticFields *v3; // x8

  if ( (byte_40F8853 & 1) == 0 )
  {
    sub_B16FFC(&EventItemSelectDlgComponent_TypeInfo, v1);
    byte_40F8853 = 1;
  }
  static_fields = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_POS_DEFAULT.fields.x = 0x4369000000000000LL;
  static_fields->TITLE_POS_DEFAULT.fields.z = 0.0;
  v3 = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&v3->TITLE_POS_NONE_DETAIL.fields.x = 0x435C000000000000LL;
  v3->TITLE_POS_NONE_DETAIL.fields.z = 0.0;
}


void __fastcall EventItemSelectDlgComponent___ctor(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40F8852 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F8852 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventItemSelectDlgComponent__ClearInfoGrid(
        EventItemSelectDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *itemListInfoGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_40F8850 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8850 = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  if ( !transform )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v7 = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
      if ( !v7 )
        break;
      v8 = UnityEngine_Component__get_transform(v7, 0LL);
      if ( !v8 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v8, v6, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      if ( --v6 < 0 )
        return;
    }
LABEL_14:
    sub_B170D4();
  }
}


void __fastcall EventItemSelectDlgComponent__Close(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40F884E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventItemSelectDlgComponent_EndClose__, v6);
    byte_40F884E = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventItemSelectDlgComponent_EndClose__, 0LL);
  EventItemSelectDlgComponent__Close_22487032(this, v7, v8);
}


void __fastcall EventItemSelectDlgComponent__Close_22487032(
        EventItemSelectDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x20

  if ( (byte_40F884F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__, v7);
    sub_B16FFC(&EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo, v8);
    byte_40F884F = 1;
  }
  v9 = sub_B170CC(EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo, callback, method, v3, v4);
  EventItemSelectDlgComponent___c__DisplayClass19_0___ctor(
    (EventItemSelectDlgComponent___c__DisplayClass19_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  this->fields.isClosed = 1;
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v26, 0LL);
}


void __fastcall EventItemSelectDlgComponent__EndClose(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  EventItemSelectDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall EventItemSelectDlgComponent__EndOpen(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventItemSelectDlgComponent__Init(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  EventItemSelectDlgComponent__ClearInfoGrid(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventItemSelectDlgComponent__OnClickClose(
        EventItemSelectDlgComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *onCloseDialogFunc; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_40F8851 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F8851 = 1;
  }
  if ( !this->fields.isClosed )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    onCloseDialogFunc = this->fields.onCloseDialogFunc;
    this->fields.onCloseDialogFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.onCloseDialogFunc, 0LL, v4, v5, v6, v7, v8, v9);
    ActionExtensions__Call(onCloseDialogFunc, 0LL);
  }
}


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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UILabel_o *titleLabel; // x0
  UILabel_o *titleDetailLabel; // x0
  bool IsNullOrEmpty; // w0
  bool v56; // w23
  UnityEngine_Transform_o *transform; // x24
  EventItemSelectDlgComponent_c *v58; // x8
  struct EventItemSelectDlgComponent_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Component_o *v63; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_Component_o *itemListInfoGrid; // x0
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *itemListObj; // x23
  UnityEngine_Transform_o *v69; // x2
  UnityEngine_GameObject_o *Object; // x23
  EventItemBoardComponent_o *Component_srcLineSprite; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  EventItemBoardComponent_CallbackFunc_o *v76; // x25
  const MethodInfo *v77; // x4
  UIGrid_o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  System_Action_o *v83; // x20
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F884D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, viewItemList);
    sub_B16FFC(&EventItemBoardComponent_CallbackFunc_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v20);
    sub_B16FFC(&Method_EventItemSelectDlgComponent_SelectItem__, v21);
    sub_B16FFC(&EventItemSelectDlgComponent_TypeInfo, v22);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v24);
    sub_B16FFC(&Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__, v25);
    sub_B16FFC(&EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo, v26);
    byte_40F884D = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v27 = sub_B170CC(EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo, viewItemList, title, detail, endOpenFunc);
  EventItemSelectDlgComponent___c__DisplayClass16_0___ctor(
    (EventItemSelectDlgComponent___c__DisplayClass16_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_33;
  *(_QWORD *)(v27 + 16) = endOpenFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v27 + 16),
    (System_Int32_array **)endOpenFunc,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *(_QWORD *)(v27 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  EventItemSelectDlgComponent__ClearInfoGrid(this, v40);
  if ( !viewItemList )
    return;
  this->fields.onSelectItemFunc = onSelectItemFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onSelectItemFunc,
    (System_Int32_array **)onSelectItemFunc,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.onCloseDialogFunc = onCloseDialogFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onCloseDialogFunc,
    (System_Int32_array **)onCloseDialogFunc,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_33;
  UILabel__set_text(titleLabel, title, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  if ( !titleDetailLabel )
    goto LABEL_33;
  UILabel__set_text(titleDetailLabel, detail, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(detail, 0LL);
  if ( !this->fields.titleLabel )
    goto LABEL_33;
  v56 = IsNullOrEmpty;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.titleLabel, 0LL);
  v58 = EventItemSelectDlgComponent_TypeInfo;
  if ( v56 )
  {
    if ( (WORD1(EventItemSelectDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemSelectDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemSelectDlgComponent_TypeInfo);
      v58 = EventItemSelectDlgComponent_TypeInfo;
    }
    static_fields = v58->static_fields;
    p_x = &static_fields->TITLE_POS_NONE_DETAIL.fields.x;
    p_y = &static_fields->TITLE_POS_NONE_DETAIL.fields.y;
    p_z = &static_fields->TITLE_POS_NONE_DETAIL.fields.z;
    if ( !transform )
      goto LABEL_33;
    goto LABEL_18;
  }
  if ( (WORD1(EventItemSelectDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !EventItemSelectDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemSelectDlgComponent_TypeInfo);
    v58 = EventItemSelectDlgComponent_TypeInfo;
  }
  p_x = &v58->static_fields->TITLE_POS_DEFAULT.fields.x;
  p_y = p_x + 1;
  p_z = p_x + 2;
  if ( !transform )
LABEL_33:
    sub_B170D4();
LABEL_18:
  v86.fields.y = *p_y;
  v86.fields.x = *p_x;
  v86.fields.z = *p_z;
  UnityEngine_Transform__set_localPosition(transform, v86, 0LL);
  v63 = (UnityEngine_Component_o *)this->fields.titleDetailLabel;
  if ( !v63 )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject(v63, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, !v56, 0LL);
  v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v65 )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(v65, 1, 0LL);
  this->fields.isClosed = 0;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v84,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)viewItemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v85 = v84;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v85,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__) )
  {
    itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
    if ( !itemListInfoGrid )
      sub_B170D4();
    current = v85.fields.current;
    itemListObj = this->fields.itemListObj;
    v69 = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, v69, 0LL, 0LL);
    GameObjectExtensions__ResetLocalPosition(Object, 0LL);
    if ( !Object )
      sub_B170D4();
    Component_srcLineSprite = (EventItemBoardComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             Object,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___);
    v76 = (EventItemBoardComponent_CallbackFunc_o *)sub_B170CC(
                                                      EventItemBoardComponent_CallbackFunc_TypeInfo,
                                                      v72,
                                                      v73,
                                                      v74,
                                                      v75);
    EventItemBoardComponent_CallbackFunc___ctor(
      v76,
      (Il2CppObject *)this,
      Method_EventItemSelectDlgComponent_SelectItem__,
      0LL);
    if ( !Component_srcLineSprite )
      sub_B170D4();
    EventItemBoardComponent__SetItemBoardInfo(Component_srcLineSprite, (ItemEntity_o *)current, v76, this, v77);
    UnityEngine_GameObject__SetActive(Object, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v85,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  v78 = this->fields.itemListInfoGrid;
  if ( !v78 )
    goto LABEL_33;
  UIGrid__set_repositionNow(v78, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v83 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v79, v80, v81, v82);
  System_Action___ctor(
    v83,
    (Il2CppObject *)v27,
    Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemSelectDlgComponent__SelectItem(
        EventItemSelectDlgComponent_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onSelectItemFunc; // x0
  EventItemSelectDlgComponent_CallbackFunc_o *v9; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1

  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = (BattleServantConfConponent_o *)&this->fields.onSelectItemFunc;
  v9 = onSelectItemFunc;
  p_onSelectItemFunc->klass = 0LL;
  sub_B16F98(
    p_onSelectItemFunc,
    0LL,
    *(System_String_array ***)&spendNum,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( onSelectItemFunc )
    EventItemSelectDlgComponent_CallbackFunc__Invoke(v9, selectedItem, spendNum, 0LL);
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

  if ( (byte_40F884B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F884B = 1;
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
    v9 = sub_B0BA14(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventItemSelectDlgComponent_o *)sub_B173C8(v8);
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

  if ( (byte_40F8849 & 1) == 0 )
  {
    sub_B16FFC(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40F8849 = 1;
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
    v9 = sub_B0BA14(p_onSelectItemFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventItemSelectDlgComponent_o *)sub_B173C8(v8);
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

  if ( (byte_40F884C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F884C = 1;
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
    v9 = sub_B0BA14(p_onCloseDialogFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventItemSelectDlgComponent_o *)sub_B173C8(v8);
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

  if ( (byte_40F884A & 1) == 0 )
  {
    sub_B16FFC(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40F884A = 1;
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
    v9 = sub_B0BA14(p_onSelectItemFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventItemSelectDlgComponent_o *)sub_B173C8(v8);
  EventItemSelectDlgComponent__add_onCloseDialogFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemSelectDlgComponent_CallbackFunc___ctor(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall EventItemSelectDlgComponent_CallbackFunc__BeginInvoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = spendNum;
  if ( (byte_40F6FEA & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, selectedItem);
    byte_40F6FEA = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall EventItemSelectDlgComponent_CallbackFunc__EndInvoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemSelectDlgComponent_CallbackFunc__Invoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        ItemEntity_o *selectedItem,
        int32_t spendNum,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  EventItemSelectDlgComponent_CallbackFunc_o **v9; // x26
  __int64 i; // x27
  unsigned int v11; // w23
  __int64 class_0; // x0
  ItemEntity_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w24
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(ItemEntity_o *, _QWORD, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, ItemEntity_o *, _QWORD, _QWORD); // x0
  EventItemSelectDlgComponent_CallbackFunc_o *v29; // x8
  __int64 v30; // x22
  __int64 *v31; // x23
  void (__fastcall *v32)(ItemEntity_o *, _QWORD, __int64); // x24
  char v33; // w0
  int v34; // w8
  char v35; // w24
  char v36; // w0
  __int64 v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  unsigned __int64 v40; // x10
  _DWORD *v41; // x11
  char v42; // w23
  char v43; // w0
  ItemEntity_c *klass; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  EventItemSelectDlgComponent_CallbackFunc_o *v49; // [xsp+8h] [xbp-48h] BYREF

  v49 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v49;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (EventItemSelectDlgComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v8; ++i )
    {
      v29 = v9[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(ItemEntity_o *, _QWORD, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v29->fields.extra_arg, selectedItem, *(_QWORD *)&spendNum);
      v33 = sub_B1702C(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 2 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v42 = sub_B17024(v30);
            v43 = sub_B17428(v30);
            if ( (v42 & 1) != 0 )
            {
              if ( (v43 & 1) != 0 )
              {
                klass = selectedItem->klass;
                v45 = *(_QWORD *)(v30 + 24);
                v46 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&selectedItem->klass->_2.bitflags1 )
                {
                  v47 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v45 )
                  {
                    ++v47;
                    p_offset += 4;
                    if ( v47 >= *(unsigned __int16 *)&selectedItem->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v46);
                }
                else
                {
LABEL_57:
                  v25 = sub_AAFEF8(selectedItem, v45, v46);
                }
                v17 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&selectedItem->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))sub_B170AC(v17, v30);
              (*v26)(selectedItem, (unsigned int)spendNum, v26);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v30 + 72);
              if ( (v43 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v13 = selectedItem->klass;
                if ( *(_WORD *)&selectedItem->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&selectedItem->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v11));
                }
                else
                {
LABEL_11:
                  v16 = sub_AAFEF8(selectedItem, class_0, v11);
                }
                (*(void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))v16)(
                  selectedItem,
                  (unsigned int)spendNum,
                  *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))&selectedItem->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  selectedItem,
                  (unsigned int)spendNum,
                  *((_QWORD *)&selectedItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(selectedItem, (unsigned int)spendNum, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B17024(v30);
          v36 = sub_B17428(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v37 = *v31;
              v38 = *(_QWORD *)(v30 + 24);
              v39 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v40 = 0LL;
                v41 = (_DWORD *)(*(_QWORD *)(v37 + 176) + 8LL);
                while ( *((_QWORD *)v41 - 1) != v38 )
                {
                  ++v40;
                  v41 += 4;
                  if ( v40 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v37 + 16LL * (*v41 + (int)v39) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AAFEF8(v31, v38, v39);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))sub_B170AC(v24, v30);
            (*v28)(v31, selectedItem, (unsigned int)spendNum, v28);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v19 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v18) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AAFEF8(v31, v19, v18);
              }
              (*(void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))v23)(
                v31,
                selectedItem,
                (unsigned int)spendNum,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))(*v31
                                                                                + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                                + 312))(
                v31,
                selectedItem,
                (unsigned int)spendNum,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, ItemEntity_o *, _QWORD, __int64))v32)(
        v31,
        selectedItem,
        (unsigned int)spendNum,
        v30);
    }
  }
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
  EventItemSelectDlgComponent_o *_4__this; // x0

  ActionExtensions__Call(this->fields.endOpenFunc, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventItemSelectDlgComponent__EndOpen(_4__this, 0LL);
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
    sub_B170D4();
  EventItemSelectDlgComponent__EndClose(_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}