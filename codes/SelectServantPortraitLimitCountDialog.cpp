void __fastcall SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B0F65 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B0F65 = 1;
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

  SelectServantPortraitLimitCountDialog__Close_26766272(this, 0LL, v2);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close_26766272(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B0F62 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SelectServantPortraitLimitCountDialog_EndClose__);
    byte_42B0F62 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v20; // x20
  struct System_Action_o *closeEndFunc; // t1

  if ( (byte_42B0F63 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B0F63 = 1;
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
      sub_B52920((BattleServantConfConponent_o *)&this->fields.statusAssetFolderName, 0LL, v5, v6, v7, v8, v9, v10);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v20 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B52920(p_closeEndFunc, 0LL, v13, v14, v15, v16, v17, v18);
    System_Action__Invoke(v20, 0LL);
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
  ServantStatusListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_42B0F5E & 1) == 0 )
  {
    sub_B52984(&ServantStatusListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
    byte_42B0F5E = 1;
  }
  this->fields.statusAssetData = data;
  sub_B52920(
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
    || (ServantStatusListViewManager__SetMode_33207632(portraitStatusList, 6, 0LL),
        v12 = this->fields.portraitStatusList,
        v13 = (ServantStatusListViewManager_CallbackFunc_o *)sub_B52A54(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0LL),
        !v12) )
  {
    sub_B52A5C(portraitStatusList, v10);
  }
  ServantStatusListViewManager__SetMode(v12, 1, v13, 0LL);
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
  if ( (byte_42B0F60 & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_B52984(&ImageLimitCount_TypeInfo);
    byte_42B0F60 = 1;
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
            v10 = sub_B52A88(this);
            sub_B52A28(v10, 0LL);
          }
          return v8->m_Items[v3 - (int)this + 1];
        }
      }
LABEL_17:
      sub_B52A5C(this, *(_QWORD *)&ImgIndex);
    }
  }
  return v3;
}


void __fastcall SelectServantPortraitLimitCountDialog__Init(
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B0F5B & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0F5B = 1;
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
    v4 = this->fields.titleLabel;
    titleTextCode = this->fields.titleTextCode;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get(titleTextCode, 0LL);
    if ( !v4 )
      goto LABEL_26;
    UILabel__set_text(v4, v6, 0LL);
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
    v6 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v9 )
    {
      UILabel__set_text(v9, v6, 0LL);
      goto LABEL_23;
    }
LABEL_26:
    sub_B52A5C(v6, v7);
  }
LABEL_23:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
  {
    this->fields.statusAssetFolderName = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.statusAssetFolderName, 0LL, v11, v12, v13, v14, v15, v16);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__OnClickClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B0F61 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0F61 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  SelectServantPortraitLimitCountDialog__Close_26766272(this, 0LL, v3);
}


void __fastcall SelectServantPortraitLimitCountDialog__OnSelectPortraitLimitCount(
        SelectServantPortraitLimitCountDialog_o *this,
        int32_t kind,
        int32_t portraitImgIndex,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2
  System_Action_int__o *selectPortraitLimitCountCallback; // x0

  if ( (byte_42B0F5F & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int__Invoke__);
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0F5F = 1;
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
    portraitImgIndex = SelectServantPortraitLimitCountDialog__GetCostumeIds(this, portraitImgIndex, v6);
  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    System_Action_int___Invoke(
      selectPortraitLimitCountCallback,
      portraitImgIndex,
      (const MethodInfo_2626204 *)Method_System_Action_int__Invoke__);
  SelectServantPortraitLimitCountDialog__Close_26766272(this, 0LL, v6);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_42B0F5C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__);
    byte_42B0F5C = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userSvtCollectionEnt,
    (System_Int32_array **)userSvtCollectionEnt,
    (System_String_array **)selectPortraitLimitCountCallback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.selectPortraitLimitCountCallback,
    (System_Int32_array **)selectPortraitLimitCountCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__15_0__, 0LL);
  SelectServantPortraitLimitCountDialog__Setup(this, v17, v18);
}


