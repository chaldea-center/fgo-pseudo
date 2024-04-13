void __fastcall EventItemSelectDlgComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct EventItemSelectDlgComponent_StaticFields *static_fields; // x9
  struct EventItemSelectDlgComponent_StaticFields *v5; // x8

  if ( (byte_42E9B0E & 1) == 0 )
  {
    sub_B5D5C4(&EventItemSelectDlgComponent_TypeInfo, v1, v2, v3);
    byte_42E9B0E = 1;
  }
  static_fields = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_POS_DEFAULT.fields.x = 0x4369000000000000LL;
  static_fields->TITLE_POS_DEFAULT.fields.z = 0.0;
  v5 = EventItemSelectDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&v5->TITLE_POS_NONE_DETAIL.fields.x = 0x435C000000000000LL;
  v5->TITLE_POS_NONE_DETAIL.fields.z = 0.0;
}


void __fastcall EventItemSelectDlgComponent___ctor(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9B0D & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9B0D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventItemSelectDlgComponent__ClearInfoGrid(
        EventItemSelectDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *itemListInfoGrid; // x0
  int32_t childCount; // w0
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42E9B0B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9B0B = 1;
  }
  itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
  if ( !itemListInfoGrid )
    goto LABEL_14;
  itemListInfoGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
  if ( !itemListInfoGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListInfoGrid, 0LL);
  v7 = childCount - 1;
  if ( childCount >= 1 )
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
                                                      v7,
                                                      0LL);
      if ( !itemListInfoGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListInfoGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      if ( --v7 < 0 )
        return;
    }
LABEL_14:
    sub_B5D69C(itemListInfoGrid, method);
  }
}


void __fastcall EventItemSelectDlgComponent__Close(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E9B09 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventItemSelectDlgComponent_EndClose__, v5, v6, v7);
    byte_42E9B09 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventItemSelectDlgComponent_EndClose__, 0LL);
  EventItemSelectDlgComponent__Close_27122176(this, v8, v9);
}


void __fastcall EventItemSelectDlgComponent__Close_27122176(
        EventItemSelectDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x20

  if ( (byte_42E9B0A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__, v6, v7, v8);
    sub_B5D5C4(&EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo, v9, v10, v11);
    byte_42E9B0A = 1;
  }
  v12 = sub_B5D694(EventItemSelectDlgComponent___c__DisplayClass19_0_TypeInfo);
  EventItemSelectDlgComponent___c__DisplayClass19_0___ctor(
    (EventItemSelectDlgComponent___c__DisplayClass19_0_o *)v12,
    0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  this->fields.isClosed = 1;
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_EventItemSelectDlgComponent___c__DisplayClass19_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v27, 0LL);
}


