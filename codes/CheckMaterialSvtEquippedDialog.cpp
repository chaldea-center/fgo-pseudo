void __fastcall CheckMaterialSvtEquippedDialog___ctor(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_long__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1

  if ( (byte_4B19C0F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v7, v8);
    byte_4B19C0F = 1;
  }
  v9 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.lastSvtCommandCodeList,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v16);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__CallOnConfirm(
        CheckMaterialSvtEquippedDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_int__o **p_callback; // x0
  struct System_Action_int__o *v10; // x21
  struct System_Action_int__o *callback; // t1

  callback = this->fields.callback;
  p_callback = &this->fields.callback;
  v10 = callback;
  if ( callback )
  {
    this->fields.callback = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_callback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v10->fields.extra_arg);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CheckMaterialSvtEquippedDialog_o *v3; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v5; // w9

  v3 = this;
  if ( (byte_4B19C03 & 1) == 0 )
  {
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1BCA7E0(
                                                 &Method_System_Collections_Generic_List_long__Clear__,
                                                 method,
                                                 v2);
    byte_4B19C03 = 1;
  }
  lastSvtCommandCodeList = v3->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1BCAA3C(this, method);
  v5 = lastSvtCommandCodeList->fields._version + 1;
  lastSvtCommandCodeList->fields._size = 0;
  lastSvtCommandCodeList->fields._version = v5;
}


