void __fastcall CheckMaterialSvtEquippedDialog___ctor(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_long__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E9743 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v8, v9, v10);
    byte_42E9743 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__CallOnConfirm(
        CheckMaterialSvtEquippedDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_int__o *callback; // x21

  if ( (byte_42E973B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, result, (_DWORD)method, v3);
    byte_42E973B = 1;
  }
  callback = this->fields.callback;
  if ( callback )
  {
    this->fields.callback = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callback,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(callback, result, (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0

  if ( (byte_42E9736 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, (_DWORD)method, v2, v3);
    byte_42E9736 = 1;
  }
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_long___Clear(
    lastSvtCommandCodeList,
    (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall CheckMaterialSvtEquippedDialog__Close(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
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
  CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E9741 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v8, v9, v10);
    byte_42E9741 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_258B320 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B5D69C(v13, v14);
  CheckMaterialSvtListViewManager__SetMode(
    listViewManager,
    2,
    (System_Action_CheckMaterialSvtListViewItem__o *)v12,
    0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
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
  CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E973E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v8, v9, v10);
    byte_42E973E = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_258B320 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B5D69C(v13, v14);
  CheckMaterialSvtListViewManager__SetMode(
    listViewManager,
    2,
    (System_Action_CheckMaterialSvtListViewItem__o *)v12,
    0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndOpen(
        CheckMaterialSvtEquippedDialog_o *this,
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
  CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E9737 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v8, v9, v10);
    byte_42E9737 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_258B320 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B5D69C(v13, v14);
  CheckMaterialSvtListViewManager__SetMode(
    listViewManager,
    2,
    (System_Action_CheckMaterialSvtListViewItem__o *)v12,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21

  if ( (byte_42E9740 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E9740 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.commandCodeStatusId, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B5D69C(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__EndShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21

  if ( (byte_42E973D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E973D = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.servantStatusId, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B5D69C(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__Init(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42E9733 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E9733 = 1;
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
    sub_B5D69C(titleLabel, method);
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
    sub_B5D69C(0LL, selectedId);
  CheckMaterialSvtListViewManager__ModifyItem(listViewManager, selectedId, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickCancel(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  const MethodInfo *v9; // x2

  if ( (byte_42E9739 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E9739 = 1;
  }
  if ( this->fields.state == 1 )
  {
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      sub_B5D69C(0LL, method);
    System_Collections_Generic_List_long___Clear(
      lastSvtCommandCodeList,
      (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 0, v9);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickClose(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E973A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E973A = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickDecide(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E9738 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9738 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 1, v5);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
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
  __int64 v15; // x0
  __int64 v16; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v19; // x21
  ServantStatusDialog_EndDelegate_o *v20; // x22

  if ( (byte_42E973F & 1) == 0 )
  {
    sub_B5D5C4(&Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    byte_42E973F = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, 0LL),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v19 = (CommonUI_o *)Instance,
          v20 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v20,
            (Il2CppObject *)this,
            Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__,
            0LL),
          !v19) )
    {
      sub_B5D69C(v15, v16);
    }
    CommonUI__OpenServantStatusDialog_18215196(v19, 32, UserCommandCodeEntity_k__BackingField, v20, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnSelectServantDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CheckMaterialSvtEquippedDialog_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WebViewManager_o *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v17; // x21
  ServantStatusDialog_EndDelegate_o *v18; // x22
  const MethodInfo *v19; // x2

  v5 = this;
  if ( (byte_42E973C & 1) == 0 )
  {
    sub_B5D5C4(&Method_CheckMaterialSvtEquippedDialog_EndShowServant__, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    byte_42E973C = 1;
  }
  if ( v5->fields.state == 1 )
  {
    if ( !selectItem )
      goto LABEL_14;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v5->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserSvtId(selectItem, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v5->fields.servantStatusId;
      v17 = (CommonUI_o *)Instance;
      v18 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v18,
        (Il2CppObject *)v5,
        Method_CheckMaterialSvtEquippedDialog_EndShowServant__,
        0LL);
      if ( v17 )
      {
        CommonUI__OpenServantStatusDialog_18211624(v17, 29, servantStatusId, v18, 0LL, 0LL);
        return;
      }
LABEL_14:
      sub_B5D69C(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v5->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, 0LL);
      CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(v5, selectItem, v19);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v76; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *upperLabel; // x22
  UILabel_o *lowerLabel; // x22
  Il2CppObject *current; // x20
  WebViewManager_o *Instance; // x0
  __int64 v82; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v84; // x1
  UserServantEntity_o *Entity; // x0
  __int64 v86; // x1
  int32_t SvtId; // w20
  WebViewManager_o *v88; // x0
  __int64 v89; // x1
  UserServantCommandCodeMaster_o *v90; // x21
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_T__o *UserSvtCommandCodeIdList; // x1
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  __int64 v94; // x1
  System_Collections_Generic_List_long__o *v95; // x20
  CheckMaterialSvtEquippedDialog___c_c *v96; // x0
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__20_0; // x21
  Il2CppObject *v99; // x22
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x0
  UnityEngine_GameObject_o *v109; // x0
  const MethodInfo *v110; // x2
  System_Action_o *v111; // x20
  System_Collections_Generic_List_Enumerator_T__o v112; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E9734 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)selectMaterialItemList, (_DWORD)servantIdList, callback);
    sub_B5D5C4(&Method_CheckMaterialSvtEquippedDialog_EndOpen__, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__AddRange__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__GetEnumerator__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__RemoveAll__, v42, v43, v44);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&NetworkManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_System_Predicate_long___ctor__, v51, v52, v53);
    sub_B5D5C4(&System_Predicate_long__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57, v58, v59);
    sub_B5D5C4(&Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, v60, v61, v62);
    sub_B5D5C4(&CheckMaterialSvtEquippedDialog___c_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_3250/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_3251/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_3404/*"CONFIRM_TITLE_SVT_COMBINE"*/, v72, v73, v74);
    byte_42E9734 = 1;
  }
  memset(&v113, 0, sizeof(v113));
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callback,
      (System_Int32_array **)callback,
      (System_String_array **)servantIdList,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.lastSvtCommandCodeList;
    if ( !gameObject )
      goto LABEL_51;
    System_Collections_Generic_List_long___Clear(
      (System_Collections_Generic_List_long__o *)gameObject,
      (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3404/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    upperLabel = this->fields.upperLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3250/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0LL);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
    if ( !lowerLabel )
      goto LABEL_51;
    UILabel__set_text(lowerLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( !gameObject )
      goto LABEL_51;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( !gameObject )
      goto LABEL_51;
    CheckMaterialSvtListViewManager__CreateList(
      (CheckMaterialSvtListViewManager_o *)gameObject,
      selectMaterialItemList,
      0,
      servantIdList,
      0LL,
      0,
      1,
      0LL);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_51;
    System_Collections_Generic_List_long___GetEnumerator(
      &v112,
      servantIdList,
      (const MethodInfo_30485CC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v113 = v112;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v113,
              (const MethodInfo_201D824 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v113.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v82);
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B5D69C(0LL, v84);
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)current,
                 (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_B5D69C(0LL, v86);
      SvtId = UserServantEntity__getSvtId(Entity, 0LL);
      v88 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v88 )
        sub_B5D69C(0LL, v89);
      v90 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)v88,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v90 )
        sub_B5D69C(UserId, UserId);
      UserSvtCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                                                                  v90,
                                                                                  UserId,
                                                                                  SvtId,
                                                                                  0LL);
      if ( UserSvtCommandCodeIdList )
      {
        lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
        if ( !lastSvtCommandCodeList )
          sub_B5D69C(0LL, UserSvtCommandCodeIdList);
        System_Collections_Generic_List_long___AddRange(
          lastSvtCommandCodeList,
          UserSvtCommandCodeIdList,
          (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
        v95 = this->fields.lastSvtCommandCodeList;
        v96 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        if ( (BYTE3(CheckMaterialSvtEquippedDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CheckMaterialSvtEquippedDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CheckMaterialSvtEquippedDialog___c_TypeInfo);
          v96 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        }
        static_fields = v96->static_fields;
        _9__20_0 = static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( (BYTE3(v96->vtable._0_Equals.methodPtr) & 4) != 0 && !v96->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v96);
            static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          }
          v99 = (Il2CppObject *)static_fields->__9;
          _9__20_0 = (System_Predicate_long__o *)sub_B5D694(System_Predicate_long__TypeInfo);
          System_Predicate_long____ctor(
            _9__20_0,
            v99,
            Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__,
            (const MethodInfo_2B92170 *)Method_System_Predicate_long___ctor__);
          v100 = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          v100->__9__20_0 = _9__20_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v100->__9__20_0,
            (System_Int32_array **)_9__20_0,
            v101,
            v102,
            v103,
            v104,
            v105,
            v106);
        }
        if ( !v95 )
          sub_B5D69C(v96, v94);
        System_Collections_Generic_List_long___RemoveAll(
          v95,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_30492AC *)Method_System_Collections_Generic_List_long__RemoveAll__);
      }
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v113,
      (const MethodInfo_201D820 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    gameObject = (UnityEngine_GameObject_o *)this->fields.lowerLabel;
    if ( !gameObject
      || (v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v107, -140.0, 0LL),
          (gameObject = this->fields.listViewBg) == 0LL)
      || (v108 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v108, 44.0, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
    {
LABEL_51:
      sub_B5D69C(gameObject, v76);
    }
    v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v109, 94.0, 0LL);
    this->fields.state = 2;
    CheckMaterialSvtEquippedDialog__SetObjActive(this, 0, v110);
    v111 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v111, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v111, 0, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OpenCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CheckMaterialSvtEquippedDialog_o *v9; // x19
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  const MethodInfo *v45; // x2
  System_Action_o *v46; // x20

  v9 = this;
  if ( (byte_42E9735 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CheckMaterialSvtEquippedDialog_EndOpen__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_long___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_long___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3308/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, v25, v26, v27);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_B5D5C4(&StringLiteral_3309/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, v28, v29, v30);
    byte_42E9735 = 1;
  }
  lastSvtCommandCodeList = v9->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_21;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !v9->fields.state )
  {
    v9->fields.callback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v9->fields.callback,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v32 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.lastSvtCommandCodeList,
              (const MethodInfo_1CA8E00 *)Method_System_Linq_Enumerable_Distinct_long___);
      v33 = (System_Int32_array **)System_Linq_Enumerable__ToList_long_(
                                     v32,
                                     (const MethodInfo_1CBA69C *)Method_System_Linq_Enumerable_ToList_long___);
      v9->fields.lastSvtCommandCodeList = (struct System_Collections_Generic_List_long__o *)v33;
      sub_B5D560((BattleServantConfConponent_o *)&v9->fields.lastSvtCommandCodeList, v33, v34, v35, v36, v37, v38, v39);
      titleLabel = v9->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3309/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
        lowerLabel = v9->fields.lowerLabel;
        this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3308/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, 0LL);
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
                  0LL);
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
                      v43 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
                      GameObjectExtensions__SetLocalPositionY(v43, 90.0, 0LL);
                      this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
                      if ( this )
                      {
                        v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                        GameObjectExtensions__SetLocalPositionY(v44, 140.0, 0LL);
                        CheckMaterialSvtEquippedDialog__SetObjActive(v9, 1, v45);
                        v9->fields.state = 2;
                        v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                        System_Action___ctor(
                          v46,
                          (Il2CppObject *)v9,
                          Method_CheckMaterialSvtEquippedDialog_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)v9, v46, 0, 0LL);
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
LABEL_21:
    sub_B5D69C(this, callback);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CheckMaterialSvtEquippedDialog__SetObjActive(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isOneButton,
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
  UnityEngine_Component_o *decideButton; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *closeLabel; // x19

  if ( (byte_42E9742 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, isOneButton, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v12, v13, v14);
    byte_42E9742 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_16;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !decideButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, !isOneButton, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_16;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !decideButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, !isOneButton, 0LL);
  decideButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !decideButton )
    goto LABEL_16;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0LL);
  if ( !decideButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isOneButton, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)decideButton, 0LL),
        cancelLabel = this->fields.cancelLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)decideButton, 0LL),
        closeLabel = this->fields.closeLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeLabel) )
  {
LABEL_16:
    sub_B5D69C(decideButton, isOneButton);
  }
  UILabel__set_text(closeLabel, (System_String_o *)decideButton, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E5F & 1) == 0 )
  {
    sub_B5D5C4(&CheckMaterialSvtEquippedDialog___c_TypeInfo, v1, v2, v3);
    byte_42E5E5F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CheckMaterialSvtEquippedDialog___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CheckMaterialSvtEquippedDialog___c_o *)v4;
  sub_B5D560(static_fields);
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