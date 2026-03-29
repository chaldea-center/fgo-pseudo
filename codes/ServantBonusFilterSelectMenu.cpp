void ServantBonusFilterSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2B8D7 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C93AD4(&StringLiteral_12820/*"ServantBonusFilterSelect1"*/);
    byte_4D2B8D7 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
  ListViewSort___ctor_44521036(v1, (System_String_o *)StringLiteral_12820/*"ServantBonusFilterSelect1"*/, 3, 0, 0);
  ServantBonusFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantBonusFilterSelectMenu_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantBonusFilterSelectMenu___ctor(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B8D6 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B8D6 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantBonusFilterSelectMenu__Callback(
        ServantBonusFilterSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantBonusFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void ServantBonusFilterSelectMenu__Close(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantBonusFilterSelectMenu__Close_33719968(this, 0, v2);
}


void ServantBonusFilterSelectMenu__Close_33719968(
        ServantBonusFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2B8CA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_EndClose__);
    byte_4D2B8CA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantBonusFilterSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ServantBonusFilterSelectMenu__EndClose(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void ServantBonusFilterSelectMenu__EndOpen(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t ServantBonusFilterSelectMenu__GetMaxIndividualFilter(const MethodInfo *method)
{
  ServantBonusFilterSelectMenu_c *v1; // x0
  System_Int32_array *Instance; // x0
  __int64 v3; // x1
  System_Int32_array *v4; // x19

  if ( (byte_4D2B8C8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B8C8 = 1;
  }
  v1 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v1 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  if ( v1->static_fields->maxIndividualFilter <= 0 )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
      || (Instance = ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0)) == 0 )
    {
      sub_1C93D2C(Instance, v3);
    }
    v4 = Instance;
    v1 = ServantBonusFilterSelectMenu_TypeInfo;
    if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      v1 = ServantBonusFilterSelectMenu_TypeInfo;
    }
    v1->static_fields->maxIndividualFilter = LODWORD(v4->max_length) + 20;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  return v1->static_fields->maxIndividualFilter;
}


void ServantBonusFilterSelectMenu__Init(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantBonusFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantBonusFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4D2B8C7 & 1) == 0 )
  {
    sub_1C93AD4(&ServantBonusFilterSelectMenu_TypeInfo);
    byte_4D2B8C7 = 1;
  }
  v2 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v2 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1C93D2C(0, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0);
}


void ServantBonusFilterSelectMenu__MoveButton(
        ServantBonusFilterSelectMenu_o *this,
        UICommonButton_o *button,
        int32_t x,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  if ( !button
    || (this = (ServantBonusFilterSelectMenu_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)button,
                                                   0)) == 0
    || (this = (ServantBonusFilterSelectMenu_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (ServantBonusFilterSelectMenu_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)button,
                                                    0)) == 0)
    || (this = (ServantBonusFilterSelectMenu_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0)) == 0 )
  {
    sub_1C93D2C(this, button);
  }
  v7.fields.x = (float)x;
  v7.fields.y = localPosition.fields.y;
  v7.fields.z = localPosition.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v7, 0);
}


void ServantBonusFilterSelectMenu__OnClickAllDisplay(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D2B8D2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__);
    byte_4D2B8D2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      if ( ListViewSort__GetFilter(operationSortInfo, 40, 0) )
        return;
      operationSortInfo = this->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        ListViewSort__SetFilter(operationSortInfo, 40, 1, 0);
        ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
        return;
      }
    }
    sub_1C93D2C(operationSortInfo, v5);
  }
}


void ServantBonusFilterSelectMenu__OnClickCancel(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2B8CD & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_OnClickCancel__);
    byte_4D2B8CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantBonusFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantBonusFilterSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ServantBonusFilterSelectMenu__Callback(this, 0, v5);
  }
}


