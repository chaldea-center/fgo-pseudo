void __fastcall SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E984B & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E984B = 1;
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

  SelectServantPortraitLimitCountDialog__Close_26863656(this, 0LL, v2);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close_26863656(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E9848 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SelectServantPortraitLimitCountDialog_EndClose__, v10, v11, v12);
    byte_42E9848 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__EndClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_String_o **p_statusAssetFolderName; // x20
  System_String_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v22; // x20
  struct System_Action_o *closeEndFunc; // t1

  if ( (byte_42E9849 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9849 = 1;
  }
  if ( this->fields.statusAssetData )
  {
    p_statusAssetFolderName = &this->fields.statusAssetFolderName;
    if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
    {
      v6 = *p_statusAssetFolderName;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(v6, 0LL);
      *p_statusAssetFolderName = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.statusAssetFolderName, 0LL, v7, v8, v9, v10, v11, v12);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v14);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v22 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B5D560(p_closeEndFunc, 0LL, v15, v16, v17, v18, v19, v20);
    System_Action__Invoke(v22, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x1
  ServantStatusListViewManager_o *portraitStatusList; // x0
  ServantStatusListViewManager_o *v15; // x20
  ServantStatusListViewManager_CallbackFunc_o *v16; // x21

  if ( (byte_42E9844 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v10, v11, v12);
    byte_42E9844 = 1;
  }
  this->fields.statusAssetData = data;
  sub_B5D560(
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
        (portraitStatusList = this->fields.portraitStatusList) == 0LL)
    || (ServantStatusListViewManager__SetMode_33243376(portraitStatusList, 6, 0LL),
        v15 = this->fields.portraitStatusList,
        v16 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B5D694(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0LL),
        !v15) )
  {
    sub_B5D69C(portraitStatusList, v13);
  }
  ServantStatusListViewManager__SetMode(v15, 1, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SelectServantPortraitLimitCountDialog__GetCostumeIds(
        SelectServantPortraitLimitCountDialog_o *this,
        int32_t ImgIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  SelectServantPortraitLimitCountDialog_o *v5; // x20
  struct ServantStatusListViewItem_o *listViewItem; // x8
  struct System_Int32_array *costumeIds; // x22
  struct ServantStatusListViewItem_o *v8; // x8
  struct System_Int32_array *v9; // x20
  __int64 v11; // x0

  v4 = ImgIndex;
  v5 = this;
  if ( (byte_42E9846 & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_B5D5C4(
                                                        &ImageLimitCount_TypeInfo,
                                                        ImgIndex,
                                                        (_DWORD)method,
                                                        v3);
    byte_42E9846 = 1;
  }
  listViewItem = v5->fields.listViewItem;
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
    this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0LL);
    if ( v4 - (int)this < (signed int)costumeIds->max_length )
    {
      v8 = v5->fields.listViewItem;
      if ( v8 )
      {
        v9 = v8->fields.costumeIds;
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0LL);
        if ( v9 )
        {
          if ( v4 - (int)this >= v9->max_length )
          {
            v11 = sub_B5D6C8(this);
            sub_B5D668(v11, 0LL);
          }
          return v9->m_Items[v4 - (int)this + 1];
        }
      }
LABEL_17:
      sub_B5D69C(this, *(_QWORD *)&ImgIndex);
    }
  }
  return v4;
}


void __fastcall SelectServantPortraitLimitCountDialog__Init(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *v9; // x20
  System_String_o *titleTextCode; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *cancelLabel; // x20
  UILabel_o *v14; // x20
  System_String_o *cancelTextCode; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E9841 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E9841 = 1;
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
    v9 = this->fields.titleLabel;
    titleTextCode = this->fields.titleTextCode;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get(titleTextCode, 0LL);
    if ( !v9 )
      goto LABEL_26;
    UILabel__set_text(v9, v11, 0LL);
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
    v14 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v14 )
    {
      UILabel__set_text(v14, v11, 0LL);
      goto LABEL_23;
    }
LABEL_26:
    sub_B5D69C(v11, v12);
  }
LABEL_23:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
  {
    this->fields.statusAssetFolderName = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.statusAssetFolderName, 0LL, v16, v17, v18, v19, v20, v21);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__OnClickClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E9847 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9847 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  SelectServantPortraitLimitCountDialog__Close_26863656(this, 0LL, v5);
}


