void __fastcall SelectServantPortraitLimitCountDialog___ctor(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A3B9 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A3B9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectServantPortraitLimitCountDialog__Close_46752588(this, 0LL, v2);
}


void __fastcall SelectServantPortraitLimitCountDialog__Close_46752588(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B1A3B6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SelectServantPortraitLimitCountDialog_EndClose__, v10, v11);
    byte_4B1A3B6 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__EndClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_String_o **p_statusAssetFolderName; // x20
  System_String_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  PartyOrganizationUtility_o *p_closeEndFunc; // x19
  struct System_Action_o *v21; // x20
  struct System_Action_o *closeEndFunc; // t1

  if ( (byte_4B1A3B7 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B1A3B7 = 1;
  }
  if ( this->fields.statusAssetData )
  {
    p_statusAssetFolderName = &this->fields.statusAssetFolderName;
    if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
    {
      v5 = *p_statusAssetFolderName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      AssetManager__releaseAssetStorage(v5, 0LL);
      *p_statusAssetFolderName = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.statusAssetFolderName, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
  SelectServantPortraitLimitCountDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v13);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (PartyOrganizationUtility_o *)&this->fields.closeEndFunc;
  v21 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1BCA784(p_closeEndFunc, 0LL, v14, v15, v16, v17, v18, v19);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v21->fields.m_target)(
      v21->fields.original_method_info,
      *(_QWORD *)&v21->fields.extra_arg);
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
  __int64 v11; // x2
  __int64 v12; // x1
  ServantStatusListViewManager_o *portraitStatusList; // x0
  ServantStatusListViewManager_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ServantStatusListViewManager_CallbackFunc_o *v18; // x21

  if ( (byte_4B1A3B2 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewManager_CallbackFunc_TypeInfo, data, method);
    sub_1BCA7E0(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v10, v11);
    byte_4B1A3B2 = 1;
  }
  this->fields.statusAssetData = data;
  sub_1BCA784(
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
    || (ServantStatusListViewManager__SetMode_34803476(portraitStatusList, 6, 0LL),
        v14 = this->fields.portraitStatusList,
        v18 = (ServantStatusListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               ServantStatusListViewManager_CallbackFunc_TypeInfo,
                                                               v15,
                                                               v16,
                                                               v17),
        ServantStatusListViewManager_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          (intptr_t)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__,
          0LL),
        !v14) )
  {
    sub_1BCAA3C(portraitStatusList, v12);
  }
  ServantStatusListViewManager__SetMode(v14, 1, v18, 0LL);
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
  if ( (byte_4B1A3B4 & 1) == 0 )
  {
    this = (SelectServantPortraitLimitCountDialog_o *)sub_1BCA7E0(
                                                        &ImageLimitCount_TypeInfo,
                                                        *(_QWORD *)&ImgIndex,
                                                        method);
    byte_4B1A3B4 = 1;
  }
  listViewItem = v4->fields.listViewItem;
  if ( !listViewItem )
    goto LABEL_15;
  costumeIds = listViewItem->fields.costumeIds;
  if ( costumeIds )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&ImgIndex);
    this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0LL);
    if ( v3 - (int)this < (signed int)costumeIds->max_length )
    {
      v7 = v4->fields.listViewItem;
      if ( v7 )
      {
        v8 = v7->fields.costumeIds;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&ImgIndex);
        this = (SelectServantPortraitLimitCountDialog_o *)ImageLimitCount__get_MaxDispLimitCount(0LL);
        if ( v8 )
        {
          if ( v3 - (int)this >= v8->max_length )
            sub_1BCAA44(this, *(_QWORD *)&ImgIndex);
          return v8->m_Items[v3 - (int)this + 1];
        }
      }
LABEL_15:
      sub_1BCAA3C(this, *(_QWORD *)&ImgIndex);
    }
  }
  return v3;
}


void __fastcall SelectServantPortraitLimitCountDialog__Init(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v7; // x1
  UILabel_o *v8; // x20
  System_String_o *titleTextCode; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *cancelLabel; // x20
  __int64 v13; // x1
  UILabel_o *v14; // x20
  System_String_o *cancelTextCode; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B1A3AF & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1A3AF = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.titleTextCode, 0LL) )
  {
    v8 = this->fields.titleLabel;
    titleTextCode = this->fields.titleTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    v10 = LocalizationManager__Get(titleTextCode, 0LL);
    if ( !v8 )
      goto LABEL_22;
    UILabel__set_text(v8, v10, 0LL);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0LL) )
  {
    v14 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v10 = LocalizationManager__Get(cancelTextCode, 0LL);
    if ( v14 )
    {
      UILabel__set_text(v14, v10, 0LL);
      goto LABEL_19;
    }
LABEL_22:
    sub_1BCAA3C(v10, v11);
  }