void ServantBonusFilterSelectMenu__OnClickClear(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D2B8CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_OnClickClear__);
    byte_4D2B8CE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantBonusFilterSelectMenu_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 18, 0, 0), (operationSortInfo = this->fields.operationSortInfo) == 0) )
    {
      sub_1C93D2C(operationSortInfo, v5);
    }
    ListViewSort__SetFilter(operationSortInfo, 19, 0, 0);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void ServantBonusFilterSelectMenu__OnClickDecide(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIProgressBar_o *verticalScrollBar; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  struct UIScrollView_o *v7; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  float value; // s0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  struct System_Int32_array *eventIdList; // x21
  il2cpp_array_size_t max_length; // x8
  System_String_o *v14; // x20
  unsigned __int64 v15; // x22
  int32_t v16; // w26
  Il2CppObject *v17; // x0
  ListViewSort_o *v18; // x20
  const MethodInfo *v19; // x2
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B8CC & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_OnClickDecide__);
    sub_1C93AD4(&StringLiteral_3210/*"BonusFilterEventId"*/);
    sub_1C93AD4(&StringLiteral_809/*","*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B8CC = 1;
  }
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    verticalScrollBar = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
    if ( ((unsigned __int8)verticalScrollBar & 1) != 0 )
    {
      v7 = this->fields.scrollView;
      if ( !v7 )
        goto LABEL_30;
      verticalScrollBar = v7->fields.verticalScrollBar;
      if ( !verticalScrollBar )
        goto LABEL_30;
      operationSortInfo = this->fields.operationSortInfo;
      value = UIProgressBar__get_value(verticalScrollBar, 0);
      if ( !operationSortInfo )
        goto LABEL_30;
      operationSortInfo->fields.scrollBarValue = value;
    }
    ServantBonusFilterSelectMenu__SetButtonEnable(this, 0, v6);
    this->fields.state = 3;
    v10 = Method_ServantBonusFilterSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C93AEC(Method_ServantBonusFilterSelectMenu_OnClickDecide__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
    eventIdList = this->fields.eventIdList;
    if ( eventIdList )
    {
      max_length = eventIdList->max_length;
      v14 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)max_length >= 1 )
      {
        v15 = 0;
        while ( 1 )
        {
          if ( v15 >= (unsigned int)max_length )
            sub_1C93D34(verticalScrollBar);
          if ( !v14 )
            break;
          v16 = eventIdList->m_Items[v15];
          if ( v14->fields._stringLength >= 1 )
            v14 = System_String__Concat_64425724(v14, (System_String_o *)StringLiteral_809/*","*/, 0);
          v20 = v16;
          v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
          verticalScrollBar = (UIProgressBar_o *)System_String__Concat((Il2CppObject *)v14, v17, 0);
          LODWORD(max_length) = eventIdList->max_length;
          ++v15;
          v14 = (System_String_o *)verticalScrollBar;
          if ( (__int64)v15 >= (int)max_length )
            goto LABEL_21;
        }
LABEL_30:
        sub_1C93D2C(verticalScrollBar, v5);
      }
LABEL_21:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3210/*"BonusFilterEventId"*/, v14, 0);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      verticalScrollBar = (UIProgressBar_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !verticalScrollBar )
        goto LABEL_30;
      v18 = this->fields.operationSortInfo;
      verticalScrollBar = (UIProgressBar_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                               (ServantBonusFilterEquipComponent_o *)verticalScrollBar,
                                               v5);
      if ( !v18 )
        goto LABEL_30;
      ListViewSort__SetFilter(v18, 41, ((unsigned __int8)verticalScrollBar & 1) == 0, 0);
      verticalScrollBar = (UIProgressBar_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !verticalScrollBar )
        goto LABEL_30;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)verticalScrollBar, v5);
    }
    verticalScrollBar = (UIProgressBar_o *)this->fields.baseSortInfo;
    if ( !verticalScrollBar )
      goto LABEL_30;
    ListViewSort__Set((ListViewSort_o *)verticalScrollBar, this->fields.operationSortInfo, 0);
    ServantBonusFilterSelectMenu__Callback(this, 1, v19);
  }
}