void __fastcall SelectServantPortraitLimitCountDialog__Setup(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *onSetupEndCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  ServantStatusListViewItem_o *SvtId; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  ServantStatusListViewItem_o *v22; // x23
  struct ServantStatusListViewItem_o **p_listViewItem; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct ServantStatusListViewItem_o *listViewItem; // x8
  ServantStatusListViewItem_o *v31; // x8
  int32_t v32; // w22
  int32_t v33; // w1
  const MethodInfo *v34; // x2
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_o *v43; // x19
  AssetLoader_LoadEndDataHandler_o *v44; // x22

  if ( (byte_42B0F5D & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&ServantStatusListViewItem_TypeInfo);
    sub_B52984(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__0__);
    sub_B52984(&SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo);
    byte_42B0F5D = 1;
  }
  v5 = sub_B52A54(SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_TypeInfo);
  SelectServantPortraitLimitCountDialog___c__DisplayClass16_0___ctor(
    (SelectServantPortraitLimitCountDialog___c__DisplayClass16_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = onSetupEndCallback;
  v14 = (System_Action_o **)(v5 + 24);
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)onSetupEndCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v22 = (ServantStatusListViewItem_o *)sub_B52A54(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34532672(v22, userSvtCollectionEnt, 0, 0, 0LL);
  p_listViewItem = &this->fields.listViewItem;
  this->fields.listViewItem = v22;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.listViewItem,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem->fields.portraitLimitCount = -1, (SvtId = *p_listViewItem) == 0LL)
    || (SvtId = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(SvtId, 0LL),
        (v31 = *p_listViewItem) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(SvtId, v7);
  }
  v32 = (int)SvtId;
  ServantStatusListViewItem__get_LimitCount(v31, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v32, v33, v34);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_B52920(
    (BattleServantConfConponent_o *)p_statusAssetFolderName,
    (System_Int32_array **)StatusImageFolderName,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = *p_statusAssetFolderName;
  v44 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v44,
    (Il2CppObject *)v5,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass16_0__Setup_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v43, v44, 1, 0LL) )
  {
    if ( *v14 )
      System_Action__Invoke(*v14, 0LL);
  }
}


void __fastcall SelectServantPortraitLimitCountDialog___Open_b__15_0(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x8
  System_Action_o *_9__15_1; // x20
  Il2CppObject *v6; // x21
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_42B0F66 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__);
    sub_B52984(&SelectServantPortraitLimitCountDialog___c_TypeInfo);
    byte_42B0F66 = 1;
  }
  v3 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  if ( (BYTE3(SelectServantPortraitLimitCountDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo);
    v3 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  static_fields = (struct SelectServantPortraitLimitCountDialog___c_StaticFields *)*((_QWORD *)v3 + 23);
  _9__15_1 = static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( (*((_BYTE *)v3 + 307) & 4) != 0 && !*((_DWORD *)v3 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__15_1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__15_1, v6, Method_SelectServantPortraitLimitCountDialog___c__Open_b__15_1__, 0LL);
    v7 = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    v7->__9__15_1 = _9__15_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v7->__9__15_1,
      (System_Int32_array **)_9__15_1,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    v3 = this->fields.scrollView;
    if ( v3 )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)v3, 0LL);
      return;
    }
LABEL_19:
    sub_B52A5C(v3, method);
  }
}


UnityEngine_GameObject_o *__fastcall SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42B0F64 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0F64 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42AD314 & 1) == 0 )
  {
    sub_B52984(&SelectServantPortraitLimitCountDialog___c_TypeInfo);
    byte_42AD314 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(SelectServantPortraitLimitCountDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(0LL, assetData);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, 0LL);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    System_Action__Invoke(onSetupEndCallback, 0LL);
}