void ServantBonusFilterSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B1C9 & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_2213A60(&StringLiteral_13261/*"ServantBonusFilterSelect1"*/);
    byte_596B1C9 = 1;
  }
  v1 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50854784(v1, (System_String_o *)StringLiteral_13261/*"ServantBonusFilterSelect1"*/, 3, 0, 0);
  ServantBonusFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantBonusFilterSelectMenu_TypeInfo->static_fields,
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
  __int64 v2; // x2

  if ( (byte_596B1C8 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B1C8 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantBonusFilterSelectMenu__Callback(
        ServantBonusFilterSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantBonusFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void ServantBonusFilterSelectMenu__Close(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantBonusFilterSelectMenu__Close_39507560(this, 0, v2);
}


void ServantBonusFilterSelectMenu__Close_39507560(
        ServantBonusFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596B1BC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_EndClose__);
    byte_596B1BC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantBonusFilterSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ServantBonusFilterSelectMenu__EndClose(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  __int64 v1; // x1
  __int64 v2; // x2
  ServantBonusFilterSelectMenu_c *v3; // x0
  System_Int32_array *Instance; // x0
  System_Int32_array *v5; // x19

  if ( (byte_596B1BA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B1BA = 1;
  }
  v3 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !*(&ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v1, v2);
    v3 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  if ( v3->static_fields->maxIndividualFilter <= 0 )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
      || (Instance = ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0)) == 0 )
    {
      sub_2213CDC(Instance, v1);
    }
    v5 = Instance;
    v3 = ServantBonusFilterSelectMenu_TypeInfo;
    if ( !*(&ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v1, v2);
      v3 = ServantBonusFilterSelectMenu_TypeInfo;
    }
    v3->static_fields->maxIndividualFilter = LODWORD(v5->max_length) + 20;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  return v3->static_fields->maxIndividualFilter;
}


void ServantBonusFilterSelectMenu__Init(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantBonusFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantBonusFilterSelectMenu_c *v3; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_596B1B9 & 1) == 0 )
  {
    sub_2213A60(&ServantBonusFilterSelectMenu_TypeInfo);
    byte_596B1B9 = 1;
  }
  v3 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !*(&ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v1, v2);
    v3 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v3->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_2213CDC(0, v1);
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
    sub_2213CDC(this, button);
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

  if ( (byte_596B1C4 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__);
    byte_596B1C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
    sub_2213CDC(operationSortInfo, v5);
  }
}


void ServantBonusFilterSelectMenu__OnClickCancel(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596B1BF & 1) == 0 )
  {
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_OnClickCancel__);
    byte_596B1BF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantBonusFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantBonusFilterSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596B1C0 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_OnClickClear__);
    byte_596B1C0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantBonusFilterSelectMenu_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 18, 0, 0), (operationSortInfo = this->fields.operationSortInfo) == 0) )
    {
      sub_2213CDC(operationSortInfo, v5);
    }
    ListViewSort__SetFilter(operationSortInfo, 19, 0, 0);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void ServantBonusFilterSelectMenu__OnClickDecide(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scrollView; // x20
  UIProgressBar_o *verticalScrollBar; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct UIScrollView_o *v8; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  float value; // s0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct System_Int32_array *eventIdList; // x21
  il2cpp_array_size_t max_length; // x8
  System_String_o *v15; // x20
  unsigned __int64 v16; // x22
  int32_t v17; // w26
  Il2CppObject *v18; // x0
  ListViewSort_o *v19; // x20
  const MethodInfo *v20; // x2
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596B1BE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_OnClickDecide__);
    sub_2213A60(&StringLiteral_3324/*"BonusFilterEventId"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B1BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    verticalScrollBar = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
    if ( ((unsigned __int8)verticalScrollBar & 1) != 0 )
    {
      v8 = this->fields.scrollView;
      if ( !v8 )
        goto LABEL_30;
      verticalScrollBar = v8->fields.verticalScrollBar;
      if ( !verticalScrollBar )
        goto LABEL_30;
      operationSortInfo = this->fields.operationSortInfo;
      value = UIProgressBar__get_value(verticalScrollBar, 0);
      if ( !operationSortInfo )
        goto LABEL_30;
      operationSortInfo->fields.scrollBarValue = value;
    }
    ServantBonusFilterSelectMenu__SetButtonEnable(this, 0, v7);
    this->fields.state = 3;
    v11 = Method_ServantBonusFilterSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_2213A78(Method_ServantBonusFilterSelectMenu_OnClickDecide__);
    v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
    eventIdList = this->fields.eventIdList;
    if ( eventIdList )
    {
      max_length = eventIdList->max_length;
      v15 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)max_length >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= (unsigned int)max_length )
            sub_2213CE4(verticalScrollBar);
          if ( !v15 )
            break;
          v17 = eventIdList->m_Items[v16];
          if ( v15->fields._stringLength >= 1 )
            v15 = System_String__Concat_75651716(v15, (System_String_o *)StringLiteral_869/*","*/, 0);
          v21 = v17;
          v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
          verticalScrollBar = (UIProgressBar_o *)System_String__Concat((Il2CppObject *)v15, v18, 0);
          LODWORD(max_length) = eventIdList->max_length;
          ++v16;
          v15 = (System_String_o *)verticalScrollBar;
          if ( (__int64)v16 >= (int)max_length )
            goto LABEL_21;
        }
