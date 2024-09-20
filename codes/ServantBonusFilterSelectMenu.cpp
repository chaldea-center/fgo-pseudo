void __fastcall ServantBonusFilterSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19

  if ( (byte_4A56337 & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_12622/*"ServantBonusFilterSelect1"*/);
    byte_4A56337 = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_12622/*"ServantBonusFilterSelect1"*/, 3, 0, 0LL);
  ServantBonusFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_1B88554(ServantBonusFilterSelectMenu_TypeInfo->static_fields, v1);
}


void __fastcall ServantBonusFilterSelectMenu___ctor(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A56336 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A56336 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__Callback(
        ServantBonusFilterSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct ServantBonusFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20
  struct ServantBonusFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    *p_callbackFunc = 0LL;
    sub_1B88554(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall ServantBonusFilterSelectMenu__Close(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantBonusFilterSelectMenu__Close_30671828(this, 0LL, v2);
}


void __fastcall ServantBonusFilterSelectMenu__Close_30671828(
        ServantBonusFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4A5632A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_EndClose__);
    byte_4A5632A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantBonusFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__EndClose(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B88554(&this->fields.closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall ServantBonusFilterSelectMenu__EndOpen(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall ServantBonusFilterSelectMenu__GetMaxIndividualFilter(const MethodInfo *method)
{
  ServantBonusFilterSelectMenu_c *v1; // x0
  System_Int32_array *Instance; // x0
  __int64 v3; // x1
  System_Int32_array *v4; // x19

  if ( (byte_4A56328 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56328 = 1;
  }
  v1 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v1 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  if ( v1->static_fields->maxIndividualFilter <= 0 )
  {
    Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (Instance = ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL)) == 0LL )
    {
      sub_1B8880C(Instance, v3);
    }
    v4 = Instance;
    v1 = ServantBonusFilterSelectMenu_TypeInfo;
    if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      v1 = ServantBonusFilterSelectMenu_TypeInfo;
    }
    v1->static_fields->maxIndividualFilter = v4->max_length + 20;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  return v1->static_fields->maxIndividualFilter;
}


ListViewSort_o *__fastcall ServantBonusFilterSelectMenu__GetServantFilterInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantBonusFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4A56327 & 1) == 0 )
  {
    sub_1B885B0(&ServantBonusFilterSelectMenu_TypeInfo);
    byte_4A56327 = 1;
  }
  v2 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v2 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1B8880C(0LL, v1);
  ListViewSort__Load(commonServantSortInfo, 0LL);
  return ServantBonusFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo;
}


void __fastcall ServantBonusFilterSelectMenu__Init(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantBonusFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4A56326 & 1) == 0 )
  {
    sub_1B885B0(&ServantBonusFilterSelectMenu_TypeInfo);
    byte_4A56326 = 1;
  }
  v2 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v2 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1B8880C(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__MoveButton(
        ServantBonusFilterSelectMenu_o *this,
        UICommonButton_o *button,
        int32_t x,
        const MethodInfo *method)
{
  float y; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !button
    || (this = (ServantBonusFilterSelectMenu_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)button,
                                                   0LL)) == 0LL
    || (this = (ServantBonusFilterSelectMenu_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL)) == 0LL
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL),
        y = localPosition.fields.y,
        z = localPosition.fields.z,
        (this = (ServantBonusFilterSelectMenu_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)button,
                                                    0LL)) == 0LL)
    || (this = (ServantBonusFilterSelectMenu_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL)) == 0LL )
  {
    sub_1B8880C(this, button);
  }
  v9.fields.x = (float)x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__OnClickAllDisplay(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A56332 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__);
    byte_4A56332 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickAllDisplay__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      if ( ListViewSort__GetFilter(operationSortInfo, 40, 0LL) )
        return;
      operationSortInfo = this->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        ListViewSort__SetFilter(operationSortInfo, 40, 1, 0LL);
        ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
        return;
      }
    }
    sub_1B8880C(operationSortInfo, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickCancel(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A5632D & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_OnClickCancel__);
    byte_4A5632D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantBonusFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    ServantBonusFilterSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickClear(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A5632E & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_OnClickClear__);
    byte_4A5632E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 18, 0, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_1B8880C(operationSortInfo, v5);
    }
    ListViewSort__SetFilter(operationSortInfo, 19, 0, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickDecide(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct System_Int32_array *eventIdList; // x21
  __int64 v16; // x8
  System_String_o *v17; // x20
  unsigned __int64 v18; // x22
  int v19; // w26
  Il2CppObject *v20; // x0
  ListViewSort_o *v21; // x20
  const MethodInfo *v22; // x2
  int v23; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5632C & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_OnClickDecide__);
    sub_1B885B0(&StringLiteral_3310/*"BonusFilterEventId"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5632C = 1;
  }
  if ( this->fields.state == 2 )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    verticalScrollBar = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)verticalScrollBar & 1) != 0 )
    {
      v7 = this->fields.scrollView;
      if ( !v7 )
        goto LABEL_30;
      verticalScrollBar = v7->fields.verticalScrollBar;
      if ( !verticalScrollBar )
        goto LABEL_30;
      operationSortInfo = this->fields.operationSortInfo;
      value = UIProgressBar__get_value(verticalScrollBar, 0LL);
      if ( !operationSortInfo )
        goto LABEL_30;
      operationSortInfo->fields.scrollBarValue = value;
    }
    ServantBonusFilterSelectMenu__SetButtonEnable(this, 0, v6);
    this->fields.state = 3;
    v10 = Method_ServantBonusFilterSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B885C8();
    v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    eventIdList = this->fields.eventIdList;
    if ( eventIdList )
    {
      v16 = *(_QWORD *)&eventIdList->max_length;
      v17 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)v16 >= 1 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          if ( v18 >= (unsigned int)v16 )
            sub_1B88814(verticalScrollBar, v5);
          if ( !v17 )
            break;
          v19 = eventIdList->m_Items[v18 + 1];
          if ( v17->fields._stringLength >= 1 )
            v17 = System_String__Concat_61707032(v17, (System_String_o *)StringLiteral_868/*","*/, 0LL);
          v23 = v19;
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v12, v13, v14);
          verticalScrollBar = (UIProgressBar_o *)System_String__Concat((Il2CppObject *)v17, v20, 0LL);
          LODWORD(v16) = eventIdList->max_length;
          ++v18;
          v17 = (System_String_o *)verticalScrollBar;
          if ( (__int64)v18 >= (int)v16 )
            goto LABEL_21;
        }
