void __fastcall ServantBonusFilterSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F94B0 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&ServantBonusFilterSelectMenu_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12650/*"ServantBonusFilterSelect1"*/, v6);
    byte_40F94B0 = 1;
  }
  v7 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v7, (System_String_o *)StringLiteral_12650/*"ServantBonusFilterSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantBonusFilterSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall ServantBonusFilterSelectMenu___ctor(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F94AF & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F94AF = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__Callback(
        ServantBonusFilterSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantBonusFilterSelectMenu_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantBonusFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall ServantBonusFilterSelectMenu__Close(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantBonusFilterSelectMenu__Close_23838016(this, 0LL, v2);
}


void __fastcall ServantBonusFilterSelectMenu__Close_23838016(
        ServantBonusFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F94A3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ServantBonusFilterSelectMenu_EndClose__, v10);
    byte_40F94A3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantBonusFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__EndClose(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x19

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall ServantBonusFilterSelectMenu__EndOpen(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall ServantBonusFilterSelectMenu__GetMaxIndividualFilter(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ServantBonusFilterSelectMenu_c *v4; // x0
  WebViewManager_o *Instance; // x0
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *CollectionList; // x0
  System_Int32_array *v8; // x19

  if ( (byte_40F94A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v1);
    sub_B16FFC(&ServantBonusFilterSelectMenu_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F94A1 = 1;
  }
  v4 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v4 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  if ( v4->static_fields->maxIndividualFilter <= 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (CollectionList = ServantMaster__GetCollectionList(MasterData_WarQuestSelectionMaster, 0LL)) == 0LL )
    {
      sub_B170D4();
    }
    v8 = CollectionList;
    v4 = ServantBonusFilterSelectMenu_TypeInfo;
    if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      v4 = ServantBonusFilterSelectMenu_TypeInfo;
    }
    v4->static_fields->maxIndividualFilter = *(_QWORD *)&v8->max_length;
    v4->static_fields->maxIndividualFilter += 20;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  return v4->static_fields->maxIndividualFilter;
}


ListViewSort_o *__fastcall ServantBonusFilterSelectMenu__GetServantFilterInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantBonusFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_40F94A0 & 1) == 0 )
  {
    sub_B16FFC(&ServantBonusFilterSelectMenu_TypeInfo, v1);
    byte_40F94A0 = 1;
  }
  v2 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v2 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B170D4();
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

  if ( (byte_40F949F & 1) == 0 )
  {
    sub_B16FFC(&ServantBonusFilterSelectMenu_TypeInfo, v1);
    byte_40F949F = 1;
  }
  v2 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v2 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B170D4();
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__MoveButton(
        ServantBonusFilterSelectMenu_o *this,
        UICommonButton_o *button,
        int32_t x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  float y; // s8
  float z; // s9
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( !button
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        y = localPosition.fields.y,
        z = localPosition.fields.z,
        (v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL)
    || (v11 = UnityEngine_GameObject__get_transform(v10, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v13.fields.x = (float)x;
  v13.fields.y = y;
  v13.fields.z = z;
  UnityEngine_Transform__set_localPosition(v11, v13, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__OnClickAllDisplay(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F94AB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F94AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      if ( ListViewSort__GetFilter(operationSortInfo, 40, 0LL) )
        return;
      v4 = this->fields.operationSortInfo;
      if ( v4 )
      {
        ListViewSort__SetFilter(v4, 40, 1, 0LL);
        ServantBonusFilterSelectMenu__SetButtonSelect(this, v5);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickCancel(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F94A6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F94A6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    ServantBonusFilterSelectMenu__Callback(this, 0, v3);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickClear(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F94A7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F94A7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (ListViewSort__SetFilter(operationSortInfo, 18, 0, 0LL), (v4 = this->fields.operationSortInfo) == 0LL) )
    {
      sub_B170D4();
    }
    ListViewSort__SetFilter(v4, 19, 0, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickDecide(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UIScrollView_o *scrollView; // x8
  UIProgressBar_o *v8; // x0
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v10; // x2
  float value; // s0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  struct System_Int32_array *eventIdList; // x21
  __int64 v16; // x8
  System_String_o *v17; // x20
  unsigned __int64 v18; // x22
  int v19; // w26
  Il2CppObject *v20; // x0
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0
  ListViewSort_o *v22; // x20
  bool IsSetIndividualFilter; // w0
  const MethodInfo *v24; // x1
  ServantBonusFilterEquipComponent_o *v25; // x0
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v27; // x2
  int v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F94A5 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_2826/*"BonusFilterEventId"*/, v4);
    sub_B16FFC(&StringLiteral_698/*","*/, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40F94A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_27;
    v8 = *(UIProgressBar_o **)&scrollView->fields.showScrollBars;
    if ( !v8 )
      goto LABEL_27;
    operationSortInfo = this->fields.operationSortInfo;
    value = UIProgressBar__get_value(v8, 0LL);
    if ( !operationSortInfo )
      goto LABEL_27;
    operationSortInfo->fields.scrollBarValue = value;
    ServantBonusFilterSelectMenu__SetButtonEnable(this, 0, v10);
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
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
          {
            sub_B17100(v12, v13, v14);
            sub_B170A0();
          }
          if ( !v17 )
            break;
          v19 = eventIdList->m_Items[v18 + 1];
          if ( v17->fields.m_stringLength >= 1 )
            v17 = System_String__Concat_43743732(v17, (System_String_o *)StringLiteral_698/*","*/, 0LL);
          v28 = v19;
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
          v12 = System_String__Concat((Il2CppObject *)v17, v20, 0LL);
          LODWORD(v16) = eventIdList->max_length;
          ++v18;
          v17 = v12;
          if ( (__int64)v18 >= (int)v16 )
            goto LABEL_18;
        }