LABEL_30:
        sub_2213CDC(verticalScrollBar, v6);
      }
LABEL_21:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3324/*"BonusFilterEventId"*/, v15, 0);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      verticalScrollBar = (UIProgressBar_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !verticalScrollBar )
        goto LABEL_30;
      v19 = this->fields.operationSortInfo;
      verticalScrollBar = (UIProgressBar_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                               (ServantBonusFilterEquipComponent_o *)verticalScrollBar,
                                               v6);
      if ( !v19 )
        goto LABEL_30;
      ListViewSort__SetFilter(v19, 41, ((unsigned __int8)verticalScrollBar & 1) == 0, 0);
      verticalScrollBar = (UIProgressBar_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !verticalScrollBar )
        goto LABEL_30;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)verticalScrollBar, v6);
    }
    verticalScrollBar = (UIProgressBar_o *)this->fields.baseSortInfo;
    if ( !verticalScrollBar )
      goto LABEL_30;
    ListViewSort__Set((ListViewSort_o *)verticalScrollBar, this->fields.operationSortInfo, 0);
    ServantBonusFilterSelectMenu__Callback(this, 1, v20);
  }
}


void ServantBonusFilterSelectMenu__OnClickFilter1(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_596B1C2 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_OnClickFilter1__);
    byte_596B1C2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickFilter1__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickFilter1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantBonusFilterSelectMenu_OnClickFilter1__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(0, v5);
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

  if ( (byte_596B1C3 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_OnClickFilter2__);
    byte_596B1C3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickFilter2__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickFilter2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantBonusFilterSelectMenu_OnClickFilter2__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(0, v5);
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

  if ( (byte_596B1C1 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_OnClickInitialize__);
    byte_596B1C1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantBonusFilterSelectMenu_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
    sub_2213CDC(operationSortInfo, v5);
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

  if ( (byte_596B1C5 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__);
    byte_596B1C5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
      sub_2213CDC(operationSortInfo, v5);
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

  if ( (byte_596B1C6 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__);
    byte_596B1C6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    servantBonusFilterEquipComponent = this->fields.servantBonusFilterEquipComponent;
    if ( !servantBonusFilterEquipComponent )
      sub_2213CDC(0, v5);
    ServantBonusFilterEquipComponent__ResetIndividualFilter(servantBonusFilterEquipComponent, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  ServantBonusFilterSelectMenu_c *v22; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v24; // x1
  const MethodInfo *v25; // x1
  ListViewSort_o *baseSortInfo; // x0
  ListViewSort_o *v27; // x21
  ListViewSort_o *v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  __int64 v36; // x2
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *filter1Label; // x21
  UILabel_o *filter2Label; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  struct System_Int32_array *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x1
  __int64 v52; // x2
  int v53; // w8
  UILabel_o *allFilterTitleLabel; // x21
  UILabel_o *allFilterExplanationLabel; // x21
  UILabel_o *allFilterClearLabel; // x21
  UILabel_o *allFilterInitializeLabel; // x21
  UILabel_o *maxFilterTitleLabel; // x21
  UILabel_o *maxFilterExplanationLabel; // x21
  UILabel_o *maxFilterClearLabel; // x21
  UILabel_o *maxFilterInitializeLabel; // x21
  UILabel_o *individualFilterTitleLabel; // x21
  UILabel_o *individualFilterExplanationLabel; // x21
  UILabel_o *individualFilterInitializeLabel; // x21
  const MethodInfo *v65; // x2
  int v66; // w20
  __int64 v67; // x1
  __int64 v68; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  ServantBonusFilterEquipComponent_c *v70; // x8
  __int64 v71; // x1
  __int64 v72; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *initializeLabel; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  UnityEngine_Object_o *v81; // x20
  struct UIScrollView_o *v82; // x9
  struct ListViewSort_o *v83; // x8
  System_Action_o *v84; // x20

  if ( (byte_596B1BB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantBonusFilterEquipComponent_TypeInfo);
    sub_2213A60(&Method_ServantBonusFilterSelectMenu_EndOpen__);
    sub_2213A60(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_2213A60(&StringLiteral_12396/*"SERVANT_SORT_RESET"*/);
    sub_2213A60(&StringLiteral_12235/*"SERVANT_SORT_EXPLANATION4"*/);
    sub_2213A60(&StringLiteral_12400/*"SERVANT_SORT_TITLE4"*/);
    sub_2213A60(&StringLiteral_12236/*"SERVANT_SORT_EXPLANATION5"*/);
    sub_2213A60(&StringLiteral_12399/*"SERVANT_SORT_TITLE3"*/);
    sub_2213A60(&StringLiteral_12227/*"SERVANT_SORT_CANCEL"*/);
    sub_2213A60(&StringLiteral_12231/*"SERVANT_SORT_DECIDE"*/);
    sub_2213A60(&StringLiteral_12214/*"SERVANT_SORT_ALL_DISPLAY"*/);
    sub_2213A60(&StringLiteral_12395/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/);
    sub_2213A60(&StringLiteral_12234/*"SERVANT_SORT_EXPLANATION3"*/);
    sub_2213A60(&StringLiteral_12277/*"SERVANT_SORT_FILTER_KIND_20"*/);
    sub_2213A60(&StringLiteral_12228/*"SERVANT_SORT_CLEAR"*/);
    sub_2213A60(&StringLiteral_12402/*"SERVANT_SORT_TITLE6"*/);
    sub_2213A60(&StringLiteral_12275/*"SERVANT_SORT_FILTER_KIND_19"*/);
    sub_2213A60(&StringLiteral_12401/*"SERVANT_SORT_TITLE5"*/);
    sub_2213A60(&StringLiteral_12364/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/);
    byte_596B1BB = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
    this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)isServantBonusFilterEnable,
      (System_String_o *)isServantEquipBonusFilterEnable,
      (int32_t)equipBonusFilterEventIds,
      (int32_t)sort,
      (bool)callback,
      (bool)method);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)sort,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    else
    {
      v22 = ServantBonusFilterSelectMenu_TypeInfo;
      if ( !*(&ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v15, v16);
        v22 = ServantBonusFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v22->static_fields->commonServantSortInfo;
      v24 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)v24,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_60;
      ListViewSort__Load(baseSortInfo, 0);
    }
    v27 = this->fields.baseSortInfo;
    v28 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
    ListViewSort___ctor_50855524(v28, v27, 0);
    this->fields.operationSortInfo = v28;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.operationSortInfo,
      (int32_t)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( baseSortInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
      decideLabel = this->fields.decideLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_SORT_DECIDE"*/, 0);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0);
        cancelLabel = this->fields.cancelLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12227/*"SERVANT_SORT_CANCEL"*/, 0);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0);
          filter1Label = this->fields.filter1Label;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12275/*"SERVANT_SORT_FILTER_KIND_19"*/, 0);
          if ( filter1Label )
          {
            UILabel__set_text(filter1Label, (System_String_o *)baseSortInfo, 0);
            filter2Label = this->fields.filter2Label;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12277/*"SERVANT_SORT_FILTER_KIND_20"*/, 0);
            if ( filter2Label )
            {
              UILabel__set_text(filter2Label, (System_String_o *)baseSortInfo, 0);
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41, v42);
              baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
              if ( baseSortInfo )
              {
                EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)baseSortInfo, 0, 0, 0);
                v44 = System_Linq_Enumerable__ToArray_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                        (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
                this->fields.eventIdList = v44;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.eventIdList,
                  (int32_t)v44,
                  v45,
                  v46,
                  v47,
                  v48,
                  v49,
                  v50);
                v53 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
                if ( this->fields.isServantEquipBonusFilterEnable )
                {
                  allFilterTitleLabel = this->fields.allFilterTitleLabel;
                  if ( !v53 )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12400/*"SERVANT_SORT_TITLE4"*/, 0);
                  if ( !allFilterTitleLabel )
                    goto LABEL_60;
                  UILabel__set_text(allFilterTitleLabel, (System_String_o *)baseSortInfo, 0);
                  allFilterExplanationLabel = this->fields.allFilterExplanationLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12234/*"SERVANT_SORT_EXPLANATION3"*/, 0);
                  if ( !allFilterExplanationLabel )
                    goto LABEL_60;
                  UILabel__set_text(allFilterExplanationLabel, (System_String_o *)baseSortInfo, 0);
                  allFilterClearLabel = this->fields.allFilterClearLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12228/*"SERVANT_SORT_CLEAR"*/, 0);
                  if ( !allFilterClearLabel )
                    goto LABEL_60;
                  UILabel__set_text(allFilterClearLabel, (System_String_o *)baseSortInfo, 0);
                  allFilterInitializeLabel = this->fields.allFilterInitializeLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12396/*"SERVANT_SORT_RESET"*/, 0);
                  if ( !allFilterInitializeLabel )
                    goto LABEL_60;
                  UILabel__set_text(allFilterInitializeLabel, (System_String_o *)baseSortInfo, 0);
                  maxFilterTitleLabel = this->fields.maxFilterTitleLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12401/*"SERVANT_SORT_TITLE5"*/, 0);
                  if ( !maxFilterTitleLabel )
                    goto LABEL_60;
                  UILabel__set_text(maxFilterTitleLabel, (System_String_o *)baseSortInfo, 0);
                  maxFilterExplanationLabel = this->fields.maxFilterExplanationLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12235/*"SERVANT_SORT_EXPLANATION4"*/, 0);
                  if ( !maxFilterExplanationLabel )
                    goto LABEL_60;
                  UILabel__set_text(maxFilterExplanationLabel, (System_String_o *)baseSortInfo, 0);
                  maxFilterClearLabel = this->fields.maxFilterClearLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SERVANT_SORT_ALL_DISPLAY"*/, 0);
                  if ( !maxFilterClearLabel )
                    goto LABEL_60;
                  UILabel__set_text(maxFilterClearLabel, (System_String_o *)baseSortInfo, 0);
                  maxFilterInitializeLabel = this->fields.maxFilterInitializeLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12395/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/, 0);
                  if ( !maxFilterInitializeLabel )
                    goto LABEL_60;
                  UILabel__set_text(maxFilterInitializeLabel, (System_String_o *)baseSortInfo, 0);
                  individualFilterTitleLabel = this->fields.individualFilterTitleLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12402/*"SERVANT_SORT_TITLE6"*/, 0);
                  if ( !individualFilterTitleLabel )
                    goto LABEL_60;
                  UILabel__set_text(individualFilterTitleLabel, (System_String_o *)baseSortInfo, 0);
                  individualFilterExplanationLabel = this->fields.individualFilterExplanationLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12236/*"SERVANT_SORT_EXPLANATION5"*/, 0);
                  if ( !individualFilterExplanationLabel )
                    goto LABEL_60;
                  UILabel__set_text(individualFilterExplanationLabel, (System_String_o *)baseSortInfo, 0);
                  individualFilterInitializeLabel = this->fields.individualFilterInitializeLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12364/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/, 0);
                  if ( !individualFilterInitializeLabel )
                    goto LABEL_60;
                  UILabel__set_text(individualFilterInitializeLabel, (System_String_o *)baseSortInfo, 0);
                  baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                  if ( !baseSortInfo )
                    goto LABEL_60;
                  baseSortInfo = (ListViewSort_o *)ServantBonusFilterEquipComponent__CreateList(
                                                     (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                     equipBonusFilterEventIds,
                                                     v65);
                  if ( !this->fields.individualFilterInitializeButton )
                    goto LABEL_60;
                  v66 = (int)baseSortInfo;
                  gameObject = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.individualFilterInitializeButton,
                                 0);
                  v70 = ServantBonusFilterEquipComponent_TypeInfo;
                  if ( !*(&ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo, v67, v68);
                    v70 = ServantBonusFilterEquipComponent_TypeInfo;
                  }
                  GameObjectExtensions__SetLocalPositionY(
                    gameObject,
                    14.0 - (float)(v70->static_fields->POS_Y_INTERVAL * (float)(v66 - 1)),
                    0);
                  baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                  if ( !baseSortInfo )
                    goto LABEL_60;
                  ServantBonusFilterEquipComponent__SetInitButtonSelect(
                    (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                    v25);
                }
                else
                {
                  titleLabel = this->fields.titleLabel;
                  if ( !v53 )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12399/*"SERVANT_SORT_TITLE3"*/, 0);
                  if ( !titleLabel )
                    goto LABEL_60;
                  UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
                  explanationLabel = this->fields.explanationLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12234/*"SERVANT_SORT_EXPLANATION3"*/, 0);
                  if ( !explanationLabel )
                    goto LABEL_60;
                  UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0);
                  clearLabel = this->fields.clearLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12228/*"SERVANT_SORT_CLEAR"*/, 0);
                  if ( !clearLabel )
                    goto LABEL_60;
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0);
                  initializeLabel = this->fields.initializeLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12396/*"SERVANT_SORT_RESET"*/, 0);
                  if ( !initializeLabel )
                    goto LABEL_60;
                  UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0);
                }
                scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v71, v72);
                if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
                {
                  baseSortInfo = (ListViewSort_o *)this->fields.scrollView;
                  if ( !baseSortInfo )
                    goto LABEL_60;
                  ((void (__fastcall *)(ListViewSort_o *, __int64, Il2CppClass *))baseSortInfo->klass[1]._1.element_class)(
                    baseSortInfo,
                    1,
                    baseSortInfo->klass[1]._1.castClass);
                }
                ServantBonusFilterSelectMenu__SetButtonSelect(this, v25);
                ServantBonusFilterSelectMenu__SetButtonEnable(this, 1, v78);
                v81 = (UnityEngine_Object_o *)this->fields.scrollView;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79, v80);
                baseSortInfo = (ListViewSort_o *)UnityEngine_Object__op_Inequality(v81, 0, 0);
                if ( ((unsigned __int8)baseSortInfo & 1) == 0 )
                  goto LABEL_59;
                v82 = this->fields.scrollView;
                if ( v82 )
                {
                  v83 = this->fields.baseSortInfo;
                  if ( v83 )
                  {
                    baseSortInfo = (ListViewSort_o *)v82->fields.verticalScrollBar;
                    if ( baseSortInfo )
                    {
                      UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v83->fields.scrollBarValue, 0);
LABEL_59:
                      this->fields.state = 1;
                      v84 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                      System_Action___ctor(v84, (Il2CppObject *)this, Method_ServantBonusFilterSelectMenu_EndOpen__, 0);
                      BaseDialog__Open((BaseDialog_o *)this, v84, 0, 0, 0);
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
LABEL_60:
    sub_2213CDC(baseSortInfo, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantBonusFilterSelectMenu__SetButtonEnable(
        ServantBonusFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  struct UICommonButton_o **p_filter1Button; // x21
  struct UICommonButton_o **p_filter2Button; // x22
  ServantBonusFilterSelectMenu_o *v8; // x0
  const MethodInfo *v9; // x3
  UICommonButton_o **v10; // x8
  const MethodInfo *v11; // x2

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  p_filter1Button = &this->fields.filter1Button;
  decideButton = (UnityEngine_Behaviour_o *)this->fields.filter1Button;
  if ( !decideButton )
    goto LABEL_25;
  decideButton = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)decideButton,
                                              0);
  if ( !decideButton )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)decideButton,
    this->fields.isServantBonusFilterEnable,
    0);
  p_filter2Button = &this->fields.filter2Button;
  decideButton = (UnityEngine_Behaviour_o *)this->fields.filter2Button;
  if ( !decideButton )
    goto LABEL_25;
  decideButton = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)decideButton,
                                              0);
  if ( !decideButton )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)decideButton,
    this->fields.isServantEquipBonusFilterEnable,
    0);
  if ( !this->fields.isServantBonusFilterEnable )
  {
    v10 = &this->fields.filter2Button;
    if ( !this->fields.isServantEquipBonusFilterEnable )
      goto LABEL_10;
    goto LABEL_9;
  }
  v10 = &this->fields.filter1Button;
  if ( !this->fields.isServantEquipBonusFilterEnable )
