void __fastcall SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FE203 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FE203 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectServantPortraitLimitCountDialog__Close_33046444(this, 0LL, v2);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close_33046444(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FE200 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SelectServantPortraitLimitCountDialog_EndClose__, v10);
    byte_40FE200 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__EndClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  struct System_String_o **p_statusAssetFolderName; // x20
  System_String_o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v19; // x20
  struct System_Action_o *closeEndFunc; // t1

  if ( (byte_40FE201 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40FE201 = 1;
  }
  if ( this->fields.statusAssetData )
  {
    p_statusAssetFolderName = &this->fields.statusAssetFolderName;
    if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
    {
      v4 = *p_statusAssetFolderName;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v4, 0LL);
      *p_statusAssetFolderName = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.statusAssetFolderName, 0LL, v5, v6, v7, v8, v9, v10);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v19 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B16F98(p_closeEndFunc, 0LL, v12, v13, v14, v15, v16, v17);
    System_Action__Invoke(v19, 0LL);
  }
}


void __fastcall SelectServantPortraitLimitCountDialog__EndStatusLoad(
        SelectServantPortraitLimitCountDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  ServantStatusListViewManager_o *portraitStatusList; // x0
  ServantStatusListViewManager_o *v12; // x0
  ServantStatusListViewManager_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  ServantStatusListViewManager_CallbackFunc_o *v18; // x21

  if ( (byte_40FE1FC & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_B16FFC(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v10);
    byte_40FE1FC = 1;
  }
  this->fields.statusAssetData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.statusAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  portraitStatusList = this->fields.portraitStatusList;
  if ( !portraitStatusList
    || (ServantStatusListViewManager__CreateList(portraitStatusList, this->fields.listViewItem, 0LL),
        (v12 = this->fields.portraitStatusList) == 0LL)
    || (ServantStatusListViewManager__SetMode_32653296(v12, 6, 0LL),
        v13 = this->fields.portraitStatusList,
        v18 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v14,
                                                               v15,
                                                               v16,
                                                               v17),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0LL),
        !v13) )
  {
    sub_B170D4();
  }
  ServantStatusListViewManager__SetMode(v13, 1, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectServantPortraitLimitCountDialog__GetCostumeIds(
        SelectServantPortraitLimitCountDialog_o *this,
        int32_t ImgIndex,
        const MethodInfo *method)
{
  int32_t v3; // w19
  struct ServantStatusListViewItem_o *listViewItem; // x8
  struct System_Int32_array *costumeIds; // x22
  struct ServantStatusListViewItem_o *v7; // x8
  struct System_Int32_array *v8; // x20
  __int64 MaxDispLimitCount; // x0
  __int64 v10; // x1
  __int64 v11; // x2

  v3 = ImgIndex;
  if ( (byte_40FE1FE & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&ImgIndex);
    byte_40FE1FE = 1;
  }
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem )
    goto LABEL_17;
  costumeIds = listViewItem->fields.costumeIds;
  if ( costumeIds )
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    if ( v3 - ImageLimitCount__get_MaxDispLimitCount(0LL) < (signed int)costumeIds->max_length )
    {
      v7 = this->fields.listViewItem;
      if ( v7 )
      {
        v8 = v7->fields.costumeIds;
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        MaxDispLimitCount = ImageLimitCount__get_MaxDispLimitCount(0LL);
        if ( v8 )
        {
          if ( (unsigned int)(v3 - MaxDispLimitCount) >= v8->max_length )
          {
            sub_B17100(MaxDispLimitCount, v10, v11);
            sub_B170A0();
          }
          return v8->m_Items[v3 - (int)MaxDispLimitCount + 1];
        }
      }
LABEL_17:
      sub_B170D4();
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
  System_String_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FE1F9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FE1F9 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.titleTextCode, 0LL) )
  {
    v5 = this->fields.titleLabel;
    titleTextCode = this->fields.titleTextCode;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get(titleTextCode, 0LL);
    if ( !v5 )
      goto LABEL_26;
    UILabel__set_text(v5, v7, 0LL);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0LL) )
  {
    v9 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v9 )
    {
      UILabel__set_text(v9, v11, 0LL);
      goto LABEL_23;
    }
LABEL_26:
    sub_B170D4();
  }