void __fastcall EventItemSelectDlgComponent__EndClose(EventItemSelectDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  EventItemSelectDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventItemSelectDlgComponent__OnClickClose(
        EventItemSelectDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_o *onCloseDialogFunc; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E9B0C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9B0C = 1;
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.onCloseDialogFunc, 0LL, v6, v7, v8, v9, v10, v11);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  __int64 v47; // x21
  UILabel_o *titleLabel; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  char v75; // w23
  UnityEngine_Transform_o *v76; // x24
  EventItemSelectDlgComponent_c *v77; // x8
  struct EventItemSelectDlgComponent_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  __int64 v82; // x1
  UnityEngine_Component_o *itemListInfoGrid; // x0
  Il2CppObject *current; // x22
  UnityEngine_GameObject_o *itemListObj; // x23
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x23
  __int64 v88; // x0
  __int64 v89; // x1
  EventItemBoardComponent_o *Component_srcLineSprite; // x24
  EventItemBoardComponent_CallbackFunc_o *v91; // x25
  __int64 v92; // x0
  __int64 v93; // x1
  const MethodInfo *v94; // x4
  System_Action_o *v95; // x20
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9B08 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)viewItemList, (_DWORD)title, detail);
    sub_B5D5C4(&EventItemBoardComponent_CallbackFunc_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ItemEntity__get_Current__, v26, v27, v28);
    sub_B5D5C4(&Method_EventItemSelectDlgComponent_SelectItem__, v29, v30, v31);
    sub_B5D5C4(&EventItemSelectDlgComponent_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__, v38, v39, v40);
    sub_B5D5C4(&Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__, v41, v42, v43);
    sub_B5D5C4(&EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo, v44, v45, v46);
    byte_42E9B08 = 1;
  }
  memset(&v97, 0, sizeof(v97));
  v47 = sub_B5D694(EventItemSelectDlgComponent___c__DisplayClass16_0_TypeInfo);
  EventItemSelectDlgComponent___c__DisplayClass16_0___ctor(
    (EventItemSelectDlgComponent___c__DisplayClass16_0_o *)v47,
    0LL);
  if ( !v47 )
    goto LABEL_33;
  *(_QWORD *)(v47 + 16) = endOpenFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v47 + 16),
    (System_Int32_array **)endOpenFunc,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  *(_QWORD *)(v47 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v47 + 24), (System_Int32_array **)this, v56, v57, v58, v59, v60, v61);
  EventItemSelectDlgComponent__ClearInfoGrid(this, v62);
  if ( !viewItemList )
    return;
  this->fields.onSelectItemFunc = onSelectItemFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onSelectItemFunc,
    (System_Int32_array **)onSelectItemFunc,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.onCloseDialogFunc = onCloseDialogFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onCloseDialogFunc,
    (System_Int32_array **)onCloseDialogFunc,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
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
  v75 = (char)titleLabel;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)this->fields.titleLabel,
                              0LL);
  v76 = (UnityEngine_Transform_o *)titleLabel;
  v77 = EventItemSelectDlgComponent_TypeInfo;
  if ( (v75 & 1) != 0 )
  {
    if ( (WORD1(EventItemSelectDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventItemSelectDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventItemSelectDlgComponent_TypeInfo);
      v77 = EventItemSelectDlgComponent_TypeInfo;
    }
    static_fields = v77->static_fields;
    p_x = &static_fields->TITLE_POS_NONE_DETAIL.fields.x;
    p_y = &static_fields->TITLE_POS_NONE_DETAIL.fields.y;
    p_z = &static_fields->TITLE_POS_NONE_DETAIL.fields.z;
    if ( !v76 )
      goto LABEL_33;
    goto LABEL_18;
  }
  if ( (WORD1(EventItemSelectDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !EventItemSelectDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemSelectDlgComponent_TypeInfo);
    v77 = EventItemSelectDlgComponent_TypeInfo;
  }
  p_x = &v77->static_fields->TITLE_POS_DEFAULT.fields.x;
  p_y = p_x + 1;
  p_z = p_x + 2;
  if ( !v76 )
LABEL_33:
    sub_B5D69C(titleLabel, v49);
LABEL_18:
  v98.fields.y = *p_y;
  v98.fields.x = *p_x;
  v98.fields.z = *p_z;
  UnityEngine_Transform__set_localPosition(v76, v98, 0LL);
  titleLabel = this->fields.titleDetailLabel;
  if ( !titleLabel )
    goto LABEL_33;
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, (v75 & 1) == 0, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
  this->fields.isClosed = 0;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v96,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)viewItemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ItemEntity__GetEnumerator__);
  v97 = v96;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v97,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__MoveNext__) )
  {
    itemListInfoGrid = (UnityEngine_Component_o *)this->fields.itemListInfoGrid;
    if ( !itemListInfoGrid )
      sub_B5D69C(0LL, v82);
    current = v97.fields.current;
    itemListObj = this->fields.itemListObj;
    transform = UnityEngine_Component__get_transform(itemListInfoGrid, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemListObj, transform, 0LL, 0LL);
    GameObjectExtensions__ResetLocalPosition(Object, 0LL);
    if ( !Object )
      sub_B5D69C(v88, v89);
    Component_srcLineSprite = (EventItemBoardComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             Object,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventItemBoardComponent___);
    v91 = (EventItemBoardComponent_CallbackFunc_o *)sub_B5D694(EventItemBoardComponent_CallbackFunc_TypeInfo);
    EventItemBoardComponent_CallbackFunc___ctor(
      v91,
      (Il2CppObject *)this,
      Method_EventItemSelectDlgComponent_SelectItem__,
      0LL);
    if ( !Component_srcLineSprite )
      sub_B5D69C(v92, v93);
    EventItemBoardComponent__SetItemBoardInfo(Component_srcLineSprite, (ItemEntity_o *)current, v91, this, v94);
    UnityEngine_GameObject__SetActive(Object, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v97,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ItemEntity__Dispose__);
  titleLabel = (UILabel_o *)this->fields.itemListInfoGrid;
  if ( !titleLabel )
    goto LABEL_33;
  UIGrid__set_repositionNow((UIGrid_o *)titleLabel, 1, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v95 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v95,
    (Il2CppObject *)v47,
    Method_EventItemSelectDlgComponent___c__DisplayClass16_0__OpenDlg_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v95, 0, 0LL);
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
  sub_B5D560(
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
  __int64 v3; // x3
  struct System_Action_o **p_onCloseDialogFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *onCloseDialogFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventItemSelectDlgComponent_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E9B06 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9B06 = 1;
  }
  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v7 = (System_Delegate_o *)onCloseDialogFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onCloseDialogFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventItemSelectDlgComponent_o *)sub_B5D990(v9);
  EventItemSelectDlgComponent__remove_onCloseDialogFunc(v12, v13, v14);
}


