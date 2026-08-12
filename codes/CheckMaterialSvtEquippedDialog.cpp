void CheckMaterialSvtEquippedDialog___ctor(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596A1D8 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    byte_596A1D8 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.lastSvtCommandCodeList = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lastSvtCommandCodeList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10, v11);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CheckMaterialSvtEquippedDialog__CallOnConfirm(
        CheckMaterialSvtEquippedDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o **p_callback; // x0
  struct System_Action_int__o *v10; // x21
  struct System_Action_int__o *callback; // t1

  callback = this->fields.callback;
  p_callback = &this->fields.callback;
  v10 = callback;
  if ( callback )
  {
    this->fields.callback = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_callback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      (unsigned int)result,
      v10->fields.method);
    BaseDialog__Close((BaseDialog_o *)this, 0, 0);
  }
}


void CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v4; // w9

  v2 = this;
  if ( (byte_596A1CC & 1) == 0 )
  {
    this = (CheckMaterialSvtEquippedDialog_o *)sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    byte_596A1CC = 1;
  }
  lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    sub_2213CDC(this, method);
  v4 = lastSvtCommandCodeList->fields._version + 1;
  lastSvtCommandCodeList->fields._size = 0;
  lastSvtCommandCodeList->fields._version = v4;
}


void CheckMaterialSvtEquippedDialog__Close(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0, 0);
}


void CheckMaterialSvtEquippedDialog__EndCloseShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  System_Action_CheckMaterialSvtListViewItem__c *v3; // x0
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596A1D6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_596A1D6 = 1;
  }
  v3 = System_Action_CheckMaterialSvtListViewItem__TypeInfo;
  listViewManager = this->fields.listViewManager;
  this->fields.state = 1;
  v5 = (System_Action_object__o *)sub_2213CCC(v3);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0);
  if ( !listViewManager )
    sub_2213CDC(v6, v7);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&listViewManager->fields.onSelectItem,
    (int32_t)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  CheckMaterialSvtListViewManager__SetMode_37657156(listViewManager, 2, v14);
}


void CheckMaterialSvtEquippedDialog__EndCloseShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        const MethodInfo *method)
{
  System_Action_CheckMaterialSvtListViewItem__c *v3; // x0
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596A1D3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_596A1D3 = 1;
  }
  v3 = System_Action_CheckMaterialSvtListViewItem__TypeInfo;
  listViewManager = this->fields.listViewManager;
  this->fields.state = 1;
  v5 = (System_Action_object__o *)sub_2213CCC(v3);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0);
  if ( !listViewManager )
    sub_2213CDC(v6, v7);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&listViewManager->fields.onSelectItem,
    (int32_t)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  CheckMaterialSvtListViewManager__SetMode_37657156(listViewManager, 2, v14);
}


void CheckMaterialSvtEquippedDialog__EndOpen(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  System_Action_CheckMaterialSvtListViewItem__c *v3; // x0
  struct CheckMaterialSvtListViewManager_o *listViewManager; // x20
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596A1CD & 1) == 0 )
  {
    sub_2213A60(&System_Action_CheckMaterialSvtListViewItem__TypeInfo);
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    byte_596A1CD = 1;
  }
  v3 = System_Action_CheckMaterialSvtListViewItem__TypeInfo;
  listViewManager = this->fields.listViewManager;
  this->fields.state = 1;
  v5 = (System_Action_object__o *)sub_2213CCC(v3);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__,
    0);
  if ( !listViewManager )
    sub_2213CDC(v6, v7);
  listViewManager->fields.onSelectItem = (struct System_Action_CheckMaterialSvtListViewItem__o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&listViewManager->fields.onSelectItem,
    (int32_t)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  CheckMaterialSvtListViewManager__SetMode_37657156(listViewManager, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtEquippedDialog__EndShowCommandCode(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_596A1D5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A1D5 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.commandCodeStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowCommandCode__, 0);
  if ( !Instance )
LABEL_8:
    sub_2213CDC(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtEquippedDialog__EndShowServant(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_596A1D2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A1D2 = 1;
  }
  if ( isDecide )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_8;
    CheckMaterialSvtListViewManager__ModifyItem(listViewManager, this->fields.servantStatusId, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndCloseShowServant__, 0);
  if ( !Instance )
LABEL_8:
    sub_2213CDC(listViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


void CheckMaterialSvtEquippedDialog__Init(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596A1C9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A1C9 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.upperLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.lowerLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)this->fields.decideButton;
  if ( !titleLabel
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)this->fields.cancelButton) == 0)
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0),
        (titleLabel = (UILabel_o *)this->fields.closeButton) == 0)
    || (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0)) == 0 )
  {
LABEL_16:
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CheckMaterialSvtEquippedDialog__ModifyItem(
        CheckMaterialSvtEquippedDialog_o *this,
        int64_t selectedId,
        const MethodInfo *method)
{
  CheckMaterialSvtListViewManager_o *listViewManager; // x0

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_2213CDC(0, selectedId);
  CheckMaterialSvtListViewManager__ModifyItem(listViewManager, selectedId, method);
}


void CheckMaterialSvtEquippedDialog__OnClickCancel(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v2; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v4; // w9
  _BYTE *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_596A1CF & 1) == 0 )
  {
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_OnClickCancel__);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    byte_596A1CF = 1;
  }
  if ( v2->fields.state == 1 )
  {
    lastSvtCommandCodeList = v2->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      sub_2213CDC(this, method);
    v4 = lastSvtCommandCodeList->fields._version + 1;
    v5 = Method_CheckMaterialSvtEquippedDialog_OnClickCancel__;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v4;
    if ( (v5[83] & 2) != 0 )
      v5 = (_BYTE *)sub_2213A78(v5);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, *((_QWORD *)v5 + 4));
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(v2, 0, v7);
  }
}


