void __fastcall CheckMaterialSvtEquippedDialog___ctor(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5EABE & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4A5EABE = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lastSvtCommandCodeList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__CallOnConfirm(
        CheckMaterialSvtEquippedDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_Action_int__o **p_callback; // x0
  struct System_Action_int__o *v6; // x21
  struct System_Action_int__o *callback; // t1

  callback = this->fields.callback;
  p_callback = &this->fields.callback;
  v6 = callback;
  if ( callback )
  {
    this->fields.callback = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_callback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v6->fields.extra_arg);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v4; // w9

  v2 = this;
  if ( (byte_4A5EAB2 & 1) == 0 )
  {
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4A5EAB2 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1B8880C(this, method);
  v4 = lastSvtCommandCodeList->fields._version + 1;
  lastSvtCommandCodeList->fields._size = 0;
  lastSvtCommandCodeList->fields._version = v4;
}


void __fastcall CheckMaterialSvtEquippedDialog__Close(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A5EABC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_4A5EABC = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_object__o *)sub_1B887FC(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0LL);
  if ( !listViewManager )
    sub_1B8880C(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&listViewManager->fields.onSelectItem, (int32_t)v4, v7, v8);
  CheckMaterialSvtListViewManager__SetMode_45055112(listViewManager, 2, v9);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A5EAB9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_4A5EAB9 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_object__o *)sub_1B887FC(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0LL);
  if ( !listViewManager )
    sub_1B8880C(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&listViewManager->fields.onSelectItem, (int32_t)v4, v7, v8);
  CheckMaterialSvtListViewManager__SetMode_45055112(listViewManager, 2, v9);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndOpen(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A5EAB3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_4A5EAB3 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_object__o *)sub_1B887FC(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0LL);
  if ( !listViewManager )
    sub_1B8880C(v5, v6);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&listViewManager->fields.onSelectItem, (int32_t)v4, v7, v8);
  CheckMaterialSvtListViewManager__SetMode_45055112(listViewManager, 2, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4A5EABB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EABB = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.commandCodeStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B8880C(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4A5EAB8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EAB8 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.servantStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B8880C(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__Init(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A5EAAF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EAAF = 1;
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
    sub_1B8880C(titleLabel, method);
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
    sub_1B8880C(0LL, selectedId);
  CheckMaterialSvtListViewManager__ModifyItem(listViewManager, selectedId, method);
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickCancel(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v4; // w9
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_4A5EAB5 & 1) == 0 )
  {
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_OnClickCancel__);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    byte_4A5EAB5 = 1;
  }
  if ( v2->fields.state == 1 )
  {
    lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      sub_1B8880C(this, method);
    v4 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v4;
    v5 = Method_CheckMaterialSvtEquippedDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_CheckMaterialSvtEquippedDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(v2, 0, v7);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickClose(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4A5EAB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_OnClickClose__);
    byte_4A5EAB6 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CheckMaterialSvtEquippedDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CheckMaterialSvtEquippedDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickDecide(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A5EAB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_OnClickDecide__);
    byte_4A5EAB4 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CheckMaterialSvtEquippedDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CheckMaterialSvtEquippedDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 1, v5);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v11; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_4A5EABA & 1) == 0 )
  {
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__);
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EABA = 1;
  }
  if ( this->fields.state == 1 )
  {
    v5 = Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, v8),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v11 = (CommonUI_o *)Instance,
          v12 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__,
            0LL),
          !v11) )
    {
      sub_1B8880C(v7, v8);
    }
    CommonUI__OpenServantStatusDialog_30506660(v11, 32, UserCommandCodeEntity_k__BackingField, v12, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectServantDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v10; // x21
  ServantStatusDialog_EndDelegate_o *v11; // x22
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4A5EAB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_EndShowServant__);
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EAB7 = 1;
  }
  if ( v4->fields.state == 1 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v5 = Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B885C8(Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserSvtId(selectItem, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v10 = (CommonUI_o *)Instance;
      v11 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v11,
        (Il2CppObject *)v4,
        Method_CheckMaterialSvtEquippedDialog_EndShowServant__,
        0LL);
      if ( v10 )
      {
        CommonUI__OpenServantStatusDialog_30503336(v10, 29, servantStatusId, v11, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(v4, selectItem, v12);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v12; // w9
  UILabel_o *titleLabel; // x22
  UILabel_o *upperLabel; // x22
  UILabel_o *lowerLabel; // x22
  const MethodInfo *v16; // x7
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x1
  Il2CppObject *Entity; // x0
  __int64 v23; // x1
  int32_t SvtId; // w20
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x21
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_T__o *UserSvtCommandCodeIdList; // x1
  System_Collections_Generic_List_long__o *v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  CheckMaterialSvtEquippedDialog___c_c *v33; // x8
  System_Collections_Generic_List_long__o *v34; // x20
  System_Predicate_long__o *_9__20_0; // x21
  Il2CppObject *v36; // x22
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  const MethodInfo *v43; // x2
  System_Action_o *v44; // x20
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5EAB0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_EndOpen__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__RemoveAll__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&System_Predicate_long__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__);
    sub_1B885B0(&CheckMaterialSvtEquippedDialog___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3678/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/);
    sub_1B885B0(&StringLiteral_3679/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_3835/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4A5EAB0 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callback,
      (int32_t)callback,
      (int32_t)servantIdList,
      (int32_t)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      goto LABEL_47;
    v12 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v12;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3835/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_47;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    upperLabel = this->fields.upperLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_47;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0LL);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
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
      v16);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_47;
    System_Collections_Generic_List_long___GetEnumerator(
      &v45,
      servantIdList,
      (const MethodInfo_34E633C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v46 = v45;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v46,
              (const MethodInfo_3275510 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v46.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v19);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1B8880C(0LL, v21);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_1B8880C(0LL, v23);
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Entity, 0LL);
      v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v25 )
        sub_1B8880C(0LL, v26);
      v27 = DataManager__GetMasterData_object_(
              (DataManager_o *)v25,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v27 )
        sub_1B8880C(UserId, UserId);
      UserSvtCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                                                                  (UserServantCommandCodeMaster_o *)v27,
                                                                                  UserId,
                                                                                  SvtId,
                                                                                  0LL);
      if ( UserSvtCommandCodeIdList )
      {
        v30 = this->fields.lastSvtCommandCodeList;
        if ( !v30 )
          sub_1B8880C(0LL, UserSvtCommandCodeIdList);
        System_Collections_Generic_List_long___AddRange(
          v30,
          UserSvtCommandCodeIdList,
          (const MethodInfo_34E5A74 *)Method_System_Collections_Generic_List_long__AddRange__);
        v33 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        v34 = this->fields.lastSvtCommandCodeList;
        if ( !CheckMaterialSvtEquippedDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CheckMaterialSvtEquippedDialog___c_TypeInfo);
          v33 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        }
        _9__20_0 = v33->static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            v33 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
          }
          v36 = (Il2CppObject *)v33->static_fields->__9;
          _9__20_0 = (System_Predicate_long__o *)sub_1B887FC(System_Predicate_long__TypeInfo);
          System_Predicate_long____ctor(_9__20_0, v36, Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, 0LL);
          static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = _9__20_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v38, v39);
        }
        if ( !v34 )
          sub_1B8880C(v31, v32);
        System_Collections_Generic_List_long___RemoveAll(
          v34,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_34E6E90 *)Method_System_Collections_Generic_List_long__RemoveAll__);
      }
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v46,
      (const MethodInfo_327550C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    gameObject = (UnityEngine_GameObject_o *)this->fields.lowerLabel;
    if ( !gameObject
      || (v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v40, -140.0, 0LL),
          (gameObject = this->fields.listViewBg) == 0LL)
      || (v41 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v41, 44.0, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
    {
LABEL_47:
      sub_1B8880C(gameObject, v10);
    }
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v42, 94.0, 0LL);
    this->fields.state = 2;
    CheckMaterialSvtEquippedDialog__SetObjActive(this, 0, v43);
    v44 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OpenCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  CheckMaterialSvtEquippedDialog_o *v5; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Collections_Generic_List_TSource__o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  const MethodInfo *v13; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  const MethodInfo *v17; // x2
  System_Action_o *v18; // x20

  v5 = this;
  if ( (byte_4A5EAB1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CheckMaterialSvtEquippedDialog_EndOpen__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_long___);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3736/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1B885B0(&StringLiteral_3737/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/);
    byte_4A5EAB1 = 1;
  }
  lastSvtCommandCodeList = v5->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_20;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !v5->fields.state )
  {
    v5->fields.callback = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callback, (int32_t)callback, (int32_t)method, v3);
    this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v7 = System_Linq_Enumerable__Distinct_long_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.lastSvtCommandCodeList,
             (const MethodInfo_2E9EB68 *)Method_System_Linq_Enumerable_Distinct_long___);
      v8 = System_Linq_Enumerable__ToList_long_(
             v7,
             (const MethodInfo_2EBBE88 *)Method_System_Linq_Enumerable_ToList_long___);
      v5->fields.lastSvtCommandCodeList = (struct System_Collections_Generic_List_long__o *)v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.lastSvtCommandCodeList, (int32_t)v8, v9, v10);
      titleLabel = v5->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
        lowerLabel = v5->fields.lowerLabel;
        this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, 0LL);
        if ( lowerLabel )
        {
          UILabel__set_text(lowerLabel, (System_String_o *)this, 0LL);
          this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewManager;
          if ( this )
          {
            this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewManager;
              if ( this )
              {
                CheckMaterialSvtListViewManager__CreateList(
                  (CheckMaterialSvtListViewManager_o *)this,
                  0LL,
                  2,
                  0LL,
                  v5->fields.lastSvtCommandCodeList,
                  0,
                  0,
                  v13);
                this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewBg;
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                  this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.lowerLabel;
                  if ( this )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionY(gameObject, -120.0, 0LL);
                    this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewBg;
                    if ( this )
                    {
                      v15 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
                      GameObjectExtensions__SetLocalPositionY(v15, 90.0, 0LL);
                      this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewManager;
                      if ( this )
                      {
                        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                        GameObjectExtensions__SetLocalPositionY(v16, 140.0, 0LL);
                        CheckMaterialSvtEquippedDialog__SetObjActive(v5, 1, v17);
                        v5->fields.state = 2;
                        v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                        System_Action___ctor(
                          v18,
                          (Il2CppObject *)v5,
                          Method_CheckMaterialSvtEquippedDialog_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)v5, v18, 0, 0LL);
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
    sub_1B8880C(this, callback);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__SetObjActive(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isOneButton,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *closeLabel; // x19

  if ( (byte_4A5EABD & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4A5EABD = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)decideButton, 0LL),
        cancelLabel = this->fields.cancelLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)decideButton, 0LL),
        closeLabel = this->fields.closeLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeLabel) )
  {
LABEL_15:
    sub_1B8880C(decideButton, isOneButton);
  }
  UILabel__set_text(closeLabel, (System_String_o *)decideButton, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5EABF & 1) == 0 )
  {
    sub_1B885B0(&CheckMaterialSvtEquippedDialog___c_TypeInfo);
    byte_4A5EABF = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CheckMaterialSvtEquippedDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtEquippedDialog___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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