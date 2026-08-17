void MultipleViewComponent___ctor(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomControl_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *v5; // x20
  System_Collections_Generic_List_long__o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  System_Collections_Generic_List_int__o *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596B7B2 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor___91653704);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&MyRoomControl_TypeInfo);
    byte_596B7B2 = 1;
  }
  v4 = MyRoomControl_TypeInfo;
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, method, v2);
    v4 = MyRoomControl_TypeInfo;
  }
  v5 = (System_Collections_Generic_IEnumerable_T__o *)sub_2213B20(
                                                        long___TypeInfo,
                                                        (unsigned int)v4->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v6 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor_71744332(
    v6,
    v5,
    (const MethodInfo_446BB4C *)Method_System_Collections_Generic_List_long___ctor___91653704);
  this->fields.listSelectedUsrSvtId = v6;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listSelectedUsrSvtId,
    (int32_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Collections_Generic_IEnumerable_T__o *)sub_2213B20(
                                                         int___TypeInfo,
                                                         (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
  v14 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v14,
    v13,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  this->fields.listSelectedImageLimitCount = v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listSelectedImageLimitCount,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MultipleViewComponent__CancelMultipleViewWindow(
        MultipleViewComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_596B7A2 & 1) == 0 )
  {
    sub_2213A60(&Method_MultipleViewComponent_EndCancelButton__);
    sub_2213A60(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_596B7A2 = 1;
  }
  this->fields.cancelCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cancelCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_2213CCC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
  MultipleViewComponent_RequestCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_MultipleViewComponent_EndCancelButton__,
    v11);
  MultipleViewComponent__StatusRequest(this, v10, v12);
}


void MultipleViewComponent__CloseSvtDetail(
        MultipleViewComponent_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo_47A29F8 *v17; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v19; // x20

  if ( (byte_596B7A7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__);
    sub_2213A60(&MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
    byte_596B7A7 = 1;
  }
  v8 = sub_2213CCC(MultipleViewComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_6;
  *(_DWORD *)(v8 + 16) = questId;
  *(_QWORD *)(v8 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 24), (int32_t)this, v11, v12, v13, v14, v15, v16);
  v17 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  *(_BYTE *)(v8 + 32) = isNeedSort;
  Instance = SingletonMonoBehaviour_object___get_Instance(v17);
  v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v8,
    Method_MultipleViewComponent___c__DisplayClass40_0__CloseSvtDetail_b__0__,
    0);
  if ( !Instance )
LABEL_6:
    sub_2213CDC(v9, v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v19, 0);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__EndCancelButton(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v6; // x20
  MultipleViewListViewManager_CallbackFunc_o *v7; // x21
  System_Action_o *cancelCallback; // x0

  if ( (byte_596B7A3 & 1) == 0 )
  {
    sub_2213A60(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_MultipleViewComponent_OnClickServant__);
    byte_596B7A3 = 1;
  }
  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0),
          v6 = this->fields.multipleViewManager,
          v7 = (MultipleViewListViewManager_CallbackFunc_o *)sub_2213CCC(MultipleViewListViewManager_CallbackFunc_TypeInfo),
          MultipleViewListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_MultipleViewComponent_OnClickServant__,
            0),
          !v6) )
    {
LABEL_11:
      sub_2213CDC(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode(v6, 2, v7, 0);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isRequest);
  multipleViewManager = (MultipleViewListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
  if ( !multipleViewManager )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)multipleViewManager, 0, 0);
  cancelCallback = this->fields.cancelCallback;
  if ( cancelCallback )
    ActionExtensions__Call(cancelCallback, 0);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__EndClickTabChoice(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0),
          (multipleViewManager = this->fields.multipleViewManager) == 0) )
    {
      sub_2213CDC(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_40164904(multipleViewManager, 2, 0);
  }
  MultipleViewComponent__SetModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__EndClickTabLock(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0),
          (multipleViewManager = this->fields.multipleViewManager) == 0) )
    {
      sub_2213CDC(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_40164904(multipleViewManager, 2, 0);
  }
  MultipleViewComponent__SetModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__EndClickTabNormal(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0),
          (multipleViewManager = this->fields.multipleViewManager) == 0) )
    {
      sub_2213CDC(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_40164904(multipleViewManager, 2, 0);
  }
  MultipleViewComponent__SetModeTabKind(this, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__EndClickTabPush(MultipleViewComponent_o *this, bool isRequest, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0

  if ( isRequest )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager
      || (MultipleViewListViewManager__ModifyList(multipleViewManager, 0, 0),
          (multipleViewManager = this->fields.multipleViewManager) == 0) )
    {
      sub_2213CDC(multipleViewManager, isRequest);
    }
    MultipleViewListViewManager__SetMode_40164904(multipleViewManager, 2, 0);
  }
  MultipleViewComponent__SetModeTabKind(this, 3, method);
}


void MultipleViewComponent__EndStatusSync(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_requedstCallback; // x0
  struct MultipleViewComponent_RequestCallbackFunc_o *v9; // x19
  struct MultipleViewComponent_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0;
    sub_2213A04(p_requedstCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      1,
      v9->fields.method);
  }
}


void MultipleViewComponent__EndePushRequest(
        MultipleViewComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  MultipleViewListViewManager_o *v5; // x20
  MultipleViewListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_596B7A6 & 1) == 0 )
  {
    sub_2213A60(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_MultipleViewComponent_OnClickServant__);
    byte_596B7A6 = 1;
  }
  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__UpdateDisplayState(multipleViewManager, 1, 0),
        (multipleViewManager = this->fields.multipleViewManager) == 0)
    || (MultipleViewListViewManager__ModifyItem(multipleViewManager, this->fields.usrSvtId, 0),
        v5 = this->fields.multipleViewManager,
        v6 = (MultipleViewListViewManager_CallbackFunc_o *)sub_2213CCC(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0),
        !v5) )
  {
    sub_2213CDC(multipleViewManager, result);
  }
  MultipleViewListViewManager__SetMode(v5, 2, v6, 0);
}