void CheckMaterialSvtEquippedDialog__OnClickClose(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_596A1D0 & 1) == 0 )
  {
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_OnClickClose__);
    byte_596A1D0 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CheckMaterialSvtEquippedDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CheckMaterialSvtEquippedDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    BaseDialog__Close((BaseDialog_o *)this, 0, 0);
  }
}


void CheckMaterialSvtEquippedDialog__OnClickDecide(CheckMaterialSvtEquippedDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596A1CE & 1) == 0 )
  {
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_OnClickDecide__);
    byte_596A1CE = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_CheckMaterialSvtEquippedDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CheckMaterialSvtEquippedDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    CheckMaterialSvtEquippedDialog__CallOnConfirm(this, 1, v5);
  }
}


void CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *Instance; // x21
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x20
  ServantStatusDialog_EndDelegate_o *v11; // x22

  if ( (byte_596A1D4 & 1) == 0 )
  {
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__);
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A1D4 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v5 = Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__;
    if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_CheckMaterialSvtEquippedDialog_OnSelectCommandCodeDetail__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( !selectItem
      || (this->fields.commandCodeStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(selectItem, v8),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          UserCommandCodeEntity_k__BackingField = selectItem->fields._UserCommandCodeEntity_k__BackingField,
          v11 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo),
          ServantStatusDialog_EndDelegate___ctor(
            v11,
            (Il2CppObject *)this,
            Method_CheckMaterialSvtEquippedDialog_EndShowCommandCode__,
            0),
          !Instance) )
    {
      sub_2213CDC(v7, v8);
    }
    CommonUI__OpenServantStatusDialog_37385832(
      (CommonUI_o *)Instance,
      32,
      UserCommandCodeEntity_k__BackingField,
      v11,
      0,
      0);
  }
}