LABEL_27:
        sub_B170D4();
      }
LABEL_18:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2826/*"BonusFilterEventId"*/, v17, 0LL);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      servantBonusFilterEquipComponent = this->fields.servantBonusFilterEquipComponent;
      if ( !servantBonusFilterEquipComponent )
        goto LABEL_27;
      v22 = this->fields.operationSortInfo;
      IsSetIndividualFilter = ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                servantBonusFilterEquipComponent,
                                v13);
      if ( !v22 )
        goto LABEL_27;
      ListViewSort__SetFilter(v22, 41, !IsSetIndividualFilter, 0LL);
      v25 = this->fields.servantBonusFilterEquipComponent;
      if ( !v25 )
        goto LABEL_27;
      ServantBonusFilterEquipComponent__UpdateFilterSave(v25, v24);
    }
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo )
      goto LABEL_27;
    ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL);
    ServantBonusFilterSelectMenu__Callback(this, 1, v27);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickFilter1(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40F94A9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F94A9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    ListViewSort__SwitchFilter(operationSortInfo, 18, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v4);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickFilter2(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40F94AA & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F94AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    ListViewSort__SwitchFilter(operationSortInfo, 19, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v4);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickInitialize(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v5; // x0

  if ( (byte_40F94A8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F94A8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.isServantBonusFilterEnable )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_15;
      ListViewSort__SetFilter(operationSortInfo, 18, 1, 0LL);
    }
    if ( !this->fields.isServantEquipBonusFilterEnable )
    {
LABEL_13:
      ServantBonusFilterSelectMenu__SetButtonSelect(this, v3);
      return;
    }
    v5 = this->fields.operationSortInfo;
    if ( v5 )
    {
      ListViewSort__SetFilter(v5, 19, 1, 0LL);
      goto LABEL_13;
    }
LABEL_15:
    sub_B170D4();
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickMaxOnlyDisplay(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F94AC & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F94AC = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_12;
    if ( ListViewSort__GetFilter(operationSortInfo, 40, 0LL) )
    {
      v4 = this->fields.operationSortInfo;
      if ( v4 )
      {
        ListViewSort__SetFilter(v4, 40, 0, 0LL);
        ServantBonusFilterSelectMenu__SetButtonSelect(this, v5);
        return;
      }
LABEL_12:
      sub_B170D4();
    }
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickResetIndividual(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0

  if ( (byte_40F94AD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F94AD = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    servantBonusFilterEquipComponent = this->fields.servantBonusFilterEquipComponent;
    if ( !servantBonusFilterEquipComponent )
      sub_B170D4();
    ServantBonusFilterEquipComponent__ResetIndividualFilter(servantBonusFilterEquipComponent, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterSelectMenu__Open(
        ServantBonusFilterSelectMenu_o *this,
        int32_t kind,
        bool isServantBonusFilterEnable,
        bool isServantEquipBonusFilterEnable,
        ListViewSort_o *sort,
        ServantBonusFilterSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
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
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  ServantBonusFilterSelectMenu_c *v49; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v51; // x1
  ListViewSort_o *baseSortInfo; // x0
  ListViewSort_o *v53; // x21
  ListViewSort_o *v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *decideLabel; // x21
  System_String_o *v63; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v65; // x0
  UILabel_o *filter1Label; // x21
  System_String_o *v67; // x0
  UILabel_o *filter2Label; // x21
  System_String_o *v69; // x0
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Int32_array *EventValUpEventIdList; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UILabel_o *allFilterTitleLabel; // x21
  System_String_o *v80; // x0
  UILabel_o *allFilterExplanationLabel; // x21
  System_String_o *v82; // x0
  UILabel_o *allFilterClearLabel; // x21
  System_String_o *v84; // x0
  UILabel_o *allFilterInitializeLabel; // x21
  System_String_o *v86; // x0
  UILabel_o *maxFilterTitleLabel; // x21
  System_String_o *v88; // x0
  UILabel_o *maxFilterExplanationLabel; // x21
  System_String_o *v90; // x0
  UILabel_o *maxFilterClearLabel; // x21
  System_String_o *v92; // x0
  UILabel_o *maxFilterInitializeLabel; // x21
  System_String_o *v94; // x0
  UILabel_o *individualFilterTitleLabel; // x21
  System_String_o *v96; // x0
  UILabel_o *individualFilterExplanationLabel; // x21
  System_String_o *v98; // x0
  UILabel_o *individualFilterInitializeLabel; // x21
  System_String_o *v100; // x0
  const MethodInfo *v101; // x2
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0
  int32_t List; // w0
  int32_t v104; // w21
  UnityEngine_GameObject_o *v105; // x22
  ServantBonusFilterEquipComponent_c *v106; // x8
  const MethodInfo *v107; // x1
  ServantBonusFilterEquipComponent_o *v108; // x0
  UILabel_o *titleLabel; // x21
  System_String_o *v110; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o *v112; // x0
  UILabel_o *clearLabel; // x21
  System_String_o *v114; // x0
  UILabel_o *initializeLabel; // x21
  System_String_o *v116; // x0
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v118; // x1
  struct UIScrollView_o *v119; // x0
  const MethodInfo *v120; // x2
  struct UIScrollView_o *v121; // x9
  UIProgressBar_o *v122; // x0
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  System_Action_o *v127; // x20

  if ( (byte_40F94A2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v14);
    sub_B16FFC(&ListViewSort_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&ServantBonusFilterEquipComponent_TypeInfo, v18);
    sub_B16FFC(&Method_ServantBonusFilterSelectMenu_EndOpen__, v19);
    sub_B16FFC(&ServantBonusFilterSelectMenu_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_11890/*"SERVANT_SORT_RESET"*/, v22);
    sub_B16FFC(&StringLiteral_11767/*"SERVANT_SORT_EXPLANATION4"*/, v23);
    sub_B16FFC(&StringLiteral_11894/*"SERVANT_SORT_TITLE4"*/, v24);
    sub_B16FFC(&StringLiteral_11768/*"SERVANT_SORT_EXPLANATION5"*/, v25);
    sub_B16FFC(&StringLiteral_11893/*"SERVANT_SORT_TITLE3"*/, v26);
    sub_B16FFC(&StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, v27);
    sub_B16FFC(&StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, v28);
    sub_B16FFC(&StringLiteral_11747/*"SERVANT_SORT_ALL_DISPLAY"*/, v29);
    sub_B16FFC(&StringLiteral_11889/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/, v30);
    sub_B16FFC(&StringLiteral_11766/*"SERVANT_SORT_EXPLANATION3"*/, v31);
    sub_B16FFC(&StringLiteral_11802/*"SERVANT_SORT_FILTER_KIND_20"*/, v32);
    sub_B16FFC(&StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, v33);
    sub_B16FFC(&StringLiteral_11896/*"SERVANT_SORT_TITLE6"*/, v34);
    sub_B16FFC(&StringLiteral_11800/*"SERVANT_SORT_FILTER_KIND_19"*/, v35);
    sub_B16FFC(&StringLiteral_11895/*"SERVANT_SORT_TITLE5"*/, v36);
    sub_B16FFC(&StringLiteral_11859/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/, v37);
    byte_40F94A2 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
    this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)isServantBonusFilterEnable,
      (System_String_array **)isServantEquipBonusFilterEnable,
      (System_Boolean_array **)sort,
      (System_Int32_array **)callback,
      (System_Int32_array *)method,
      v7);
    if ( sort )
    {
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    else
    {
      v49 = ServantBonusFilterSelectMenu_TypeInfo;
      if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
        v49 = ServantBonusFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v49->static_fields->commonServantSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      v51 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)v51,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_61;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    v53 = this->fields.baseSortInfo;
    v54 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v45, v46, v47, v48);
    ListViewSort___ctor_30209040(v54, v53, 0LL);
    this->fields.operationSortInfo = v54;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      decideLabel = this->fields.decideLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, v63, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, v65, 0LL);
          filter1Label = this->fields.filter1Label;
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11800/*"SERVANT_SORT_FILTER_KIND_19"*/, 0LL);
          if ( filter1Label )
          {
            UILabel__set_text(filter1Label, v67, 0LL);
            filter2Label = this->fields.filter2Label;
            v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11802/*"SERVANT_SORT_FILTER_KIND_20"*/, 0LL);
            if ( filter2Label )
            {
              UILabel__set_text(filter2Label, v69, 0LL);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
                if ( MasterData_WarQuestSelectionMaster )
                {
                  EventValUpEventIdList = EventMaster__GetEventValUpEventIdList(
                                            MasterData_WarQuestSelectionMaster,
                                            0,
                                            0LL);
                  this->fields.eventIdList = EventValUpEventIdList;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&this->fields.eventIdList,
                    (System_Int32_array **)EventValUpEventIdList,
                    v73,
                    v74,
                    v75,
                    v76,
                    v77,
                    v78);
                  if ( this->fields.isServantEquipBonusFilterEnable )
                  {
                    allFilterTitleLabel = this->fields.allFilterTitleLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_SORT_TITLE4"*/, 0LL);
                    if ( !allFilterTitleLabel )
                      goto LABEL_61;
                    UILabel__set_text(allFilterTitleLabel, v80, 0LL);
                    allFilterExplanationLabel = this->fields.allFilterExplanationLabel;
                    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11766/*"SERVANT_SORT_EXPLANATION3"*/, 0LL);
                    if ( !allFilterExplanationLabel )
                      goto LABEL_61;
                    UILabel__set_text(allFilterExplanationLabel, v82, 0LL);
                    allFilterClearLabel = this->fields.allFilterClearLabel;
                    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, 0LL);
                    if ( !allFilterClearLabel )
                      goto LABEL_61;
                    UILabel__set_text(allFilterClearLabel, v84, 0LL);
                    allFilterInitializeLabel = this->fields.allFilterInitializeLabel;
                    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_SORT_RESET"*/, 0LL);
                    if ( !allFilterInitializeLabel )
                      goto LABEL_61;
                    UILabel__set_text(allFilterInitializeLabel, v86, 0LL);
                    maxFilterTitleLabel = this->fields.maxFilterTitleLabel;
                    v88 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_SORT_TITLE5"*/, 0LL);
                    if ( !maxFilterTitleLabel )
                      goto LABEL_61;
                    UILabel__set_text(maxFilterTitleLabel, v88, 0LL);
                    maxFilterExplanationLabel = this->fields.maxFilterExplanationLabel;
                    v90 = LocalizationManager__Get((System_String_o *)StringLiteral_11767/*"SERVANT_SORT_EXPLANATION4"*/, 0LL);
                    if ( !maxFilterExplanationLabel )
                      goto LABEL_61;
                    UILabel__set_text(maxFilterExplanationLabel, v90, 0LL);
                    maxFilterClearLabel = this->fields.maxFilterClearLabel;
                    v92 = LocalizationManager__Get((System_String_o *)StringLiteral_11747/*"SERVANT_SORT_ALL_DISPLAY"*/, 0LL);
                    if ( !maxFilterClearLabel )
                      goto LABEL_61;
                    UILabel__set_text(maxFilterClearLabel, v92, 0LL);
                    maxFilterInitializeLabel = this->fields.maxFilterInitializeLabel;
                    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11889/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/, 0LL);
                    if ( !maxFilterInitializeLabel )
                      goto LABEL_61;
                    UILabel__set_text(maxFilterInitializeLabel, v94, 0LL);
                    individualFilterTitleLabel = this->fields.individualFilterTitleLabel;
                    v96 = LocalizationManager__Get((System_String_o *)StringLiteral_11896/*"SERVANT_SORT_TITLE6"*/, 0LL);
                    if ( !individualFilterTitleLabel )
                      goto LABEL_61;
                    UILabel__set_text(individualFilterTitleLabel, v96, 0LL);
                    individualFilterExplanationLabel = this->fields.individualFilterExplanationLabel;
                    v98 = LocalizationManager__Get((System_String_o *)StringLiteral_11768/*"SERVANT_SORT_EXPLANATION5"*/, 0LL);
                    if ( !individualFilterExplanationLabel )
                      goto LABEL_61;
                    UILabel__set_text(individualFilterExplanationLabel, v98, 0LL);
                    individualFilterInitializeLabel = this->fields.individualFilterInitializeLabel;
                    v100 = LocalizationManager__Get((System_String_o *)StringLiteral_11859/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/, 0LL);
                    if ( !individualFilterInitializeLabel )
                      goto LABEL_61;
                    UILabel__set_text(individualFilterInitializeLabel, v100, 0LL);
                    servantBonusFilterEquipComponent = this->fields.servantBonusFilterEquipComponent;
                    if ( !servantBonusFilterEquipComponent )
                      goto LABEL_61;
                    List = ServantBonusFilterEquipComponent__CreateList(
                             servantBonusFilterEquipComponent,
                             this->fields.eventIdList,
                             v101);
                    if ( !this->fields.individualFilterInitializeButton )
                      goto LABEL_61;
                    v104 = List;
                    v105 = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.individualFilterInitializeButton,
                             0LL);
                    v106 = ServantBonusFilterEquipComponent_TypeInfo;
                    if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
                      v106 = ServantBonusFilterEquipComponent_TypeInfo;
                    }
                    GameObjectExtensions__SetLocalPositionY(
                      v105,
                      14.0 - (float)(v106->static_fields->POS_Y_INTERVAL * (float)(v104 - 1)),
                      0LL);
                    v108 = this->fields.servantBonusFilterEquipComponent;
                    if ( !v108 )
                      goto LABEL_61;
                    ServantBonusFilterEquipComponent__SetInitButtonSelect(v108, v107);
                  }
                  else
                  {
                    titleLabel = this->fields.titleLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v110 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_SORT_TITLE3"*/, 0LL);
                    if ( !titleLabel )
                      goto LABEL_61;
                    UILabel__set_text(titleLabel, v110, 0LL);
                    explanationLabel = this->fields.explanationLabel;
                    v112 = LocalizationManager__Get((System_String_o *)StringLiteral_11766/*"SERVANT_SORT_EXPLANATION3"*/, 0LL);
                    if ( !explanationLabel )
                      goto LABEL_61;
                    UILabel__set_text(explanationLabel, v112, 0LL);
                    clearLabel = this->fields.clearLabel;
                    v114 = LocalizationManager__Get((System_String_o *)StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, 0LL);
                    if ( !clearLabel )
                      goto LABEL_61;
                    UILabel__set_text(clearLabel, v114, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_SORT_RESET"*/, 0LL);
                    if ( !initializeLabel )
                      goto LABEL_61;
                    UILabel__set_text(initializeLabel, v116, 0LL);
                  }
                  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
                  {
                    v119 = this->fields.scrollView;
                    if ( !v119 )
                      goto LABEL_61;
                    ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v119->klass->vtable._8_UpdateScrollbars.method)(
                      v119,
                      1LL,
                      v119->klass->vtable._9_SetDragAmount.methodPtr);
                  }
                  ServantBonusFilterSelectMenu__SetButtonSelect(this, v118);
                  ServantBonusFilterSelectMenu__SetButtonEnable(this, 1, v120);
                  v121 = this->fields.scrollView;
                  if ( v121 )
                  {
                    if ( *p_baseSortInfo )
                    {
                      v122 = *(UIProgressBar_o **)&v121->fields.showScrollBars;
                      if ( v122 )
                      {
                        UIProgressBar__set_value(v122, (*p_baseSortInfo)->fields.scrollBarValue, 0LL);
                        this->fields.state = 1;
                        v127 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v123, v124, v125, v126);
                        System_Action___ctor(
                          v127,
                          (Il2CppObject *)this,
                          Method_ServantBonusFilterSelectMenu_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v127, 0, 0LL);
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
LABEL_61:
    sub_B170D4();
  }
}


void __fastcall ServantBonusFilterSelectMenu__SetButtonEnable(
        ServantBonusFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w21
  UnityEngine_Behaviour_o *cancelButton; // x0
  UnityEngine_Component_o *filter1Button; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *filter2Button; // x0
  UnityEngine_GameObject_o *v11; // x0
  ServantBonusFilterSelectMenu_o *v12; // x0
  const MethodInfo *v13; // x3
  UICommonButton_o *v14; // x1
  UnityEngine_Behaviour_o *v15; // x0
  UnityEngine_Behaviour_o *v16; // x0
  UnityEngine_Behaviour_o *allFilterClearButton; // x0
  UnityEngine_Behaviour_o *allFilterInitializeButton; // x0
  UnityEngine_Behaviour_o *maxFilterClearButton; // x0
  UnityEngine_Behaviour_o *maxFilterInitializeButton; // x0
  const MethodInfo *v21; // x2
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0
  bool v23; // w20
  UnityEngine_Behaviour_o *initializeButton; // x0
  UnityEngine_Behaviour_o *clearButton; // x0

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_26;
  v5 = isEnable;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(cancelButton, v5, 0LL);
  filter1Button = (UnityEngine_Component_o *)this->fields.filter1Button;
  if ( !filter1Button )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject(filter1Button, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, this->fields.isServantBonusFilterEnable, 0LL);
  filter2Button = (UnityEngine_Component_o *)this->fields.filter2Button;
  if ( !filter2Button )
    goto LABEL_26;
  v11 = UnityEngine_Component__get_gameObject(filter2Button, 0LL);
  if ( !v11 )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(v11, this->fields.isServantEquipBonusFilterEnable, 0LL);
  if ( this->fields.isServantBonusFilterEnable )
  {
    if ( !this->fields.isServantEquipBonusFilterEnable )
    {
      v14 = this->fields.filter1Button;
LABEL_12:
      ServantBonusFilterSelectMenu__MoveButton(v12, v14, this->fields.button1PositionHorizontal, v13);
    }
  }
  else if ( this->fields.isServantEquipBonusFilterEnable )
  {
    v14 = this->fields.filter2Button;
    goto LABEL_12;
  }
  v15 = (UnityEngine_Behaviour_o *)this->fields.filter1Button;
  if ( !v15 )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(v15, isEnable, 0LL);
  v16 = (UnityEngine_Behaviour_o *)this->fields.filter2Button;
  if ( !v16 )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(v16, isEnable, 0LL);
  if ( !this->fields.isServantEquipBonusFilterEnable )
  {
    clearButton = (UnityEngine_Behaviour_o *)this->fields.clearButton;
    if ( clearButton )
    {
      v23 = isEnable;
      UnityEngine_Behaviour__set_enabled(clearButton, v23, 0LL);
      initializeButton = (UnityEngine_Behaviour_o *)this->fields.initializeButton;
      if ( initializeButton )
        goto LABEL_25;
    }
LABEL_26:
    sub_B170D4();
  }
  allFilterClearButton = (UnityEngine_Behaviour_o *)this->fields.allFilterClearButton;
  if ( !allFilterClearButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(allFilterClearButton, isEnable, 0LL);
  allFilterInitializeButton = (UnityEngine_Behaviour_o *)this->fields.allFilterInitializeButton;
  if ( !allFilterInitializeButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(allFilterInitializeButton, isEnable, 0LL);
  maxFilterClearButton = (UnityEngine_Behaviour_o *)this->fields.maxFilterClearButton;
  if ( !maxFilterClearButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(maxFilterClearButton, isEnable, 0LL);
  maxFilterInitializeButton = (UnityEngine_Behaviour_o *)this->fields.maxFilterInitializeButton;
  if ( !maxFilterInitializeButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(maxFilterInitializeButton, isEnable, 0LL);
  servantBonusFilterEquipComponent = this->fields.servantBonusFilterEquipComponent;
  if ( !servantBonusFilterEquipComponent )
    goto LABEL_26;
  v23 = isEnable;
  ServantBonusFilterEquipComponent__SetButtonEnable(servantBonusFilterEquipComponent, v23, v21);
  initializeButton = (UnityEngine_Behaviour_o *)this->fields.individualFilterInitializeButton;
  if ( !initializeButton )
    goto LABEL_26;
LABEL_25:
  UnityEngine_Behaviour__set_enabled(initializeButton, v23, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__SetButtonSelect(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *filter1Button; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UISprite_o *v7; // x20
  bool Filter; // w0
  System_String_o **v9; // x8
  UnityEngine_Component_o *filter2Button; // x0
  WebViewObject_o *v11; // x0
  UISprite_o *v12; // x20
  bool v13; // w0
  __int64 *v14; // x8
  UnityEngine_Component_o *maxFilterClearButton; // x0
  WebViewObject_o *v16; // x0
  UISprite_o *v17; // x20
  bool v18; // w0
  System_String_o **v19; // x8
  UnityEngine_Component_o *maxFilterInitializeButton; // x0
  WebViewObject_o *v21; // x0
  ListViewSort_o *operationSortInfo; // x8
  UISprite_o *v23; // x19
  bool v24; // w0
  __int64 *v25; // x8

  if ( (byte_40F94A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v3);
    sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v4);
    byte_40F94A4 = 1;
  }
  filter1Button = (UnityEngine_Component_o *)this->fields.filter1Button;
  if ( !filter1Button )
    goto LABEL_30;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              filter1Button,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v7 = (UISprite_o *)Component_WebViewObject;
  Filter = ListViewSort__GetFilter(this->fields.operationSortInfo, 18, 0LL);
  if ( !v7 )
    goto LABEL_30;
  v9 = (System_String_o **)(Filter ? &StringLiteral_16890/*"btn_bg_03"*/ : &StringLiteral_16891/*"btn_bg_04"*/);
  UISprite__set_spriteName(v7, *v9, 0LL);
  filter2Button = (UnityEngine_Component_o *)this->fields.filter2Button;
  if ( !filter2Button )
    goto LABEL_30;
  v11 = UnityEngine_Component__GetComponent_WebViewObject_(
          filter2Button,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v12 = (UISprite_o *)v11;
  v13 = ListViewSort__GetFilter(this->fields.operationSortInfo, 19, 0LL);
  if ( !v12 )
    goto LABEL_30;
  if ( v13 )
    v14 = &StringLiteral_16890/*"btn_bg_03"*/;
  else
    v14 = &StringLiteral_16891/*"btn_bg_04"*/;
  UISprite__set_spriteName(v12, (System_String_o *)*v14, 0LL);
  if ( this->fields.isServantEquipBonusFilterEnable )
  {
    maxFilterClearButton = (UnityEngine_Component_o *)this->fields.maxFilterClearButton;
    if ( maxFilterClearButton )
    {
      v16 = UnityEngine_Component__GetComponent_WebViewObject_(
              maxFilterClearButton,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( this->fields.operationSortInfo )
      {
        v17 = (UISprite_o *)v16;
        v18 = ListViewSort__GetFilter(this->fields.operationSortInfo, 40, 0LL);
        if ( v17 )
        {
          v19 = (System_String_o **)(v18 ? &StringLiteral_16890/*"btn_bg_03"*/ : &StringLiteral_16891/*"btn_bg_04"*/);
          UISprite__set_spriteName(v17, *v19, 0LL);
          maxFilterInitializeButton = (UnityEngine_Component_o *)this->fields.maxFilterInitializeButton;
          if ( maxFilterInitializeButton )
          {
            v21 = UnityEngine_Component__GetComponent_WebViewObject_(
                    maxFilterInitializeButton,
                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            operationSortInfo = this->fields.operationSortInfo;
            if ( operationSortInfo )
            {
              v23 = (UISprite_o *)v21;
              v24 = ListViewSort__GetFilter(operationSortInfo, 40, 0LL);
              if ( v23 )
              {
                if ( v24 )
                  v25 = &StringLiteral_16891/*"btn_bg_04"*/;
                else
                  v25 = &StringLiteral_16890/*"btn_bg_03"*/;
                UISprite__set_spriteName(v23, (System_String_o *)*v25, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_B170D4();
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

  if ( (byte_40F949D & 1) == 0 )
  {
    sub_B16FFC(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40F949D = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantBonusFilterSelectMenu_o *)sub_B173C8(v7);
  ServantBonusFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantBonusFilterSelectMenu__get_closeBtnPath(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F94AE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    byte_40F94AE = 1;
  }
  return (System_String_o *)StringLiteral_15414/*"Window/CancelButton"*/;
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

  if ( (byte_40F949E & 1) == 0 )
  {
    sub_B16FFC(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40F949E = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B173C8(v7);
  ServantBonusFilterSelectMenu__InitLoad(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterSelectMenu_CallbackFunc___ctor(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantBonusFilterSelectMenu_CallbackFunc__BeginInvoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_40F760B & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F760B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantBonusFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterSelectMenu_CallbackFunc__Invoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantBonusFilterSelectMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  ServantBonusFilterSelectMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ServantBonusFilterSelectMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ServantBonusFilterSelectMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}