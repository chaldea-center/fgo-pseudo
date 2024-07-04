void __fastcall SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E66D4 & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    byte_48E66D4 = 1;
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

  SelectServantPortraitLimitCountDialog__Close_44504424(this, 0LL, v2);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close_44504424(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_48E66D1 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, callback);
    sub_1B00CCC(&Method_SelectServantPortraitLimitCountDialog_EndClose__, v6);
    byte_48E66D1 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__EndClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  struct System_String_o **p_statusAssetFolderName; // x20
  System_String_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeEndFunc; // t1

  if ( (byte_48E66D2 & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    byte_48E66D2 = 1;
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
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.statusAssetFolderName, 0, v5, v6);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B00F28(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  v12 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B00C70(p_closeEndFunc, 0, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall SelectServantPortraitLimitCountDialog__EndStatusLoad(
        SelectServantPortraitLimitCountDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  ServantStatusListViewManager_o *portraitStatusList; // x0
  ServantStatusListViewManager_o *v9; // x20
  ServantStatusListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_48E66CD & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1B00CCC(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v6);
    byte_48E66CD = 1;
  }
  this->fields.statusAssetData = data;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.statusAssetData, (int32_t)data, (int32_t)method, v3);
  portraitStatusList = this->fields.portraitStatusList;
  if ( !portraitStatusList
    || (ServantStatusListViewManager__CreateList(portraitStatusList, this->fields.listViewItem, 0LL),
        (portraitStatusList = this->fields.portraitStatusList) == 0LL)
    || (ServantStatusListViewManager__SetMode_32984876(portraitStatusList, 6, 0LL),
        v9 = this->fields.portraitStatusList,
        v10 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B00F18(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0LL),
        !v9) )
  {
    sub_1B00F28(portraitStatusList, v7);
  }
  ServantStatusListViewManager__SetMode(v9, 1, v10, 0LL);
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

  v3 = ImgIndex;
  v4 = this;
  if ( (byte_48E66CF & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_1B00CCC(&ImageLimitCount_TypeInfo, *(_QWORD *)&ImgIndex);
    byte_48E66CF = 1;
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
            sub_1B00F30(this, *(_QWORD *)&ImgIndex);
          return v8->m_Items[v3 - (int)this + 1];
        }
      }
LABEL_15:
      sub_1B00F28(this, *(_QWORD *)&ImgIndex);
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
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_48E66CA & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48E66CA = 1;
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
    sub_1B00F28(v7, v8);
  }
LABEL_19:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
  {
    this->fields.statusAssetFolderName = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.statusAssetFolderName, 0, v12, v13);
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

  if ( (byte_48E66D0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SelectServantPortraitLimitCountDialog_OnClickClose__, method);
    byte_48E66D0 = 1;
  }
  v3 = Method_SelectServantPortraitLimitCountDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  SelectServantPortraitLimitCountDialog__Close_44504424(this, 0LL, v5);
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

  if ( (byte_48E66CE & 1) == 0 )
  {
    sub_1B00CCC(&ImageLimitCount_TypeInfo, *(_QWORD *)&kind);
    sub_1B00CCC(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v6);
    byte_48E66CE = 1;
  }
  v7 = Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B00CE4(Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
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
  SelectServantPortraitLimitCountDialog__Close_44504424(this, 0LL, v9);
}


void __fastcall SelectServantPortraitLimitCountDialog__Open(
        SelectServantPortraitLimitCountDialog_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEnt,
        System_Action_int__o *selectPortraitLimitCountCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_48E66CB & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, userSvtCollectionEnt);
    sub_1B00CCC(&Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, v7);
    byte_48E66CB = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEnt,
    (int32_t)userSvtCollectionEnt,
    (int32_t)selectPortraitLimitCountCallback,
    (int32_t)method);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectPortraitLimitCountCallback,
    (int32_t)selectPortraitLimitCountCallback,
    v8,
    v9);
  v10 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, 0LL);
  SelectServantPortraitLimitCountDialog__Setup(this, v10, v11);
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
  __int64 v10; // x21
  ServantStatusListViewItem_o *listViewItem; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  ServantStatusListViewItem_o *v19; // x23
  struct ServantStatusListViewItem_o **p_listViewItem; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  ServantStatusListViewItem_o *v23; // x8
  int32_t v24; // w22
  int32_t LimitCount; // w23
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x19
  AssetLoader_LoadEndDataHandler_o *v31; // x22

  if ( (byte_48E66CC & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, onSetupEndCallback);
    sub_1B00CCC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B00CCC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1B00CCC(&ServantStatusListViewItem_TypeInfo, v7);
    sub_1B00CCC(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__, v8);
    sub_1B00CCC(&SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo, v9);
    byte_48E66CC = 1;
  }
  v10 = sub_1B00F18(SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_14;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = onSetupEndCallback;
  v15 = v10 + 24;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)onSetupEndCallback, v16, v17);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v19 = (ServantStatusListViewItem_o *)sub_1B00F18(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_32013560(v19, userSvtCollectionEnt, 0, 0, 0LL);
  this->fields.listViewItem = v19;
  p_listViewItem = &this->fields.listViewItem;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.listViewItem, (int32_t)v19, v21, v22);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem->fields.portraitLimitCount = -1,
        listViewItem = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(listViewItem, 0LL),
        (v23 = *p_listViewItem) == 0LL) )
  {
LABEL_14:
    sub_1B00F28(listViewItem, v12);
  }
  v24 = (int)listViewItem;
  LimitCount = ServantStatusListViewItem__get_LimitCount(v23, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v24, LimitCount, 0LL);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_statusAssetFolderName, (int32_t)StatusImageFolderName, v28, v29);
  v30 = *p_statusAssetFolderName;
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v10,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v30, v31, 1, 0LL) )
  {
    if ( *(_QWORD *)v15 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v15 + 64LL),
        *(_QWORD *)(*(_QWORD *)v15 + 40LL));
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
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_48E66D5 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B00CCC(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, v4);
    sub_1B00CCC(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v5);
    byte_48E66D5 = 1;
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
    v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v7, v8, Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, 0LL);
    static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = v7;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)v7, v10, v11);
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
    sub_1B00F28(v6, method);
  }
}


UnityEngine_GameObject_o *__fastcall SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_48E66D3 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E66D3 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B00F28(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E66D6 & 1) == 0 )
  {
    sub_1B00CCC(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v1);
    byte_48E66D6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(SelectServantPortraitLimitCountDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(0LL, assetData);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, method);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onSetupEndCallback->fields.m_target)(
      onSetupEndCallback->fields.original_method_info,
      *(_QWORD *)&onSetupEndCallback->fields.extra_arg);
}