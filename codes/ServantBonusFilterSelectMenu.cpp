void __fastcall ServantBonusFilterSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4187C1F & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&ServantBonusFilterSelectMenu_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_12706/*"ServantBonusFilterSelect1"*/, v3);
    byte_4187C1F = 1;
  }
  v4 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v4, (System_String_o *)StringLiteral_12706/*"ServantBonusFilterSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantBonusFilterSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall ServantBonusFilterSelectMenu___ctor(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4187C1E & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187C1E = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantBonusFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall ServantBonusFilterSelectMenu__Close(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantBonusFilterSelectMenu__Close_25368364(this, 0LL, v2);
}


void __fastcall ServantBonusFilterSelectMenu__Close_25368364(
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
  System_Action_o *v11; // x20

  if ( (byte_4187C12 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ServantBonusFilterSelectMenu_EndClose__, v10);
    byte_4187C12 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantBonusFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x19

  if ( (byte_4187C10 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v1);
    sub_B2C35C(&ServantBonusFilterSelectMenu_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4187C10 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (Instance = (DataManager_o *)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL)) == 0LL )
    {
      sub_B2C434(Instance, v6);
    }
    v7 = Instance;
    v4 = ServantBonusFilterSelectMenu_TypeInfo;
    if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      v4 = ServantBonusFilterSelectMenu_TypeInfo;
    }
    v4->static_fields->maxIndividualFilter = (int32_t)v7->fields.datalist;
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

  if ( (byte_4187C0F & 1) == 0 )
  {
    sub_B2C35C(&ServantBonusFilterSelectMenu_TypeInfo, v1);
    byte_4187C0F = 1;
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
    sub_B2C434(0LL, v1);
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

  if ( (byte_4187C0E & 1) == 0 )
  {
    sub_B2C35C(&ServantBonusFilterSelectMenu_TypeInfo, v1);
    byte_4187C0E = 1;
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
    sub_B2C434(0LL, v1);
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
    sub_B2C434(this, button);
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
  __int64 v3; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4187C1A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187C1A = 1;
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
      operationSortInfo = this->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        ListViewSort__SetFilter(operationSortInfo, 40, 1, 0LL);
        ServantBonusFilterSelectMenu__SetButtonSelect(this, v5);
        return;
      }
    }
    sub_B2C434(operationSortInfo, v3);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickCancel(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4187C15 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187C15 = 1;
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
  __int64 v3; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4187C16 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187C16 = 1;
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
      || (ListViewSort__SetFilter(operationSortInfo, 18, 0, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_B2C434(operationSortInfo, v3);
    }
    ListViewSort__SetFilter(operationSortInfo, 19, 0, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickDecide(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantBonusFilterSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x2
  float value; // s0
  struct System_Int32_array *eventIdList; // x21
  __int64 v12; // x8
  System_String_o *v13; // x20
  unsigned __int64 v14; // x22
  int v15; // w26
  Il2CppObject *v16; // x0
  ListViewSort_o *v17; // x20
  const MethodInfo *v18; // x2
  __int64 v19; // x0
  int v20; // [xsp+Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4187C14 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_2838/*"BonusFilterEventId"*/, v4);
    sub_B2C35C(&StringLiteral_699/*","*/, v5);
    this = (ServantBonusFilterSelectMenu_o *)sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4187C14 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    scrollView = v2->fields.scrollView;
    if ( !scrollView )
      goto LABEL_27;
    this = *(ServantBonusFilterSelectMenu_o **)&scrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_27;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_27;
    operationSortInfo->fields.scrollBarValue = value;
    ServantBonusFilterSelectMenu__SetButtonEnable(v2, 0, v9);
    v2->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    eventIdList = v2->fields.eventIdList;
    if ( eventIdList )
    {
      v12 = *(_QWORD *)&eventIdList->max_length;
      v13 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)v12 >= 1 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)v12 )
          {
            v19 = sub_B2C460(this);
            sub_B2C400(v19, 0LL);
          }
          if ( !v13 )
            break;
          v15 = eventIdList->m_Items[v14 + 1];
          if ( v13->fields.m_stringLength >= 1 )
            v13 = System_String__Concat_44305532(v13, (System_String_o *)StringLiteral_699/*","*/, 0LL);
          v20 = v15;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
          this = (ServantBonusFilterSelectMenu_o *)System_String__Concat((Il2CppObject *)v13, v16, 0LL);
          LODWORD(v12) = eventIdList->max_length;
          ++v14;
          v13 = (System_String_o *)this;
          if ( (__int64)v14 >= (int)v12 )
            goto LABEL_18;
        }