LABEL_19:
  if ( !System_String__IsNullOrEmpty(this->fields.statusAssetFolderName, 0LL) )
  {
    this->fields.statusAssetFolderName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.statusAssetFolderName, 0LL, v16, v17, v18, v19, v20, v21);
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog__OnClickClose(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1A3B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SelectServantPortraitLimitCountDialog_OnClickClose__, method, v2);
    byte_4B1A3B5 = 1;
  }
  v4 = Method_SelectServantPortraitLimitCountDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnClickClose__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SelectServantPortraitLimitCountDialog_OnClickClose__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  SelectServantPortraitLimitCountDialog__Close_46752588(this, 0LL, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectServantPortraitLimitCountDialog__OnSelectPortraitLimitCount(
        SelectServantPortraitLimitCountDialog_o *this,
        int32_t kind,
        int32_t portraitImgIndex,
        const MethodInfo *method)
{
  int32_t CostumeIds; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct System_Action_int__o *selectPortraitLimitCountCallback; // x8

  CostumeIds = portraitImgIndex;
  if ( (byte_4B1A3B3 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&portraitImgIndex);
    sub_1BCA7E0(&Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__, v6, v7);
    byte_4B1A3B3 = 1;
  }
  v8 = Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__;
  if ( (*((_BYTE *)Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SelectServantPortraitLimitCountDialog_OnSelectPortraitLimitCount__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v10);
  if ( ImageLimitCount__get_MaxDispLimitCount(0LL) <= CostumeIds )
    CostumeIds = SelectServantPortraitLimitCountDialog__GetCostumeIds(this, CostumeIds, v11);
  selectPortraitLimitCountCallback = this->fields.selectPortraitLimitCountCallback;
  if ( selectPortraitLimitCountCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))selectPortraitLimitCountCallback->fields.m_target)(
      selectPortraitLimitCountCallback->fields.original_method_info,
      (unsigned int)CostumeIds,
      *(_QWORD *)&selectPortraitLimitCountCallback->fields.extra_arg);
  SelectServantPortraitLimitCountDialog__Close_46752588(this, 0LL, v11);
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
  __int64 v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_4B1A3B0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userSvtCollectionEnt, selectPortraitLimitCountCallback);
    sub_1BCA7E0(&Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, v11, v12);
    byte_4B1A3B0 = 1;
  }
  this->fields.userSvtCollectionEnt = userSvtCollectionEnt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userSvtCollectionEnt,
    (int64_t)userSvtCollectionEnt,
    (int64_t)selectPortraitLimitCountCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.selectPortraitLimitCountCallback = selectPortraitLimitCountCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectPortraitLimitCountCallback,
    (int64_t)selectPortraitLimitCountCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_SelectServantPortraitLimitCountDialog__Open_b__14_0__, 0LL);
  SelectServantPortraitLimitCountDialog__Setup(this, v22, v23);
}