int32_t MultipleViewComponent__GetCurrentSelectIndex(MultipleViewComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  int32_t v4; // w20

  if ( (byte_596B7B0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Item__);
    byte_596B7B0 = 1;
  }
  listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
  if ( !listSelectedUsrSvtId )
LABEL_8:
    sub_2213CDC(listSelectedUsrSvtId, method);
  v4 = 0;
  while ( v4 < listSelectedUsrSvtId->fields._size )
  {
    if ( System_Collections_Generic_List_long___get_Item(
           listSelectedUsrSvtId,
           v4,
           (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__) < 1 )
      return v4;
    listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
    ++v4;
    if ( !listSelectedUsrSvtId )
      goto LABEL_8;
  }
  return -1;
}


int64_t MultipleViewComponent__GetLatestSelectedUsrSvtId(MultipleViewComponent_o *this, const MethodInfo *method)
{
  System_String_o *String; // x19
  bool IsNullOrEmpty; // w8
  int64_t v4; // x0
  int64_t result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596B7A0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9581/*"MultipleViewSelectedUsrSvtId"*/);
    byte_596B7A0 = 1;
  }
  result = 0;
  String = UnityEngine_PlayerPrefs__GetString(
             (System_String_o *)StringLiteral_9581/*"MultipleViewSelectedUsrSvtId"*/,
             **(System_String_o ***)(qword_5984390 + 184),
             0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String, 0);
  v4 = -1;
  if ( !IsNullOrEmpty )
  {
    result = -1;
    if ( System_Int64__TryParse(String, &result, 0) )
      return result;
    else
      return -1;
  }
  return v4;
}


System_String_o *MultipleViewComponent__GetTitleMessage(MultipleViewComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x19
  int32_t CurrentSelectIndex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_596B7B1 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7503/*"HEADER_MSG_MULTIPLE_SERVANT_"*/);
    sub_2213A60(&StringLiteral_7504/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/);
    byte_596B7B1 = 1;
  }
  CurrentSelectIndex = MultipleViewComponent__GetCurrentSelectIndex(this, method);
  if ( CurrentSelectIndex < 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
    return LocalizationManager__Get((System_String_o *)StringLiteral_7504/*"HEADER_MSG_MULTIPLE_SERVANT_SELECTED"*/, 0);
  }
  else
  {
    v5 = System_Int32__ToString((int32_t)&CurrentSelectIndex, 0);
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_7503/*"HEADER_MSG_MULTIPLE_SERVANT_"*/, v5, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    return LocalizationManager__Get(v8, 0);
  }
}


void MultipleViewComponent__Init(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  UILabel_o *infoLb; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (MultipleViewListViewManager__DestroyList(multipleViewManager, 0),
        infoLb = this->fields.infoLb,
        this->fields.state = 0,
        multipleViewManager = (MultipleViewListViewManager_o *)MultipleViewComponent__GetTitleMessage(this, v5),
        !infoLb) )
  {
    sub_2213CDC(multipleViewManager, method);
  }
  UILabel__set_text(infoLb, (System_String_o *)multipleViewManager, 0);
  MultipleViewComponent__SetModeTabKind(this, 0, v6);
}


bool MultipleViewComponent__IsEnableAddSelectSvt(MultipleViewComponent_o *this, const MethodInfo *method)
{
  return MultipleViewComponent__GetCurrentSelectIndex(this, method) >= 0;
}


void MultipleViewComponent__OnClickChoiceTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_596B7AA & 1) == 0 )
  {
    sub_2213A60(&Method_MultipleViewComponent_EndClickTabChoice__);
    sub_2213A60(&Method_MultipleViewComponent_OnClickChoiceTabButton__);
    sub_2213A60(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_596B7AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MultipleViewComponent_OnClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_2213CCC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabChoice__,
          v8);
        MultipleViewComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_2213CCC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabChoice__,
        v11);
      MultipleViewComponent__StatusRequest(this, v10, v12);
    }
    MultipleViewComponent__SetModeTabKind(this, 2, v5);
  }
}


void MultipleViewComponent__OnClickDecide(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x0
  MultipleViewComponent_o *Item; // x0
  const MethodInfo *v10; // x2
  MyRoomControl_o *myRoomControl; // x20
  System_Collections_Generic_List_int__o *listSelectedImageLimitCount; // x8
  System_Int64_array *v13; // x19

  if ( (byte_596B7AF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_2213A60(&Method_MultipleViewComponent_OnClickDecide__);
    byte_596B7AF = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.tabModeKind && MultipleViewComponent__GetCurrentSelectIndex(this, method) < 0 )
    {
      v5 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_MultipleViewComponent_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      this->fields.state = 4;
      if ( !listSelectedUsrSvtId )
        goto LABEL_17;
      Item = (MultipleViewComponent_o *)System_Collections_Generic_List_long___get_Item(
                                          listSelectedUsrSvtId,
                                          listSelectedUsrSvtId->fields._size - 1,
                                          (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__);
      MultipleViewComponent__SetLatestSelectedUsrSvtId(Item, (int64_t)Item, v10);
      listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
      if ( !listSelectedUsrSvtId
        || (myRoomControl = this->fields.myRoomControl,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_long___ToArray(
                                                                                listSelectedUsrSvtId,
                                                                                (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__),
            (listSelectedImageLimitCount = this->fields.listSelectedImageLimitCount) == 0)
        || (v13 = (System_Int64_array *)listSelectedUsrSvtId,
            listSelectedUsrSvtId = (System_Collections_Generic_List_long__o *)System_Collections_Generic_List_int___ToArray(
                                                                                listSelectedImageLimitCount,
                                                                                (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
            !myRoomControl) )
      {
LABEL_17:
        sub_2213CDC(listSelectedUsrSvtId, v7);
      }
      MyRoomControl__OpenMultipleView(myRoomControl, v13, (System_Int32_array *)listSelectedUsrSvtId, 0);
    }
    else
    {
      v3 = Method_MultipleViewComponent_OnClickDecide__;
      if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_2213A78(Method_MultipleViewComponent_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
    }
  }
}


void MultipleViewComponent__OnClickLockTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  MultipleViewComponent_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  MultipleViewComponent_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_596B7A9 & 1) == 0 )
  {
    sub_2213A60(&Method_MultipleViewComponent_EndClickTabLock__);
    sub_2213A60(&Method_MultipleViewComponent_OnClickLockTabButton__);
    sub_2213A60(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_596B7A9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickLockTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MultipleViewComponent_OnClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_2213CCC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
        MultipleViewComponent_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MultipleViewComponent_EndClickTabLock__,
          v8);
        MultipleViewComponent__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_2213CCC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
      MultipleViewComponent_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndClickTabLock__,
        v11);
      MultipleViewComponent__StatusRequest(this, v10, v12);
    }
    MultipleViewComponent__SetModeTabKind(this, 1, v5);
  }
}


void MultipleViewComponent__OnClickNormalTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MultipleViewComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_596B7A8 & 1) == 0 )
  {
    sub_2213A60(&Method_MultipleViewComponent_EndClickTabNormal__);
    sub_2213A60(&Method_MultipleViewComponent_OnClickNormalTabButton__);
    sub_2213A60(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_596B7A8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickNormalTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MultipleViewComponent_OnClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_2213CCC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabNormal__,
      v6);
    MultipleViewComponent__StatusRequest(this, v5, v7);
  }
}


