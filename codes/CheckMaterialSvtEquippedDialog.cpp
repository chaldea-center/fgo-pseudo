void __fastcall CheckMaterialSvtEquippedDialog___ctor(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_long__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4187CCC & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v4);
    byte_4187CCC = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.lastSvtCommandCodeList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4187CC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__Invoke__, *(_QWORD *)&result);
    byte_4187CC4 = 1;
  }
  callback = this->fields.callback;
  if ( callback )
  {
    this->fields.callback = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callback,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    System_Action_int___Invoke(callback, result, (const MethodInfo_24BA55C *)Method_System_Action_int__Invoke__);
    BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0

  if ( (byte_4187CBF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_4187CBF = 1;
  }
  lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_long___Clear(
    lastSvtCommandCodeList,
    (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
}


void __fastcall CheckMaterialSvtEquippedDialog__Close(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4187CCA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__, method);
    sub_B2C35C(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, v3);
    sub_B2C35C(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v4);
    byte_4187CCA = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B2C434(v7, v8);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&listViewManager->fields.onSelectItem,
    (System_Int32_array **)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  CheckMaterialSvtListViewManager__SetMode_25447708(listViewManager, 2, v15);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndCloseShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4187CC7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__, method);
    sub_B2C35C(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, v3);
    sub_B2C35C(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v4);
    byte_4187CC7 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B2C434(v7, v8);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&listViewManager->fields.onSelectItem,
    (System_Int32_array **)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  CheckMaterialSvtListViewManager__SetMode_25447708(listViewManager, 2, v15);
}


void __fastcall CheckMaterialSvtEquippedDialog__EndOpen(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4187CC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_CheckMaterialSvtListViewItem___ctor__, method);
    sub_B2C35C(&System_Action_CheckMaterialSvtListViewItem__TypeInfo, v3);
    sub_B2C35C(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__, v4);
    byte_4187CC0 = 1;
  }
  this->fields.state = 1;
  listViewManager = this->fields.listViewManager;
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_CheckMaterialSvtListViewItem__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)this,
    Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_CheckMaterialSvtListViewItem___ctor__);
  if ( !listViewManager )
    sub_B2C434(v7, v8);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&listViewManager->fields.onSelectItem,
    (System_Int32_array **)v6,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  CheckMaterialSvtListViewManager__SetMode_25447708(listViewManager, 2, v15);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_4187CC9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4187CC9 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.commandCodeStatusId, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B2C434(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_4187CC6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4187CC6 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.servantStatusId, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B2C434(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog__Init(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4187CBC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4187CBC = 1;
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
    sub_B2C434(titleLabel, method);
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
    sub_B2C434(0LL, selectedId);
  CheckMaterialSvtListViewManager__ModifyItem(listViewManager, selectedId, method);
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickCancel(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4187CC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4187CC2 = 1;
  }
  if ( this->fields.state == 1 )
  {
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      sub_B2C434(0LL, method);
    System_Collections_Generic_List_long___Clear(
      lastSvtCommandCodeList,
      (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 0, v5);
  }
}


void __fastcall CheckMaterialSvtEquippedDialog__OnClickClose(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187CC3 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187CC3 = 1;
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
  const MethodInfo *v3; // x2

  if ( (byte_4187CC1 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187CC1 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 1, v3);
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
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  WebViewManager_o *Instance; // x0
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  CommonUI_o *v12; // x21
  ServantStatusDialog_EndDelegate_o *v13; // x22

  if ( (byte_4187CC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__, selectItem);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_4187CC8 = 1;
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
      || (this->fields.commandCodeStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, v9),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v12 = (CommonUI_o *)Instance,
          v13 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v13,
            (Il2CppObject *)this,
            Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__,
            0LL),
          !v12) )
    {
      sub_B2C434(v8, v9);
    }
    CommonUI__OpenServantStatusDialog_17984316(v12, 32, UserCommandCodeEntity_k__BackingField, v13, 0LL, 0LL);
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
  const MethodInfo *v8; // x1
  WebViewManager_o *Instance; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v11; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4187CC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_CheckMaterialSvtEquippedDialog_EndShowServant__, selectItem);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_4187CC5 = 1;
  }
  if ( v4->fields.state == 1 )
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
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserSvtId(selectItem, v8);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v11 = (CommonUI_o *)Instance;
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)v4,
        Method_CheckMaterialSvtEquippedDialog_EndShowServant__,
        0LL);
      if ( v11 )
      {
        CommonUI__OpenServantStatusDialog_17980832(v11, 29, servantStatusId, v12, 0LL, 0LL);
        return;
      }
