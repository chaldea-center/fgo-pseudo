void CommonMultiItemGetDlg___ctor(CommonMultiItemGetDlg_o *this, const MethodInfo *method)
{
  if ( (byte_4CB4D43 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB4D43 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CommonMultiItemGetDlg__Close(CommonMultiItemGetDlg_o *this, System_Action_o *callback, const MethodInfo *method)
{
  CommonMultiItemGetList_o *itemWindow; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4CB4D42 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CommonMultiItemGetDlg_endClose__);
    byte_4CB4D42 = 1;
  }
  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_1C6BC60(0, callback);
  CommonMultiItemGetList__setHide(itemWindow, (const MethodInfo *)callback);
  this->fields.onEndClose = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onEndClose, (int32_t)callback, v6, v7);
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CommonMultiItemGetDlg_endClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0);
}


void CommonMultiItemGetDlg__DialogCallBack(CommonMultiItemGetDlg_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB4D3F & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB4D3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


void CommonMultiItemGetDlg__Init(CommonMultiItemGetDlg_o *this, const MethodInfo *method)
{
  ItemDetailInfoComponent_o *itemDialog; // x0

  itemDialog = this->fields.itemDialog;
  if ( !itemDialog )
    sub_1C6BC60(0, method);
  ItemDetailInfoComponent__Init(itemDialog, 0);
}


void CommonMultiItemGetDlg__OnClickCancel(CommonMultiItemGetDlg_o *this, const MethodInfo *method)
{
  struct CommonMultiItemGetDlg_OnClickDelegate_o *onclick; // x8

  onclick = this->fields.onclick;
  if ( !onclick )
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onclick->fields.invoke_impl)(
    onclick->fields.method_code,
    0,
    onclick->fields.method);
}


void CommonMultiItemGetDlg__OnClickDecide(CommonMultiItemGetDlg_o *this, const MethodInfo *method)
{
  struct CommonMultiItemGetDlg_OnClickDelegate_o *onclick; // x8

  onclick = this->fields.onclick;
  if ( !onclick )
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))onclick->fields.invoke_impl)(
    onclick->fields.method_code,
    1,
    onclick->fields.method);
}


void CommonMultiItemGetDlg__Open(
        CommonMultiItemGetDlg_o *this,
        System_String_o *title,
        System_String_o *detail,
        System_String_o *closeMsg,
        System_String_o *decideMsg,
        GiftEntity_array *giftList,
        int32_t columnCount,
        CommonMultiItemGetDlg_OnClickDelegate_o *callback,
        const MethodInfo *method)
{
  UILabel_o *titleConfLabel; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CommonMultiItemGetList_o *itemWindow; // x22
  GiftListViewItemIcon_ClickDelegate_o *v21; // x23
  const MethodInfo *v22; // x4
  System_Action_o *v23; // x20

  if ( (byte_4CB4D3D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&GiftListViewItemIcon_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_CommonMultiItemGetDlg_endOpen__);
    sub_1C6BA08(&Method_CommonMultiItemGetDlg_setShowConf__);
    byte_4CB4D3D = 1;
  }
  titleConfLabel = this->fields.titleConfLabel;
  if ( !titleConfLabel )
    goto LABEL_10;
  UILabel__set_text(titleConfLabel, title, 0);
  titleConfLabel = this->fields.detailLabel;
  if ( !titleConfLabel )
    goto LABEL_10;
  UILabel__set_text(titleConfLabel, detail, 0);
  titleConfLabel = this->fields.decideLabel;
  if ( !titleConfLabel )
    goto LABEL_10;
  UILabel__set_text(titleConfLabel, decideMsg, 0);
  titleConfLabel = this->fields.cancelLabel;
  if ( !titleConfLabel )
    goto LABEL_10;
  UILabel__set_text(titleConfLabel, closeMsg, 0);
  this->fields.onclick = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onclick, (int32_t)callback, v18, v19);
  itemWindow = this->fields.itemWindow;
  v21 = (GiftListViewItemIcon_ClickDelegate_o *)sub_1C6BC54(GiftListViewItemIcon_ClickDelegate_TypeInfo);
  GiftListViewItemIcon_ClickDelegate___ctor(v21, (Il2CppObject *)this, Method_CommonMultiItemGetDlg_setShowConf__, 0);
  if ( !itemWindow
    || (CommonMultiItemGetList__setListData(itemWindow, giftList, columnCount, v21, v22),
        (titleConfLabel = (UILabel_o *)this->fields.itemWindow) == 0) )
  {
LABEL_10:
    sub_1C6BC60(titleConfLabel, title);
  }
  CommonMultiItemGetList__setHide((CommonMultiItemGetList_o *)titleConfLabel, (const MethodInfo *)title);
  v23 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_CommonMultiItemGetDlg_endOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0, 0);
}