void __fastcall SelectServantPortraitLimitCountDialog__Setup(
        SelectServantPortraitLimitCountDialog_o *this,
        System_Action_o *onSetupEndCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  ServantStatusListViewItem_o *listViewItem; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UserServantCollectionEntity_o *userSvtCollectionEnt; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  ServantStatusListViewItem_o *v36; // x23
  struct ServantStatusListViewItem_o **p_listViewItem; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  ServantStatusListViewItem_o *v44; // x8
  int32_t v45; // w22
  __int64 v46; // x1
  int32_t LimitCount; // w23
  struct System_String_o *StatusImageFolderName; // x0
  struct System_String_o **p_statusAssetFolderName; // x19
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_String_o *v56; // x19
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  AssetLoader_LoadEndDataHandler_o *v60; // x22
  __int64 v61; // x1

  if ( (byte_4B1A3B1 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, onSetupEndCallback, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantStatusListViewItem_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__, v12, v13);
    sub_1BCA7E0(&SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo, v14, v15);
    byte_4B1A3B1 = 1;
  }
  v16 = sub_1BCAA2C(
          SelectServantPortraitLimitCountDialog___c__DisplayClass15_0_TypeInfo,
          onSetupEndCallback,
          method,
          v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_14;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = onSetupEndCallback;
  v25 = v16 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)onSetupEndCallback, v26, v27, v28, v29, v30, v31);
  userSvtCollectionEnt = this->fields.userSvtCollectionEnt;
  v36 = (ServantStatusListViewItem_o *)sub_1BCAA2C(ServantStatusListViewItem_TypeInfo, v33, v34, v35);
  ServantStatusListViewItem___ctor_33884940(v36, userSvtCollectionEnt, 0, 0, 0LL);
  this->fields.listViewItem = v36;
  p_listViewItem = &this->fields.listViewItem;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listViewItem, (int64_t)v36, v38, v39, v40, v41, v42, v43);
  listViewItem = this->fields.listViewItem;
  if ( !listViewItem
    || (listViewItem->fields.portraitLimitCount = -1,
        listViewItem = (ServantStatusListViewItem_o *)ServantStatusListViewItem__get_SvtId(listViewItem, 0LL),
        (v44 = *p_listViewItem) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(listViewItem, v18);
  }
  v45 = (int)listViewItem;
  LimitCount = ServantStatusListViewItem__get_LimitCount(v44, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v46);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(v45, LimitCount, 0LL);
  this->fields.statusAssetFolderName = StatusImageFolderName;
  p_statusAssetFolderName = &this->fields.statusAssetFolderName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_statusAssetFolderName,
    (int64_t)StatusImageFolderName,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = *p_statusAssetFolderName;
  v60 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v57, v58, v59);
  AssetLoader_LoadEndDataHandler___ctor(
    v60,
    (Il2CppObject *)v16,
    Method_SelectServantPortraitLimitCountDialog___c__DisplayClass15_0__Setup_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v61);
  if ( !AssetManager__loadAssetStorage(v56, v60, 1, 0LL) )
  {
    if ( *(_QWORD *)v25 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v25 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v25 + 64LL),
        *(_QWORD *)(*(_QWORD *)v25 + 40LL));
  }
}


void __fastcall SelectServantPortraitLimitCountDialog___Open_b__14_0(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  void *v11; // x0
  System_Action_o *v12; // x20
  Il2CppObject *v13; // x21
  struct SelectServantPortraitLimitCountDialog___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4B1A3BA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, v7, v8);
    sub_1BCA7E0(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v9, v10);
    byte_4B1A3BA = 1;
  }
  v11 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  if ( !SelectServantPortraitLimitCountDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectServantPortraitLimitCountDialog___c_TypeInfo, method);
    v11 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
  }
  v12 = *(System_Action_o **)(*((_QWORD *)v11 + 23) + 8LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)v11 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = SelectServantPortraitLimitCountDialog___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)v11 + 23);
    v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(v12, v13, Method_SelectServantPortraitLimitCountDialog___c__Open_b__14_1__, 0LL);
    static_fields = SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields;
    static_fields->__9__14_1 = v12;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__14_1, (int64_t)v12, v15, v16, v17, v18, v19, v20);
  }
  if ( !this )
    goto LABEL_16;
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v11 = this->fields.scrollView;
    if ( v11 )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)v11, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(v11, method);
  }
}


UnityEngine_GameObject_o *__fastcall SelectServantPortraitLimitCountDialog__get_closeBtnObject(
        SelectServantPortraitLimitCountDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A3B8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A3B8 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


void __fastcall SelectServantPortraitLimitCountDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A3BB & 1) == 0 )
  {
    sub_1BCA7E0(&SelectServantPortraitLimitCountDialog___c_TypeInfo, v1, v2);
    byte_4B1A3BB = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SelectServantPortraitLimitCountDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields->__9 = (struct SelectServantPortraitLimitCountDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SelectServantPortraitLimitCountDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(0LL, assetData);
  SelectServantPortraitLimitCountDialog__EndStatusLoad(_4__this, assetData, method);
  onSetupEndCallback = this->fields.onSetupEndCallback;
  if ( onSetupEndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onSetupEndCallback->fields.m_target)(
      onSetupEndCallback->fields.original_method_info,
      *(_QWORD *)&onSetupEndCallback->fields.extra_arg);
}