void SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E71B6E & 1) == 0 )
  {
    sub_1D0F0B4(&BaseDialog_TypeInfo);
    byte_4E71B6E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SelectServantPortraitLimitCountDialog__Close(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectServantPortraitLimitCountDialog__Close_33271436(this, 0, v2);
}


void SelectServantPortraitLimitCountDialog__Close_33271436(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4E71B6B & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_SelectServantPortraitLimitCountDialog_EndClose__);
    byte_4E71B6B = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1D0F058(&this->fields.closeEndFunc, callback);
  v5 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void SelectServantPortraitLimitCountDialog__EndClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  struct System_String_o **p_statusAssetFolderName; // x20
  System_String_o *v4; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeEndFunc; // t1

  if ( (byte_4E71B6C & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    byte_4E71B6C = 1;
  }
  if ( this->fields.statusAssetData )
  {
    p_statusAssetFolderName = &this->fields.statusAssetFolderName;
    if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0) )
    {
      v4 = *p_statusAssetFolderName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(v4, 0);
      *p_statusAssetFolderName = 0;
      sub_1D0F058(&this->fields.statusAssetFolderName, 0);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1D0F30C(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v8 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_1D0F058(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void SelectServantPortraitLimitCountDialog__EndStatusLoad(
        SelectServantPortraitLimitCountDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusListViewManager_o *portraitStatusList; // x0
  ServantStatusListViewManager_o *v7; // x20
  ServantStatusListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_4E71B67 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
    byte_4E71B67 = 1;
  }
  this->fields.statusAssetData = data;
  sub_1D0F058(&this->fields.statusAssetData, data);
  portraitStatusList = this->fields.portraitStatusList;
  if ( !portraitStatusList
    || (ServantStatusListViewManager__CreateList(portraitStatusList, this->fields.listViewItem, 0),
        (portraitStatusList = this->fields.portraitStatusList) == 0)
    || (ServantStatusListViewManager__SetMode_39389356(portraitStatusList, 5, 0),
        v7 = this->fields.portraitStatusList,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1D0F300(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0),
        !v7) )
  {
    sub_1D0F30C(portraitStatusList, v5);
  }
  ServantStatusListViewManager__SetMode(v7, 1, v8, 0);
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
  struct System_Int32_array *v6; // x20

  v3 = ImgIndex;
  v4 = this;
  if ( (byte_4E71B69 & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    byte_4E71B69 = 1;
  }
  costumeIds = v4->fields.costumeIds;
  if ( !costumeIds )
    goto LABEL_13;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  if ( v3 - ImageLimitCount__get_MaxDispLimitCount(0) < SLODWORD(costumeIds->max_length) )
  {
    v6 = v4->fields.costumeIds;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0);
    if ( v6 )
    {
      if ( (unsigned int)(v3 - (_DWORD)this) >= LODWORD(v6->max_length) )
        sub_1D0F314(this);
      return v6->m_Items[v3 - (int)this];
    }
LABEL_13:
    sub_1D0F30C(this, *(_QWORD *)&ImgIndex);
  }
  return v3;
}


void SelectServantPortraitLimitCountDialog__Init(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *v4; // x20
  System_String_o *titleTextCode; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *cancelLabel; // x20
  UILabel_o *v9; // x20
  System_String_o *cancelTextCode; // x21

  if ( (byte_4E71B64 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E71B64 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.titleTextCode, 0) )
  {
    v4 = this->fields.titleLabel;
    titleTextCode = this->fields.titleTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get(titleTextCode, 0);
    if ( !v4 )
      goto LABEL_22;
    UILabel__set_text(v4, v6, 0);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0) )
  {
    v9 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get(cancelTextCode, 0);
    if ( v9 )
    {
      UILabel__set_text(v9, v6, 0);
      goto LABEL_19;
    }
LABEL_22:
    sub_1D0F30C(v6, v7);
  }
LABEL_19:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0) )
  {
    this->fields.statusAssetFolderName = 0;
    sub_1D0F058(&this->fields.statusAssetFolderName, 0);
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

  if ( (byte_4E71B6A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
    byte_4E71B6A = 1;
  }
  v3 = Method_SelectServantPortraitLimitCountDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1D0F0CC(Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  SelectServantPortraitLimitCountDialog__Close_33271436(this, 0, v5);
}


void SelectServantPortraitLimitCountDialog__OnSelectPortraitLimitCount(
        SelectServantPortraitLimitCountDialog_o *this,
        int32_t kind,
        int32_t portraitImgIndex,
        const MethodInfo *method)
{
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct System_Action_int__o *selectPortraitLimitCountCallback; // x8

  if ( (byte_4E71B68 & 1) == 0 )
  {
    sub_1D0F0B4(&ImageLimitCount_TypeInfo);
    sub_1D0F0B4(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
    byte_4E71B68 = 1;
  }
  v6 = Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1D0F0CC(Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
  v7 = (System_Reflection_MethodBase_o *)sub_1D0F098(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  if ( ImageLimitCount__get_MaxDispLimitCount(0) <= portraitImgIndex )
    portraitImgIndex = SelectServantPortraitLimitCountDialog__GetCostumeIds(this, portraitImgIndex, v8);
  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))selectPortraitLimitCountCallback->fields.invoke_impl)(
      selectPortraitLimitCountCallback->fields.method_code,
      (unsigned int)portraitImgIndex,
      selectPortraitLimitCountCallback->fields.method);
  SelectServantPortraitLimitCountDialog__Close_33271436(this, 0, v8);
}


void SelectServantPortraitLimitCountDialog__Open(
        SelectServantPortraitLimitCountDialog_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEnt,
        System_Action_int__o *selectPortraitLimitCountCallback,
        const MethodInfo *method)
{
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4E71B65 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__);
    byte_4E71B65 = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_1D0F058(&this->fields.userSvtCollectionEnt, userSvtCollectionEnt);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_1D0F058(&this->fields.selectPortraitLimitCountCallback, selectPortraitLimitCountCallback);
  v7 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__, 0);
  SelectServantPortraitLimitCountDialog__Setup(this, v7, v8);
}


void SelectServantPortraitLimitCountDialog__Setup(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *onSetupEndCallback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  ServantStatusListViewItem_o *listViewItem; // x0
  __int64 v7; // x1
  void **p_monitor; // x20
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  ServantStatusListViewItem_o *v10; // x23
  struct ServantStatusListViewItem_o **p_listViewItem; // x22
  System_Int32_array *PortraitLimitCountStageList; // x0
  SelectServantPortraitLimitCountDialog___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x23
  System_Func_int__bool__o *_9__16_0; // x24
  Il2CppObject *v16; // x25
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  struct System_Int32_array *v19; // x0
  ServantStatusListViewItem_o *v20; // x8
  int32_t v21; // w22
  int32_t LimitCount; // w23
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  System_String_o *v25; // x19
  AssetLoader_LoadEndDataHandler_o *v26; // x22

  if ( (byte_4E71B66 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1D0F0B4(&System_Func_int__bool__TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&ServantAssetLoadManager_TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItem_TypeInfo);
    sub_1D0F0B4(&Method_SelectServantPortraitLimitCountDialog___c__Setup_b__16_0__);
    sub_1D0F0B4(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__1__);
    sub_1D0F0B4(&SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo);
    sub_1D0F0B4(&SelectServantPortraitLimitCountDialog___c_TypeInfo);
    byte_4E71B66 = 1;
  }
  v5 = (Il2CppObject *)sub_1D0F300(SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_21;
  v5[1].klass = (Il2CppClass *)this;
  sub_1D0F058(&v5[1], this);
  v5[1].monitor = onSetupEndCallback;
  p_monitor = &v5[1].monitor;
  sub_1D0F058(&v5[1].monitor, onSetupEndCallback);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v10 = (ServantStatusListViewItem_o *)sub_1D0F300(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_37079744(v10, userSvtCollectionEnt, 0, 0, 0);
  this->fields.listViewItem = v10;
  p_listViewItem = &this->fields.listViewItem;
  sub_1D0F058(&this->fields.listViewItem, v10);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem )
    goto LABEL_21;
  PortraitLimitCountStageList = ServantStatusListViewItem__GetPortraitLimitCountStageList(listViewItem, 0);
  v13 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)PortraitLimitCountStageList;
  if ( !SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo);
    v13 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  _9__16_0 = v13->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__16_0 = (System_Func_int__bool__o *)sub_1D0F300(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__16_0, v16, Method_SelectServantPortraitLimitCountDialog___c__Setup_b__16_0__, 0);
    static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1D0F058(&static_fields->__9__16_0, _9__16_0);
  }
  v18 = System_Linq_Enumerable__Where_int_(
          v14,
          (System_Func_TSource__bool__o *)_9__16_0,
          (const MethodInfo_3297274 *)Method_System_Linq_Enumerable_Where_int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.costumeIds = v19;
  sub_1D0F058(&this->fields.costumeIds, v19);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(listViewItem, 0),
        (v20 = *p_listViewItem) == 0) )
  {
LABEL_21:
    sub_1D0F30C(listViewItem, v7);
  }
  v21 = (int)listViewItem;
  LimitCount = ServantStatusListViewItem__get_LimitCount(v20, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v21, LimitCount, 0);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_1D0F058(p_statusAssetFolderName, StatusImageFolderName);
  v25 = *p_statusAssetFolderName;
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    v5,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__1__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v25, v26, 1, 0, 0) )
  {
    if ( *p_monitor )
      (*((void (__fastcall **)(_QWORD, _QWORD))*p_monitor + 3))(
        *((_QWORD *)*p_monitor + 8),
        *((_QWORD *)*p_monitor + 5));
  }
}


