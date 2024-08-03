void __fastcall SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A003DB & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_4A003DB = 1;
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

  SelectServantPortraitLimitCountDialog__Close_45506124(this, 0LL, v2);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close_45506124(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_4A003D8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_SelectServantPortraitLimitCountDialog_EndClose__, v6);
    byte_4A003D8 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v11; // x20
  struct System_Action_o *closeEndFunc; // t1

  if ( (byte_4A003D9 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_4A003D9 = 1;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statusAssetFolderName, 0, v5, v6);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  v11 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B6406C(p_closeEndFunc, 0, v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v11->fields.m_target)(
      v11->fields.original_method_info,
      *(_QWORD *)&v11->fields.extra_arg);
  }
}


void __fastcall SelectServantPortraitLimitCountDialog__EndStatusLoad(
        SelectServantPortraitLimitCountDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  ServantStatusListViewManager_o *portraitStatusList; // x0
  ServantStatusListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  ServantStatusListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4A003D4 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1B640C8(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v6);
    byte_4A003D4 = 1;
  }
  this->fields.statusAssetData = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statusAssetData, (int32_t)data, (int32_t)method, v3);
  portraitStatusList = this->fields.portraitStatusList;
  if ( !portraitStatusList
    || (ServantStatusListViewManager__CreateList(portraitStatusList, this->fields.listViewItem, 0LL),
        (portraitStatusList = this->fields.portraitStatusList) == 0LL)
    || (ServantStatusListViewManager__SetMode_33486480(portraitStatusList, 6, 0LL),
        v8 = this->fields.portraitStatusList,
        v11 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1B64314(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v9,
                                                               v10),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0LL),
        !v8) )
  {
    sub_1B64324(portraitStatusList);
  }
  ServantStatusListViewManager__SetMode(v8, 1, v11, 0LL);
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
  __int64 v9; // x1

  v3 = ImgIndex;
  v4 = this;
  if ( (byte_4A003D6 & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_1B640C8(&ImageLimitCount_TypeInfo, *(_QWORD *)&ImgIndex);
    byte_4A003D6 = 1;
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
            sub_1B6432C(this, v9);
          return v8->m_Items[v3 - (int)this + 1];
        }
      }
LABEL_15:
      sub_1B64324(this);
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
  UnityEngine_Object_o *cancelLabel; // x20
  UILabel_o *v9; // x20
  System_String_o *cancelTextCode; // x21
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A003D1 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A003D1 = 1;
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
    v9 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v9 )
    {
      UILabel__set_text(v9, v7, 0LL);
      goto LABEL_19;
    }
LABEL_22:
    sub_1B64324(v7);
  }
LABEL_19:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
  {
    this->fields.statusAssetFolderName = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statusAssetFolderName, 0, v11, v12);
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

  if ( (byte_4A003D7 & 1) == 0 )
  {
    sub_1B640C8(&Method_SelectServantPortraitLimitCountDialog_OnClickClose__, method);
    byte_4A003D7 = 1;
  }
  v3 = Method_SelectServantPortraitLimitCountDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  SelectServantPortraitLimitCountDialog__Close_45506124(this, 0LL, v5);
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

  if ( (byte_4A003D5 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v6);
    byte_4A003D5 = 1;
  }
  v7 = Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
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
  SelectServantPortraitLimitCountDialog__Close_45506124(this, 0LL, v9);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4A003D2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, userSvtCollectionEnt);
    sub_1B640C8(&Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, v7);
    byte_4A003D2 = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.userSvtCollectionEnt,
    (int32_t)userSvtCollectionEnt,
    (int32_t)selectPortraitLimitCountCallback,
    (int32_t)method);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectPortraitLimitCountCallback,
    (int32_t)selectPortraitLimitCountCallback,
    v8,
    v9);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, 0LL);
  SelectServantPortraitLimitCountDialog__Setup(this, v12, v13);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  ServantStatusListViewItem_o *v20; // x23
  struct ServantStatusListViewItem_o **p_listViewItem; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  ServantStatusListViewItem_o *v24; // x8
  int32_t v25; // w22
  int32_t LimitCount; // w23
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  AssetLoader_LoadEndDataHandler_o *v34; // x22

  if ( (byte_4A003D3 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, onSetupEndCallback);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1B640C8(&ServantStatusListViewItem_TypeInfo, v7);
    sub_1B640C8(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__, v8);
    sub_1B640C8(&SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo, v9);
    byte_4A003D3 = 1;
  }
  v10 = sub_1B64314(SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo, onSetupEndCallback, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_14;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 24) = onSetupEndCallback;
  v14 = v10 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)onSetupEndCallback, v15, v16);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v20 = (ServantStatusListViewItem_o *)sub_1B64314(ServantStatusListViewItem_TypeInfo, v18, v19);
  ServantStatusListViewItem___ctor_32474232(v20, userSvtCollectionEnt, 0, 0, 0LL);
  this->fields.listViewItem = v20;
  p_listViewItem = &this->fields.listViewItem;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listViewItem, (int32_t)v20, v22, v23);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem->fields.portraitLimitCount = -1,
        listViewItem = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(listViewItem, 0LL),
        (v24 = *p_listViewItem) == 0LL) )
  {
LABEL_14:
    sub_1B64324(listViewItem);
  }
  v25 = (int)listViewItem;
  LimitCount = ServantStatusListViewItem__get_LimitCount(v24, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v25, LimitCount, 0LL);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_statusAssetFolderName, (int32_t)StatusImageFolderName, v29, v30);
  v31 = *p_statusAssetFolderName;
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33);
  AssetLoader_LoadEndDataHandler___ctor(
    v34,
    (Il2CppObject *)v10,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v31, v34, 1, 0LL) )
  {
    if ( *(_QWORD *)v14 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
  }
}


void __fastcall SelectServantPortraitLimitCountDialog___Open_b__14_0(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *v7; // x0
  System_Action_o *v8; // x20
  Il2CppObject *v9; // x21
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4A003DC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, v5);
    sub_1B640C8(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v6);
    byte_4A003DC = 1;
  }
  v7 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  if ( !SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo);
    v7 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  v8 = *(System_Action_o **)(*((_QWORD *)v7 + 23) + 8LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)v7 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)v7 + 23);
    v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v8, v9, Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, 0LL);
    static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_1, (int32_t)v8, v11, v12);
  }
  if ( !this )
    goto LABEL_16;
  BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v7 = this->fields.scrollView;
    if ( v7 )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)v7, 0LL);
      return;
    }
LABEL_16:
    sub_1B64324(v7);
  }
}


UnityEngine_GameObject_o *__fastcall SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4A003DA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A003DA = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A003DD & 1) == 0 )
  {
    sub_1B640C8(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v1);
    byte_4A003DD = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SelectServantPortraitLimitCountDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(0LL);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, method);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onSetupEndCallback->fields.m_target)(
      onSetupEndCallback->fields.original_method_info,
      *(_QWORD *)&onSetupEndCallback->fields.extra_arg);
}