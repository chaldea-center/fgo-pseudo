void __fastcall SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_421581F & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421581F = 1;
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

  SelectServantPortraitLimitCountDialog__Close_26452208(this, 0LL, v2);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close_26452208(
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
  System_Action_o *v13; // x20

  if ( (byte_421581C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_SelectServantPortraitLimitCountDialog_EndClose__, v10);
    byte_421581C = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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

  if ( (byte_421581D & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_421581D = 1;
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
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.statusAssetFolderName, 0LL, v5, v6, v7, v8, v9, v10);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v19 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B0D840(p_closeEndFunc, 0LL, v12, v13, v14, v15, v16, v17);
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
  ServantStatusListViewManager_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  ServantStatusListViewManager_CallbackFunc_o *v15; // x21

  if ( (byte_4215818 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_B0D8A4(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v10);
    byte_4215818 = 1;
  }
  this->fields.statusAssetData = data;
  sub_B0D840(
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
    || (ServantStatusListViewManager__SetMode_32074888(portraitStatusList, 6, 0LL),
        v12 = this->fields.portraitStatusList,
        v15 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B0D974(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v13,
                                                               v14),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0LL),
        !v12) )
  {
    sub_B0D97C(portraitStatusList);
  }
  ServantStatusListViewManager__SetMode(v12, 1, v15, 0LL);
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
  __int64 v10; // x0

  v3 = ImgIndex;
  v4 = this;
  if ( (byte_421581A & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_B0D8A4(&ImageLimitCount_TypeInfo, *(_QWORD *)&ImgIndex);
    byte_421581A = 1;
  }
  listViewItem = v4->fields.listViewItem;
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
    if ( v3 - (int)this < (signed int)costumeIds->max_length )
    {
      v7 = v4->fields.listViewItem;
      if ( v7 )
      {
        v8 = v7->fields.costumeIds;
        if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ImageLimitCount_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        }
        this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0LL);
        if ( v8 )
        {
          if ( v3 - (int)this >= v8->max_length )
          {
            v10 = sub_B0D9A8(this);
            sub_B0D948(v10, 0LL);
          }
          return v8->m_Items[v3 - (int)this + 1];
        }
      }
LABEL_17:
      sub_B0D97C(this);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4215815 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215815 = 1;
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
    v7 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v9 )
    {
      UILabel__set_text(v9, v7, 0LL);
      goto LABEL_23;
    }
LABEL_26:
    sub_B0D97C(v7);
  }
LABEL_23:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
  {
    this->fields.statusAssetFolderName = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.statusAssetFolderName, 0LL, v11, v12, v13, v14, v15, v16);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__OnClickClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_421581B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421581B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  SelectServantPortraitLimitCountDialog__Close_26452208(this, 0LL, v3);
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

  if ( (byte_4215819 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, *(_QWORD *)&kind);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    byte_4215819 = 1;
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
      (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
  SelectServantPortraitLimitCountDialog__Close_26452208(this, 0LL, v8);
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
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_4215816 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, userSvtCollectionEnt);
    sub_B0D8A4(&Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__, v11);
    byte_4215816 = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEnt,
    (System_Int32_array **)userSvtCollectionEnt,
    (System_String_array **)selectPortraitLimitCountCallback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectPortraitLimitCountCallback,
    (System_Int32_array **)selectPortraitLimitCountCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v20 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__, 0LL);
  SelectServantPortraitLimitCountDialog__Setup(this, v20, v21);
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
  ServantStatusListViewItem_o *SvtId; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o **v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  ServantStatusListViewItem_o *v28; // x23
  struct ServantStatusListViewItem_o **p_listViewItem; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct ServantStatusListViewItem_o *listViewItem; // x8
  ServantStatusListViewItem_o *v37; // x8
  int32_t v38; // w22
  int32_t v39; // w1
  const MethodInfo *v40; // x2
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_o *v49; // x19
  __int64 v50; // x1
  __int64 v51; // x2
  AssetLoader_LoadEndDataHandler_o *v52; // x22

  if ( (byte_4215817 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, onSetupEndCallback);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B0D8A4(&ServantStatusListViewItem_TypeInfo, v7);
    sub_B0D8A4(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__0__, v8);
    sub_B0D8A4(&SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo, v9);
    byte_4215817 = 1;
  }
  v10 = sub_B0D974(SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo, onSetupEndCallback, method);
  SelectServantPortraitLimitCountDialog___c__DisplayClass16_0___ctor(
    (SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_17;
  *(_QWORD *)(v10 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 24) = onSetupEndCallback;
  v18 = (System_Action_o **)(v10 + 24);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v10 + 24),
    (System_Int32_array **)onSetupEndCallback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v28 = (ServantStatusListViewItem_o *)sub_B0D974(ServantStatusListViewItem_TypeInfo, v26, v27);
  ServantStatusListViewItem___ctor_33487644(v28, userSvtCollectionEnt, 0, 0, 0LL);
  p_listViewItem = &this->fields.listViewItem;
  this->fields.listViewItem = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listViewItem,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem->fields.portraitLimitCount = -1, (SvtId = *p_listViewItem) == 0LL)
    || (SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(SvtId, 0LL),
        (v37 = *p_listViewItem) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(SvtId);
  }
  v38 = (int)SvtId;
  ServantStatusListViewItem__get_LimitCount(v37, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v38, v39, v40);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_statusAssetFolderName,
    (System_Int32_array **)StatusImageFolderName,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = *p_statusAssetFolderName;
  v52 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v50, v51);
  AssetLoader_LoadEndDataHandler___ctor(
    v52,
    (Il2CppObject *)v10,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v49, v52, 1, 0LL) )
  {
    if ( *v18 )
      System_Action__Invoke(*v18, 0LL);
  }
}


void __fastcall SelectServantPortraitLimitCountDialog___Open_b__15_0(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *v7; // x0
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x8
  System_Action_o *_9__15_1; // x20
  Il2CppObject *v10; // x21
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4215820 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__, v5);
    sub_B0D8A4(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v6);
    byte_4215820 = 1;
  }
  v7 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  if ( (BYTE3(SelectServantPortraitLimitCountDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo);
    v7 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  static_fields = (struct SelectServantPortraitLimitCountDialog___c_StaticFields *)*((_QWORD *)v7 + 23);
  _9__15_1 = static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( (*((_BYTE *)v7 + 307) & 4) != 0 && !*((_DWORD *)v7 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__15_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(_9__15_1, v10, Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__, 0LL);
    v11 = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    v11->__9__15_1 = _9__15_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v11->__9__15_1,
      (System_Int32_array **)_9__15_1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
    v7 = this->fields.scrollView;
    if ( v7 )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)v7, 0LL);
      return;
    }
LABEL_19:
    sub_B0D97C(v7);
  }
}


UnityEngine_GameObject_o *__fastcall SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_421581E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421581E = 1;
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
    sub_B0D97C(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4212203 & 1) == 0 )
  {
    sub_B0D8A4(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v1);
    byte_4212203 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SelectServantPortraitLimitCountDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(0LL);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, 0LL);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    System_Action__Invoke(onSetupEndCallback, 0LL);
}