void __fastcall CheckMaterialSvtEquippedDialog__Close(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4B19C0D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v5, v6);
    byte_4B19C0D = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v8 = (System_Action_object__o *)sub_1BCAA2C(System_Action_CheckMaterialSvtListViewItem__TypeInfo, method, v2, v3);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0LL);
  if ( !listViewManager )
    sub_1BCAA3C(v9, v10);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&listViewManager->fields.onSelectItem,
    (int64_t)v8,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  CheckMaterialSvtListViewManager__SetMode_45861668(listViewManager, 2, v17);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4B19C0A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v5, v6);
    byte_4B19C0A = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v8 = (System_Action_object__o *)sub_1BCAA2C(System_Action_CheckMaterialSvtListViewItem__TypeInfo, method, v2, v3);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0LL);
  if ( !listViewManager )
    sub_1BCAA3C(v9, v10);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&listViewManager->fields.onSelectItem,
    (int64_t)v8,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  CheckMaterialSvtListViewManager__SetMode_45861668(listViewManager, 2, v17);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndOpen(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4B19C04 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v5, v6);
    byte_4B19C04 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v8 = (System_Action_object__o *)sub_1BCAA2C(System_Action_CheckMaterialSvtListViewItem__TypeInfo, method, v2, v3);
  System_Action_object____ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0LL);
  if ( !listViewManager )
    sub_1BCAA3C(v9, v10);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&listViewManager->fields.onSelectItem,
    (int64_t)v8,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  CheckMaterialSvtListViewManager__SetMode_45861668(listViewManager, 2, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21

  if ( (byte_4B19C0C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B19C0C = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.commandCodeStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21

  if ( (byte_4B19C09 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B19C09 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.servantStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__Init(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B19C00 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B19C00 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.upperLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.lowerLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)this->fields.decideButton;
  if ( !titleLabel
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)this->fields.cancelButton) == 0LL)
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL),
        (titleLabel = (UILabel_o *)this->fields.closeButton) == 0LL)
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__ModifyItem(
        CheckMaterialSvtEquippedDialog_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1BCAA3C(0LL, selectedId);
  CheckMaterialSvtListViewManager__ModifyItem(listViewManager, selectedId, method);
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickCancel(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CheckMaterialSvtEquippedDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v7; // w9
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  v3 = this;
  if ( (byte_4B19C06 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_OnClickCancel__, method, v2);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1BCA7E0(
                                                 &Method_System_Collections_Generic_List_long__Clear__,
                                                 v4,
                                                 v5);
    byte_4B19C06 = 1;
  }
  if ( v3->fields.state == 1 )
  {
    lastSvtCommandCodeList = v3->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      sub_1BCAA3C(this, method);
    v7 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v7;
    v8 = Method_CheckMaterialSvtEquippedDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickCancel__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CheckMaterialSvtEquippedDialog_OnClickCancel__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(v3, 0, v10);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickClose(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B19C07 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_OnClickClose__, method, v2);
    byte_4B19C07 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_CheckMaterialSvtEquippedDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CheckMaterialSvtEquippedDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickDecide(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B19C05 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_OnClickDecide__, method, v2);
    byte_4B19C05 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_CheckMaterialSvtEquippedDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CheckMaterialSvtEquippedDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 1, v6);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  ServantStatusDialog_EndDelegate_o *v21; // x22

  if ( (byte_4B19C0B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__, selectItem, method);
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__, v5, v6);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B19C0B = 1;
  }
  if ( this->fields.state == 1 )
  {
    v11 = Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, v14),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v17 = (CommonUI_o *)Instance,
          v21 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20),
          ServantStatusDialog_EndDelegate___ctor(
            v21,
            (Il2CppObject *)this,
            Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__,
            0LL),
          !v17) )
    {
      sub_1BCAA3C(v13, v14);
    }
    CommonUI__OpenServantStatusDialog_30778960(v17, 32, UserCommandCodeEntity_k__BackingField, v21, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectServantDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ServantStatusDialog_EndDelegate_o *v20; // x22
  const MethodInfo *v21; // x2

  v4 = this;
  if ( (byte_4B19C08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_EndShowServant__, selectItem, method);
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v5, v6);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v7, v8);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1BCA7E0(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 v9,
                                                 v10);
    byte_4B19C08 = 1;
  }
  if ( v4->fields.state == 1 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v11 = Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1BCA7F8(Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserSvtId(selectItem, v13);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v16 = (CommonUI_o *)Instance;
      v20 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v17, v18, v19);
      ServantStatusDialog_EndDelegate___ctor(
        v20,
        (Il2CppObject *)v4,
        Method_CheckMaterialSvtEquippedDialog_EndShowServant__,
        0LL);
      if ( v16 )
      {
        CommonUI__OpenServantStatusDialog_30775636(v16, 29, servantStatusId, v20, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(v4, selectItem, v21);
    }
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__Open(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o *servantIdList,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v53; // x1
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v55; // w9
  UILabel_o *titleLabel; // x22
  UILabel_o *upperLabel; // x22
  UILabel_o *lowerLabel; // x22
  const MethodInfo *v59; // x7
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v62; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v64; // x1
  Il2CppObject *Entity; // x0
  __int64 v66; // x1
  int32_t SvtId; // w20
  Il2CppObject *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x1
  Il2CppObject *v71; // x21
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_T__o *UserSvtCommandCodeIdList; // x1
  System_Collections_Generic_List_long__o *v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  CheckMaterialSvtEquippedDialog___c_c *v79; // x8
  System_Collections_Generic_List_long__o *v80; // x20
  System_Predicate_long__o *_9__20_0; // x21
  Il2CppObject *v82; // x22
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  UnityEngine_GameObject_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  const MethodInfo *v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  System_Action_o *v97; // x20
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v99; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B19C01 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, selectMaterialItemList, servantIdList);
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_EndOpen__, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__AddRange__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__GetEnumerator__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__RemoveAll__, v32, v33);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&System_Predicate_long__TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41);
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, v42, v43);
    sub_1BCA7E0(&CheckMaterialSvtEquippedDialog___c_TypeInfo, v44, v45);
    sub_1BCA7E0(&StringLiteral_3709/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_3710/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_3868/*"CONFIRM_TITLE_SVT_COMBINE"*/, v50, v51);
    byte_4B19C01 = 1;
  }
  memset(&v99, 0, sizeof(v99));
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callback,
      (int64_t)callback,
      (int64_t)servantIdList,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      goto LABEL_47;
    v55 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v55;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3868/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_47;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    upperLabel = this->fields.upperLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3709/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_47;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0LL);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3710/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
    if ( !lowerLabel )
      goto LABEL_47;
    UILabel__set_text(lowerLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( !gameObject )
      goto LABEL_47;
    CheckMaterialSvtListViewManager__CreateList(
      (CheckMaterialSvtListViewManager_o *)gameObject,
      selectMaterialItemList,
      0,
      servantIdList,
      0LL,
      0,
      1,
      v59);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_47;
    System_Collections_Generic_List_long___GetEnumerator(
      &v98,
      servantIdList,
      (const MethodInfo_358A764 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v99 = v98;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v99,
              (const MethodInfo_3313F28 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v99.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v62);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1BCAA3C(0LL, v64);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_1BCAA3C(0LL, v66);
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Entity, 0LL);
      v68 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v68 )
        sub_1BCAA3C(0LL, v69);
      v71 = DataManager__GetMasterData_object_(
              (DataManager_o *)v68,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v70);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v71 )
        sub_1BCAA3C(UserId, UserId);
      UserSvtCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                                                                  (UserServantCommandCodeMaster_o *)v71,
                                                                                  UserId,
                                                                                  SvtId,
                                                                                  0LL);
      if ( UserSvtCommandCodeIdList )
      {
        v74 = this->fields.lastSvtCommandCodeList;
        if ( !v74 )
          sub_1BCAA3C(0LL, UserSvtCommandCodeIdList);
        System_Collections_Generic_List_long___AddRange(
          v74,
          UserSvtCommandCodeIdList,
          (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
        v79 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        v80 = this->fields.lastSvtCommandCodeList;
        if ( !CheckMaterialSvtEquippedDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CheckMaterialSvtEquippedDialog___c_TypeInfo, v76);
          v79 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        }
        _9__20_0 = v79->static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( !v79->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v79, v76);
            v79 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
          }
          v82 = (Il2CppObject *)v79->static_fields->__9;
          _9__20_0 = (System_Predicate_long__o *)sub_1BCAA2C(System_Predicate_long__TypeInfo, v76, v77, v78);
          System_Predicate_long____ctor(_9__20_0, v82, Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, 0LL);
          static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = _9__20_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__20_0,
            (int64_t)_9__20_0,
            v84,
            v85,
            v86,
            v87,
            v88,
            v89);
        }
        if ( !v80 )
          sub_1BCAA3C(v75, v76);
        System_Collections_Generic_List_long___RemoveAll(
          v80,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_358B2B8 *)Method_System_Collections_Generic_List_long__RemoveAll__);
      }
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v99,
      (const MethodInfo_3313F24 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    gameObject = (UnityEngine_GameObject_o *)this->fields.lowerLabel;
    if ( !gameObject
      || (v90 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v90, -140.0, 0LL),
          (gameObject = this->fields.listViewBg) == 0LL)
      || (v91 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v91, 44.0, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
    {
LABEL_47:
      sub_1BCAA3C(gameObject, v53);
    }
    v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v92, 94.0, 0LL);
    this->fields.state = 2;
    CheckMaterialSvtEquippedDialog__SetObjActive(this, 0, v93);
    v97 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v94, v95, v96);
    System_Action___ctor(v97, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v97, 0, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OpenCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CheckMaterialSvtEquippedDialog_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_List_TSource__o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  const MethodInfo *v36; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  const MethodInfo *v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x20

  v9 = this;
  if ( (byte_4B19C02 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_CheckMaterialSvtEquippedDialog_EndOpen__, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_long___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_long___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v16, v17);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_3767/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, v20, v21);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1BCA7E0(&StringLiteral_3768/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, v22, v23);
    byte_4B19C02 = 1;
  }
  lastSvtCommandCodeList = v9->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_20;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !v9->fields.state )
  {
    v9->fields.callback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v9->fields.callback,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v25 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.lastSvtCommandCodeList,
              (const MethodInfo_2F300D0 *)Method_System_Linq_Enumerable_Distinct_long___);
      v26 = System_Linq_Enumerable__ToList_long_(
              v25,
              (const MethodInfo_2F4F5F0 *)Method_System_Linq_Enumerable_ToList_long___);
      v9->fields.lastSvtCommandCodeList = (struct System_Collections_Generic_List_long__o *)v26;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v9->fields.lastSvtCommandCodeList,
        (int64_t)v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      titleLabel = v9->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
      this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3768/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
        lowerLabel = v9->fields.lowerLabel;
        this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, 0LL);
        if ( lowerLabel )
        {
          UILabel__set_text(lowerLabel, (System_String_o *)this, 0LL);
          this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
          if ( this )
          {
            this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
              if ( this )
              {
                CheckMaterialSvtListViewManager__CreateList(
                  (CheckMaterialSvtListViewManager_o *)this,
                  0LL,
                  2,
                  0LL,
                  v9->fields.lastSvtCommandCodeList,
                  0,
                  0,
                  v36);
                this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewBg;
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                  this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.lowerLabel;
                  if ( this )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionY(gameObject, -120.0, 0LL);
                    this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewBg;
                    if ( this )
                    {
                      v38 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
                      GameObjectExtensions__SetLocalPositionY(v38, 90.0, 0LL);
                      this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
                      if ( this )
                      {
                        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                        GameObjectExtensions__SetLocalPositionY(v39, 140.0, 0LL);
                        CheckMaterialSvtEquippedDialog__SetObjActive(v9, 1, v40);
                        v9->fields.state = 2;
                        v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
                        System_Action___ctor(
                          v44,
                          (Il2CppObject *)v9,
                          Method_CheckMaterialSvtEquippedDialog_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)v9, v44, 0, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(this, callback);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__SetObjActive(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isOneButton,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *decideButton; // x0
  __int64 v12; // x1
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *closeLabel; // x19

  if ( (byte_4B19C0E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, isOneButton, method);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v9, v10);
    byte_4B19C0E = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_15;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !decideButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, !isOneButton, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_15;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !decideButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, !isOneButton, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !decideButton )
    goto LABEL_15;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !decideButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isOneButton, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)decideButton, 0LL),
        cancelLabel = this->fields.cancelLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)decideButton, 0LL),
        closeLabel = this->fields.closeLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeLabel) )
  {
LABEL_15:
    sub_1BCAA3C(decideButton, isOneButton);
  }
  UILabel__set_text(closeLabel, (System_String_o *)decideButton, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B19C10 & 1) == 0 )
  {
    sub_1BCA7E0(&CheckMaterialSvtEquippedDialog___c_TypeInfo, v1, v2);
    byte_4B19C10 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CheckMaterialSvtEquippedDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtEquippedDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall CheckMaterialSvtEquippedDialog___c___ctor(
        CheckMaterialSvtEquippedDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CheckMaterialSvtEquippedDialog___c___Open_b__20_0(
        CheckMaterialSvtEquippedDialog___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s == 0;
}