void __fastcall SelectServantPortraitLimitCountDialog__OnSelectPortraitLimitCount(
        SelectServantPortraitLimitCountDialog_o *this,
        int32_t kind,
        int32_t portraitImgIndex,
        const MethodInfo *method)
{
  int32_t CostumeIds; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x2
  System_Action_int__o *selectPortraitLimitCountCallback; // x0

  CostumeIds = portraitImgIndex;
  if ( (byte_42E9845 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, kind, portraitImgIndex, method);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42E9845 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  if ( ImageLimitCount__get_MaxDispLimitCount(0LL) <= CostumeIds )
    CostumeIds = SelectServantPortraitLimitCountDialog__GetCostumeIds(this, CostumeIds, v12);
  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    System_Action_int___Invoke(
      selectPortraitLimitCountCallback,
      CostumeIds,
      (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  SelectServantPortraitLimitCountDialog__Close_26863656(this, 0LL, v12);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_42E9842 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)userSvtCollectionEnt, (_DWORD)selectPortraitLimitCountCallback, method);
    sub_B5D5C4(&Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__, v11, v12, v13);
    byte_42E9842 = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEnt,
    (System_Int32_array **)userSvtCollectionEnt,
    (System_String_array **)selectPortraitLimitCountCallback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectPortraitLimitCountCallback,
    (System_Int32_array **)selectPortraitLimitCountCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__, 0LL);
  SelectServantPortraitLimitCountDialog__Setup(this, v20, v21);
}


void __fastcall SelectServantPortraitLimitCountDialog__Setup(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *onSetupEndCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x21
  ServantStatusListViewItem_o *SvtId; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_o **v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  ServantStatusListViewItem_o *v38; // x23
  struct ServantStatusListViewItem_o **p_listViewItem; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct ServantStatusListViewItem_o *listViewItem; // x8
  ServantStatusListViewItem_o *v47; // x8
  int32_t v48; // w22
  int32_t v49; // w1
  const MethodInfo *v50; // x2
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_o *v59; // x19
  AssetLoader_LoadEndDataHandler_o *v60; // x22

  if ( (byte_42E9843 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)onSetupEndCallback, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantStatusListViewItem_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__0__, v15, v16, v17);
    sub_B5D5C4(&SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo, v18, v19, v20);
    byte_42E9843 = 1;
  }
  v21 = sub_B5D694(SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo);
  SelectServantPortraitLimitCountDialog___c__DisplayClass16_0___ctor(
    (SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_17;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = onSetupEndCallback;
  v30 = (System_Action_o **)(v21 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 24),
    (System_Int32_array **)onSetupEndCallback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v38 = (ServantStatusListViewItem_o *)sub_B5D694(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34337184(v38, userSvtCollectionEnt, 0, 0, 0LL);
  p_listViewItem = &this->fields.listViewItem;
  this->fields.listViewItem = v38;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listViewItem,
    (System_Int32_array **)v38,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem->fields.portraitLimitCount = -1, (SvtId = *p_listViewItem) == 0LL)
    || (SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(SvtId, 0LL),
        (v47 = *p_listViewItem) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(SvtId, v23);
  }
  v48 = (int)SvtId;
  ServantStatusListViewItem__get_LimitCount(v47, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v48, v49, v50);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_statusAssetFolderName,
    (System_Int32_array **)StatusImageFolderName,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = *p_statusAssetFolderName;
  v60 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v60,
    (Il2CppObject *)v21,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v59, v60, 1, 0LL) )
  {
    if ( *v30 )
      System_Action__Invoke(*v30, 0LL);
  }
}


void __fastcall SelectServantPortraitLimitCountDialog___Open_b__15_0(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *v14; // x0
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x8
  System_Action_o *_9__15_1; // x20
  Il2CppObject *v17; // x21
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_42E984C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__, v8, v9, v10);
    sub_B5D5C4(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v11, v12, v13);
    byte_42E984C = 1;
  }
  v14 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  if ( (BYTE3(SelectServantPortraitLimitCountDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo);
    v14 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  static_fields = (struct SelectServantPortraitLimitCountDialog___c_StaticFields *)*((_QWORD *)v14 + 23);
  _9__15_1 = static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( (*((_BYTE *)v14 + 307) & 4) != 0 && !*((_DWORD *)v14 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__15_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__15_1, v17, Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__, 0LL);
    v18 = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    v18->__9__15_1 = _9__15_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v18->__9__15_1,
      (System_Int32_array **)_9__15_1,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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
    v14 = this->fields.scrollView;
    if ( v14 )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)v14, 0LL);
      return;
    }
LABEL_19:
    sub_B5D69C(v14, method);
  }
}


UnityEngine_GameObject_o *__fastcall SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E984A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E984A = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D2C & 1) == 0 )
  {
    sub_B5D5C4(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v1, v2, v3);
    byte_42E5D2C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SelectServantPortraitLimitCountDialog___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(0LL, assetData);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, 0LL);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    System_Action__Invoke(onSetupEndCallback, 0LL);
}