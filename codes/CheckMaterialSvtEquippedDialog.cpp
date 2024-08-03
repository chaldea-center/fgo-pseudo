void __fastcall CheckMaterialSvtEquippedDialog___ctor(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FFCD5 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_49FFCD5 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lastSvtCommandCodeList, (int32_t)v6, v7, v8);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_callback, 0, (int32_t)method, v3);
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
  if ( (byte_49FFCC9 & 1) == 0 )
  {
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1B640C8(
                                                 &Method_System_Collections_Generic_List_long__Clear__,
                                                 method);
    byte_49FFCC9 = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_1B64324(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v6; // x21
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_49FFCD3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, method);
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v4);
    byte_49FFCD3 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v6 = (System_Action_object__o *)sub_1B64314(System_Action_CheckMaterialSvtListViewItem__TypeInfo, method, v2);
  System_Action_object____ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0LL);
  if ( !listViewManager )
    sub_1B64324(v7);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&listViewManager->fields.onSelectItem, (int32_t)v6, v8, v9);
  CheckMaterialSvtListViewManager__SetMode_44679384(listViewManager, 2, v10);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v6; // x21
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_49FFCD0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, method);
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v4);
    byte_49FFCD0 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v6 = (System_Action_object__o *)sub_1B64314(System_Action_CheckMaterialSvtListViewItem__TypeInfo, method, v2);
  System_Action_object____ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0LL);
  if ( !listViewManager )
    sub_1B64324(v7);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&listViewManager->fields.onSelectItem, (int32_t)v6, v8, v9);
  CheckMaterialSvtListViewManager__SetMode_44679384(listViewManager, 2, v10);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndOpen(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v6; // x21
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_49FFCCA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, method);
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v4);
    byte_49FFCCA = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v6 = (System_Action_object__o *)sub_1B64314(System_Action_CheckMaterialSvtListViewItem__TypeInfo, method, v2);
  System_Action_object____ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0LL);
  if ( !listViewManager )
    sub_1B64324(v7);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&listViewManager->fields.onSelectItem, (int32_t)v6, v8, v9);
  CheckMaterialSvtListViewManager__SetMode_44679384(listViewManager, 2, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  if ( (byte_49FFCD2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FFCD2 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.commandCodeStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B64324(listViewManager);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  if ( (byte_49FFCCF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FFCCF = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.servantStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B64324(listViewManager);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v11, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__Init(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_49FFCC6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FFCC6 = 1;
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
    sub_1B64324(titleLabel);
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
    sub_1B64324(0LL);
  CheckMaterialSvtListViewManager__ModifyItem(listViewManager, selectedId, method);
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickCancel(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v5; // w9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_49FFCCC & 1) == 0 )
  {
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_OnClickCancel__, method);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, v3);
    byte_49FFCCC = 1;
  }
  if ( v2->fields.state == 1 )
  {
    lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      sub_1B64324(this);
    v5 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v5;
    v6 = Method_CheckMaterialSvtEquippedDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_CheckMaterialSvtEquippedDialog_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(v2, 0, v8);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickClose(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_49FFCCD & 1) == 0 )
  {
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_OnClickClose__, method);
    byte_49FFCCD = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CheckMaterialSvtEquippedDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CheckMaterialSvtEquippedDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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

  if ( (byte_49FFCCB & 1) == 0 )
  {
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_OnClickDecide__, method);
    byte_49FFCCB = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CheckMaterialSvtEquippedDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CheckMaterialSvtEquippedDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 1, v5);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  ServantStatusDialog_EndDelegate_o *v17; // x22

  if ( (byte_49FFCD1 & 1) == 0 )
  {
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__, selectItem);
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__, v5);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49FFCD1 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v8 = Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B640E0(Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, v11),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v14 = (CommonUI_o *)Instance,
          v17 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v15, v16),
          ServantStatusDialog_EndDelegate___ctor(
            v17,
            (Il2CppObject *)this,
            Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__,
            0LL),
          !v14) )
    {
      sub_1B64324(v10);
    }
    CommonUI__OpenServantStatusDialog_30357696(v14, 32, UserCommandCodeEntity_k__BackingField, v17, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectServantDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  ServantStatusDialog_EndDelegate_o *v16; // x22
  const MethodInfo *v17; // x2

  v4 = this;
  if ( (byte_49FFCCE & 1) == 0 )
  {
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_EndShowServant__, selectItem);
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v5);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v6);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49FFCCE = 1;
  }
  if ( v4->fields.state == 1 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v8 = Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B640E0(Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserSvtId(selectItem, v10);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v13 = (CommonUI_o *)Instance;
      v16 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v14, v15);
      ServantStatusDialog_EndDelegate___ctor(
        v16,
        (Il2CppObject *)v4,
        Method_CheckMaterialSvtEquippedDialog_EndShowServant__,
        0LL);
      if ( v13 )
      {
        CommonUI__OpenServantStatusDialog_30354372(v13, 29, servantStatusId, v16, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1B64324(this);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(v4, selectItem, v17);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v31; // w9
  UILabel_o *titleLabel; // x22
  UILabel_o *upperLabel; // x22
  UILabel_o *lowerLabel; // x22
  const MethodInfo *v35; // x7
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0
  int32_t SvtId; // w20
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x21
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_T__o *UserSvtCommandCodeIdList; // x1
  System_Collections_Generic_List_long__o *v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  CheckMaterialSvtEquippedDialog___c_c *v49; // x8
  System_Collections_Generic_List_long__o *v50; // x20
  System_Predicate_long__o *_9__20_0; // x21
  Il2CppObject *v52; // x22
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  const MethodInfo *v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  System_Action_o *v62; // x20
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FFCC7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, selectMaterialItemList);
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_EndOpen__, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__AddRange__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Clear__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__RemoveAll__, v19);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&NetworkManager_TypeInfo, v21);
    sub_1B640C8(&System_Predicate_long__TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, v24);
    sub_1B640C8(&CheckMaterialSvtEquippedDialog___c_TypeInfo, v25);
    sub_1B640C8(&StringLiteral_3656/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, v26);
    sub_1B640C8(&StringLiteral_3657/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, v27);
    sub_1B640C8(&StringLiteral_3812/*"CONFIRM_TITLE_SVT_COMBINE"*/, v28);
    byte_49FFCC7 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_1B6406C(
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
    v31 = lastSvtCommandCodeList->fields._version + 1;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v31;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_47;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    upperLabel = this->fields.upperLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_47;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0LL);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
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
      v35);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_47;
    System_Collections_Generic_List_long___GetEnumerator(
      &v63,
      servantIdList,
      (const MethodInfo_3495BE8 *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v64 = v63;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v64,
              (const MethodInfo_32272BC *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v64.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_object )
        sub_1B64324(0LL);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_1B64324(0LL);
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Entity, 0LL);
      v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v41 )
        sub_1B64324(0LL);
      v42 = DataManager__GetMasterData_object_(
              (DataManager_o *)v41,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v42 )
        sub_1B64324(UserId);
      UserSvtCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                                                                  (UserServantCommandCodeMaster_o *)v42,
                                                                                  UserId,
                                                                                  SvtId,
                                                                                  0LL);
      if ( UserSvtCommandCodeIdList )
      {
        v45 = this->fields.lastSvtCommandCodeList;
        if ( !v45 )
          sub_1B64324(0LL);
        System_Collections_Generic_List_long___AddRange(
          v45,
          UserSvtCommandCodeIdList,
          (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
        v49 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        v50 = this->fields.lastSvtCommandCodeList;
        if ( !CheckMaterialSvtEquippedDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CheckMaterialSvtEquippedDialog___c_TypeInfo);
          v49 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        }
        _9__20_0 = v49->static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( !v49->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v49);
            v49 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
          }
          v52 = (Il2CppObject *)v49->static_fields->__9;
          _9__20_0 = (System_Predicate_long__o *)sub_1B64314(System_Predicate_long__TypeInfo, v47, v48);
          System_Predicate_long____ctor(_9__20_0, v52, Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, 0LL);
          static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = _9__20_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v54, v55);
        }
        if ( !v50 )
          sub_1B64324(v46);
        System_Collections_Generic_List_long___RemoveAll(
          v50,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_349673C *)Method_System_Collections_Generic_List_long__RemoveAll__);
      }
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v64,
      (const MethodInfo_32272B8 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    gameObject = (UnityEngine_GameObject_o *)this->fields.lowerLabel;
    if ( !gameObject
      || (v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v56, -140.0, 0LL),
          (gameObject = this->fields.listViewBg) == 0LL)
      || (v57 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v57, 44.0, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
    {
LABEL_47:
      sub_1B64324(gameObject);
    }
    v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v58, 94.0, 0LL);
    this->fields.state = 2;
    CheckMaterialSvtEquippedDialog__SetObjActive(this, 0, v59);
    v62 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v60, v61);
    System_Action___ctor(v62, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OpenCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  CheckMaterialSvtEquippedDialog_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_List_TSource__o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  const MethodInfo *v20; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x20

  v5 = this;
  if ( (byte_49FFCC8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_CheckMaterialSvtEquippedDialog_EndOpen__, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_long___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_long___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_3714/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, v11);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_1B640C8(&StringLiteral_3715/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, v12);
    byte_49FFCC8 = 1;
  }
  lastSvtCommandCodeList = v5->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_20;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !v5->fields.state )
  {
    v5->fields.callback = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.callback, (int32_t)callback, (int32_t)method, v3);
    this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v14 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.lastSvtCommandCodeList,
              (const MethodInfo_2E57DFC *)Method_System_Linq_Enumerable_Distinct_long___);
      v15 = System_Linq_Enumerable__ToList_long_(
              v14,
              (const MethodInfo_2E74EA8 *)Method_System_Linq_Enumerable_ToList_long___);
      v5->fields.lastSvtCommandCodeList = (struct System_Collections_Generic_List_long__o *)v15;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.lastSvtCommandCodeList, (int32_t)v15, v16, v17);
      titleLabel = v5->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
        lowerLabel = v5->fields.lowerLabel;
        this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3714/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, 0LL);
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
                  v20);
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
                      v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
                      GameObjectExtensions__SetLocalPositionY(v22, 90.0, 0LL);
                      this = (CheckMaterialSvtEquippedDialog_o *)v5->fields.listViewManager;
                      if ( this )
                      {
                        v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                        GameObjectExtensions__SetLocalPositionY(v23, 140.0, 0LL);
                        CheckMaterialSvtEquippedDialog__SetObjActive(v5, 1, v24);
                        v5->fields.state = 2;
                        v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
                        System_Action___ctor(
                          v27,
                          (Il2CppObject *)v5,
                          Method_CheckMaterialSvtEquippedDialog_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)v5, v27, 0, 0LL);
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
    sub_1B64324(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__SetObjActive(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isOneButton,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *decideButton; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *closeLabel; // x19

  if ( (byte_49FFCD4 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, isOneButton);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v6);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v7);
    byte_49FFCD4 = 1;
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
  decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)decideButton, 0LL),
        cancelLabel = this->fields.cancelLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)decideButton, 0LL),
        closeLabel = this->fields.closeLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeLabel) )
  {
LABEL_15:
    sub_1B64324(decideButton);
  }
  UILabel__set_text(closeLabel, (System_String_o *)decideButton, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFCD6 & 1) == 0 )
  {
    sub_1B640C8(&CheckMaterialSvtEquippedDialog___c_TypeInfo, v1);
    byte_49FFCD6 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CheckMaterialSvtEquippedDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtEquippedDialog___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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