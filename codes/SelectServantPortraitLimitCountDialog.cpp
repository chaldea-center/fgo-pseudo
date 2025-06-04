void __fastcall SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFC7B1 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFC7B1 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectServantPortraitLimitCountDialog__Close_31254912(this, 0LL, v2);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close_31254912(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4AFC7AE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_SelectServantPortraitLimitCountDialog_EndClose__, v5);
    byte_4AFC7AE = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BC2FAC(&this->fields.closeEndFunc);
  v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__EndClose(
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

  if ( (byte_4AFC7AF & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    byte_4AFC7AF = 1;
  }
  if ( this->fields.statusAssetData )
  {
    p_statusAssetFolderName = &this->fields.statusAssetFolderName;
    if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
    {
      v4 = *p_statusAssetFolderName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(v4, 0LL);
      *p_statusAssetFolderName = 0LL;
      sub_1BC2FAC(&this->fields.statusAssetFolderName);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v8 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0LL;
    sub_1BC2FAC(p_closeEndFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall SelectServantPortraitLimitCountDialog__EndStatusLoad(
        SelectServantPortraitLimitCountDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ServantStatusListViewManager_o *portraitStatusList; // x0
  ServantStatusListViewManager_o *v8; // x20
  ServantStatusListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4AFC7AA & 1) == 0 )
  {
    sub_1BC3008(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1BC3008(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v5);
    byte_4AFC7AA = 1;
  }
  this->fields.statusAssetData = data;
  sub_1BC2FAC(&this->fields.statusAssetData);
  portraitStatusList = this->fields.portraitStatusList;
  if ( !portraitStatusList
    || (ServantStatusListViewManager__CreateList(portraitStatusList, this->fields.listViewItem, 0LL),
        (portraitStatusList = this->fields.portraitStatusList) == 0LL)
    || (ServantStatusListViewManager__SetMode_36042920(portraitStatusList, 6, 0LL),
        v8 = this->fields.portraitStatusList,
        v9 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BC3254(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0LL),
        !v8) )
  {
    sub_1BC3264(portraitStatusList, v6);
  }
  ServantStatusListViewManager__SetMode(v8, 1, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectServantPortraitLimitCountDialog__GetCostumeIds(
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
  __int64 v9; // x2

  v3 = ImgIndex;
  v4 = this;
  if ( (byte_4AFC7AC & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_1BC3008(&ImageLimitCount_TypeInfo, *(_QWORD *)&ImgIndex);
    byte_4AFC7AC = 1;
  }
  listViewItem = v4->fields.listViewItem;
  if ( !listViewItem )
    goto LABEL_15;
  costumeIds = listViewItem->fields.costumeIds;
  if ( costumeIds )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0LL);
    if ( v3 - (int)this < (signed int)costumeIds->max_length )
    {
      v7 = v4->fields.listViewItem;
      if ( v7 )
      {
        v8 = v7->fields.costumeIds;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0LL);
        if ( v8 )
        {
          if ( v3 - (int)this >= v8->max_length )
            sub_1BC326C(this, *(_QWORD *)&ImgIndex, v9);
          return v8->m_Items[v3 - (int)this + 1];
        }
      }
LABEL_15:
      sub_1BC3264(this, *(_QWORD *)&ImgIndex);
    }
  }
  return v3;
}


void __fastcall SelectServantPortraitLimitCountDialog__Init(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *v5; // x20
  System_String_o *titleTextCode; // x21
  System_String_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *cancelLabel; // x20
  UILabel_o *v10; // x20
  System_String_o *cancelTextCode; // x21

  if ( (byte_4AFC7A7 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4AFC7A7 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.titleTextCode, 0LL) )
  {
    v5 = this->fields.titleLabel;
    titleTextCode = this->fields.titleTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get(titleTextCode, 0LL);
    if ( !v5 )
      goto LABEL_22;
    UILabel__set_text(v5, v7, 0LL);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0LL) )
  {
    v10 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v10 )
    {
      UILabel__set_text(v10, v7, 0LL);
      goto LABEL_19;
    }
LABEL_22:
    sub_1BC3264(v7, v8);
  }
LABEL_19:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
  {
    this->fields.statusAssetFolderName = 0LL;
    sub_1BC2FAC(&this->fields.statusAssetFolderName);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__OnClickClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AFC7AD & 1) == 0 )
  {
    sub_1BC3008(&Method_SelectServantPortraitLimitCountDialog_OnClickClose__, method);
    byte_4AFC7AD = 1;
  }
  v3 = Method_SelectServantPortraitLimitCountDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  SelectServantPortraitLimitCountDialog__Close_31254912(this, 0LL, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectServantPortraitLimitCountDialog__OnSelectPortraitLimitCount(
        SelectServantPortraitLimitCountDialog_o *this,
        int32_t kind,
        int32_t portraitImgIndex,
        const MethodInfo *method)
{
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  struct System_Action_int__o *selectPortraitLimitCountCallback; // x8

  if ( (byte_4AFC7AB & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v6);
    byte_4AFC7AB = 1;
  }
  v7 = Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BC3020(Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  if ( ImageLimitCount__get_MaxDispLimitCount(0LL) <= portraitImgIndex )
    portraitImgIndex = SelectServantPortraitLimitCountDialog__GetCostumeIds(this, portraitImgIndex, v9);
  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))selectPortraitLimitCountCallback->fields.m_target)(
      selectPortraitLimitCountCallback->fields.original_method_info,
      (unsigned int)portraitImgIndex,
      *(_QWORD *)&selectPortraitLimitCountCallback->fields.extra_arg);
  SelectServantPortraitLimitCountDialog__Close_31254912(this, 0LL, v9);
}


void __fastcall SelectServantPortraitLimitCountDialog__Open(
        SelectServantPortraitLimitCountDialog_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEnt,
        System_Action_int__o *selectPortraitLimitCountCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4AFC7A8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, userSvtCollectionEnt);
    sub_1BC3008(&Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, v7);
    byte_4AFC7A8 = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_1BC2FAC(&this->fields.userSvtCollectionEnt);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_1BC2FAC(&this->fields.selectPortraitLimitCountCallback);
  v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, 0LL);
  SelectServantPortraitLimitCountDialog__Setup(this, v8, v9);
}