void CheckMaterialSvtEquippedDialog__OnSelectServantDetail(
        CheckMaterialSvtEquippedDialog_o *this,
        CheckMaterialSvtListViewItem_o *selectItem,
        const MethodInfo *method)
{
  CheckMaterialSvtEquippedDialog_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x21
  int64_t servantStatusId; // x20
  ServantStatusDialog_EndDelegate_o *v10; // x22
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_596A1D1 & 1) == 0 )
  {
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_EndShowServant__);
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A1D1 = 1;
  }
  if ( v4->fields.state == 1 )
  {
    if ( !selectItem )
      goto LABEL_13;
    if ( selectItem->fields._UserServantEntity_k__BackingField )
    {
      v5 = Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__;
      if ( (*((_BYTE *)Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_CheckMaterialSvtEquippedDialog_OnSelectServantDetail__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserSvtId(selectItem, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantStatusId = v4->fields.servantStatusId;
      v10 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v10,
        (Il2CppObject *)v4,
        Method_CheckMaterialSvtEquippedDialog_EndShowServant__,
        0);
      if ( Instance )
      {
        CommonUI__OpenServantStatusDialog_37382644((CommonUI_o *)Instance, 29, servantStatusId, v10, 0, 0);
        return;
      }
LABEL_13:
      sub_2213CDC(this, selectItem);
    }
    if ( selectItem->fields._UserCommandCodeEntity_k__BackingField )
    {
      v4->fields.servantStatusId = CheckMaterialSvtListViewItem__get_UserCommandCodeId(
                                     selectItem,
                                     (const MethodInfo *)selectItem);
      CheckMaterialSvtEquippedDialog__OnSelectCommandCodeDetail(v4, selectItem, v11);
    }
  }
}


void CheckMaterialSvtEquippedDialog__Open(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o *servantIdList,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  int v17; // w9
  LocalizationManager_c *v18; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *upperLabel; // x22
  UILabel_o *lowerLabel; // x22
  const MethodInfo *v22; // x7
  const MethodInfo_40F7FA8 **v23; // x25
  const MethodInfo_385636C **v24; // x23
  const MethodInfo_3F13190 **v25; // x28
  const MethodInfo_385636C **v26; // x29
  const MethodInfo_446C4A8 **v27; // x24
  Il2CppObject *current; // x21
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v32; // x1
  Il2CppObject *Entity; // x0
  __int64 v34; // x1
  int32_t SvtId; // w21
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  Il2CppObject *v40; // x22
  NetworkManager_c *v41; // x0
  System_Collections_Generic_IEnumerable_T__o *UserSvtCommandCodeIdList; // x1
  System_Collections_Generic_List_long__o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_List_long__o *v46; // x21
  CheckMaterialSvtEquippedDialog___c_c *v47; // x0
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__20_0; // x22
  const MethodInfo_446C4A8 **v50; // x19
  const MethodInfo_40F7FA8 **v51; // x24
  const MethodInfo_385636C **v52; // x25
  const MethodInfo_3F13190 **v53; // x29
  const MethodInfo_385636C **v54; // x28
  Il2CppObject *v55; // x23
  struct CheckMaterialSvtEquippedDialog___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  const MethodInfo *v66; // x2
  System_Action_o *v67; // x20
  CheckMaterialSvtEquippedDialog_o *v68; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596A1CA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_EndOpen__);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__RemoveAll__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&System_Predicate_long__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__);
    sub_2213A60(&CheckMaterialSvtEquippedDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_3741/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/);
    sub_2213A60(&StringLiteral_3742/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3919/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_596A1CA = 1;
  }
  state = this->fields.state;
  memset(&v70, 0, sizeof(v70));
  if ( !state )
  {
    this->fields.callback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callback,
      (int32_t)callback,
      (System_String_o *)servantIdList,
      (System_String_o *)callback,
      (int32_t)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    lastSvtCommandCodeList = this->fields.lastSvtCommandCodeList;
    if ( !lastSvtCommandCodeList )
      goto LABEL_51;
    v17 = lastSvtCommandCodeList->fields._version + 1;
    v18 = LocalizationManager_TypeInfo;
    lastSvtCommandCodeList->fields._size = 0;
    lastSvtCommandCodeList->fields._version = v17;
    titleLabel = this->fields.titleLabel;
    if ( !*(&v18->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v18, v14, v15);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3919/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    upperLabel = this->fields.upperLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3741/*"COMBINE_LAST_EQUIP_CMD_SVT_INFO"*/, 0);
    if ( !upperLabel )
      goto LABEL_51;
    UILabel__set_text(upperLabel, (System_String_o *)gameObject, 0);
    lowerLabel = this->fields.lowerLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3742/*"COMBINE_LAST_EQUIP_CMD_SVT_MESSAGE"*/, 0);
    if ( !lowerLabel )
      goto LABEL_51;
    UILabel__set_text(lowerLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( !gameObject )
      goto LABEL_51;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
    if ( !gameObject )
      goto LABEL_51;
    CheckMaterialSvtListViewManager__CreateList(
      (CheckMaterialSvtListViewManager_o *)gameObject,
      selectMaterialItemList,
      0,
      servantIdList,
      0,
      0,
      1,
      v22);
    gameObject = this->fields.listViewBg;
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( !servantIdList )
      goto LABEL_51;
    System_Collections_Generic_List_long___GetEnumerator(
      &v69,
      servantIdList,
      (const MethodInfo_446CD4C *)Method_System_Collections_Generic_List_long__GetEnumerator__);
    v23 = (const MethodInfo_40F7FA8 **)&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__;
    v24 = (const MethodInfo_385636C **)&Method_DataManager_GetMasterData_UserServantMaster___;
    v25 = (const MethodInfo_3F13190 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__;
    v26 = (const MethodInfo_385636C **)&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___;
    v27 = (const MethodInfo_446C4A8 **)&Method_System_Collections_Generic_List_long__AddRange__;
    v70 = v69;
    v69.fields._list = 0;
    *(_QWORD *)&v69.fields._index = &v70;
    v68 = this;
    while ( System_Collections_Generic_List_Enumerator_long___MoveNext(&v70, *v23) )
    {
      current = v70.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v30);
      MasterData_object = DataManager__GetMasterData_object_((DataManager_o *)Instance, *v24);
      if ( !MasterData_object )
        sub_2213CDC(0, v32);
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int64_t)current,
                 *v25);
      if ( !Entity )
        sub_2213CDC(0, v34);
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Entity, 0);
      v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v36 )
        sub_2213CDC(0, v37);
      v40 = DataManager__GetMasterData_object_((DataManager_o *)v36, *v26);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38, v39);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v41 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38, v39);
        v41 = NetworkManager_TypeInfo;
      }
      if ( !v40 )
        sub_2213CDC(v41, v38);
      UserSvtCommandCodeIdList = (System_Collections_Generic_IEnumerable_T__o *)UserServantCommandCodeMaster__getUserSvtCommandCodeIdList(
                                                                                  (UserServantCommandCodeMaster_o *)v40,
                                                                                  v41->static_fields->userIdNumber,
                                                                                  SvtId,
                                                                                  0);
      if ( UserSvtCommandCodeIdList )
      {
        v43 = this->fields.lastSvtCommandCodeList;
        if ( !v43 )
          sub_2213CDC(0, UserSvtCommandCodeIdList);
        System_Collections_Generic_List_long___AddRange(v43, UserSvtCommandCodeIdList, *v27);
        v46 = this->fields.lastSvtCommandCodeList;
        v47 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        if ( !*(&CheckMaterialSvtEquippedDialog___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CheckMaterialSvtEquippedDialog___c_TypeInfo, v44, v45);
          v47 = CheckMaterialSvtEquippedDialog___c_TypeInfo;
        }
        static_fields = v47->static_fields;
        _9__20_0 = static_fields->__9__20_0;
        if ( !_9__20_0 )
        {
          if ( !*(&v47->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v47, v44, v45);
            static_fields = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          }
          v50 = v27;
          v51 = v23;
          v52 = v26;
          v53 = v25;
          v54 = v24;
          v55 = (Il2CppObject *)static_fields->__9;
          _9__20_0 = (System_Predicate_long__o *)sub_2213CCC(System_Predicate_long__TypeInfo);
          System_Predicate_long____ctor(_9__20_0, v55, Method_CheckMaterialSvtEquippedDialog___c__Open_b__20_0__, 0);
          v56 = CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields;
          v56->__9__20_0 = _9__20_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v56->__9__20_0,
            (int32_t)_9__20_0,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
          v24 = v54;
          v25 = v53;
          v26 = v52;
          v23 = v51;
          v27 = v50;
        }
        if ( !v46 )
          sub_2213CDC(v47, v44);
        this = v68;
        System_Collections_Generic_List_long___RemoveAll(
          v46,
          (System_Predicate_T__o *)_9__20_0,
          (const MethodInfo_446D890 *)Method_System_Collections_Generic_List_long__RemoveAll__);
      }
    }
    System_Collections_Generic_List_Enumerator_long___Dispose(
      &v70,
      (const MethodInfo_40F7FA4 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    gameObject = (UnityEngine_GameObject_o *)this->fields.lowerLabel;
    if ( !gameObject
      || (v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0),
          GameObjectExtensions__SetLocalPositionY(v63, -140.0, 0),
          (gameObject = this->fields.listViewBg) == 0)
      || (v64 = UnityEngine_GameObject__get_gameObject(gameObject, 0),
          GameObjectExtensions__SetLocalPositionY(v64, 44.0, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
    {
LABEL_51:
      sub_2213CDC(gameObject, v14);
    }
    v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v65, 94.0, 0);
    this->fields.state = 2;
    CheckMaterialSvtEquippedDialog__SetObjActive(this, 0, v66);
    v67 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v67, (Il2CppObject *)this, Method_CheckMaterialSvtEquippedDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0, 0);
  }
}