LABEL_14:
      sub_B2C434(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(v4, selectItem, v13);
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *upperLabel; // x22
  UILabel_o *lowerLabel; // x22
  const MethodInfo *v38; // x7
  Il2CppObject *current; // x20
  WebViewManager_o *Instance; // x0
  __int64 v41; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v43; // x1
  UserServantEntity_o *Entity; // x0
  __int64 v45; // x1
  int32_t SvtId; // w20
  WebViewManager_o *v47; // x0
  __int64 v48; // x1
  UserServantCommandCodeMaster_o *v49; // x21
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_T__o *UserSvtCommandCodeIdList; // x1
  System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x0
  __int64 v53; // x1
  System_Collections_Generic_List_long__o *v54; // x20
  CheckMaterialSvtEquippedDialog___c_c *v55; // x0
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__20_0; // x21
  Il2CppObject *v58; // x22
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  const MethodInfo *v69; // x2
  System_Action_o *v70; // x20
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4187CBD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, selectMaterialItemList);
    sub_B2C35C(&Method_CheckMaterialSvtEquippedDialog_EndOpen__, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v14);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__AddRange__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__RemoveAll__, v22);
    sub_B2C35C(&LocalizationManager_TypeInfo, v23);
    sub_B2C35C(&NetworkManager_TypeInfo, v24);
    sub_B2C35C(&Method_System_Predicate_long___ctor__, v25);
    sub_B2C35C(&System_Predicate_long__TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(&Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, v28);
    sub_B2C35C(&CheckMaterialSvtEquippedDialog___c_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_3185/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, v30);
    sub_B2C35C(&StringLiteral_3186/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, v31);
    sub_B2C35C(&StringLiteral_3338/*"CONFIRM_TITLE_SVT_COMBINE"*/, v32);
    byte_4187CBD = 1;
  }
  memset(&v72, 0, sizeof(v72));
  if ( !this->fields.state )
  {
    this->fields.callback = callback;
    sub_B2C2F8(
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
      (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3338/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    upperLabel = this->fields.upperLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3185/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, 0LL);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0LL);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3186/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0LL);
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
      v38);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( !servantIdList )
      goto LABEL_51;
    System_Collections_Generic_List_long___GetEnumerator(
      &v71,
      servantIdList,
      (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v72 = v71;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
              &v72,
              (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
    {
      current = v72.fields.current;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v41);
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        sub_B2C434(0LL, v43);
      Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 (int64_t)current,
                 (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !Entity )
        sub_B2C434(0LL, v45);
      SvtId = UserServantEntity__getSvtId(Entity, 0LL);
      v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v47 )
        sub_B2C434(0LL, v48);
      v49 = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)v47,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v49 )
        sub_B2C434(UserId, UserId);
      UserSvtCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                                                                  v49,
                                                                                  UserId,
                                                                                  SvtId,
                                                                                  0LL);
      if ( UserSvtCommandCodeIdList )
      {
        lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
        if ( !lastSvtCommandCodeList )
          sub_B2C434(0LL, UserSvtCommandCodeIdList);
        System_Collections_Generic_List_long___AddRange(
          lastSvtCommandCodeList,
          UserSvtCommandCodeIdList,
          (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
        v54 = this->fields.lastSvtCommandCodeList;
        v55 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        if ( (BYTE3(CheckMaterialSvtEquippedDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CheckMaterialSvtEquippedDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CheckMaterialSvtEquippedDialog___c_TypeInfo);
          v55 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        }
        static_fields = v55->static_fields;
        _9__20_0 = static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v55);
            static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          }
          v58 = (Il2CppObject *)static_fields->__9;
          _9__20_0 = (System_Predicate_long__o *)sub_B2C42C(System_Predicate_long__TypeInfo);
          System_Predicate_long____ctor(
            _9__20_0,
            v58,
            Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__,
            (const MethodInfo_2951B48 *)Method_System_Predicate_long___ctor__);
          v59 = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          v59->__9__20_0 = _9__20_0;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v59->__9__20_0,
            (System_Int32_array **)_9__20_0,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65);
        }
        if ( !v54 )
          sub_B2C434(v55, v53);
        System_Collections_Generic_List_long___RemoveAll(
          v54,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_2F6EACC *)Method_System_Collections_Generic_List_long__RemoveAll__);
      }
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v72,
      (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    gameObject = (UnityEngine_GameObject_o *)this->fields.lowerLabel;
    if ( !gameObject
      || (v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v66, -140.0, 0LL),
          (gameObject = this->fields.listViewBg) == 0LL)
      || (v67 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL),
          GameObjectExtensions__SetLocalPositionY(v67, 44.0, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
    {
LABEL_51:
      sub_B2C434(gameObject, v34);
    }
    v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v68, 94.0, 0LL);
    this->fields.state = 2;
    CheckMaterialSvtEquippedDialog__SetObjActive(this, 0, v69);
    v70 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v70, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  const MethodInfo *v28; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  const MethodInfo *v32; // x2
  System_Action_o *v33; // x20

  v9 = this;
  if ( (byte_4187CBE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_CheckMaterialSvtEquippedDialog_EndOpen__, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_long___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_long___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_3243/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, v15);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_B2C35C(&StringLiteral_3244/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, v16);
    byte_4187CBE = 1;
  }
  lastSvtCommandCodeList = v9->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_21;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !v9->fields.state )
  {
    v9->fields.callback = callback;
    sub_B2C2F8(
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
      v18 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.lastSvtCommandCodeList,
              (const MethodInfo_1A8D6EC *)Method_System_Linq_Enumerable_Distinct_long___);
      v19 = (System_Int32_array **)System_Linq_Enumerable__ToList_long_(
                                     v18,
                                     (const MethodInfo_1A9DE04 *)Method_System_Linq_Enumerable_ToList_long___);
      v9->fields.lastSvtCommandCodeList = (struct System_Collections_Generic_List_long__o *)v19;
      sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.lastSvtCommandCodeList, v19, v20, v21, v22, v23, v24, v25);
      titleLabel = v9->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3244/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
        lowerLabel = v9->fields.lowerLabel;
        this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3243/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, 0LL);
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
                  v28);
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
                      v30 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
                      GameObjectExtensions__SetLocalPositionY(v30, 90.0, 0LL);
                      this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
                      if ( this )
                      {
                        v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                        GameObjectExtensions__SetLocalPositionY(v31, 140.0, 0LL);
                        CheckMaterialSvtEquippedDialog__SetObjActive(v9, 1, v32);
                        v9->fields.state = 2;
                        v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                        System_Action___ctor(
                          v33,
                          (Il2CppObject *)v9,
                          Method_CheckMaterialSvtEquippedDialog_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)v9, v33, 0, 0LL);
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
    sub_B2C434(this, callback);
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

  if ( (byte_4187CCB & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, isOneButton);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v6);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v7);
    byte_4187CCB = 1;
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
  decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)decideButton, 0LL),
        cancelLabel = this->fields.cancelLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)decideButton, 0LL),
        closeLabel = this->fields.closeLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !closeLabel) )
  {
LABEL_16:
    sub_B2C434(decideButton, isOneButton);
  }
  UILabel__set_text(closeLabel, (System_String_o *)decideButton, 0LL);
}


void __fastcall CheckMaterialSvtEquippedDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4184EC9 & 1) == 0 )
  {
    sub_B2C35C(&CheckMaterialSvtEquippedDialog___c_TypeInfo, v1);
    byte_4184EC9 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CheckMaterialSvtEquippedDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CheckMaterialSvtEquippedDialog___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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