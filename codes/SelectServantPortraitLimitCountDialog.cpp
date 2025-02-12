void __fastcall SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB895D & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB895D = 1;
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

  SelectServantPortraitLimitCountDialog__Close_47231328(this, 0LL, v2);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close_47231328(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4BB895A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_SelectServantPortraitLimitCountDialog_EndClose__, v10);
    byte_4BB895A = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__EndClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  struct System_String_o **p_statusAssetFolderName; // x20
  System_String_o *v4; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PartyOrganizationUtility_o *p_closeEndFunc; // x19
  struct System_Action_o *v20; // x20
  struct System_Action_o *closeEndFunc; // t1

  if ( (byte_4BB895B & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    byte_4BB895B = 1;
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
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.statusAssetFolderName, 0LL, v5, v6, v7, v8, v9, v10);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C13F80(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (PartyOrganizationUtility_o *)&this->fields.closeEndFunc;
  v20 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1C13CC8(p_closeEndFunc, 0LL, v13, v14, v15, v16, v17, v18);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
      v20->fields.original_method_info,
      *(_QWORD *)&v20->fields.extra_arg);
  }
}


void __fastcall SelectServantPortraitLimitCountDialog__EndStatusLoad(
        SelectServantPortraitLimitCountDialog_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  ServantStatusListViewManager_o *portraitStatusList; // x0
  ServantStatusListViewManager_o *v13; // x20
  ServantStatusListViewManager_CallbackFunc_o *v14; // x21

  if ( (byte_4BB8956 & 1) == 0 )
  {
    sub_1C13D24(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data);
    sub_1C13D24(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v10);
    byte_4BB8956 = 1;
  }
  this->fields.statusAssetData = data;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.statusAssetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  portraitStatusList = this->fields.portraitStatusList;
  if ( !portraitStatusList
    || (ServantStatusListViewManager__CreateList(portraitStatusList, this->fields.listViewItem, 0LL),
        (portraitStatusList = this->fields.portraitStatusList) == 0LL)
    || (ServantStatusListViewManager__SetMode_35187616(portraitStatusList, 6, 0LL),
        v13 = this->fields.portraitStatusList,
        v14 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1C13F70(ServantStatusListViewManager_CallbackFunc_TypeInfo),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0LL),
        !v13) )
  {
    sub_1C13F80(portraitStatusList, v11);
  }
  ServantStatusListViewManager__SetMode(v13, 1, v14, 0LL);
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
  if ( (byte_4BB8958 & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_1C13D24(&ImageLimitCount_TypeInfo, *(_QWORD *)&ImgIndex);
    byte_4BB8958 = 1;
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
            sub_1C13F88(this, *(_QWORD *)&ImgIndex);
          return v8->m_Items[v3 - (int)this + 1];
        }
      }
LABEL_15:
      sub_1C13F80(this, *(_QWORD *)&ImgIndex);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB8953 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB8953 = 1;
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
    sub_1C13F80(v7, v8);
  }
LABEL_19:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
  {
    this->fields.statusAssetFolderName = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.statusAssetFolderName, 0LL, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4BB8959 & 1) == 0 )
  {
    sub_1C13D24(&Method_SelectServantPortraitLimitCountDialog_OnClickClose__, method);
    byte_4BB8959 = 1;
  }
  v3 = Method_SelectServantPortraitLimitCountDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  SelectServantPortraitLimitCountDialog__Close_47231328(this, 0LL, v5);
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

  if ( (byte_4BB8957 & 1) == 0 )
  {
    sub_1C13D24(&ImageLimitCount_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v6);
    byte_4BB8957 = 1;
  }
  v7 = Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C13D3C(Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
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
  SelectServantPortraitLimitCountDialog__Close_47231328(this, 0LL, v9);
}


void __fastcall SelectServantPortraitLimitCountDialog__Open(
        SelectServantPortraitLimitCountDialog_o *this,
        UserServantCollectionEntity_o *userSvtCollectionEnt,
        System_Action_int__o *selectPortraitLimitCountCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x2

  if ( (byte_4BB8954 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, userSvtCollectionEnt);
    sub_1C13D24(&Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, v11);
    byte_4BB8954 = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEnt,
    (int64_t)userSvtCollectionEnt,
    (int64_t)selectPortraitLimitCountCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.selectPortraitLimitCountCallback,
    (int64_t)selectPortraitLimitCountCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, 0LL);
  SelectServantPortraitLimitCountDialog__Setup(this, v18, v19);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  ServantStatusListViewItem_o *v27; // x23
  struct ServantStatusListViewItem_o **p_listViewItem; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  ServantStatusListViewItem_o *v35; // x8
  int32_t v36; // w22
  int32_t LimitCount; // w23
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_o *v46; // x19
  AssetLoader_LoadEndDataHandler_o *v47; // x22

  if ( (byte_4BB8955 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, onSetupEndCallback);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1C13D24(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1C13D24(&ServantStatusListViewItem_TypeInfo, v7);
    sub_1C13D24(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__, v8);
    sub_1C13D24(&SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo, v9);
    byte_4BB8955 = 1;
  }
  v10 = sub_1C13F70(SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_14;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = onSetupEndCallback;
  v19 = v10 + 24;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)onSetupEndCallback, v20, v21, v22, v23, v24, v25);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v27 = (ServantStatusListViewItem_o *)sub_1C13F70(ServantStatusListViewItem_TypeInfo);
  ServantStatusListViewItem___ctor_34254512(v27, userSvtCollectionEnt, 0, 0, 0LL);
  this->fields.listViewItem = v27;
  p_listViewItem = &this->fields.listViewItem;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.listViewItem, (int64_t)v27, v29, v30, v31, v32, v33, v34);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem->fields.portraitLimitCount = -1,
        listViewItem = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(listViewItem, 0LL),
        (v35 = *p_listViewItem) == 0LL) )
  {
LABEL_14:
    sub_1C13F80(listViewItem, v12);
  }
  v36 = (int)listViewItem;
  LimitCount = ServantStatusListViewItem__get_LimitCount(v35, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v36, LimitCount, 0LL);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)p_statusAssetFolderName,
    (int64_t)StatusImageFolderName,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = *p_statusAssetFolderName;
  v47 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v47,
    (Il2CppObject *)v10,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v46, v47, 1, 0LL) )
  {
    if ( *(_QWORD *)v19 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v19 + 64LL),
        *(_QWORD *)(*(_QWORD *)v19 + 40LL));
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4BB895E & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, v4);
    sub_1C13D24(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v5);
    byte_4BB895E = 1;
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
    v7 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v7, v8, Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, 0LL);
    static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = v7;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__14_1, (int64_t)v7, v10, v11, v12, v13, v14, v15);
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
    sub_1C13F80(v6, method);
  }
}


UnityEngine_GameObject_o *__fastcall SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4BB895C & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB895C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C13F80(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB895F & 1) == 0 )
  {
    sub_1C13D24(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v1);
    byte_4BB895F = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(SelectServantPortraitLimitCountDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(0LL, assetData);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, method);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onSetupEndCallback->fields.m_target)(
      onSetupEndCallback->fields.original_method_info,
      *(_QWORD *)&onSetupEndCallback->fields.extra_arg);
}