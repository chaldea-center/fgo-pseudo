void SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593292A & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593292A = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectServantPortraitLimitCountDialog__Close(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectServantPortraitLimitCountDialog__Close_38606784(this, 0, v2);
}


void SelectServantPortraitLimitCountDialog__Close_38606784(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_5932927 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SelectServantPortraitLimitCountDialog_EndClose__);
    byte_5932927 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void SelectServantPortraitLimitCountDialog__EndClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  struct System_String_o **p_statusAssetFolderName; // x20
  __int64 v4; // x2
  System_String_o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v21; // x20
  struct System_Action_o *closeEndFunc; // t1

  if ( (byte_5932928 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5932928 = 1;
  }
  if ( this->fields.statusAssetData )
  {
    p_statusAssetFolderName = &this->fields.statusAssetFolderName;
    if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0) )
    {
      v5 = *p_statusAssetFolderName;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v4);
      AssetManager__releaseAssetStorage(v5, 0);
      *p_statusAssetFolderName = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.statusAssetFolderName, 0, v6, v7, v8, v9, v10, v11);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v13);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v21 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_21FFBF4(p_closeEndFunc, 0, v14, v15, v16, v17, v18, v19);
    ((void (__fastcall *)(intptr_t, intptr_t))v21->fields.invoke_impl)(v21->fields.method_code, v21->fields.method);
  }
}


void SelectServantPortraitLimitCountDialog__EndStatusLoad(
        SelectServantPortraitLimitCountDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  ServantStatusListViewManager_o *portraitStatusList; // x0
  ServantStatusListViewManager_o *v12; // x20
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_5932923 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
    byte_5932923 = 1;
  }
  this->fields.statusAssetData = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.statusAssetData,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  portraitStatusList = this->fields.portraitStatusList;
  if ( !portraitStatusList
    || (ServantStatusListViewManager__CreateList(portraitStatusList, this->fields.listViewItem, 0),
        (portraitStatusList = this->fields.portraitStatusList) == 0)
    || (ServantStatusListViewManager__SetMode_44476432(portraitStatusList, 5, 0),
        v12 = this->fields.portraitStatusList,
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_21FFEBC(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0),
        !v12) )
  {
    sub_21FFECC(portraitStatusList, v10);
  }
  ServantStatusListViewManager__SetMode(v12, 1, v13, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t SelectServantPortraitLimitCountDialog__GetCostumeIds(
        SelectServantPortraitLimitCountDialog_o *this,
        int32_t ImgIndex,
        const MethodInfo *method)
{
  int32_t v3; // w19
  SelectServantPortraitLimitCountDialog_o *v4; // x20
  struct System_Int32_array *costumeIds; // x22
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *v8; // x20

  v3 = ImgIndex;
  v4 = this;
  if ( (byte_5932925 & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_21FFC50(&ImageLimitCount_TypeInfo);
    byte_5932925 = 1;
  }
  costumeIds = v4->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_13;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&ImgIndex, method);
  if ( v3 - ImageLimitCount__get_MaxDispLimitCount(0) < SLODWORD(costumeIds->max_length) )
  {
    v8 = v4->fields.costumeIds;
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v6, v7);
    this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0);
    if ( v8 )
    {
      if ( (unsigned int)(v3 - (_DWORD)this) >= LODWORD(v8->max_length) )
        sub_21FFED4(this);
      return v8->m_Items[v3 - (int)this];
    }
LABEL_13:
    sub_21FFECC(this, *(_QWORD *)&ImgIndex);
  }
  return v3;
}


void SelectServantPortraitLimitCountDialog__Init(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *v7; // x20
  System_String_o *titleTextCode; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *cancelLabel; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *v14; // x20
  System_String_o *cancelTextCode; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5932920 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932920 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.titleTextCode, 0) )
  {
    v7 = this->fields.titleLabel;
    titleTextCode = this->fields.titleTextCode;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    v9 = LocalizationManager__Get(titleTextCode, 0);
    if ( !v7 )
      goto LABEL_22;
    UILabel__set_text(v7, v9, 0);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0) )
  {
    v14 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    v9 = LocalizationManager__Get(cancelTextCode, 0);
    if ( v14 )
    {
      UILabel__set_text(v14, v9, 0);
      goto LABEL_19;
    }
LABEL_22:
    sub_21FFECC(v9, v10);
  }