void SelectServantPortraitLimitCountDialog___Open_b__15_0(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Action_o *v4; // x20
  Il2CppObject *v5; // x21
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4E71B6F & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__);
    sub_1D0F0B4(&SelectServantPortraitLimitCountDialog___c_TypeInfo);
    byte_4E71B6F = 1;
  }
  v3 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  if ( !SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo);
    v3 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  v4 = *(System_Action_o **)(*((_QWORD *)v3 + 23) + 8LL);
  if ( !v4 )
  {
    if ( !*((_DWORD *)v3 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
    }
    v5 = (Il2CppObject *)**((_QWORD **)v3 + 23);
    v4 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v4, v5, Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__, 0);
    static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    static_fields->__9__15_1 = v4;
    v3 = (void *)sub_1D0F058(&static_fields->__9__15_1, v4);
  }
  if ( !this )
    goto LABEL_16;
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v3 = this->fields.scrollView;
    if ( v3 )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)v3, 0);
      return;
    }
LABEL_16:
    sub_1D0F30C(v3, method);
  }
}


UnityEngine_GameObject_o *SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4E71B6D & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E71B6D = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1D0F30C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4E71B70 & 1) == 0 )
  {
    sub_1D0F0B4(&SelectServantPortraitLimitCountDialog___c_TypeInfo);
    byte_4E71B70 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(SelectServantPortraitLimitCountDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v1;
  sub_1D0F058(SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields, v1);
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
    sub_1D0F30C(0, assetData);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, method);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))onSetupEndCallback->fields.invoke_impl)(
      onSetupEndCallback->fields.method_code,
      onSetupEndCallback->fields.method);
}