void __fastcall EventItemSelectDlgComponent__add_onSelectItemFunc(
        EventItemSelectDlgComponent_o *this,
        EventItemSelectDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct EventItemSelectDlgComponent_CallbackFunc_o **p_onSelectItemFunc; // x20
  System_Delegate_o *v7; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventItemSelectDlgComponent_o *v12; // x0
  EventItemSelectDlgComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E9B04 & 1) == 0 )
  {
    sub_B5D5C4(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9B04 = 1;
  }
  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = &this->fields.onSelectItemFunc;
  v7 = (System_Delegate_o *)onSelectItemFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (EventItemSelectDlgComponent_CallbackFunc_c *)v9->klass != EventItemSelectDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onSelectItemFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventItemSelectDlgComponent_o *)sub_B5D990(v9);
  EventItemSelectDlgComponent__remove_onSelectItemFunc(v12, v13, v14);
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
  __int64 v3; // x3
  struct System_Action_o **p_onCloseDialogFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *onCloseDialogFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventItemSelectDlgComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E9B07 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9B07 = 1;
  }
  onCloseDialogFunc = this->fields.onCloseDialogFunc;
  p_onCloseDialogFunc = &this->fields.onCloseDialogFunc;
  v7 = (System_Delegate_o *)onCloseDialogFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onCloseDialogFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventItemSelectDlgComponent_o *)sub_B5D990(v9);
  EventItemSelectDlgComponent__Init(v12, v13);
}