LABEL_9:
    ServantBonusFilterSelectMenu__MoveButton(v8, *v10, this->fields.button1PositionHorizontal, v9);
LABEL_10:
  decideButton = (UnityEngine_Behaviour_o *)*p_filter1Button;
  if ( !*p_filter1Button )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)*p_filter2Button;
  if ( !*p_filter2Button )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  if ( !this->fields.isServantEquipBonusFilterEnable )
  {
    decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton;
    if ( decideButton )
    {
      UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
      decideButton = (UnityEngine_Behaviour_o *)this->fields.initializeButton;
      if ( decideButton )
        goto LABEL_24;
    }
LABEL_25:
    sub_2213CDC(decideButton, isEnable);
  }
  decideButton = (UnityEngine_Behaviour_o *)this->fields.allFilterClearButton;
  if ( !decideButton )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.allFilterInitializeButton;
  if ( !decideButton )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.maxFilterClearButton;
  if ( !decideButton )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.maxFilterInitializeButton;
  if ( !decideButton )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.servantBonusFilterEquipComponent;
  if ( !decideButton )
    goto LABEL_25;
  ServantBonusFilterEquipComponent__SetButtonEnable((ServantBonusFilterEquipComponent_o *)decideButton, isEnable, v11);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.individualFilterInitializeButton;
  if ( !decideButton )
    goto LABEL_25;