void CheckMaterialSvtEquippedDialog__OpenCommandCodeRemoveResult(
        CheckMaterialSvtEquippedDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  CheckMaterialSvtEquippedDialog_o *v9; // x19
  struct System_Collections_Generic_List_long__o *lastSvtCommandCodeList; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_List_TSource__o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *lowerLabel; // x20
  const MethodInfo *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  const MethodInfo *v27; // x2
  System_Action_o *v28; // x20

  v9 = this;
  if ( (byte_596A1CB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CheckMaterialSvtEquippedDialog_EndOpen__);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_long___);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3805/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/);
    this = (CheckMaterialSvtEquippedDialog_o *)sub_2213A60(&StringLiteral_3806/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/);
    byte_596A1CB = 1;
  }
  lastSvtCommandCodeList = v9->fields.lastSvtCommandCodeList;
  if ( !lastSvtCommandCodeList )
    goto LABEL_20;
  if ( lastSvtCommandCodeList->fields._size >= 1 && !v9->fields.state )
  {
    v9->fields.callback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v9->fields.callback,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v11 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.lastSvtCommandCodeList,
              (const MethodInfo_387C648 *)Method_System_Linq_Enumerable_Distinct_long___);
      v12 = System_Linq_Enumerable__ToList_long_(
              v11,
              (const MethodInfo_38A0C70 *)Method_System_Linq_Enumerable_ToList_long___);
      v9->fields.lastSvtCommandCodeList = (struct System_Collections_Generic_List_long__o *)v12;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v9->fields.lastSvtCommandCodeList,
        (int32_t)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      titleLabel = v9->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
      this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3806/*"COMMAND_CODE_REMOVE_RESULT_TITLE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)this, 0);
        lowerLabel = v9->fields.lowerLabel;
        this = (CheckMaterialSvtEquippedDialog_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"COMMAND_CODE_REMOVE_RESULT_MESSAGE"*/, 0);
        if ( lowerLabel )
        {
          UILabel__set_text(lowerLabel, (System_String_o *)this, 0);
          this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
          if ( this )
          {
            this = (CheckMaterialSvtEquippedDialog_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
              if ( this )
              {
                CheckMaterialSvtListViewManager__CreateList(
                  (CheckMaterialSvtListViewManager_o *)this,
                  0,
                  2,
                  0,
                  v9->fields.lastSvtCommandCodeList,
                  0,
                  0,
                  v23);
                this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewBg;
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                  this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.lowerLabel;
                  if ( this )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                    GameObjectExtensions__SetLocalPositionY(gameObject, -120.0, 0);
                    this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewBg;
                    if ( this )
                    {
                      v25 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
                      GameObjectExtensions__SetLocalPositionY(v25, 90.0, 0);
                      this = (CheckMaterialSvtEquippedDialog_o *)v9->fields.listViewManager;
                      if ( this )
                      {
                        v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                        GameObjectExtensions__SetLocalPositionY(v26, 140.0, 0);
                        CheckMaterialSvtEquippedDialog__SetObjActive(v9, 1, v27);
                        v9->fields.state = 2;
                        v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                        System_Action___ctor(
                          v28,
                          (Il2CppObject *)v9,
                          Method_CheckMaterialSvtEquippedDialog_EndOpen__,
                          0);
                        BaseDialog__Open((BaseDialog_o *)v9, v28, 0, 0, 0);
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
    sub_2213CDC(this, callback);
  }
}


// local variable allocation has failed, the output may be wrong!
void CheckMaterialSvtEquippedDialog__SetObjActive(
        CheckMaterialSvtEquippedDialog_o *this,
        bool isOneButton,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideButton; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *closeLabel; // x19

  if ( (byte_596A1D7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    byte_596A1D7 = 1;
  }
  decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_15;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0);
  if ( !decideButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, !isOneButton, 0);
  decideButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_15;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0);
  if ( !decideButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, !isOneButton, 0);
  decideButton = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !decideButton )
    goto LABEL_15;
  decideButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideButton, 0);
  if ( !decideButton )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isOneButton, 0);
  decideLabel = this->fields.decideLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)decideButton, 0),
        cancelLabel = this->fields.cancelLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)decideButton, 0),
        closeLabel = this->fields.closeLabel,
        decideButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !closeLabel) )
  {
LABEL_15:
    sub_2213CDC(decideButton, isOneButton);
  }
  UILabel__set_text(closeLabel, (System_String_o *)decideButton, 0);
}


void CheckMaterialSvtEquippedDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A1D9 & 1) == 0 )
  {
    sub_2213A60(&CheckMaterialSvtEquippedDialog___c_TypeInfo);
    byte_596A1D9 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CheckMaterialSvtEquippedDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields->__9 = (struct CheckMaterialSvtEquippedDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CheckMaterialSvtEquippedDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CheckMaterialSvtEquippedDialog___c___ctor(CheckMaterialSvtEquippedDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CheckMaterialSvtEquippedDialog___c___Open_b__20_0(
        CheckMaterialSvtEquippedDialog___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s == 0;
}