LABEL_23:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
  {
    this->fields.statusAssetFolderName = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.statusAssetFolderName, 0LL, v12, v13, v14, v15, v16, v17);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__OnClickClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FE1FF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FE1FF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  SelectServantPortraitLimitCountDialog__Close_33046444(this, 0LL, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectServantPortraitLimitCountDialog__OnSelectPortraitLimitCount(
        SelectServantPortraitLimitCountDialog_o *this,
        int32_t kind,
        int32_t portraitImgIndex,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Action_int__o *selectPortraitLimitCountCallback; // x0

  if ( (byte_40FE1FD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, *(_QWORD *)&kind);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40FE1FD = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  if ( ImageLimitCount__get_MaxDispLimitCount(0LL) <= portraitImgIndex )
    portraitImgIndex = SelectServantPortraitLimitCountDialog__GetCostumeIds(this, portraitImgIndex, v8);
  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    System_Action_int___Invoke(
      selectPortraitLimitCountCallback,
      portraitImgIndex,
      (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
  SelectServantPortraitLimitCountDialog__Close_33046444(this, 0LL, v8);
}


void __fastcall SelectServantPortraitLimitCountDialog__Open(
        SelectServantPortraitLimitCountDialog_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEnt,
        System_Action_int__o *selectPortraitLimitCountCallback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_40FE1FA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, userSvtCollectionEnt);
    sub_B16FFC(&Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__, v11);
    byte_40FE1FA = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEnt,
    (System_Int32_array **)userSvtCollectionEnt,
    (System_String_array **)selectPortraitLimitCountCallback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectPortraitLimitCountCallback,
    (System_Int32_array **)selectPortraitLimitCountCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__, 0LL);
  SelectServantPortraitLimitCountDialog__Setup(this, v22, v23);
}


void __fastcall SelectServantPortraitLimitCountDialog__Setup(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *onSetupEndCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o **v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  ServantStatusListViewItem_o *v31; // x23
  ServantStatusListViewItem_o **p_listViewItem; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct ServantStatusListViewItem_o *listViewItem; // x8
  int32_t SvtId; // w0
  ServantStatusListViewItem_o *v41; // x8
  int32_t v42; // w22
  int32_t LimitCount; // w23
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *v52; // x19
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  AssetLoader_LoadEndDataHandler_o *v57; // x22

  if ( (byte_40FE1FB & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, onSetupEndCallback);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v8);
    sub_B16FFC(&ServantStatusListViewItem_TypeInfo, v9);
    sub_B16FFC(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__0__, v10);
    sub_B16FFC(&SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo, v11);
    byte_40FE1FB = 1;
  }
  v12 = sub_B170CC(
          SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo,
          onSetupEndCallback,
          method,
          v3,
          v4);
  SelectServantPortraitLimitCountDialog___c__DisplayClass16_0___ctor(
    (SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_17;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = onSetupEndCallback;
  v19 = (System_Action_o **)(v12 + 24);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)onSetupEndCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v31 = (ServantStatusListViewItem_o *)sub_B170CC(ServantStatusListViewItem_TypeInfo, v27, v28, v29, v30);
  ServantStatusListViewItem___ctor_36652712(v31, userSvtCollectionEnt, 0, 0, 0LL);
  p_listViewItem = &this->fields.listViewItem;
  this->fields.listViewItem = v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listViewItem,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem->fields.portraitLimitCount = -1, !*p_listViewItem)
    || (SvtId = ServantStatusListViewItem__get_SvtId(*p_listViewItem, 0LL), (v41 = *p_listViewItem) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  v42 = SvtId;
  LimitCount = ServantStatusListViewItem__get_LimitCount(v41, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v42, LimitCount, 0LL);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_statusAssetFolderName,
    (System_Int32_array **)StatusImageFolderName,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = *p_statusAssetFolderName;
  v57 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v53, v54, v55, v56);
  AssetLoader_LoadEndDataHandler___ctor(
    v57,
    (Il2CppObject *)v12,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v52, v57, 1, 0LL) )
  {
    if ( *v19 )
      System_Action__Invoke(*v19, 0LL);
  }
}


void __fastcall SelectServantPortraitLimitCountDialog___Open_b__15_0(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  SelectServantPortraitLimitCountDialog___c_c *v9; // x0
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x8
  System_Action_o *_9__15_1; // x20
  Il2CppObject *v12; // x21
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v21; // x0

  if ( (byte_40FE204 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__, v7);
    sub_B16FFC(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v8);
    byte_40FE204 = 1;
  }
  v9 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  if ( (BYTE3(SelectServantPortraitLimitCountDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo);
    v9 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__15_1 = static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__15_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(_9__15_1, v12, Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__, 0LL);
    v13 = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    v13->__9__15_1 = _9__15_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v13->__9__15_1,
      (System_Int32_array **)_9__15_1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !this )
    goto LABEL_19;
  BaseDialog__Open((BaseDialog_o *)this, _9__15_1, 0, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v21 = this->fields.scrollView;
    if ( v21 )
    {
      UIScrollView__ResetPosition(v21, 0LL);
      return;
    }
LABEL_19:
    sub_B170D4();
  }
}


UnityEngine_GameObject_o *__fastcall SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FE202 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FE202 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7600 & 1) == 0 )
  {
    sub_B16FFC(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v1);
    byte_40F7600 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SelectServantPortraitLimitCountDialog___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___ctor(
        SelectServantPortraitLimitCountDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___Open_b__15_1(
        SelectServantPortraitLimitCountDialog___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectServantPortraitLimitCountDialog___c__DisplayClass16_0___ctor(
        SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c__DisplayClass16_0___Setup_b__0(
        SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  SelectServantPortraitLimitCountDialog_o *_4__this; // x0
  System_Action_o *onSetupEndCallback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, 0LL);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    System_Action__Invoke(onSetupEndCallback, 0LL);
}