LABEL_30:
        sub_1B8880C(verticalScrollBar, v5);
      }
LABEL_21:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3310/*"BonusFilterEventId"*/, v17, 0LL);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      verticalScrollBar = (UIProgressBar_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !verticalScrollBar )
        goto LABEL_30;
      v21 = this->fields.operationSortInfo;
      verticalScrollBar = (UIProgressBar_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                               (ServantBonusFilterEquipComponent_o *)verticalScrollBar,
                                               v5);
      if ( !v21 )
        goto LABEL_30;
      ListViewSort__SetFilter(v21, 41, ((unsigned __int8)verticalScrollBar & 1) == 0, 0LL);
      verticalScrollBar = (UIProgressBar_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !verticalScrollBar )
        goto LABEL_30;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)verticalScrollBar, v5);
    }
    verticalScrollBar = (UIProgressBar_o *)this->fields.baseSortInfo;
    if ( !verticalScrollBar )
      goto LABEL_30;
    ListViewSort__Set((ListViewSort_o *)verticalScrollBar, this->fields.operationSortInfo, 0LL);
    ServantBonusFilterSelectMenu__Callback(this, 1, v22);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickFilter1(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A56330 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_OnClickFilter1__);
    byte_4A56330 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickFilter1__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickFilter1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(0LL, v5);
    ListViewSort__SwitchFilter(operationSortInfo, 18, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickFilter2(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A56331 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_OnClickFilter2__);
    byte_4A56331 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickFilter2__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickFilter2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(0LL, v5);
    ListViewSort__SwitchFilter(operationSortInfo, 19, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickInitialize(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4A5632F & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_OnClickInitialize__);
    byte_4A5632F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( this->fields.isServantBonusFilterEnable )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter(operationSortInfo, 18, 1, 0LL);
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
      ListViewSort__SetFilter(operationSortInfo, 19, 1, 0LL);
      goto LABEL_12;
    }
LABEL_14:
    sub_1B8880C(operationSortInfo, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickMaxOnlyDisplay(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A56333 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__);
    byte_4A56333 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickMaxOnlyDisplay__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_11;
    if ( ListViewSort__GetFilter(operationSortInfo, 40, 0LL) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        ListViewSort__SetFilter(operationSortInfo, 40, 0, 0LL);
        ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
        return;
      }
LABEL_11:
      sub_1B8880C(operationSortInfo, v5);
    }
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickResetIndividual(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0

  if ( (byte_4A56334 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__);
    byte_4A56334 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__;
    if ( (*((_BYTE *)Method_ServantBonusFilterSelectMenu_OnClickResetIndividual__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    servantBonusFilterEquipComponent = this->fields.servantBonusFilterEquipComponent;
    if ( !servantBonusFilterEquipComponent )
      sub_1B8880C(0LL, v5);
    ServantBonusFilterEquipComponent__ResetIndividualFilter(servantBonusFilterEquipComponent, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__Open(
        ServantBonusFilterSelectMenu_o *this,
        int32_t kind,
        bool isServantBonusFilterEnable,
        bool isServantEquipBonusFilterEnable,
        System_Int32_array *equipBonusFilterEventIds,
        ListViewSort_o *sort,
        ServantBonusFilterSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  ServantBonusFilterSelectMenu_c *v15; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v17; // x1
  const MethodInfo *v18; // x1
  ListViewSort_o *baseSortInfo; // x0
  ListViewSort_o *v20; // x21
  ListViewSort_o *v21; // x22
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *filter1Label; // x21
  UILabel_o *filter2Label; // x21
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
  const MethodInfo *v37; // x2
  int v38; // w20
  UnityEngine_GameObject_o *gameObject; // x21
  ServantBonusFilterEquipComponent_c *v40; // x8
  UILabel_o *titleLabel; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *initializeLabel; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v46; // x2
  UnityEngine_Object_o *v47; // x20
  struct UIScrollView_o *v48; // x9
  struct ListViewSort_o *v49; // x8
  System_Action_o *v50; // x20

  if ( (byte_4A56329 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantBonusFilterEquipComponent_TypeInfo);
    sub_1B885B0(&Method_ServantBonusFilterSelectMenu_EndOpen__);
    sub_1B885B0(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_11837/*"SERVANT_SORT_RESET"*/);
    sub_1B885B0(&StringLiteral_11694/*"SERVANT_SORT_EXPLANATION4"*/);
    sub_1B885B0(&StringLiteral_11841/*"SERVANT_SORT_TITLE4"*/);
    sub_1B885B0(&StringLiteral_11695/*"SERVANT_SORT_EXPLANATION5"*/);
    sub_1B885B0(&StringLiteral_11840/*"SERVANT_SORT_TITLE3"*/);
    sub_1B885B0(&StringLiteral_11686/*"SERVANT_SORT_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11690/*"SERVANT_SORT_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11673/*"SERVANT_SORT_ALL_DISPLAY"*/);
    sub_1B885B0(&StringLiteral_11836/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/);
    sub_1B885B0(&StringLiteral_11693/*"SERVANT_SORT_EXPLANATION3"*/);
    sub_1B885B0(&StringLiteral_11731/*"SERVANT_SORT_FILTER_KIND_20"*/);
    sub_1B885B0(&StringLiteral_11687/*"SERVANT_SORT_CLEAR"*/);
    sub_1B885B0(&StringLiteral_11843/*"SERVANT_SORT_TITLE6"*/);
    sub_1B885B0(&StringLiteral_11729/*"SERVANT_SORT_FILTER_KIND_19"*/);
    sub_1B885B0(&StringLiteral_11842/*"SERVANT_SORT_TITLE5"*/);
    sub_1B885B0(&StringLiteral_11805/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/);
    byte_4A56329 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
    this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
    this->fields.callbackFunc = callback;
    sub_1B88554(&this->fields.callbackFunc, callback);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1B88554(&this->fields.baseSortInfo, sort);
    }
    else
    {
      v15 = ServantBonusFilterSelectMenu_TypeInfo;
      if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
        v15 = ServantBonusFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v15->static_fields->commonServantSortInfo;
      v17 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1B88554(&this->fields.baseSortInfo, v17);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_57;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    v20 = this->fields.baseSortInfo;
    v21 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
    ListViewSort___ctor_40759792(v21, v20, 0LL);
    this->fields.operationSortInfo = v21;
    sub_1B88554(&this->fields.operationSortInfo, v21);
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( baseSortInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
      decideLabel = this->fields.decideLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11690/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
        cancelLabel = this->fields.cancelLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11686/*"SERVANT_SORT_CANCEL"*/, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
          filter1Label = this->fields.filter1Label;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11729/*"SERVANT_SORT_FILTER_KIND_19"*/, 0LL);
          if ( filter1Label )
          {
            UILabel__set_text(filter1Label, (System_String_o *)baseSortInfo, 0LL);
            filter2Label = this->fields.filter2Label;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11731/*"SERVANT_SORT_FILTER_KIND_20"*/, 0LL);
            if ( filter2Label )
            {
              UILabel__set_text(filter2Label, (System_String_o *)baseSortInfo, 0LL);
              this->fields.eventIdList = equipBonusFilterEventIds;
              sub_1B88554(&this->fields.eventIdList, equipBonusFilterEventIds);
              if ( this->fields.isServantEquipBonusFilterEnable )
              {
                allFilterTitleLabel = this->fields.allFilterTitleLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_SORT_TITLE4"*/, 0LL);
                if ( !allFilterTitleLabel )
                  goto LABEL_57;
                UILabel__set_text(allFilterTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                allFilterExplanationLabel = this->fields.allFilterExplanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11693/*"SERVANT_SORT_EXPLANATION3"*/, 0LL);
                if ( !allFilterExplanationLabel )
                  goto LABEL_57;
                UILabel__set_text(allFilterExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                allFilterClearLabel = this->fields.allFilterClearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( !allFilterClearLabel )
                  goto LABEL_57;
                UILabel__set_text(allFilterClearLabel, (System_String_o *)baseSortInfo, 0LL);
                allFilterInitializeLabel = this->fields.allFilterInitializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_SORT_RESET"*/, 0LL);
                if ( !allFilterInitializeLabel )
                  goto LABEL_57;
                UILabel__set_text(allFilterInitializeLabel, (System_String_o *)baseSortInfo, 0LL);
                maxFilterTitleLabel = this->fields.maxFilterTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_SORT_TITLE5"*/, 0LL);
                if ( !maxFilterTitleLabel )
                  goto LABEL_57;
                UILabel__set_text(maxFilterTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                maxFilterExplanationLabel = this->fields.maxFilterExplanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11694/*"SERVANT_SORT_EXPLANATION4"*/, 0LL);
                if ( !maxFilterExplanationLabel )
                  goto LABEL_57;
                UILabel__set_text(maxFilterExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                maxFilterClearLabel = this->fields.maxFilterClearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11673/*"SERVANT_SORT_ALL_DISPLAY"*/, 0LL);
                if ( !maxFilterClearLabel )
                  goto LABEL_57;
                UILabel__set_text(maxFilterClearLabel, (System_String_o *)baseSortInfo, 0LL);
                maxFilterInitializeLabel = this->fields.maxFilterInitializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11836/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/, 0LL);
                if ( !maxFilterInitializeLabel )
                  goto LABEL_57;
                UILabel__set_text(maxFilterInitializeLabel, (System_String_o *)baseSortInfo, 0LL);
                individualFilterTitleLabel = this->fields.individualFilterTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_SORT_TITLE6"*/, 0LL);
                if ( !individualFilterTitleLabel )
                  goto LABEL_57;
                UILabel__set_text(individualFilterTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                individualFilterExplanationLabel = this->fields.individualFilterExplanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11695/*"SERVANT_SORT_EXPLANATION5"*/, 0LL);
                if ( !individualFilterExplanationLabel )
                  goto LABEL_57;
                UILabel__set_text(individualFilterExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                individualFilterInitializeLabel = this->fields.individualFilterInitializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11805/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/, 0LL);
                if ( !individualFilterInitializeLabel )
                  goto LABEL_57;
                UILabel__set_text(individualFilterInitializeLabel, (System_String_o *)baseSortInfo, 0LL);
                baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                if ( !baseSortInfo )
                  goto LABEL_57;
                baseSortInfo = (ListViewSort_o *)ServantBonusFilterEquipComponent__CreateList(
                                                   (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                   this->fields.eventIdList,
                                                   v37);
                if ( !this->fields.individualFilterInitializeButton )
                  goto LABEL_57;
                v38 = (int)baseSortInfo;
                gameObject = UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)this->fields.individualFilterInitializeButton,
                               0LL);
                v40 = ServantBonusFilterEquipComponent_TypeInfo;
                if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
                  v40 = ServantBonusFilterEquipComponent_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(
                  gameObject,
                  14.0 - (float)(v40->static_fields->POS_Y_INTERVAL * (float)(v38 - 1)),
                  0LL);
                baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                if ( !baseSortInfo )
                  goto LABEL_57;
                ServantBonusFilterEquipComponent__SetInitButtonSelect(
                  (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                  v18);
              }
              else
              {
                titleLabel = this->fields.titleLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_SORT_TITLE3"*/, 0LL);
                if ( !titleLabel )
                  goto LABEL_57;
                UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
                explanationLabel = this->fields.explanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11693/*"SERVANT_SORT_EXPLANATION3"*/, 0LL);
                if ( !explanationLabel )
                  goto LABEL_57;
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( !clearLabel )
                  goto LABEL_57;
                UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                initializeLabel = this->fields.initializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_SORT_RESET"*/, 0LL);
                if ( !initializeLabel )
                  goto LABEL_57;
                UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
              }
              scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
              {
                baseSortInfo = (ListViewSort_o *)this->fields.scrollView;
                if ( !baseSortInfo )
                  goto LABEL_57;
                ((void (__fastcall *)(ListViewSort_o *, __int64, Il2CppClass *))baseSortInfo->klass[1]._1.castClass)(
                  baseSortInfo,
                  1LL,
                  baseSortInfo->klass[1]._1.declaringType);
              }
              ServantBonusFilterSelectMenu__SetButtonSelect(this, v18);
              ServantBonusFilterSelectMenu__SetButtonEnable(this, 1, v46);
              v47 = (UnityEngine_Object_o *)this->fields.scrollView;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              baseSortInfo = (ListViewSort_o *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
              if ( ((unsigned __int8)baseSortInfo & 1) == 0 )
                goto LABEL_56;
              v48 = this->fields.scrollView;
              if ( v48 )
              {
                v49 = this->fields.baseSortInfo;
                if ( v49 )
                {
                  baseSortInfo = (ListViewSort_o *)v48->fields.verticalScrollBar;
                  if ( baseSortInfo )
                  {
                    UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v49->fields.scrollBarValue, 0LL);
LABEL_56:
                    this->fields.state = 1;
                    v50 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                    System_Action___ctor(v50, (Il2CppObject *)this, Method_ServantBonusFilterSelectMenu_EndOpen__, 0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
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
    sub_1B8880C(baseSortInfo, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterSelectMenu__SetButtonEnable(
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
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.filter1Button;
  if ( !decideButton )
    goto LABEL_26;
  decideButton = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)decideButton,
                                              0LL);
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)decideButton,
    this->fields.isServantBonusFilterEnable,
    0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.filter2Button;
  if ( !decideButton )
    goto LABEL_26;
  decideButton = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)decideButton,
                                              0LL);
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)decideButton,
    this->fields.isServantEquipBonusFilterEnable,
    0LL);
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
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.filter2Button;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  if ( !this->fields.isServantEquipBonusFilterEnable )
  {
    decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton;
    if ( decideButton )
    {
      UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
      decideButton = (UnityEngine_Behaviour_o *)this->fields.initializeButton;
      if ( decideButton )
        goto LABEL_25;
    }
LABEL_26:
    sub_1B8880C(decideButton, isEnable);
  }
  decideButton = (UnityEngine_Behaviour_o *)this->fields.allFilterClearButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.allFilterInitializeButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.maxFilterClearButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.maxFilterInitializeButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.servantBonusFilterEquipComponent;
  if ( !decideButton )
    goto LABEL_26;
  ServantBonusFilterEquipComponent__SetButtonEnable((ServantBonusFilterEquipComponent_o *)decideButton, isEnable, v10);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.individualFilterInitializeButton;
  if ( !decideButton )
    goto LABEL_26;
LABEL_25:
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__SetButtonSelect(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5632B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A5632B = 1;
  }
  filter1Button = (UnityEngine_Component_o *)this->fields.filter1Button;
  if ( !filter1Button )
    goto LABEL_30;
  filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                               filter1Button,
                                               (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v4 = (UISprite_o *)filter1Button;
  filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 18, 0LL);
  if ( !v4 )
    goto LABEL_30;
  v5 = (System_String_o **)(((unsigned __int8)filter1Button & 1) != 0 ? &StringLiteral_17470/*"btn_bg_03"*/ : &StringLiteral_17471/*"btn_bg_04"*/);
  UISprite__set_spriteName(v4, *v5, 0LL);
  filter1Button = (UnityEngine_Component_o *)this->fields.filter2Button;
  if ( !filter1Button )
    goto LABEL_30;
  filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                               filter1Button,
                                               (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v6 = (UISprite_o *)filter1Button;
  filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 19, 0LL);
  if ( !v6 )
    goto LABEL_30;
  if ( ((unsigned __int8)filter1Button & 1) != 0 )
    v7 = &StringLiteral_17470/*"btn_bg_03"*/;
  else
    v7 = &StringLiteral_17471/*"btn_bg_04"*/;
  UISprite__set_spriteName(v6, (System_String_o *)*v7, 0LL);
  if ( this->fields.isServantEquipBonusFilterEnable )
  {
    filter1Button = (UnityEngine_Component_o *)this->fields.maxFilterClearButton;
    if ( filter1Button )
    {
      filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   filter1Button,
                                                   (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( this->fields.operationSortInfo )
      {
        v8 = (UISprite_o *)filter1Button;
        filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 40, 0LL);
        if ( v8 )
        {
          v9 = (System_String_o **)(((unsigned __int8)filter1Button & 1) != 0
                                  ? &StringLiteral_17470/*"btn_bg_03"*/
                                  : &StringLiteral_17471/*"btn_bg_04"*/);
          UISprite__set_spriteName(v8, *v9, 0LL);
          filter1Button = (UnityEngine_Component_o *)this->fields.maxFilterInitializeButton;
          if ( filter1Button )
          {
            filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         filter1Button,
                                                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
            operationSortInfo = this->fields.operationSortInfo;
            if ( operationSortInfo )
            {
              v11 = (UISprite_o *)filter1Button;
              filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(operationSortInfo, 40, 0LL);
              if ( v11 )
              {
                if ( ((unsigned __int8)filter1Button & 1) != 0 )
                  v12 = &StringLiteral_17471/*"btn_bg_04"*/;
                else
                  v12 = &StringLiteral_17470/*"btn_bg_03"*/;
                UISprite__set_spriteName(v11, (System_String_o *)*v12, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B8880C(filter1Button, method);
  }
}


void __fastcall ServantBonusFilterSelectMenu__add_callbackFunc(
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

  if ( (byte_4A56324 & 1) == 0 )
  {
    sub_1B885B0(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4A56324 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantBonusFilterSelectMenu_CallbackFunc_c *)v7->klass != ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantBonusFilterSelectMenu_o *)sub_1B88ACC(v7);
  ServantBonusFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantBonusFilterSelectMenu__get_closeBtnPath(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56335 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4A56335 = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/;
}


void __fastcall ServantBonusFilterSelectMenu__remove_callbackFunc(
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

  if ( (byte_4A56325 & 1) == 0 )
  {
    sub_1B885B0(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4A56325 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantBonusFilterSelectMenu_CallbackFunc_c *)v7->klass != ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1B88ACC(v7);
  ServantBonusFilterSelectMenu__InitLoad(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterSelectMenu_CallbackFunc___ctor(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C707C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C7034;
}


System_IAsyncResult_o *__fastcall ServantBonusFilterSelectMenu_CallbackFunc__BeginInvoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A56338 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A56338 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ServantBonusFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall ServantBonusFilterSelectMenu_CallbackFunc__Invoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}