LABEL_24:
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

  if ( (byte_596B1BD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596B1BD = 1;
  }
  filter1Button = (UnityEngine_Component_o *)this->fields.filter1Button;
  if ( !filter1Button )
    goto LABEL_30;
  filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                               filter1Button,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v4 = (UISprite_o *)filter1Button;
  filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 18, 0);
  if ( !v4 )
    goto LABEL_30;
  v5 = (System_String_o **)(((unsigned __int8)filter1Button & 1) != 0 ? &StringLiteral_18200/*"btn_bg_03"*/ : &StringLiteral_18201/*"btn_bg_04"*/);
  UISprite__set_spriteName(v4, *v5, 0);
  filter1Button = (UnityEngine_Component_o *)this->fields.filter2Button;
  if ( !filter1Button )
    goto LABEL_30;
  filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                               filter1Button,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v6 = (UISprite_o *)filter1Button;
  filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 19, 0);
  if ( !v6 )
    goto LABEL_30;
  if ( ((unsigned __int8)filter1Button & 1) != 0 )
    v7 = &StringLiteral_18200/*"btn_bg_03"*/;
  else
    v7 = &StringLiteral_18201/*"btn_bg_04"*/;
  UISprite__set_spriteName(v6, (System_String_o *)*v7, 0);
  if ( this->fields.isServantEquipBonusFilterEnable )
  {
    filter1Button = (UnityEngine_Component_o *)this->fields.maxFilterClearButton;
    if ( filter1Button )
    {
      filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   filter1Button,
                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( this->fields.operationSortInfo )
      {
        v8 = (UISprite_o *)filter1Button;
        filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 40, 0);
        if ( v8 )
        {
          v9 = (System_String_o **)(((unsigned __int8)filter1Button & 1) != 0
                                  ? &StringLiteral_18200/*"btn_bg_03"*/
                                  : &StringLiteral_18201/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0);
          filter1Button = (UnityEngine_Component_o *)this->fields.maxFilterInitializeButton;
          if ( filter1Button )
          {
            filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         filter1Button,
                                                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            operationSortInfo = this->fields.operationSortInfo;
            if ( operationSortInfo )
            {
              v11 = (UISprite_o *)filter1Button;
              filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(operationSortInfo, 40, 0);
              if ( v11 )
              {
                if ( ((unsigned __int8)filter1Button & 1) != 0 )
                  v12 = &StringLiteral_18201/*"btn_bg_04"*/;
                else
                  v12 = &StringLiteral_18200/*"btn_bg_03"*/;
                UISprite__set_spriteName(v11, (System_String_o *)*v12, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_2213CDC(filter1Button, method);
  }
}


void ServantBonusFilterSelectMenu__add_callbackFunc(
        ServantBonusFilterSelectMenu_o *this,
        ServantBonusFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantBonusFilterSelectMenu_o *v11; // x0
  ServantBonusFilterSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B1B7 & 1) == 0 )
  {
    sub_2213A60(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_596B1B7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantBonusFilterSelectMenu_CallbackFunc_c *)v6->klass != ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantBonusFilterSelectMenu_o *)sub_221405C(v6, ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  ServantBonusFilterSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *ServantBonusFilterSelectMenu__get_closeBtnPath(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_596B1C7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596B1C7 = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}


void ServantBonusFilterSelectMenu__remove_callbackFunc(
        ServantBonusFilterSelectMenu_o *this,
        ServantBonusFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_596B1B8 & 1) == 0 )
  {
    sub_2213A60(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_596B1B8 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantBonusFilterSelectMenu_CallbackFunc_c *)v6->klass != ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_221405C(v6, ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  ServantBonusFilterSelectMenu__InitLoad(v11);
}


void ServantBonusFilterSelectMenu_CallbackFunc___ctor(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_2001484;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_200143C;
}


System_IAsyncResult_o *ServantBonusFilterSelectMenu_CallbackFunc__BeginInvoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void ServantBonusFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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