void MultipleViewComponent__OnClickPushTabButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MultipleViewComponent_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_596B7AB & 1) == 0 )
  {
    sub_2213A60(&Method_MultipleViewComponent_EndClickTabPush__);
    sub_2213A60(&Method_MultipleViewComponent_OnClickPushTabButton__);
    sub_2213A60(&MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    byte_596B7AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_MultipleViewComponent_OnClickPushTabButton__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickPushTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MultipleViewComponent_OnClickPushTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (MultipleViewComponent_RequestCallbackFunc_o *)sub_2213CCC(MultipleViewComponent_RequestCallbackFunc_TypeInfo);
    MultipleViewComponent_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_MultipleViewComponent_EndClickTabPush__,
      v6);
    MultipleViewComponent__StatusRequest(this, v5, v7);
  }
}


void MultipleViewComponent__OnClickScaleChange(MultipleViewComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MultipleViewListViewManager_o *multipleViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_596B7AE & 1) == 0 )
  {
    sub_2213A60(&Method_MultipleViewComponent_OnClickScaleChange__);
    byte_596B7AE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MultipleViewComponent_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MultipleViewComponent_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MultipleViewComponent_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      sub_2213CDC(0, v5);
    MultipleViewListViewManager__ChangeIconScale(multipleViewManager, 0);
    MultipleViewComponent__UpdateScaleChangeIconSprite(this, v7);
  }
}