LABEL_19:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0) )
  {
    this->fields.statusAssetFolderName = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.statusAssetFolderName,
      0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SelectServantPortraitLimitCountDialog__OnClickClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5932926 & 1) == 0 )
  {
    sub_21FFC50(&Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
    byte_5932926 = 1;
  }
  v3 = Method_SelectServantPortraitLimitCountDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  SelectServantPortraitLimitCountDialog__Close_38606784(this, 0, v5);
}


void SelectServantPortraitLimitCountDialog__OnSelectPortraitLimitCount(
        SelectServantPortraitLimitCountDialog_o *this,
        int32_t kind,
        int32_t portraitImgIndex,
        const MethodInfo *method)
{
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x2
  struct System_Action_int__o *selectPortraitLimitCountCallback; // x8

  if ( (byte_5932924 & 1) == 0 )
  {
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
    byte_5932924 = 1;
  }
  v6 = Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v8, v9);
  if ( ImageLimitCount__get_MaxDispLimitCount(0) <= portraitImgIndex )
    portraitImgIndex = SelectServantPortraitLimitCountDialog__GetCostumeIds(this, portraitImgIndex, v10);
  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))selectPortraitLimitCountCallback->fields.invoke_impl)(
      selectPortraitLimitCountCallback->fields.method_code,
      (unsigned int)portraitImgIndex,
      selectPortraitLimitCountCallback->fields.method);
  SelectServantPortraitLimitCountDialog__Close_38606784(this, 0, v10);
}


void SelectServantPortraitLimitCountDialog__Open(
        SelectServantPortraitLimitCountDialog_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEnt,
        System_Action_int__o *selectPortraitLimitCountCallback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_5932921 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__);
    byte_5932921 = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCollectionEnt,
    (int32_t)userSvtCollectionEnt,
    (System_String_o *)selectPortraitLimitCountCallback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectPortraitLimitCountCallback,
    (int32_t)selectPortraitLimitCountCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__, 0);
  SelectServantPortraitLimitCountDialog__Setup(this, v17, v18);
}


void SelectServantPortraitLimitCountDialog__Setup(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *onSetupEndCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  ServantStatusListViewItem_o *listViewItem; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  ServantStatusListViewItem_o *v22; // x23
  struct ServantStatusListViewItem_o **p_listViewItem; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Int32_array *PortraitLimitCountStageList; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  SelectServantPortraitLimitCountDialog___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x23
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__16_0; // x24
  Il2CppObject *v37; // x25
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  struct System_Int32_array *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  ServantStatusListViewItem_o *v53; // x8
  int32_t v54; // w22
  __int64 v55; // x1
  __int64 v56; // x2
  int32_t LimitCount; // w23
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x19
  AssetLoader_LoadEndDataHandler_o *v67; // x22
  __int64 v68; // x1
  __int64 v69; // x2

  if ( (byte_5932922 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&ServantStatusListViewItem_TypeInfo);
    sub_21FFC50(&Method_SelectServantPortraitLimitCountDialog___c__Setup_b__16_0__);
    sub_21FFC50(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__1__);
    sub_21FFC50(&SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo);
    sub_21FFC50(&SelectServantPortraitLimitCountDialog___c_TypeInfo);
    byte_5932922 = 1;
  }
  v5 = sub_21FFEBC(SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = onSetupEndCallback;
  v14 = v5 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)onSetupEndCallback, v15, v16, v17, v18, v19, v20);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v22 = (ServantStatusListViewItem_o *)sub_21FFEBC(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_42296860(v22, userSvtCollectionEnt, 0, 0, 0);
  this->fields.listViewItem = v22;
  p_listViewItem = &this->fields.listViewItem;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listViewItem,
    (int32_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem )
    goto LABEL_21;
  PortraitLimitCountStageList = ServantStatusListViewItem__GetPortraitLimitCountStageList(listViewItem, 0);
  v33 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)PortraitLimitCountStageList;
  if ( !*(&SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo, v31, v32);
    v33 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__16_0 = static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v31, v32);
      static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__16_0, v37, Method_SelectServantPortraitLimitCountDialog___c__Setup_b__16_0__, 0);
    v38 = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    v38->__9__16_0 = _9__16_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38->__9__16_0, (int32_t)_9__16_0, v39, v40, v41, v42, v43, v44);
  }
  v45 = System_Linq_Enumerable__Where_int_(
          v34,
          (System_Func_TSource__bool__o *)_9__16_0,
          (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
  v46 = System_Linq_Enumerable__ToArray_int_(
          v45,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.costumeIds = v46;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.costumeIds, (int32_t)v46, v47, v48, v49, v50, v51, v52);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(listViewItem, 0),
        (v53 = *p_listViewItem) == 0) )
  {
LABEL_21:
    sub_21FFECC(listViewItem, v7);
  }
  v54 = (int)listViewItem;
  LimitCount = ServantStatusListViewItem__get_LimitCount(v53, 0);
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v55, v56);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v54, LimitCount, 0);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_statusAssetFolderName,
    (int32_t)StatusImageFolderName,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = *p_statusAssetFolderName;
  v67 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v67,
    (Il2CppObject *)v5,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__1__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v68, v69);
  if ( !AssetManager__loadAssetStorage(v66, v67, 1, 0, 0) )
  {
    if ( *(_QWORD *)v14 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
  }
}