void ServantBonusFilterSelectMenu__OnClickFilter1(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D2B8D0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_OnClickFilter1__);
    byte_4D2B8D0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickFilter1__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickFilter1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantBonusFilterSelectMenu_OnClickFilter1__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(0, v5);
    ListViewSort__SwitchFilter(operationSortInfo, 18, 0);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void ServantBonusFilterSelectMenu__OnClickFilter2(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D2B8D1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_OnClickFilter2__);
    byte_4D2B8D1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickFilter2__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickFilter2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantBonusFilterSelectMenu_OnClickFilter2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(0, v5);
    ListViewSort__SwitchFilter(operationSortInfo, 19, 0);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void ServantBonusFilterSelectMenu__OnClickInitialize(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4D2B8CF & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_OnClickInitialize__);
    byte_4D2B8CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantBonusFilterSelectMenu_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( this->fields.isServantBonusFilterEnable )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter(operationSortInfo, 18, 1, 0);
    }
    if ( !this->fields.isServantEquipBonusFilterEnable )
    {
LABEL_12:
      ServantBonusFilterSelectMenu__SetButtonSelect(this, v5);
      return;
    }
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__SetFilter(operationSortInfo, 19, 1, 0);
      goto LABEL_12;
    }
LABEL_14:
    sub_1C93D2C(operationSortInfo, v5);
  }
}


void ServantBonusFilterSelectMenu__OnClickMaxOnlyDisplay(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D2B8D3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__);
    byte_4D2B8D3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_11;
    if ( ListViewSort__GetFilter(operationSortInfo, 40, 0) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        ListViewSort__SetFilter(operationSortInfo, 40, 0, 0);
        ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
        return;
      }
LABEL_11:
      sub_1C93D2C(operationSortInfo, v5);
    }
  }
}


void ServantBonusFilterSelectMenu__OnClickResetIndividual(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0

  if ( (byte_4D2B8D4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__);
    byte_4D2B8D4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    servantBonusFilterEquipComponent = this->fields.servantBonusFilterEquipComponent;
    if ( !servantBonusFilterEquipComponent )
      sub_1C93D2C(0, v5);
    ServantBonusFilterEquipComponent__ResetIndividualFilter(servantBonusFilterEquipComponent, v5);
  }
}