void CommonMultiItemGetDlg__endClose(CommonMultiItemGetDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o *onEndClose; // x8

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (onEndClose = this->fields.onEndClose) == 0) )
    sub_1C6BC60(gameObject, v4);
  ((void (__fastcall *)(intptr_t, intptr_t))onEndClose->fields.invoke_impl)(
    onEndClose->fields.method_code,
    onEndClose->fields.method);
}


void CommonMultiItemGetDlg__endOpen(CommonMultiItemGetDlg_o *this, const MethodInfo *method)
{
  CommonMultiItemGetList_o *itemWindow; // x0

  itemWindow = this->fields.itemWindow;
  if ( !itemWindow )
    sub_1C6BC60(0, method);
  CommonMultiItemGetList__setShow(itemWindow, method);
}


void CommonMultiItemGetDlg__itemDialogCallBack(CommonMultiItemGetDlg_o *this, bool flg, const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ItemDetailInfoComponent_o *itemDialog; // x0

  if ( (byte_4CB4D41 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CommonMultiItemGetDlg_itemDialogCallBack__);
    byte_4CB4D41 = 1;
  }
  v4 = Method_CommonMultiItemGetDlg_itemDialogCallBack__;
  if ( (*((_BYTE *)Method_CommonMultiItemGetDlg_itemDialogCallBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C6BA20(Method_CommonMultiItemGetDlg_itemDialogCallBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDialog = this->fields.itemDialog;
  if ( !itemDialog )
    sub_1C6BC60(0, v6);
  ItemDetailInfoComponent__Close_33421440(itemDialog, 0, 0);
}


void CommonMultiItemGetDlg__setShowConf(CommonMultiItemGetDlg_o *this, GiftEntity_o *item, const MethodInfo *method)
{
  int32_t type; // w21
  const MethodInfo *v6; // x2

  if ( !item )
    sub_1C6BC60(this, 0);
  type = item->fields.type;
  if ( Gift__IsServant(type, 0) )
  {
    CommonMultiItemGetDlg__setShowServantConf(this, item, v6);
  }
  else if ( type == 2 )
  {
    CommonMultiItemGetDlg__setShowItemConf(this, item->fields.objectId, v6);
  }
}


void CommonMultiItemGetDlg__setShowItemConf(CommonMultiItemGetDlg_o *this, int32_t itemId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  ItemDetailInfoComponent_o *itemDialog; // x20
  ItemEntity_o *v9; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v10; // x22

  if ( (byte_4CB4D40 & 1) == 0 )
  {
    sub_1C6BA08(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_CommonMultiItemGetDlg_itemDialogCallBack__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB4D40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   itemId,
                   (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        itemDialog = this->fields.itemDialog,
        v9 = (ItemEntity_o *)Entity,
        v10 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C6BC54(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_CommonMultiItemGetDlg_itemDialogCallBack__,
          0),
        !itemDialog) )
  {
    sub_1C6BC60(Instance, v6);
  }
  ItemDetailInfoComponent__Open(itemDialog, v9, v10, 50, 0);
}


void CommonMultiItemGetDlg__setShowServantConf(
        CommonMultiItemGetDlg_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CB4D3E & 1) == 0 )
  {
    sub_1C6BA08(&Method_CommonMultiItemGetDlg_DialogCallBack__);
    sub_1C6BA08(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB4D3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v6, (Il2CppObject *)this, Method_CommonMultiItemGetDlg_DialogCallBack__, 0);
  if ( !Instance )
    sub_1C6BC60(v7, v8);
  CommonUI__OpenServantStatusDialog_31431504((CommonUI_o *)Instance, 0, gift, v6, 0);
}


void CommonMultiItemGetDlg_OnClickDelegate___ctor(
        CommonMultiItemGetDlg_OnClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA0C0C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA0BC4;
}


System_IAsyncResult_o *CommonMultiItemGetDlg_OnClickDelegate__BeginInvoke(
        CommonMultiItemGetDlg_OnClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CB4D44 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB4D44 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void CommonMultiItemGetDlg_OnClickDelegate__EndInvoke(
        CommonMultiItemGetDlg_OnClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void CommonMultiItemGetDlg_OnClickDelegate__Invoke(
        CommonMultiItemGetDlg_OnClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}