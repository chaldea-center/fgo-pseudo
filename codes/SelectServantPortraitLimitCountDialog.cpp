void SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2AE86 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2AE86 = 1;
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

  SelectServantPortraitLimitCountDialog__Close_32577164(this, 0, v2);
}


void SelectServantPortraitLimitCountDialog__Close_32577164(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4D2AE83 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SelectServantPortraitLimitCountDialog_EndClose__);
    byte_4D2AE83 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C93A78(&this->fields.closeEndFunc, callback);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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

  if ( (byte_4D2AE84 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2AE84 = 1;
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
      sub_1C93A78(&this->fields.statusAssetFolderName, 0);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v8 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_1C93A78(p_closeEndFunc, 0);
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

  if ( (byte_4D2AE7F & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
    byte_4D2AE7F = 1;
  }
  this->fields.statusAssetData = data;
  sub_1C93A78(&this->fields.statusAssetData, data);
  portraitStatusList = this->fields.portraitStatusList;
  if ( !portraitStatusList
    || (ServantStatusListViewManager__CreateList(portraitStatusList, this->fields.listViewItem, 0),
        (portraitStatusList = this->fields.portraitStatusList) == 0)
    || (ServantStatusListViewManager__SetMode_38876568(portraitStatusList, 6, 0),
        v7 = this->fields.portraitStatusList,
        v8 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C93D20(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0),
        !v7) )
  {
    sub_1C93D2C(portraitStatusList, v5);
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
  struct ServantStatusListViewItem_o *listViewItem; // x8
  struct System_Int32_array *costumeIds; // x22
  struct ServantStatusListViewItem_o *v7; // x8
  struct System_Int32_array *v8; // x20

  v3 = ImgIndex;
  v4 = this;
  if ( (byte_4D2AE81 & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_1C93AD4(&ImageLimitCount_TypeInfo);
    byte_4D2AE81 = 1;
  }
  listViewItem = v4->fields.listViewItem;
  if ( !listViewItem )
    goto LABEL_15;
  costumeIds = listViewItem->fields.costumeIds;
  if ( costumeIds )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0);
    if ( v3 - (int)this < SLODWORD(costumeIds->max_length) )
    {
      v7 = v4->fields.listViewItem;
      if ( v7 )
      {
        v8 = v7->fields.costumeIds;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0);
        if ( v8 )
        {
          if ( (unsigned int)(v3 - (_DWORD)this) >= LODWORD(v8->max_length) )
            sub_1C93D34(this);
          return v8->m_Items[v3 - (int)this];
        }
      }
LABEL_15:
      sub_1C93D2C(this, *(_QWORD *)&ImgIndex);
    }
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

  if ( (byte_4D2AE7C & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AE7C = 1;
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
    sub_1C93D2C(v6, v7);
  }
LABEL_19:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0) )
  {
    this->fields.statusAssetFolderName = 0;
    sub_1C93A78(&this->fields.statusAssetFolderName, 0);
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

  if ( (byte_4D2AE82 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
    byte_4D2AE82 = 1;
  }
  v3 = Method_SelectServantPortraitLimitCountDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  SelectServantPortraitLimitCountDialog__Close_32577164(this, 0, v5);
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

  if ( (byte_4D2AE80 & 1) == 0 )
  {
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
    byte_4D2AE80 = 1;
  }
  v6 = Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C93AEC(Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
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
  SelectServantPortraitLimitCountDialog__Close_32577164(this, 0, v8);
}


void SelectServantPortraitLimitCountDialog__Open(
        SelectServantPortraitLimitCountDialog_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEnt,
        System_Action_int__o *selectPortraitLimitCountCallback,
        const MethodInfo *method)
{
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4D2AE7D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__);
    byte_4D2AE7D = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_1C93A78(&this->fields.userSvtCollectionEnt, userSvtCollectionEnt);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_1C93A78(&this->fields.selectPortraitLimitCountCallback, selectPortraitLimitCountCallback);
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, 0);
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
  ServantStatusListViewItem_o *v12; // x8
  int32_t v13; // w22
  int32_t LimitCount; // w23
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  System_String_o *v17; // x19
  AssetLoader_LoadEndDataHandler_o *v18; // x22

  if ( (byte_4D2AE7E & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&ServantStatusListViewItem_TypeInfo);
    sub_1C93AD4(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__);
    sub_1C93AD4(&SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo);
    byte_4D2AE7E = 1;
  }
  v5 = (Il2CppObject *)sub_1C93D20(SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_14;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C93A78(&v5[1], this);
  v5[1].monitor = onSetupEndCallback;
  p_monitor = &v5[1].monitor;
  sub_1C93A78(&v5[1].monitor, onSetupEndCallback);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v10 = (ServantStatusListViewItem_o *)sub_1C93D20(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_36568120(v10, userSvtCollectionEnt, 0, 0, 0);
  this->fields.listViewItem = v10;
  p_listViewItem = &this->fields.listViewItem;
  sub_1C93A78(&this->fields.listViewItem, v10);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem->fields.portraitLimitCount = -1,
        listViewItem = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(listViewItem, 0),
        (v12 = *p_listViewItem) == 0) )
  {
LABEL_14:
    sub_1C93D2C(listViewItem, v7);
  }
  v13 = (int)listViewItem;
  LimitCount = ServantStatusListViewItem__get_LimitCount(v12, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v13, LimitCount, 0);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_1C93A78(p_statusAssetFolderName, StatusImageFolderName);
  v17 = *p_statusAssetFolderName;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    v5,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v17, v18, 1, 0) )
  {
    if ( *p_monitor )
      (*((void (__fastcall **)(_QWORD, _QWORD))*p_monitor + 3))(
        *((_QWORD *)*p_monitor + 8),
        *((_QWORD *)*p_monitor + 5));
  }
}


void SelectServantPortraitLimitCountDialog___Open_b__14_0(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Action_o *v4; // x20
  Il2CppObject *v5; // x21
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4D2AE87 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__);
    sub_1C93AD4(&SelectServantPortraitLimitCountDialog___c_TypeInfo);
    byte_4D2AE87 = 1;
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
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, v5, Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, 0);
    static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = v4;
    v3 = (void *)sub_1C93A78(&static_fields->__9__14_1, v4);
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
    sub_1C93D2C(v3, method);
  }
}


UnityEngine_GameObject_o *SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2AE85 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AE85 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D2AE88 & 1) == 0 )
  {
    sub_1C93AD4(&SelectServantPortraitLimitCountDialog___c_TypeInfo);
    byte_4D2AE88 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SelectServantPortraitLimitCountDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v1;
  sub_1C93A78(SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields, v1);
}


void SelectServantPortraitLimitCountDialog___c___ctor(
        SelectServantPortraitLimitCountDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectServantPortraitLimitCountDialog___c___Open_b__14_1(
        SelectServantPortraitLimitCountDialog___c_o *this,
        const MethodInfo *method)
{
  ;
}


void SelectServantPortraitLimitCountDialog___c__DisplayClass15_0___ctor(
        SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectServantPortraitLimitCountDialog___c__DisplayClass15_0___Setup_b__0(
        SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  SelectServantPortraitLimitCountDialog_o *_4__this; // x0
  struct System_Action_o *onSetupEndCallback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, assetData);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, method);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))onSetupEndCallback->fields.invoke_impl)(
      onSetupEndCallback->fields.method_code,
      onSetupEndCallback->fields.method);
}