void ServantBonusFilterSelectMenu__Open(
        ServantBonusFilterSelectMenu_o *this,
        int32_t kind,
        bool isServantBonusFilterEnable,
        bool isServantEquipBonusFilterEnable,
        System_Int32_array *equipBonusFilterEventIds,
        ListViewSort_o *sort,
        ServantBonusFilterSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  char v15; // w2
  char v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ServantBonusFilterSelectMenu_c *v21; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v23; // x1
  const MethodInfo *v24; // x1
  ListViewSort_o *baseSortInfo; // x0
  ListViewSort_o *v26; // x21
  ListViewSort_o *v27; // x22
  char v28; // w2
  char v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *filter1Label; // x21
  UILabel_o *filter2Label; // x21
  char v38; // w2
  char v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  UILabel_o *allFilterTitleLabel; // x20
  UILabel_o *allFilterExplanationLabel; // x20
  UILabel_o *allFilterClearLabel; // x20
  UILabel_o *allFilterInitializeLabel; // x20
  UILabel_o *maxFilterTitleLabel; // x20
  UILabel_o *maxFilterExplanationLabel; // x20
  UILabel_o *maxFilterClearLabel; // x20
  UILabel_o *maxFilterInitializeLabel; // x20
  UILabel_o *individualFilterTitleLabel; // x20
  UILabel_o *individualFilterExplanationLabel; // x20
  UILabel_o *individualFilterInitializeLabel; // x20
  const MethodInfo *v55; // x2
  int v56; // w20
  UnityEngine_GameObject_o *gameObject; // x21
  ServantBonusFilterEquipComponent_c *v58; // x8
  UILabel_o *titleLabel; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *initializeLabel; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v64; // x2
  UnityEngine_Object_o *v65; // x20
  struct UIScrollView_o *v66; // x9
  struct ListViewSort_o *v67; // x8
  System_Action_o *v68; // x20

  if ( (byte_4D2B8C9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantBonusFilterEquipComponent_TypeInfo);
    sub_1C93AD4(&Method_ServantBonusFilterSelectMenu_EndOpen__);
    sub_1C93AD4(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C93AD4(&StringLiteral_11972/*"SERVANT_SORT_RESET"*/);
    sub_1C93AD4(&StringLiteral_11814/*"SERVANT_SORT_EXPLANATION4"*/);
    sub_1C93AD4(&StringLiteral_11976/*"SERVANT_SORT_TITLE4"*/);
    sub_1C93AD4(&StringLiteral_11815/*"SERVANT_SORT_EXPLANATION5"*/);
    sub_1C93AD4(&StringLiteral_11975/*"SERVANT_SORT_TITLE3"*/);
    sub_1C93AD4(&StringLiteral_11806/*"SERVANT_SORT_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_11810/*"SERVANT_SORT_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_11793/*"SERVANT_SORT_ALL_DISPLAY"*/);
    sub_1C93AD4(&StringLiteral_11971/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/);
    sub_1C93AD4(&StringLiteral_11813/*"SERVANT_SORT_EXPLANATION3"*/);
    sub_1C93AD4(&StringLiteral_11854/*"SERVANT_SORT_FILTER_KIND_20"*/);
    sub_1C93AD4(&StringLiteral_11807/*"SERVANT_SORT_CLEAR"*/);
    sub_1C93AD4(&StringLiteral_11978/*"SERVANT_SORT_TITLE6"*/);
    sub_1C93AD4(&StringLiteral_11852/*"SERVANT_SORT_FILTER_KIND_19"*/);
    sub_1C93AD4(&StringLiteral_11977/*"SERVANT_SORT_TITLE5"*/);
    sub_1C93AD4(&StringLiteral_11940/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/);
    byte_4D2B8C9 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
    this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      isServantBonusFilterEnable,
      isServantEquipBonusFilterEnable,
      (System_String_o *)equipBonusFilterEventIds,
      (int32_t)sort,
      (int64_t)callback,
      (System_String_o *)method);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)sort,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    else
    {
      v21 = ServantBonusFilterSelectMenu_TypeInfo;
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
        v21 = ServantBonusFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v21->static_fields->commonServantSortInfo;
      v23 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo, (int32_t)v23, v15, v16, v17, v18, v19, v20);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_57;
      ListViewSort__Load(baseSortInfo, 0);
    }
    v26 = this->fields.baseSortInfo;
    v27 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
    ListViewSort___ctor_44521760(v27, v26, 0);
    this->fields.operationSortInfo = v27;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.operationSortInfo,
      (int32_t)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( baseSortInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
      decideLabel = this->fields.decideLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11810/*"SERVANT_SORT_DECIDE"*/, 0);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0);
        cancelLabel = this->fields.cancelLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11806/*"SERVANT_SORT_CANCEL"*/, 0);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0);
          filter1Label = this->fields.filter1Label;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11852/*"SERVANT_SORT_FILTER_KIND_19"*/, 0);
          if ( filter1Label )
          {
            UILabel__set_text(filter1Label, (System_String_o *)baseSortInfo, 0);
            filter2Label = this->fields.filter2Label;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11854/*"SERVANT_SORT_FILTER_KIND_20"*/, 0);
            if ( filter2Label )
            {
              UILabel__set_text(filter2Label, (System_String_o *)baseSortInfo, 0);
              this->fields.eventIdList = equipBonusFilterEventIds;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&this->fields.eventIdList,
                (int32_t)equipBonusFilterEventIds,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              if ( this->fields.isServantEquipBonusFilterEnable )
              {
                allFilterTitleLabel = this->fields.allFilterTitleLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11976/*"SERVANT_SORT_TITLE4"*/, 0);
                if ( !allFilterTitleLabel )
                  goto LABEL_57;
                UILabel__set_text(allFilterTitleLabel, (System_String_o *)baseSortInfo, 0);
                allFilterExplanationLabel = this->fields.allFilterExplanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SERVANT_SORT_EXPLANATION3"*/, 0);
                if ( !allFilterExplanationLabel )
                  goto LABEL_57;
                UILabel__set_text(allFilterExplanationLabel, (System_String_o *)baseSortInfo, 0);
                allFilterClearLabel = this->fields.allFilterClearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_SORT_CLEAR"*/, 0);
                if ( !allFilterClearLabel )
                  goto LABEL_57;
                UILabel__set_text(allFilterClearLabel, (System_String_o *)baseSortInfo, 0);
                allFilterInitializeLabel = this->fields.allFilterInitializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11972/*"SERVANT_SORT_RESET"*/, 0);
                if ( !allFilterInitializeLabel )
                  goto LABEL_57;
                UILabel__set_text(allFilterInitializeLabel, (System_String_o *)baseSortInfo, 0);
                maxFilterTitleLabel = this->fields.maxFilterTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11977/*"SERVANT_SORT_TITLE5"*/, 0);
                if ( !maxFilterTitleLabel )
                  goto LABEL_57;
                UILabel__set_text(maxFilterTitleLabel, (System_String_o *)baseSortInfo, 0);
                maxFilterExplanationLabel = this->fields.maxFilterExplanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11814/*"SERVANT_SORT_EXPLANATION4"*/, 0);
                if ( !maxFilterExplanationLabel )
                  goto LABEL_57;
                UILabel__set_text(maxFilterExplanationLabel, (System_String_o *)baseSortInfo, 0);
                maxFilterClearLabel = this->fields.maxFilterClearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11793/*"SERVANT_SORT_ALL_DISPLAY"*/, 0);
                if ( !maxFilterClearLabel )
                  goto LABEL_57;
                UILabel__set_text(maxFilterClearLabel, (System_String_o *)baseSortInfo, 0);
                maxFilterInitializeLabel = this->fields.maxFilterInitializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11971/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/, 0);
                if ( !maxFilterInitializeLabel )
                  goto LABEL_57;
                UILabel__set_text(maxFilterInitializeLabel, (System_String_o *)baseSortInfo, 0);
                individualFilterTitleLabel = this->fields.individualFilterTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SERVANT_SORT_TITLE6"*/, 0);
                if ( !individualFilterTitleLabel )
                  goto LABEL_57;
                UILabel__set_text(individualFilterTitleLabel, (System_String_o *)baseSortInfo, 0);
                individualFilterExplanationLabel = this->fields.individualFilterExplanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11815/*"SERVANT_SORT_EXPLANATION5"*/, 0);
                if ( !individualFilterExplanationLabel )
                  goto LABEL_57;
                UILabel__set_text(individualFilterExplanationLabel, (System_String_o *)baseSortInfo, 0);
                individualFilterInitializeLabel = this->fields.individualFilterInitializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/, 0);
                if ( !individualFilterInitializeLabel )
                  goto LABEL_57;
                UILabel__set_text(individualFilterInitializeLabel, (System_String_o *)baseSortInfo, 0);
                baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                if ( !baseSortInfo )
                  goto LABEL_57;
                baseSortInfo = (ListViewSort_o *)ServantBonusFilterEquipComponent__CreateList(
                                                   (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                   this->fields.eventIdList,
                                                   v55);
                if ( !this->fields.individualFilterInitializeButton )
                  goto LABEL_57;
                v56 = (int)baseSortInfo;
                gameObject = UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)this->fields.individualFilterInitializeButton,
                               0);
                v58 = ServantBonusFilterEquipComponent_TypeInfo;
                if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
                  v58 = ServantBonusFilterEquipComponent_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(
                  gameObject,
                  14.0 - (float)(v58->static_fields->POS_Y_INTERVAL * (float)(v56 - 1)),
                  0);
                baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                if ( !baseSortInfo )
                  goto LABEL_57;
                ServantBonusFilterEquipComponent__SetInitButtonSelect(
                  (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                  v24);
              }
              else
              {
                titleLabel = this->fields.titleLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11975/*"SERVANT_SORT_TITLE3"*/, 0);
                if ( !titleLabel )
                  goto LABEL_57;
                UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
                explanationLabel = this->fields.explanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SERVANT_SORT_EXPLANATION3"*/, 0);
                if ( !explanationLabel )
                  goto LABEL_57;
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_SORT_CLEAR"*/, 0);
                if ( !clearLabel )
                  goto LABEL_57;
                UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0);
                initializeLabel = this->fields.initializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11972/*"SERVANT_SORT_RESET"*/, 0);
                if ( !initializeLabel )
                  goto LABEL_57;
                UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0);
              }
              scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
              {
                baseSortInfo = (ListViewSort_o *)this->fields.scrollView;
                if ( !baseSortInfo )
                  goto LABEL_57;
                ((void (__fastcall *)(ListViewSort_o *, __int64, Il2CppClass *))baseSortInfo->klass[1]._1.element_class)(
                  baseSortInfo,
                  1,
                  baseSortInfo->klass[1]._1.castClass);
              }
              ServantBonusFilterSelectMenu__SetButtonSelect(this, v24);
              ServantBonusFilterSelectMenu__SetButtonEnable(this, 1, v64);
              v65 = (UnityEngine_Object_o *)this->fields.scrollView;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              baseSortInfo = (ListViewSort_o *)UnityEngine_Object__op_Inequality(v65, 0, 0);
              if ( ((unsigned __int8)baseSortInfo & 1) == 0 )
                goto LABEL_56;
              v66 = this->fields.scrollView;
              if ( v66 )
              {
                v67 = this->fields.baseSortInfo;
                if ( v67 )
                {
                  baseSortInfo = (ListViewSort_o *)v66->fields.verticalScrollBar;
                  if ( baseSortInfo )
                  {
                    UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v67->fields.scrollBarValue, 0);
LABEL_56:
                    this->fields.state = 1;
                    v68 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                    System_Action___ctor(v68, (Il2CppObject *)this, Method_ServantBonusFilterSelectMenu_EndOpen__, 0);
                    BaseDialog__Open((BaseDialog_o *)this, v68, 0, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_1C93D2C(baseSortInfo, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantBonusFilterSelectMenu__SetButtonEnable(
        ServantBonusFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w21
  ServantBonusFilterSelectMenu_o *v7; // x0
  const MethodInfo *v8; // x3
  UICommonButton_o *filter1Button; // x1
  const MethodInfo *v10; // x2

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_26;
  v5 = isEnable;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.filter1Button;
  if ( !decideButton )
    goto LABEL_26;
  decideButton = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)decideButton,
                                              0);
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)decideButton,
    this->fields.isServantBonusFilterEnable,
    0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.filter2Button;
  if ( !decideButton )
    goto LABEL_26;
  decideButton = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)decideButton,
                                              0);
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)decideButton,
    this->fields.isServantEquipBonusFilterEnable,
    0);
  if ( this->fields.isServantBonusFilterEnable )
  {
    if ( !this->fields.isServantEquipBonusFilterEnable )
    {
      filter1Button = this->fields.filter1Button;
LABEL_12:
      ServantBonusFilterSelectMenu__MoveButton(v7, filter1Button, this->fields.button1PositionHorizontal, v8);
    }
  }
  else if ( this->fields.isServantEquipBonusFilterEnable )
  {
    filter1Button = this->fields.filter2Button;
    goto LABEL_12;
  }
  decideButton = (UnityEngine_Behaviour_o *)this->fields.filter1Button;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.filter2Button;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  if ( !this->fields.isServantEquipBonusFilterEnable )
  {
    decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton;
    if ( decideButton )
    {
      UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
      decideButton = (UnityEngine_Behaviour_o *)this->fields.initializeButton;
      if ( decideButton )
        goto LABEL_25;
    }
LABEL_26:
    sub_1C93D2C(decideButton, isEnable);
  }
  decideButton = (UnityEngine_Behaviour_o *)this->fields.allFilterClearButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.allFilterInitializeButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.maxFilterClearButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.maxFilterInitializeButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.servantBonusFilterEquipComponent;
  if ( !decideButton )
    goto LABEL_26;
  ServantBonusFilterEquipComponent__SetButtonEnable((ServantBonusFilterEquipComponent_o *)decideButton, isEnable, v10);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.individualFilterInitializeButton;
  if ( !decideButton )
    goto LABEL_26;