LABEL_27:
        sub_B2C434(this, method);
      }
LABEL_18:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2838/*"BonusFilterEventId"*/, v13, 0LL);
    }
    if ( v2->fields.isServantEquipBonusFilterEnable )
    {
      this = (ServantBonusFilterSelectMenu_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_27;
      v17 = v2->fields.operationSortInfo;
      this = (ServantBonusFilterSelectMenu_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                                 (ServantBonusFilterEquipComponent_o *)this,
                                                 method);
      if ( !v17 )
        goto LABEL_27;
      ListViewSort__SetFilter(v17, 41, ((unsigned __int8)this & 1) == 0, 0LL);
      this = (ServantBonusFilterSelectMenu_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_27;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)this, method);
    }
    this = (ServantBonusFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
      goto LABEL_27;
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    ServantBonusFilterSelectMenu__Callback(v2, 1, v18);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickFilter1(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4187C18 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187C18 = 1;
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
      sub_B2C434(0LL, v3);
    ListViewSort__SwitchFilter(operationSortInfo, 18, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickFilter2(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4187C19 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187C19 = 1;
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
      sub_B2C434(0LL, v3);
    ListViewSort__SwitchFilter(operationSortInfo, 19, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickInitialize(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_4187C17 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187C17 = 1;
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
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__SetFilter(operationSortInfo, 19, 1, 0LL);
      goto LABEL_13;
    }
LABEL_15:
    sub_B2C434(operationSortInfo, v3);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickMaxOnlyDisplay(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4187C1B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187C1B = 1;
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
      operationSortInfo = this->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        ListViewSort__SetFilter(operationSortInfo, 40, 0, 0LL);
        ServantBonusFilterSelectMenu__SetButtonSelect(this, v5);
        return;
      }
LABEL_12:
      sub_B2C434(operationSortInfo, v3);
    }
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickResetIndividual(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0

  if ( (byte_4187C1C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187C1C = 1;
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
      sub_B2C434(0LL, v3);
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
  ServantBonusFilterSelectMenu_c *v45; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v47; // x1
  const MethodInfo *v48; // x1
  ListViewSort_o *baseSortInfo; // x0
  ListViewSort_o *v50; // x21
  ListViewSort_o *v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *filter1Label; // x21
  UILabel_o *filter2Label; // x21
  struct System_Int32_array *EventValUpEventIdList; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
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
  const MethodInfo *v80; // x2
  int v81; // w21
  UnityEngine_GameObject_o *gameObject; // x22
  ServantBonusFilterEquipComponent_c *v83; // x8
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *initializeLabel; // x21
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v89; // x2
  struct UIScrollView_o *v90; // x9
  System_Action_o *v91; // x20

  if ( (byte_4187C11 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v14);
    sub_B2C35C(&ListViewSort_TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&ServantBonusFilterEquipComponent_TypeInfo, v18);
    sub_B2C35C(&Method_ServantBonusFilterSelectMenu_EndOpen__, v19);
    sub_B2C35C(&ServantBonusFilterSelectMenu_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_11940/*"SERVANT_SORT_RESET"*/, v22);
    sub_B2C35C(&StringLiteral_11817/*"SERVANT_SORT_EXPLANATION4"*/, v23);
    sub_B2C35C(&StringLiteral_11944/*"SERVANT_SORT_TITLE4"*/, v24);
    sub_B2C35C(&StringLiteral_11818/*"SERVANT_SORT_EXPLANATION5"*/, v25);
    sub_B2C35C(&StringLiteral_11943/*"SERVANT_SORT_TITLE3"*/, v26);
    sub_B2C35C(&StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, v27);
    sub_B2C35C(&StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, v28);
    sub_B2C35C(&StringLiteral_11797/*"SERVANT_SORT_ALL_DISPLAY"*/, v29);
    sub_B2C35C(&StringLiteral_11939/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/, v30);
    sub_B2C35C(&StringLiteral_11816/*"SERVANT_SORT_EXPLANATION3"*/, v31);
    sub_B2C35C(&StringLiteral_11852/*"SERVANT_SORT_FILTER_KIND_20"*/, v32);
    sub_B2C35C(&StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/, v33);
    sub_B2C35C(&StringLiteral_11946/*"SERVANT_SORT_TITLE6"*/, v34);
    sub_B2C35C(&StringLiteral_11850/*"SERVANT_SORT_FILTER_KIND_19"*/, v35);
    sub_B2C35C(&StringLiteral_11945/*"SERVANT_SORT_TITLE5"*/, v36);
    sub_B2C35C(&StringLiteral_11909/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/, v37);
    byte_4187C11 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
    this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
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
      sub_B2C2F8(
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
      v45 = ServantBonusFilterSelectMenu_TypeInfo;
      if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
        v45 = ServantBonusFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v45->static_fields->commonServantSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      v47 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)v47,
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
    v50 = this->fields.baseSortInfo;
    v51 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
    ListViewSort___ctor_33914748(v51, v50, 0LL);
    this->fields.operationSortInfo = v51;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( baseSortInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
      decideLabel = this->fields.decideLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
        cancelLabel = this->fields.cancelLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
          filter1Label = this->fields.filter1Label;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11850/*"SERVANT_SORT_FILTER_KIND_19"*/, 0LL);
          if ( filter1Label )
          {
            UILabel__set_text(filter1Label, (System_String_o *)baseSortInfo, 0LL);
            filter2Label = this->fields.filter2Label;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11852/*"SERVANT_SORT_FILTER_KIND_20"*/, 0LL);
            if ( filter2Label )
            {
              UILabel__set_text(filter2Label, (System_String_o *)baseSortInfo, 0LL);
              baseSortInfo = (ListViewSort_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( baseSortInfo )
              {
                baseSortInfo = (ListViewSort_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)baseSortInfo,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
                if ( baseSortInfo )
                {
                  EventValUpEventIdList = EventMaster__GetEventValUpEventIdList((EventMaster_o *)baseSortInfo, 0, 0LL);
                  this->fields.eventIdList = EventValUpEventIdList;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&this->fields.eventIdList,
                    (System_Int32_array **)EventValUpEventIdList,
                    v63,
                    v64,
                    v65,
                    v66,
                    v67,
                    v68);
                  if ( this->fields.isServantEquipBonusFilterEnable )
                  {
                    allFilterTitleLabel = this->fields.allFilterTitleLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11944/*"SERVANT_SORT_TITLE4"*/,
                                                       0LL);
                    if ( !allFilterTitleLabel )
                      goto LABEL_61;
                    UILabel__set_text(allFilterTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                    allFilterExplanationLabel = this->fields.allFilterExplanationLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11816/*"SERVANT_SORT_EXPLANATION3"*/,
                                                       0LL);
                    if ( !allFilterExplanationLabel )
                      goto LABEL_61;
                    UILabel__set_text(allFilterExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                    allFilterClearLabel = this->fields.allFilterClearLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/,
                                                       0LL);
                    if ( !allFilterClearLabel )
                      goto LABEL_61;
                    UILabel__set_text(allFilterClearLabel, (System_String_o *)baseSortInfo, 0LL);
                    allFilterInitializeLabel = this->fields.allFilterInitializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11940/*"SERVANT_SORT_RESET"*/,
                                                       0LL);
                    if ( !allFilterInitializeLabel )
                      goto LABEL_61;
                    UILabel__set_text(allFilterInitializeLabel, (System_String_o *)baseSortInfo, 0LL);
                    maxFilterTitleLabel = this->fields.maxFilterTitleLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11945/*"SERVANT_SORT_TITLE5"*/,
                                                       0LL);
                    if ( !maxFilterTitleLabel )
                      goto LABEL_61;
                    UILabel__set_text(maxFilterTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                    maxFilterExplanationLabel = this->fields.maxFilterExplanationLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11817/*"SERVANT_SORT_EXPLANATION4"*/,
                                                       0LL);
                    if ( !maxFilterExplanationLabel )
                      goto LABEL_61;
                    UILabel__set_text(maxFilterExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                    maxFilterClearLabel = this->fields.maxFilterClearLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11797/*"SERVANT_SORT_ALL_DISPLAY"*/,
                                                       0LL);
                    if ( !maxFilterClearLabel )
                      goto LABEL_61;
                    UILabel__set_text(maxFilterClearLabel, (System_String_o *)baseSortInfo, 0LL);
                    maxFilterInitializeLabel = this->fields.maxFilterInitializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11939/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/,
                                                       0LL);
                    if ( !maxFilterInitializeLabel )
                      goto LABEL_61;
                    UILabel__set_text(maxFilterInitializeLabel, (System_String_o *)baseSortInfo, 0LL);
                    individualFilterTitleLabel = this->fields.individualFilterTitleLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11946/*"SERVANT_SORT_TITLE6"*/,
                                                       0LL);
                    if ( !individualFilterTitleLabel )
                      goto LABEL_61;
                    UILabel__set_text(individualFilterTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                    individualFilterExplanationLabel = this->fields.individualFilterExplanationLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11818/*"SERVANT_SORT_EXPLANATION5"*/,
                                                       0LL);
                    if ( !individualFilterExplanationLabel )
                      goto LABEL_61;
                    UILabel__set_text(individualFilterExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                    individualFilterInitializeLabel = this->fields.individualFilterInitializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11909/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/,
                                                       0LL);
                    if ( !individualFilterInitializeLabel )
                      goto LABEL_61;
                    UILabel__set_text(individualFilterInitializeLabel, (System_String_o *)baseSortInfo, 0LL);
                    baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                    if ( !baseSortInfo )
                      goto LABEL_61;
                    baseSortInfo = (ListViewSort_o *)ServantBonusFilterEquipComponent__CreateList(
                                                       (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                       this->fields.eventIdList,
                                                       v80);
                    if ( !this->fields.individualFilterInitializeButton )
                      goto LABEL_61;
                    v81 = (int)baseSortInfo;
                    gameObject = UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)this->fields.individualFilterInitializeButton,
                                   0LL);
                    v83 = ServantBonusFilterEquipComponent_TypeInfo;
                    if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
                      v83 = ServantBonusFilterEquipComponent_TypeInfo;
                    }
                    GameObjectExtensions__SetLocalPositionY(
                      gameObject,
                      14.0 - (float)(v83->static_fields->POS_Y_INTERVAL * (float)(v81 - 1)),
                      0LL);
                    baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                    if ( !baseSortInfo )
                      goto LABEL_61;
                    ServantBonusFilterEquipComponent__SetInitButtonSelect(
                      (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                      v48);
                  }
                  else
                  {
                    titleLabel = this->fields.titleLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11943/*"SERVANT_SORT_TITLE3"*/,
                                                       0LL);
                    if ( !titleLabel )
                      goto LABEL_61;
                    UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
                    explanationLabel = this->fields.explanationLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11816/*"SERVANT_SORT_EXPLANATION3"*/,
                                                       0LL);
                    if ( !explanationLabel )
                      goto LABEL_61;
                    UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
                    clearLabel = this->fields.clearLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/,
                                                       0LL);
                    if ( !clearLabel )
                      goto LABEL_61;
                    UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11940/*"SERVANT_SORT_RESET"*/,
                                                       0LL);
                    if ( !initializeLabel )
                      goto LABEL_61;
                    UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
                  }
                  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
                  {
                    baseSortInfo = (ListViewSort_o *)this->fields.scrollView;
                    if ( !baseSortInfo )
                      goto LABEL_61;
                    ((void (__fastcall *)(ListViewSort_o *, __int64, Il2CppClass *))baseSortInfo->klass[1]._1.castClass)(
                      baseSortInfo,
                      1LL,
                      baseSortInfo->klass[1]._1.declaringType);
                  }
                  ServantBonusFilterSelectMenu__SetButtonSelect(this, v48);
                  ServantBonusFilterSelectMenu__SetButtonEnable(this, 1, v89);
                  v90 = this->fields.scrollView;
                  if ( v90 )
                  {
                    if ( *p_baseSortInfo )
                    {
                      baseSortInfo = *(ListViewSort_o **)&v90->fields.showScrollBars;
                      if ( baseSortInfo )
                      {
                        UIProgressBar__set_value(
                          (UIProgressBar_o *)baseSortInfo,
                          (*p_baseSortInfo)->fields.scrollBarValue,
                          0LL);
                        this->fields.state = 1;
                        v91 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                        System_Action___ctor(
                          v91,
                          (Il2CppObject *)this,
                          Method_ServantBonusFilterSelectMenu_EndOpen__,
                          0LL);
                        BaseDialog__Open((BaseDialog_o *)this, v91, 0, 0LL);
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
    sub_B2C434(baseSortInfo, v48);
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
  bool v11; // w20

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
      v11 = isEnable;
      UnityEngine_Behaviour__set_enabled(decideButton, v11, 0LL);
      decideButton = (UnityEngine_Behaviour_o *)this->fields.initializeButton;
      if ( decideButton )
        goto LABEL_25;
    }
LABEL_26:
    sub_B2C434(decideButton, isEnable);
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
  v11 = isEnable;
  ServantBonusFilterEquipComponent__SetButtonEnable((ServantBonusFilterEquipComponent_o *)decideButton, v11, v10);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.individualFilterInitializeButton;
  if ( !decideButton )
    goto LABEL_26;
LABEL_25:
  UnityEngine_Behaviour__set_enabled(decideButton, v11, 0LL);
}


void __fastcall ServantBonusFilterSelectMenu__SetButtonSelect(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *filter1Button; // x0
  UISprite_o *v6; // x20
  System_String_o **v7; // x8
  UISprite_o *v8; // x20
  __int64 *v9; // x8
  UISprite_o *v10; // x20
  System_String_o **v11; // x8
  ListViewSort_o *operationSortInfo; // x8
  UISprite_o *v13; // x19
  __int64 *v14; // x8

  if ( (byte_4187C13 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v3);
    sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v4);
    byte_4187C13 = 1;
  }
  filter1Button = (UnityEngine_Component_o *)this->fields.filter1Button;
  if ( !filter1Button )
    goto LABEL_30;
  filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               filter1Button,
                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v6 = (UISprite_o *)filter1Button;
  filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 18, 0LL);
  if ( !v6 )
    goto LABEL_30;
  v7 = (System_String_o **)(((unsigned __int8)filter1Button & 1) != 0 ? &StringLiteral_16956/*"btn_bg_03"*/ : &StringLiteral_16957/*"btn_bg_04"*/);
  UISprite__set_spriteName(v6, *v7, 0LL);
  filter1Button = (UnityEngine_Component_o *)this->fields.filter2Button;
  if ( !filter1Button )
    goto LABEL_30;
  filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               filter1Button,
                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v8 = (UISprite_o *)filter1Button;
  filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 19, 0LL);
  if ( !v8 )
    goto LABEL_30;
  if ( ((unsigned __int8)filter1Button & 1) != 0 )
    v9 = &StringLiteral_16956/*"btn_bg_03"*/;
  else
    v9 = &StringLiteral_16957/*"btn_bg_04"*/;
  UISprite__set_spriteName(v8, (System_String_o *)*v9, 0LL);
  if ( this->fields.isServantEquipBonusFilterEnable )
  {
    filter1Button = (UnityEngine_Component_o *)this->fields.maxFilterClearButton;
    if ( filter1Button )
    {
      filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   filter1Button,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( this->fields.operationSortInfo )
      {
        v10 = (UISprite_o *)filter1Button;
        filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 40, 0LL);
        if ( v10 )
        {
          v11 = (System_String_o **)(((unsigned __int8)filter1Button & 1) != 0
                                   ? &StringLiteral_16956/*"btn_bg_03"*/
                                   : &StringLiteral_16957/*"btn_bg_04"*/);
          UISprite__set_spriteName(v10, *v11, 0LL);
          filter1Button = (UnityEngine_Component_o *)this->fields.maxFilterInitializeButton;
          if ( filter1Button )
          {
            filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         filter1Button,
                                                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            operationSortInfo = this->fields.operationSortInfo;
            if ( operationSortInfo )
            {
              v13 = (UISprite_o *)filter1Button;
              filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(operationSortInfo, 40, 0LL);
              if ( v13 )
              {
                if ( ((unsigned __int8)filter1Button & 1) != 0 )
                  v14 = &StringLiteral_16957/*"btn_bg_04"*/;
                else
                  v14 = &StringLiteral_16956/*"btn_bg_03"*/;
                UISprite__set_spriteName(v13, (System_String_o *)*v14, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_B2C434(filter1Button, method);
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

  if ( (byte_4187C0C & 1) == 0 )
  {
    sub_B2C35C(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4187C0C = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantBonusFilterSelectMenu_o *)sub_B2C728(v7);
  ServantBonusFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantBonusFilterSelectMenu__get_closeBtnPath(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187C1D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15477/*"Window/CancelButton"*/, method);
    byte_4187C1D = 1;
  }
  return (System_String_o *)StringLiteral_15477/*"Window/CancelButton"*/;
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

  if ( (byte_4187C0D & 1) == 0 )
  {
    sub_B2C35C(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4187C0D = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B2C728(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41853C7 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41853C7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantBonusFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterSelectMenu_CallbackFunc__Invoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantBonusFilterSelectMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  ServantBonusFilterSelectMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ServantBonusFilterSelectMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantBonusFilterSelectMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}