void __fastcall EventItemSelectDlgComponent__remove_onSelectItemFunc(
        EventItemSelectDlgComponent_o *this,
        EventItemSelectDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct EventItemSelectDlgComponent_CallbackFunc_o **p_onSelectItemFunc; // x20
  System_Delegate_o *v7; // x21
  struct EventItemSelectDlgComponent_CallbackFunc_o *onSelectItemFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventItemSelectDlgComponent_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E9B05 & 1) == 0 )
  {
    sub_B5D5C4(&EventItemSelectDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9B05 = 1;
  }
  onSelectItemFunc = this->fields.onSelectItemFunc;
  p_onSelectItemFunc = &this->fields.onSelectItemFunc;
  v7 = (System_Delegate_o *)onSelectItemFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (EventItemSelectDlgComponent_CallbackFunc_c *)v9->klass != EventItemSelectDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onSelectItemFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventItemSelectDlgComponent_o *)sub_B5D990(v9);
  EventItemSelectDlgComponent__add_onCloseDialogFunc(v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemSelectDlgComponent_CallbackFunc___ctor(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  if ( (byte_42E6558 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)selectedItem, spendNum, callback);
    byte_42E6558 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)selectedItem;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall EventItemSelectDlgComponent_CallbackFunc__EndInvoke(
        EventItemSelectDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v13; // x3
  ItemEntity_c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  unsigned int v19; // w24
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  _DWORD *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  void (__fastcall **v28)(ItemEntity_o *, _QWORD, _QWORD); // x0
  __int64 v29; // x0
  void (__fastcall **v30)(__int64 *, ItemEntity_o *, _QWORD, _QWORD); // x0
  EventItemSelectDlgComponent_CallbackFunc_o *v31; // x8
  __int64 v32; // x22
  __int64 *v33; // x23
  void (__fastcall *v34)(ItemEntity_o *, _QWORD, __int64); // x24
  char v35; // w0
  int v36; // w8
  char v37; // w24
  char v38; // w0
  __int64 v39; // x3
  __int64 v40; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x10
  _DWORD *v44; // x11
  char v45; // w23
  char v46; // w0
  __int64 v47; // x3
  ItemEntity_c *klass; // x8
  __int64 v49; // x1
  __int64 v50; // x2
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  EventItemSelectDlgComponent_CallbackFunc_o *v53; // [xsp+8h] [xbp-48h] BYREF

  v53 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v53;
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
      v31 = v9[i];
      v33 = *(__int64 **)&v31->fields.method;
      v32 = *(_QWORD *)&v31->fields.extra_arg;
      v34 = *(void (__fastcall **)(ItemEntity_o *, _QWORD, __int64))&v31->fields.method_ptr;
      if ( *(__int16 *)(v32 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v31->fields.extra_arg, selectedItem, *(_QWORD *)&spendNum);
      v35 = sub_B5D5F4(v32);
      v36 = *(unsigned __int8 *)(v32 + 74);
      if ( (v35 & 1) != 0 )
      {
        if ( v36 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v36 != 2 )
        {
          if ( *(__int16 *)(v32 + 72) != -1 && this->fields.m_target )
          {
            v45 = sub_B5D5EC(v32);
            v46 = sub_B5D9F0(v32);
            if ( (v45 & 1) != 0 )
            {
              if ( (v46 & 1) != 0 )
              {
                klass = selectedItem->klass;
                v49 = *(_QWORD *)(v32 + 24);
                v50 = *(unsigned __int16 *)(v32 + 72);
                if ( *(_WORD *)&selectedItem->klass->_2.bitflags1 )
                {
                  v51 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v49 )
                  {
                    ++v51;
                    p_offset += 4;
                    if ( v51 >= *(unsigned __int16 *)&selectedItem->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v50);
                }
                else
                {
LABEL_57:
                  v27 = sub_AF54C0(selectedItem, v49, v50, v47);
                }
                v18 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v18 = *((_QWORD *)&selectedItem->klass->vtable._1_Finalize.methodPtr
                      + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))sub_B5D674(v18, v32);
              (*v28)(selectedItem, (unsigned int)spendNum, v28);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v32 + 72);
              if ( (v46 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v32);
                v14 = selectedItem->klass;
                if ( *(_WORD *)&selectedItem->klass->_2.bitflags1 )
                {
                  v15 = 0LL;
                  v16 = &v14->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v16 - 1) != class_0 )
                  {
                    ++v15;
                    v16 += 4;
                    if ( v15 >= *(unsigned __int16 *)&selectedItem->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v17 = (__int64)(&v14->vtable._0_Equals.method + 2 * (int)(*v16 + v11));
                }
                else
                {
LABEL_11:
                  v17 = sub_AF54C0(selectedItem, class_0, v11, v13);
                }
                (*(void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))v17)(
                  selectedItem,
                  (unsigned int)spendNum,
                  *(_QWORD *)(v17 + 8));
              }
              else
              {
                (*((void (__fastcall **)(ItemEntity_o *, _QWORD, _QWORD))&selectedItem->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v32 + 72)))(
                  selectedItem,
                  (unsigned int)spendNum,
                  *((_QWORD *)&selectedItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v34(selectedItem, (unsigned int)spendNum, v32);
          continue;
        }
        if ( !v33 )
          goto LABEL_58;
        if ( *(__int16 *)(v32 + 72) != -1 && (*(_BYTE *)(*v33 + 277) & 1) == 0 && this->fields.m_target )
        {
          v37 = sub_B5D5EC(v32);
          v38 = sub_B5D9F0(v32);
          if ( (v37 & 1) != 0 )
          {
            if ( (v38 & 1) != 0 )
            {
              v40 = *v33;
              v41 = *(_QWORD *)(v32 + 24);
              v42 = *(unsigned __int16 *)(v32 + 72);
              if ( *(_WORD *)(*v33 + 298) )
              {
                v43 = 0LL;
                v44 = (_DWORD *)(*(_QWORD *)(v40 + 176) + 8LL);
                while ( *((_QWORD *)v44 - 1) != v41 )
                {
                  ++v43;
                  v44 += 4;
                  if ( v43 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_48;
                }
                v29 = v40 + 16LL * (*v44 + (int)v42) + 312;
              }
              else
              {
LABEL_48:
                v29 = sub_AF54C0(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))sub_B5D674(v26, v32);
            (*v30)(v33, selectedItem, (unsigned int)spendNum, v30);
          }
          else
          {
            v19 = *(unsigned __int16 *)(v32 + 72);
            if ( (v38 & 1) != 0 )
            {
              v20 = j_il2cpp_method_get_class_0(v32);
              v22 = *v33;
              if ( *(_WORD *)(*v33 + 298) )
              {
                v23 = 0LL;
                v24 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
                while ( *((_QWORD *)v24 - 1) != v20 )
                {
                  ++v23;
                  v24 += 4;
                  if ( v23 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_19;
                }
                v25 = v22 + 16LL * (int)(*v24 + v19) + 312;
              }
              else
              {
LABEL_19:
                v25 = sub_AF54C0(v33, v20, v19, v21);
              }
              (*(void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))v25)(
                v33,
                selectedItem,
                (unsigned int)spendNum,
                *(_QWORD *)(v25 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, ItemEntity_o *, _QWORD, _QWORD))(*v33
                                                                                + 16LL * *(unsigned __int16 *)(v32 + 72)
                                                                                + 312))(
                v33,
                selectedItem,
                (unsigned int)spendNum,
                *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, ItemEntity_o *, _QWORD, __int64))v34)(
        v33,
        selectedItem,
        (unsigned int)spendNum,
        v32);
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
  __int64 v3; // x1
  EventItemSelectDlgComponent_o *_4__this; // x0

  ActionExtensions__Call(this->fields.endOpenFunc, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, v3);
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
    sub_B5D69C(0LL, method);
  EventItemSelectDlgComponent__EndClose(_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}