LABEL_25:
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
}


void ServantBonusFilterSelectMenu__SetButtonSelect(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *filter1Button; // x0
  UISprite_o *v4; // x20
  System_String_o **v5; // x8
  UISprite_o *v6; // x20
  __int64 *v7; // x8
  UISprite_o *v8; // x20
  System_String_o **v9; // x8
  ListViewSort_o *operationSortInfo; // x8
  UISprite_o *v11; // x19
  __int64 *v12; // x8

  if ( (byte_4D2B8CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C93AD4(&StringLiteral_17570/*"btn_bg_04"*/);
    sub_1C93AD4(&StringLiteral_17569/*"btn_bg_03"*/);
    byte_4D2B8CB = 1;
  }
  filter1Button = (UnityEngine_Component_o *)this->fields.filter1Button;
  if ( !filter1Button )
    goto LABEL_30;
  filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                               filter1Button,
                                               (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v4 = (UISprite_o *)filter1Button;
  filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 18, 0);
  if ( !v4 )
    goto LABEL_30;
  v5 = (System_String_o **)(((unsigned __int8)filter1Button & 1) != 0 ? &StringLiteral_17569/*"btn_bg_03"*/ : &StringLiteral_17570/*"btn_bg_04"*/);
  UISprite__set_spriteName(v4, *v5, 0);
  filter1Button = (UnityEngine_Component_o *)this->fields.filter2Button;
  if ( !filter1Button )
    goto LABEL_30;
  filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                               filter1Button,
                                               (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v6 = (UISprite_o *)filter1Button;
  filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 19, 0);
  if ( !v6 )
    goto LABEL_30;
  if ( ((unsigned __int8)filter1Button & 1) != 0 )
    v7 = &StringLiteral_17569/*"btn_bg_03"*/;
  else
    v7 = &StringLiteral_17570/*"btn_bg_04"*/;
  UISprite__set_spriteName(v6, (System_String_o *)*v7, 0);
  if ( this->fields.isServantEquipBonusFilterEnable )
  {
    filter1Button = (UnityEngine_Component_o *)this->fields.maxFilterClearButton;
    if ( filter1Button )
    {
      filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   filter1Button,
                                                   (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( this->fields.operationSortInfo )
      {
        v8 = (UISprite_o *)filter1Button;
        filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 40, 0);
        if ( v8 )
        {
          v9 = (System_String_o **)(((unsigned __int8)filter1Button & 1) != 0
                                  ? &StringLiteral_17569/*"btn_bg_03"*/
                                  : &StringLiteral_17570/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0);
          filter1Button = (UnityEngine_Component_o *)this->fields.maxFilterInitializeButton;
          if ( filter1Button )
          {
            filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         filter1Button,
                                                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
            operationSortInfo = this->fields.operationSortInfo;
            if ( operationSortInfo )
            {
              v11 = (UISprite_o *)filter1Button;
              filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(operationSortInfo, 40, 0);
              if ( v11 )
              {
                if ( ((unsigned __int8)filter1Button & 1) != 0 )
                  v12 = &StringLiteral_17570/*"btn_bg_04"*/;
                else
                  v12 = &StringLiteral_17569/*"btn_bg_03"*/;
                UISprite__set_spriteName(v11, (System_String_o *)*v12, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C93D2C(filter1Button, method);
  }
}


void ServantBonusFilterSelectMenu__add_callbackFunc(
        ServantBonusFilterSelectMenu_o *this,
        ServantBonusFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantBonusFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantBonusFilterSelectMenu_o *v10; // x0
  ServantBonusFilterSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D2B8C5 & 1) == 0 )
  {
    sub_1C93AD4(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4D2B8C5 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantBonusFilterSelectMenu_CallbackFunc_c *)v7->klass != ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantBonusFilterSelectMenu_o *)sub_1C940C8(v7);
  ServantBonusFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *ServantBonusFilterSelectMenu__get_closeBtnPath(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2B8D5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15741/*"Window/CancelButton"*/);
    byte_4D2B8D5 = 1;
  }
  return (System_String_o *)StringLiteral_15741/*"Window/CancelButton"*/;
}


void ServantBonusFilterSelectMenu__remove_callbackFunc(
        ServantBonusFilterSelectMenu_o *this,
        ServantBonusFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantBonusFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4D2B8C6 & 1) == 0 )
  {
    sub_1C93AD4(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4D2B8C6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantBonusFilterSelectMenu_CallbackFunc_c *)v7->klass != ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C940C8(v7);
  ServantBonusFilterSelectMenu__InitLoad(v10);
}


void ServantBonusFilterSelectMenu_CallbackFunc___ctor(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC0FE8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0FA0;
}


System_IAsyncResult_o *ServantBonusFilterSelectMenu_CallbackFunc__BeginInvoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D2B8D8 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2B8D8 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void ServantBonusFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void ServantBonusFilterSelectMenu_CallbackFunc__Invoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}