void MultipleViewComponent__OnClickServant(
        MultipleViewComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 multipleViewManager; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  MultipleViewListViewItem_o *Item; // x1
  MultipleViewListViewItem_o **v23; // x21
  __int64 v24; // x2
  __int64 v25; // x8
  __int128 v26; // q1
  int32_t tabModeKind; // w8
  _BYTE *v28; // x8
  System_Reflection_MethodBase_o *v29; // x0
  int32_t v30; // w1
  CommonUI_o *v31; // x20
  UserServantEntity_o *userSvtEntity; // x21
  ServantStatusDialog_ResultDelegate_o *v33; // x22
  _BYTE *v34; // x8
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  System_Predicate_long__o *v38; // x22
  int32_t Index; // w0
  const MethodInfo *v40; // x1
  int32_t v41; // w21
  System_Reflection_MethodBase_o *v42; // x0
  MultipleViewListViewManager_o *v43; // x20
  const MethodInfo *v44; // x1
  UILabel_o *infoLb; // x20
  System_Reflection_MethodBase_o *v46; // x0
  const MethodInfo *v47; // x2
  int64_t v48; // x22
  struct UserServantEntity_o *v49; // x8
  __int128 v50; // q0
  __int128 v51; // q1
  int v52; // w8
  __int64 v53; // x1
  __int64 v54; // x21
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_Reflection_MethodBase_o *v61; // x0
  const MethodInfo *v62; // x1
  __int64 v63; // x2
  __int64 v64; // x8
  __int64 v65; // x8
  __int64 v66; // x8
  __int128 v67; // q0
  __int128 v68; // q1
  MyRoomControl_o *myRoomControl; // x19
  int v70; // w8
  int64_t v71; // x20
  System_Action_bool__int__o *v72; // x22
  Il2CppObject *Entity; // x25
  __int64 v74; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v75; // x22
  Il2CppClass *klass; // x23
  void *monitor; // x24
  Il2CppObject *v78; // x26
  __int64 v79; // x28
  __int64 v80; // x1
  __int64 v81; // x2
  ServantOverwriteStatus_o *OverwriteStatus; // x27
  System_String_o *v83; // x22
  System_String_o *v84; // x23
  __int64 v85; // x2
  System_Object_array *v86; // x24
  int32_t v87; // w28
  __int64 v88; // x28
  System_String_o *ClassName; // x28
  int32_t v90; // w0
  System_String_o *Name; // x25
  System_String_o *RarityType; // x25
  System_String_o *v93; // x25
  MultipleViewListViewItem_o *v94; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v95; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_o *v97; // x21
  System_String_o *v98; // x21
  System_String_o *v99; // x23
  System_String_o *v100; // x24
  Il2CppObject *Instance; // x25
  CommonConfirmDialog_ClickDelegate_o *v102; // x26
  __int64 v103; // x2
  MultipleViewListViewManager_o *v104; // x20
  MultipleViewListViewManager_CallbackFunc_o *v105; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+80h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+A0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  if ( (byte_596B7A4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__int__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MultipleViewComponent_CloseSvtDetail__);
    sub_2213A60(&Method_MultipleViewComponent_OnClickServant__);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&System_Predicate_long__TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__);
    sub_2213A60(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__);
    sub_2213A60(&MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
    sub_2213A60(&Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__);
    sub_2213A60(&MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
    sub_2213A60(&StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_596B7A4 = 1;
  }
  v7 = sub_2213CCC(MultipleViewComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_93;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( n < 0 )
  {
    Item = 0;
  }
  else
  {
    multipleViewManager = (__int64)this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_93;
    Item = MultipleViewListViewManager__GetItem((MultipleViewListViewManager_o *)multipleViewManager, n, 0);
  }
  *(_QWORD *)(v7 + 24) = Item;
  v23 = (MultipleViewListViewItem_o **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)Item, v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_93;
  v25 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 120LL);
  if ( !v25 )
    goto LABEL_93;
  v26 = *(_OWORD *)(v25 + 32);
  *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
  *(_OWORD *)&v109.fields.fakeValue = v26;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v24);
  v108 = v109;
  this->fields.usrSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v108, 0);
  if ( kind == 1 )
  {
    multipleViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( *v23 )
    {
      v31 = (CommonUI_o *)multipleViewManager;
      userSvtEntity = (*v23)->fields.userSvtEntity;
      v33 = (ServantStatusDialog_ResultDelegate_o *)sub_2213CCC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v33,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_CloseSvtDetail__,
        0);
      if ( v31 )
      {
        CommonUI__OpenServantStatusDialog_37384068(v31, 0, userSvtEntity, v33, 0, 0, 0);
        return;
      }
    }
    goto LABEL_93;
  }
  if ( kind != 2 )
    return;
  tabModeKind = this->fields.tabModeKind;
  multipleViewManager = (__int64)*v23;
  switch ( tabModeKind )
  {
    case 3:
      if ( !multipleViewManager )
        goto LABEL_93;
      if ( *(_QWORD *)(multipleViewManager + 120) )
      {
        if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)(multipleViewManager + 120), 0) )
          goto LABEL_33;
        multipleViewManager = (__int64)*v23;
        if ( !*v23 )
          goto LABEL_93;
      }
      if ( !MultipleViewListViewItem__get_IsHerioneReave((MultipleViewListViewItem_o *)multipleViewManager, v9) )
      {
        v46 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_MultipleViewComponent_OnClickServant__);
        OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0, 0);
        multipleViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
        if ( !multipleViewManager )
          goto LABEL_93;
        v48 = *(_QWORD *)(multipleViewManager + 128);
        if ( !v48 )
          goto LABEL_54;
        if ( !*v23 )
          goto LABEL_93;
        v49 = (*v23)->fields.userSvtEntity;
        if ( !v49 )
          goto LABEL_93;
        v50 = *(_OWORD *)&v49->fields.id.fields.currentCryptoKey;
        v51 = *(_OWORD *)&v49->fields.id.fields.fakeValue;
        v52 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v109.fields.currentCryptoKey = v50;
        *(_OWORD *)&v109.fields.fakeValue = v51;
        if ( !v52 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v47);
        v107 = v109;
        if ( v48 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v107, 0) )
        {
LABEL_54:
          MultipleViewComponent__PushRequest(this, *v23, v47);
          goto LABEL_90;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v53, v47);
        multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( multipleViewManager )
        {
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager,
                     v48,
                     (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          multipleViewManager = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
          if ( Entity )
          {
            v75 = (DataMasterBase_TMaster__TEntity__PKType__o *)multipleViewManager;
            klass = Entity[5].klass;
            monitor = Entity[5].monitor;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v74);
            *(_QWORD *)&v110.fields.currentCryptoKey = klass;
            *(_QWORD *)&v110.fields.fakeValue = monitor;
            multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v110, 0);
            if ( v75 )
            {
              v78 = DataMasterBase_object__object__int___GetEntity(
                      v75,
                      multipleViewManager,
                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              multipleViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Entity, 0, 0);
              if ( *v23 )
              {
                v79 = multipleViewManager;
                multipleViewManager = (__int64)(*v23)->fields.userSvtEntity;
                if ( multipleViewManager )
                {
                  OverwriteStatus = UserServantEntity__GetOverwriteStatus(
                                      (UserServantEntity_o *)multipleViewManager,
                                      0,
                                      0);
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v80, v81);
                  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
                  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
                  multipleViewManager = sub_2213B20(object___TypeInfo, 6);
                  if ( v79 )
                  {
                    v86 = (System_Object_array *)multipleViewManager;
                    v87 = *(_DWORD *)(v79 + 24);
                    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v9, v85);
                    multipleViewManager = (__int64)Rarity__getRarityType(v87, 0);
                    if ( v86 )
                    {
                      v88 = multipleViewManager;
                      sub_1FFE8F8(v86, multipleViewManager);
                      multipleViewManager = sub_1FFE2C4(v86, 0, v88);
                      if ( v78 )
                      {
                        ClassName = ServantEntity__getClassName((ServantEntity_o *)v78, 0);
                        sub_1FFE8F8(v86, ClassName);
                        sub_1FFE2C4(v86, 1, ClassName);
                        v90 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                0);
                        Name = ServantEntity__getName((ServantEntity_o *)v78, v90, -1, 1, 0, 0);
                        sub_1FFE8F8(v86, Name);
                        multipleViewManager = sub_1FFE2C4(v86, 2, Name);
                        if ( OverwriteStatus )
                        {
                          RarityType = Rarity__getRarityType(OverwriteStatus->fields._Rarity_k__BackingField, 0);
                          sub_1FFE8F8(v86, RarityType);
                          multipleViewManager = sub_1FFE2C4(v86, 3, RarityType);
                          if ( *v23 )
                          {
                            multipleViewManager = (__int64)(*v23)->fields.servantEntity;
                            if ( multipleViewManager )
                            {
                              v93 = ServantEntity__getClassName((ServantEntity_o *)multipleViewManager, 0);
                              sub_1FFE8F8(v86, v93);
                              multipleViewManager = sub_1FFE2C4(v86, 4, v93);
                              v94 = *v23;
                              if ( *v23 )
                              {
                                v95 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v94->fields.userSvtEntity;
                                if ( v95 )
                                {
                                  servantEntity = v94->fields.servantEntity;
                                  multipleViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                          v95[6],
                                                          0);
                                  if ( servantEntity )
                                  {
                                    v97 = ServantEntity__getName(servantEntity, multipleViewManager, -1, 1, 0, 0);
                                    sub_1FFE8F8(v86, v97);
                                    sub_1FFE2C4(v86, 5, v97);
                                    v98 = System_String__Format_75698016(v84, v86, 0);
                                    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                                    v100 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                    v102 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                    CommonConfirmDialog_ClickDelegate___ctor(
                                      v102,
                                      (Il2CppObject *)v7,
                                      Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__0__,
                                      0);
                                    multipleViewManager = (__int64)BalanceConfig_TypeInfo;
                                    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v103);
                                    if ( Instance )
                                    {
                                      CommonUI__OpenConfirmDialog_37373584(
                                        (CommonUI_o *)Instance,
                                        v83,
                                        v98,
                                        v99,
                                        v100,
                                        v102,
                                        BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                                        BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
                                        15.0,
                                        700,
                                        0,
                                        480,
                                        -162.5,
                                        0,
                                        0,
                                        240,
                                        0,
                                        0);
                                      goto LABEL_90;
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
                }
              }
            }
          }
        }
LABEL_93:
        sub_2213CDC(multipleViewManager, v9);
      }
LABEL_33:
      v29 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_MultipleViewComponent_OnClickServant__);
      v30 = 2;
LABEL_34:
      OverwriteAssetSoundName__PlaySystemSe(v29, v30, 0, 0);
      goto LABEL_90;
    case 2:
      if ( !multipleViewManager )
        goto LABEL_93;
      v34 = Method_MultipleViewComponent_OnClickServant__;
      *(_BYTE *)(multipleViewManager + 170) ^= 1u;
      if ( (v34[83] & 2) != 0 )
        v34 = (_BYTE *)sub_2213A78(v34);
      v29 = (System_Reflection_MethodBase_o *)sub_2213A44(v34, *((_QWORD *)v34 + 4));
      v30 = 0;
      goto LABEL_34;
    case 1:
      if ( !multipleViewManager )
        goto LABEL_93;
      v28 = Method_MultipleViewComponent_OnClickServant__;
      *(_BYTE *)(multipleViewManager + 169) ^= 1u;
      if ( (v28[83] & 2) != 0 )
        v28 = (_BYTE *)sub_2213A78(v28);
      v29 = (System_Reflection_MethodBase_o *)sub_2213A44(v28, *((_QWORD *)v28 + 4));
      v30 = 11;
      goto LABEL_34;
  }
  if ( !multipleViewManager )
    goto LABEL_93;
  if ( MultipleViewListViewItem__get_IsCanNotSelect((MultipleViewListViewItem_o *)multipleViewManager, v9) )
    goto LABEL_37;
  listSelectedUsrSvtId = this->fields.listSelectedUsrSvtId;
  v38 = (System_Predicate_long__o *)sub_2213CCC(System_Predicate_long__TypeInfo);
  System_Predicate_long____ctor(
    v38,
    (Il2CppObject *)v7,
    Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__2__,
    0);
  if ( !listSelectedUsrSvtId )
    goto LABEL_93;
  Index = System_Collections_Generic_List_long___FindIndex(
            listSelectedUsrSvtId,
            (System_Predicate_T__o *)v38,
            (const MethodInfo_446CAC8 *)Method_System_Collections_Generic_List_long__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v41 = Index;
    v42 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_MultipleViewComponent_OnClickServant__);
    OverwriteAssetSoundName__PlaySystemSe(v42, 1, 0, 0);
    multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
    if ( multipleViewManager )
    {
      System_Collections_Generic_List_long___set_Item(
        (System_Collections_Generic_List_long__o *)multipleViewManager,
        v41,
        0,
        (const MethodInfo_446BFFC *)Method_System_Collections_Generic_List_long__set_Item__);
      multipleViewManager = (__int64)this->fields.listSelectedImageLimitCount;
      if ( multipleViewManager )
      {
        System_Collections_Generic_List_int___set_Item(
          (System_Collections_Generic_List_int__o *)multipleViewManager,
          v41,
          0,
          (const MethodInfo_4466FCC *)Method_System_Collections_Generic_List_int__set_Item__);
        multipleViewManager = (__int64)this->fields.listSelectedUsrSvtId;
        if ( multipleViewManager )
        {
          v43 = this->fields.multipleViewManager;
          multipleViewManager = (__int64)System_Collections_Generic_List_long___ToArray(
                                           (System_Collections_Generic_List_long__o *)multipleViewManager,
                                           (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v43 )
          {
            MultipleViewListViewManager__ModifyItem_40161848(v43, (System_Int64_array *)multipleViewManager, 0);
            MultipleViewComponent__SetConfirmButton(this, v44);
            goto LABEL_45;
          }
        }
      }
    }
    goto LABEL_93;
  }
  if ( (MultipleViewComponent__GetCurrentSelectIndex(this, v40) & 0x80000000) == 0 )
  {
    v54 = sub_2213CCC(MultipleViewComponent___c__DisplayClass37_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v54, 0);
    if ( v54 )
    {
      *(_QWORD *)(v54 + 24) = v7;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 24), v7, v55, v56, v57, v58, v59, v60);
      v61 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_MultipleViewComponent_OnClickServant__);
      OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0, 0);
      multipleViewManager = MultipleViewComponent__GetCurrentSelectIndex(this, v62);
      v64 = *(_QWORD *)(v54 + 24);
      *(_DWORD *)(v54 + 16) = multipleViewManager;
      if ( v64 )
      {
        v65 = *(_QWORD *)(v64 + 24);
        if ( v65 )
        {
          v66 = *(_QWORD *)(v65 + 120);
          if ( v66 )
          {
            v67 = *(_OWORD *)(v66 + 16);
            v68 = *(_OWORD *)(v66 + 32);
            myRoomControl = this->fields.myRoomControl;
            v70 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v109.fields.currentCryptoKey = v67;
            *(_OWORD *)&v109.fields.fakeValue = v68;
            if ( !v70 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v63);
            v106 = v109;
            v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v106, 0);
            v72 = (System_Action_bool__int__o *)sub_2213CCC(System_Action_bool__int__TypeInfo);
            System_Action_bool__int____ctor(
              v72,
              (Il2CppObject *)v54,
              Method_MultipleViewComponent___c__DisplayClass37_1__OnClickServant_b__3__,
              0);
            if ( myRoomControl )
            {
              MyRoomControl__OpenSelectImageLimit(myRoomControl, 24, v71, v72, *(_DWORD *)(v54 + 16), 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_93;
  }
LABEL_37:
  v35 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_MultipleViewComponent_OnClickServant__);
  OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0);
LABEL_45:
  infoLb = this->fields.infoLb;
  multipleViewManager = (__int64)MultipleViewComponent__GetTitleMessage(this, v36);
  if ( !infoLb )
    goto LABEL_93;
  UILabel__set_text(infoLb, (System_String_o *)multipleViewManager, 0);
LABEL_90:
  v104 = this->fields.multipleViewManager;
  v105 = (MultipleViewListViewManager_CallbackFunc_o *)sub_2213CCC(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(
    v105,
    (Il2CppObject *)this,
    (intptr_t)Method_MultipleViewComponent_OnClickServant__,
    0);
  if ( !v104 )
    goto LABEL_93;
  MultipleViewListViewManager__SetMode(v104, 2, v105, 0);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__Open(MultipleViewComponent_o *this, bool isResetSelected, const MethodInfo *method)
{
  MyRoomControl_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *v6; // x20
  System_Collections_Generic_List_long__o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_T__o *v14; // x20
  System_Collections_Generic_List_int__o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int64_t gameObject; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_GameObject_o *v30; // x20
  MultipleViewComponent_o *v31; // x0
  const MethodInfo *v32; // x1
  int64_t v33; // x20
  MultipleViewListViewManager_o *multipleViewManager; // x21
  const MethodInfo *v35; // x1
  MultipleViewListViewManager_o *v36; // x20
  MultipleViewListViewManager_CallbackFunc_o *v37; // x21
  const MethodInfo *v38; // x1

  if ( (byte_596B79F & 1) == 0 )
  {
    sub_2213A60(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor___91653704);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&Method_MultipleViewComponent_OnClickServant__);
    sub_2213A60(&MyRoomControl_TypeInfo);
    byte_596B79F = 1;
  }
  if ( isResetSelected )
  {
    v5 = MyRoomControl_TypeInfo;
    if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, isResetSelected, method);
      v5 = MyRoomControl_TypeInfo;
    }
    v6 = (System_Collections_Generic_IEnumerable_T__o *)sub_2213B20(
                                                          long___TypeInfo,
                                                          (unsigned int)v5->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_71744332(
      v7,
      v6,
      (const MethodInfo_446BB4C *)Method_System_Collections_Generic_List_long___ctor___91653704);
    this->fields.listSelectedUsrSvtId = v7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.listSelectedUsrSvtId,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = (System_Collections_Generic_IEnumerable_T__o *)sub_2213B20(
                                                           int___TypeInfo,
                                                           (unsigned int)MyRoomControl_TypeInfo->static_fields->MULTIPLE_VIEW_SELECTED_MAX);
    v15 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71723804(
      v15,
      v14,
      (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
    this->fields.listSelectedImageLimitCount = v15;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.listSelectedImageLimitCount,
      (int32_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  MultipleViewComponent__Init(this, (const MethodInfo *)isResetSelected);
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  this->fields.cancelCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cancelCallback, 0, v24, v25, v26, v27, v28, v29);
  gameObject = (int64_t)this->fields.titleInfo;
  if ( !gameObject )
    goto LABEL_15;
  TitleInfoControl__changeTitleInfo_46863248((TitleInfoControl_o *)gameObject, 1, 64, 0, 0);
  gameObject = (int64_t)this->fields.bgTxtSprite;
  if ( !gameObject )
    goto LABEL_15;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  gameObject = BgTxtManager__IsActiveBgTxt(0);
  if ( !v30 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v30, gameObject & 1, 0);
  gameObject = MultipleViewComponent__GetLatestSelectedUsrSvtId(v31, v32);
  if ( !this->fields.listSelectedUsrSvtId )
    goto LABEL_15;
  v33 = gameObject;
  multipleViewManager = this->fields.multipleViewManager;
  gameObject = (int64_t)System_Collections_Generic_List_long___ToArray(
                          this->fields.listSelectedUsrSvtId,
                          (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !multipleViewManager
    || (MultipleViewListViewManager__CreateList(multipleViewManager, v33, (System_Int64_array *)gameObject, 0),
        MultipleViewComponent__UpdateScaleChangeIconSprite(this, v35),
        v36 = this->fields.multipleViewManager,
        v37 = (MultipleViewListViewManager_CallbackFunc_o *)sub_2213CCC(MultipleViewListViewManager_CallbackFunc_TypeInfo),
        MultipleViewListViewManager_CallbackFunc___ctor(
          v37,
          (Il2CppObject *)this,
          (intptr_t)Method_MultipleViewComponent_OnClickServant__,
          0),
        !v36) )
  {
LABEL_15:
    sub_2213CDC(gameObject, v23);
  }
  MultipleViewListViewManager__SetMode(v36, 2, v37, 0);
  this->fields.state = 2;
  MultipleViewComponent__SetConfirmButton(this, v38);
}


void MultipleViewComponent__PushRequest(
        MultipleViewComponent_o *this,
        MultipleViewListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596B7A5 & 1) == 0 )
  {
    sub_2213A60(&Method_MultipleViewComponent_EndePushRequest__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B7A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_MultipleViewComponent_EndePushRequest__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_2213CDC(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectItem->fields.userSvtEntity, 0);
}


void MultipleViewComponent__SetConfirmButton(MultipleViewComponent_o *this, const MethodInfo *method)
{
  UIButtonColor_o *confirmBtnColor; // x0
  UIButtonColor_c *klass; // x8
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !this->fields.tabModeKind && MultipleViewComponent__GetCurrentSelectIndex(this, method) < 0 )
  {
    confirmBtnColor = this->fields.confirmBtnColor;
    if ( confirmBtnColor )
    {
      v6.fields.r = 1.0;
      v6.fields.g = 1.0;
      v6.fields.b = 1.0;
      v6.fields.a = 1.0;
      UIButtonColor__set_defaultColor(confirmBtnColor, v6, 0);
      confirmBtnColor = this->fields.confirmBtnColor;
      if ( confirmBtnColor )
      {
        ((void (__fastcall *)(UIButtonColor_o *, __int64, const MethodInfo *))confirmBtnColor->klass->vtable._5_set_isEnabled.methodPtr)(
          confirmBtnColor,
          1,
          confirmBtnColor->klass->vtable._5_set_isEnabled.method);
        confirmBtnColor = this->fields.confirmBtnColor;
        if ( confirmBtnColor )
        {
          klass = confirmBtnColor->klass;
          goto LABEL_7;
        }
      }
    }
LABEL_12:
    sub_2213CDC(confirmBtnColor, method);
  }
  confirmBtnColor = this->fields.confirmBtnColor;
  if ( !confirmBtnColor )
    goto LABEL_12;
  v5.fields.r = 0.5;
  v5.fields.g = 0.5;
  v5.fields.b = 0.5;
  v5.fields.a = 1.0;
  UIButtonColor__set_defaultColor(confirmBtnColor, v5, 0);
  confirmBtnColor = this->fields.confirmBtnColor;
  if ( !confirmBtnColor )
    goto LABEL_12;
  ((void (__fastcall *)(UIButtonColor_o *, _QWORD, const MethodInfo *))confirmBtnColor->klass->vtable._5_set_isEnabled.methodPtr)(
    confirmBtnColor,
    0,
    confirmBtnColor->klass->vtable._5_set_isEnabled.method);
  confirmBtnColor = this->fields.confirmBtnColor;
  if ( !confirmBtnColor )
    goto LABEL_12;
  klass = confirmBtnColor->klass;
LABEL_7:
  klass->vtable._14_SetState.methodPtr();
}


void MultipleViewComponent__SetLatestSelectedUsrSvtId(
        MultipleViewComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  int64_t v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = usrSvtId;
  if ( (byte_596B7A1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9581/*"MultipleViewSelectedUsrSvtId"*/);
    byte_596B7A1 = 1;
  }
  v3 = System_Int64__ToString((int64_t)&v4, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_9581/*"MultipleViewSelectedUsrSvtId"*/, v3, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent__SetModeTabKind(MultipleViewComponent_o *this, int32_t modeKind, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  System_String_o **v6; // x8
  System_String_o **v7; // x8
  System_String_o **v8; // x8
  __int64 *v9; // x8
  __int64 v10; // x2
  UILabel_o *infoLb; // x21
  __int64 *v12; // x8
  UILabel_o *v13; // x21
  char v14; // w8
  const MethodInfo *v15; // x1

  if ( (byte_596B7AC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_596B7AC = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 0, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    v6 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_18434/*"button_select_unreg"*/ : &StringLiteral_18433/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v6, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    v7 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_18419/*"button_alllock_reg"*/ : &StringLiteral_18420/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v7, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 2, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    v8 = (System_String_o **)(this->fields.tabModeKind == 2 ? &StringLiteral_18417/*"button_allchoice_reg"*/ : &StringLiteral_18418/*"button_allchoice_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 3, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabBoxCollider;
    if ( !normalTabButton )
      goto LABEL_53;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)normalTabButton, this->fields.tabModeKind != 3, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabSprite;
    if ( !normalTabButton )
      goto LABEL_53;
    if ( this->fields.tabModeKind == 3 )
      v9 = &StringLiteral_18431/*"button_push_reg"*/;
    else
      v9 = &StringLiteral_18432/*"button_push_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v9, 0);
    if ( modeKind > 1 )
    {
      if ( modeKind == 2 )
      {
        infoLb = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        v12 = &StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_47;
      }
      if ( modeKind == 3 )
      {
        infoLb = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        v12 = &StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
        goto LABEL_47;
      }
    }
    else
    {
      if ( !modeKind )
      {
        v13 = this->fields.infoLb;
        normalTabButton = (UnityEngine_Behaviour_o *)MultipleViewComponent__GetTitleMessage(
                                                       this,
                                                       *(const MethodInfo **)&modeKind);
        if ( !v13 )
          goto LABEL_53;
        UILabel__set_text(v13, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_53;
        v14 = 0;
        goto LABEL_50;
      }
      if ( modeKind == 1 )
      {
        infoLb = this->fields.infoLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind, v10);
        v12 = &StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
LABEL_47:
        normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v12, 0);
        if ( !infoLb )
          goto LABEL_53;
        UILabel__set_text(infoLb, (System_String_o *)normalTabButton, 0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( !normalTabButton )
          goto LABEL_53;
        v14 = 1;
LABEL_50:
        BYTE4(normalTabButton[15].fields.m_CachedPtr) = v14;
LABEL_51:
        MultipleViewListViewManager__UpdateDisplayState(
          (MultipleViewListViewManager_o *)normalTabButton,
          modeKind == 3,
          0);
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
        if ( normalTabButton )
        {
          MultipleViewListViewManager__SetMode_40164904((MultipleViewListViewManager_o *)normalTabButton, 2, 0);
          MultipleViewComponent__SetConfirmButton(this, v15);
          return;
        }
LABEL_53:
        sub_2213CDC(normalTabButton, *(_QWORD *)&modeKind);
      }
    }
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.multipleViewManager;
    if ( !normalTabButton )
      goto LABEL_53;
    goto LABEL_51;
  }
}


void MultipleViewComponent__StatusRequest(
        MultipleViewComponent_o *this,
        MultipleViewComponent_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t tabModeKind; // w8
  MultipleViewListViewManager_o *multipleViewManager; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w4
  bool v19; // w5
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Int64_array *v29; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596B7AD & 1) == 0 )
  {
    sub_2213A60(&Method_MultipleViewComponent_EndStatusSync__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596B7AD = 1;
  }
  tabModeKind = this->fields.tabModeKind;
  unlockList = 0;
  lockList = 0;
  v29 = 0;
  choiceList = 0;
  if ( tabModeKind == 2 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_21;
    if ( MultipleViewListViewManager__GetSwapChoiceList(multipleViewManager, &choiceList, &v29, 0) )
    {
      this->fields.requedstCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27, v28);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v26,
                                                               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v17 = v29;
        v16 = choiceList;
        v18 = 0;
        v19 = 1;
        goto LABEL_17;
      }
LABEL_21:
      sub_2213CDC(multipleViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    multipleViewManager = this->fields.multipleViewManager;
    if ( !multipleViewManager )
      goto LABEL_21;
    if ( MultipleViewListViewManager__GetSwapLockList(multipleViewManager, &lockList, &unlockList, 0) )
    {
      this->fields.requedstCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_MultipleViewComponent_EndStatusSync__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
      multipleViewManager = (MultipleViewListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v13,
                                                               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( multipleViewManager )
      {
        v17 = unlockList;
        v16 = lockList;
        v18 = 1;
        v19 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)multipleViewManager, v16, v17, 0, v18, v19, 0);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void MultipleViewComponent__UpdateScaleChangeIconSprite(MultipleViewComponent_o *this, const MethodInfo *method)
{
  MultipleViewListViewManager_o *multipleViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  multipleViewManager = this->fields.multipleViewManager;
  if ( !multipleViewManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        multipleViewManager = (MultipleViewListViewManager_o *)MultipleViewListViewManager__GetScaleButtonSpriteName(
                                                                 multipleViewManager,
                                                                 0),
        !scaleChangeTabSprite) )
  {
    sub_2213CDC(multipleViewManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)multipleViewManager, 0);
}


void MultipleViewComponent_RequestCallbackFunc___ctor(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20025D0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2002588;
}


System_IAsyncResult_o *MultipleViewComponent_RequestCallbackFunc__BeginInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void MultipleViewComponent_RequestCallbackFunc__EndInvoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void MultipleViewComponent_RequestCallbackFunc__Invoke(
        MultipleViewComponent_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void MultipleViewComponent___c__DisplayClass37_0___ctor(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__0(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596B7B3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__);
    byte_596B7B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_MultipleViewComponent___c__DisplayClass37_0__OnClickServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, _9__1, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__1(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  MultipleViewComponent__PushRequest(this->fields.__4__this, this->fields.item, v2);
}


bool MultipleViewComponent___c__DisplayClass37_0___OnClickServant_b__2(
        MultipleViewComponent___c__DisplayClass37_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  MultipleViewComponent___c__DisplayClass37_0_o *v4; // x20
  struct MultipleViewListViewItem_o *item; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v7; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_596B7B4 & 1) == 0 )
  {
    this = (MultipleViewComponent___c__DisplayClass37_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B7B4 = 1;
  }
  item = v4->fields.item;
  if ( !item || (userSvtEntity = item->fields.userSvtEntity) == 0 )
    sub_2213CDC(this, id);
  v7 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, id, method);
  v9 = v10;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v9, 0) == id;
}


void MultipleViewComponent___c__DisplayClass37_1___ctor(
        MultipleViewComponent___c__DisplayClass37_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void MultipleViewComponent___c__DisplayClass37_1___OnClickServant_b__3(
        MultipleViewComponent___c__DisplayClass37_1_o *this,
        bool result,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  MultipleViewComponent___c__DisplayClass37_1_o *v6; // x19
  struct MultipleViewComponent___c__DisplayClass37_0_o *CS___8__locals1; // x9
  struct MultipleViewComponent_o *_4__this; // x8
  struct MultipleViewListViewItem_o *item; // x9
  struct UserServantEntity_o *userSvtEntity; // x9
  __int128 v11; // q1
  System_Collections_Generic_List_long__o *listSelectedUsrSvtId; // x21
  int32_t selectIndex; // w22
  struct MultipleViewComponent___c__DisplayClass37_0_o *v14; // x8
  struct MultipleViewComponent_o *v15; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v16; // x8
  struct MultipleViewComponent_o *v17; // x8
  MultipleViewListViewManager_o *multipleViewManager; // x20
  struct MultipleViewComponent___c__DisplayClass37_0_o *v19; // x8
  struct MultipleViewComponent___c__DisplayClass37_0_o *v20; // x8
  Il2CppObject *v21; // x21
  MultipleViewListViewManager_o *klass; // x20
  MultipleViewListViewManager_CallbackFunc_o *v23; // x22
  struct MultipleViewComponent___c__DisplayClass37_0_o *v24; // x8
  UILabel_o *v25; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_596B7B5 & 1) == 0 )
  {
    sub_2213A60(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__set_Item__);
    sub_2213A60(&Method_MultipleViewComponent_OnClickServant__);
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B7B5 = 1;
  }
  if ( result )
  {
    CS___8__locals1 = v6->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      goto LABEL_28;
    _4__this = CS___8__locals1->fields.__4__this;
    if ( !_4__this )
      goto LABEL_28;
    item = CS___8__locals1->fields.item;
    if ( !item )
      goto LABEL_28;
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_28;
    v11 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
    listSelectedUsrSvtId = _4__this->fields.listSelectedUsrSvtId;
    selectIndex = v6->fields.selectIndex;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v11;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
        result,
        *(_QWORD *)&imageLimitCount);
    v26 = v27;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                              &v26,
                                                              0);
    if ( !listSelectedUsrSvtId )
      goto LABEL_28;
    System_Collections_Generic_List_long___set_Item(
      listSelectedUsrSvtId,
      selectIndex,
      (int64_t)this,
      (const MethodInfo_446BFFC *)Method_System_Collections_Generic_List_long__set_Item__);
    v14 = v6->fields.CS___8__locals1;
    if ( !v14 )
      goto LABEL_28;
    v15 = v14->fields.__4__this;
    if ( !v15 )
      goto LABEL_28;
    this = (MultipleViewComponent___c__DisplayClass37_1_o *)v15->fields.listSelectedImageLimitCount;
    if ( !this )
      goto LABEL_28;
    System_Collections_Generic_List_int___set_Item(
      (System_Collections_Generic_List_int__o *)this,
      v6->fields.selectIndex,
      imageLimitCount,
      (const MethodInfo_4466FCC *)Method_System_Collections_Generic_List_int__set_Item__);
    v16 = v6->fields.CS___8__locals1;
    if ( !v16
      || (v17 = v16->fields.__4__this) == 0
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v17->fields.listSelectedUsrSvtId) == 0
      || (multipleViewManager = v17->fields.multipleViewManager,
          this = (MultipleViewComponent___c__DisplayClass37_1_o *)System_Collections_Generic_List_long___ToArray(
                                                                    (System_Collections_Generic_List_long__o *)this,
                                                                    (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__),
          !multipleViewManager)
      || (MultipleViewListViewManager__ModifyItem_40161848(multipleViewManager, (System_Int64_array *)this, 0),
          (v19 = v6->fields.CS___8__locals1) == 0)
      || (this = (MultipleViewComponent___c__DisplayClass37_1_o *)v19->fields.__4__this) == 0 )
    {
LABEL_28:
      sub_2213CDC(this, result);
    }
    MultipleViewComponent__SetConfirmButton((MultipleViewComponent_o *)this, (const MethodInfo *)result);
  }
  v20 = v6->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_28;
  v21 = (Il2CppObject *)v20->fields.__4__this;
  if ( !v21 )
    goto LABEL_28;
  klass = (MultipleViewListViewManager_o *)v21[4].klass;
  v23 = (MultipleViewListViewManager_CallbackFunc_o *)sub_2213CCC(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(v23, v21, (intptr_t)Method_MultipleViewComponent_OnClickServant__, 0);
  if ( !klass )
    goto LABEL_28;
  MultipleViewListViewManager__SetMode(klass, 2, v23, 0);
  v24 = v6->fields.CS___8__locals1;
  if ( !v24 )
    goto LABEL_28;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)v24->fields.__4__this;
  if ( !this )
    goto LABEL_28;
  v25 = (UILabel_o *)this[1].fields.CS___8__locals1;
  this = (MultipleViewComponent___c__DisplayClass37_1_o *)MultipleViewComponent__GetTitleMessage(
                                                            (MultipleViewComponent_o *)this,
                                                            (const MethodInfo *)result);
  if ( !v25 )
    goto LABEL_28;
  UILabel__set_text(v25, (System_String_o *)this, 0);
}


void MultipleViewComponent___c__DisplayClass40_0___ctor(
        MultipleViewComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MultipleViewComponent___c__DisplayClass40_0___CloseSvtDetail_b__0(
        MultipleViewComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  MultipleViewComponent_o *_4__this; // x0
  struct MultipleViewComponent_o *v4; // x8
  struct MultipleViewComponent_o *v5; // x8
  Il2CppObject *v6; // x20
  MultipleViewListViewManager_o *klass; // x19
  MultipleViewListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_596B7B6 & 1) == 0 )
  {
    sub_2213A60(&MultipleViewListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_MultipleViewComponent_OnClickServant__);
    sub_2213A60(&StringLiteral_3576/*"CLICK_BACK"*/);
    byte_596B7B6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( this->fields.questId >= 1 )
  {
    if ( _4__this )
    {
      MultipleViewComponent__Init(_4__this, method);
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        _4__this = (MultipleViewComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)_4__this,
                                                0);
        if ( _4__this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
          v4 = this->fields.__4__this;
          if ( v4 )
          {
            _4__this = (MultipleViewComponent_o *)v4->fields.myRoomFsm;
            if ( _4__this )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)_4__this, (System_String_o *)StringLiteral_3576/*"CLICK_BACK"*/, 0);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_2213CDC(_4__this, method);
  }
  if ( !_4__this || !_4__this->fields.multipleViewManager )
    goto LABEL_19;
  MultipleViewListViewManager__ModifyItem(_4__this->fields.multipleViewManager, _4__this->fields.usrSvtId, 0);
  if ( this->fields.isNeedSort )
  {
    v5 = this->fields.__4__this;
    if ( !v5 )
      goto LABEL_19;
    _4__this = (MultipleViewComponent_o *)v5->fields.multipleViewManager;
    if ( !_4__this )
      goto LABEL_19;
    ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0);
  }
  v6 = (Il2CppObject *)this->fields.__4__this;
  if ( !v6 )
    goto LABEL_19;
  klass = (MultipleViewListViewManager_o *)v6[4].klass;
  v8 = (MultipleViewListViewManager_CallbackFunc_o *)sub_2213CCC(MultipleViewListViewManager_CallbackFunc_TypeInfo);
  MultipleViewListViewManager_CallbackFunc___ctor(v8, v6, (intptr_t)Method_MultipleViewComponent_OnClickServant__, 0);
  if ( !klass )
    goto LABEL_19;
  MultipleViewListViewManager__SetMode(klass, 2, v8, 0);
}