void __fastcall SelectServantPortraitLimitCountDialog__Setup(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *onSetupEndCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x21
  ServantStatusListViewItem_o *listViewItem; // x0
  __int64 v12; // x1
  void **p_monitor; // x20
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  ServantStatusListViewItem_o *v15; // x23
  struct ServantStatusListViewItem_o **p_listViewItem; // x22
  ServantStatusListViewItem_o *v17; // x8
  int32_t v18; // w22
  int32_t LimitCount; // w23
  struct System_String_o **p_statusAssetFolderName; // x19
  System_String_o *v21; // x19
  AssetLoader_LoadEndDataHandler_o *v22; // x22

  if ( (byte_4AFC7A9 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, onSetupEndCallback);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1BC3008(&ServantStatusListViewItem_TypeInfo, v7);
    sub_1BC3008(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__, v8);
    sub_1BC3008(&SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo, v9);
    byte_4AFC7A9 = 1;
  }
  v10 = (Il2CppObject *)sub_1BC3254(SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_14;
  v10[1].klass = (Il2CppClass *)this;
  sub_1BC2FAC(&v10[1]);
  v10[1].monitor = onSetupEndCallback;
  p_monitor = &v10[1].monitor;
  sub_1BC2FAC(&v10[1].monitor);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v15 = (ServantStatusListViewItem_o *)sub_1BC3254(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34885244(v15, userSvtCollectionEnt, 0, 0, 0LL);
  this->fields.listViewItem = v15;
  p_listViewItem = &this->fields.listViewItem;
  sub_1BC2FAC(&this->fields.listViewItem);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem->fields.portraitLimitCount = -1,
        listViewItem = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(listViewItem, 0LL),
        (v17 = *p_listViewItem) == 0LL) )
  {
LABEL_14:
    sub_1BC3264(listViewItem, v12);
  }
  v18 = (int)listViewItem;
  LimitCount = ServantStatusListViewItem__get_LimitCount(v17, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  this->fields.statusAssetFolderName = ServantAssetLoadManager__getStatusImageFolderName(v18, LimitCount, 0LL);
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_1BC2FAC(p_statusAssetFolderName);
  v21 = *p_statusAssetFolderName;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    v10,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v21, v22, 1, 0LL) )
  {
    if ( *p_monitor )
      (*((void (__fastcall **)(_QWORD, _QWORD))*p_monitor + 3))(
        *((_QWORD *)*p_monitor + 8),
        *((_QWORD *)*p_monitor + 5));
  }
}


void __fastcall SelectServantPortraitLimitCountDialog___Open_b__14_0(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *v6; // x0
  System_Action_o *v7; // x20
  Il2CppObject *v8; // x21
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4AFC7B2 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, v4);
    sub_1BC3008(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v5);
    byte_4AFC7B2 = 1;
  }
  v6 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  if ( !SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo);
    v6 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  v7 = *(System_Action_o **)(*((_QWORD *)v6 + 23) + 8LL);
  if ( !v7 )
  {
    if ( !*((_DWORD *)v6 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
    }
    v8 = (Il2CppObject *)**((_QWORD **)v6 + 23);
    v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v7, v8, Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, 0LL);
    static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = v7;
    v6 = (void *)sub_1BC2FAC(&static_fields->__9__14_1);
  }
  if ( !this )
    goto LABEL_16;
  BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v6 = this->fields.scrollView;
    if ( v6 )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)v6, 0LL);
      return;
    }
LABEL_16:
    sub_1BC3264(v6, method);
  }
}


UnityEngine_GameObject_o *__fastcall SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4AFC7B0 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFC7B0 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFC7B3 & 1) == 0 )
  {
    sub_1BC3008(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v1);
    byte_4AFC7B3 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(SelectServantPortraitLimitCountDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v2;
  sub_1BC2FAC(SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___ctor(
        SelectServantPortraitLimitCountDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___Open_b__14_1(
        SelectServantPortraitLimitCountDialog___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectServantPortraitLimitCountDialog___c__DisplayClass15_0___ctor(
        SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c__DisplayClass15_0___Setup_b__0(
        SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  SelectServantPortraitLimitCountDialog_o *_4__this; // x0
  struct System_Action_o *onSetupEndCallback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, assetData);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, method);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onSetupEndCallback->fields.m_target)(
      onSetupEndCallback->fields.original_method_info,
      *(_QWORD *)&onSetupEndCallback->fields.extra_arg);
}