void SelectServantPortraitLimitCountDialog___Open_b__15_0(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  void *v4; // x0
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x8
  System_Action_o *_9__15_1; // x20
  Il2CppObject *v7; // x21
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_593292B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__);
    sub_21FFC50(&SelectServantPortraitLimitCountDialog___c_TypeInfo);
    byte_593292B = 1;
  }
  v4 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  if ( !*(&SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo, method, v2);
    v4 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  static_fields = (struct SelectServantPortraitLimitCountDialog___c_StaticFields *)*((_QWORD *)v4 + 23);
  _9__15_1 = static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !*((_DWORD *)v4 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__15_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__15_1, v7, Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__, 0);
    v8 = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    v8->__9__15_1 = _9__15_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__15_1, (int32_t)_9__15_1, v9, v10, v11, v12, v13, v14);
  }
  if ( !this )
    goto LABEL_16;
  BaseDialog__Open((BaseDialog_o *)this, _9__15_1, 0, 0, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v4 = this->fields.scrollView;
    if ( v4 )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)v4, 0);
      return;
    }
LABEL_16:
    sub_21FFECC(v4, method);
  }
}


UnityEngine_GameObject_o *SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_5932929 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932929 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593292C & 1) == 0 )
  {
    sub_21FFC50(&SelectServantPortraitLimitCountDialog___c_TypeInfo);
    byte_593292C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SelectServantPortraitLimitCountDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SelectServantPortraitLimitCountDialog___c___ctor(
        SelectServantPortraitLimitCountDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectServantPortraitLimitCountDialog___c___Open_b__15_1(
        SelectServantPortraitLimitCountDialog___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool SelectServantPortraitLimitCountDialog___c___Setup_b__16_0(
        SelectServantPortraitLimitCountDialog___c_o *this,
        int32_t stage,
        const MethodInfo *method)
{
  return LimitCountUtility__IsCostume(stage, 0);
}


void SelectServantPortraitLimitCountDialog___c__DisplayClass16_0___ctor(
        SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectServantPortraitLimitCountDialog___c__DisplayClass16_0___Setup_b__1(
        SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  SelectServantPortraitLimitCountDialog_o *_4__this; // x0
  struct System_Action_o *onSetupEndCallback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, assetData);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, method);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))onSetupEndCallback->fields.invoke_impl)(
      onSetupEndCallback->fields.method_code,
      onSetupEndCallback->fields.method);
}