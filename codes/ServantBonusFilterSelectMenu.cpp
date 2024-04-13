void __fastcall ServantBonusFilterSelectMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ListViewSort_o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E993D & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ServantBonusFilterSelectMenu_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_12857/*"ServantBonusFilterSelect1"*/, v7, v8, v9);
    byte_42E993D = 1;
  }
  v10 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v10, (System_String_o *)StringLiteral_12857/*"ServantBonusFilterSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantBonusFilterSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall ServantBonusFilterSelectMenu___ctor(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E993C & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E993C = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantBonusFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall ServantBonusFilterSelectMenu__Close(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantBonusFilterSelectMenu__Close_26936032(this, 0LL, v2);
}


void __fastcall ServantBonusFilterSelectMenu__Close_26936032(
        ServantBonusFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E9930 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantBonusFilterSelectMenu_EndClose__, v10, v11, v12);
    byte_42E9930 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantBonusFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall ServantBonusFilterSelectMenu__EndOpen(ServantBonusFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall ServantBonusFilterSelectMenu__GetMaxIndividualFilter(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ServantBonusFilterSelectMenu_c *v10; // x0
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataManager_o *v13; // x19

  if ( (byte_42E992E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v1, v2, v3);
    sub_B5D5C4(&ServantBonusFilterSelectMenu_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E992E = 1;
  }
  v10 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v10 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  if ( v10->static_fields->maxIndividualFilter <= 0 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
      || (Instance = (DataManager_o *)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL)) == 0LL )
    {
      sub_B5D69C(Instance, v12);
    }
    v13 = Instance;
    v10 = ServantBonusFilterSelectMenu_TypeInfo;
    if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
      v10 = ServantBonusFilterSelectMenu_TypeInfo;
    }
    v10->static_fields->maxIndividualFilter = (int32_t)v13->fields.datalist;
    v10->static_fields->maxIndividualFilter += 20;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  return v10->static_fields->maxIndividualFilter;
}


ListViewSort_o *__fastcall ServantBonusFilterSelectMenu__GetServantFilterInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  ServantBonusFilterSelectMenu_c *v4; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_42E992D & 1) == 0 )
  {
    sub_B5D5C4(&ServantBonusFilterSelectMenu_TypeInfo, v1, v2, v3);
    byte_42E992D = 1;
  }
  v4 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v4 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v4->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B5D69C(0LL, v1);
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
  int v2; // w2
  __int64 v3; // x3
  ServantBonusFilterSelectMenu_c *v4; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_42E992C & 1) == 0 )
  {
    sub_B5D5C4(&ServantBonusFilterSelectMenu_TypeInfo, v1, v2, v3);
    byte_42E992C = 1;
  }
  v4 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
    v4 = ServantBonusFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v4->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B5D69C(0LL, v1);
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
    sub_B5D69C(this, button);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E9938 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9938 = 1;
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
        ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
        return;
      }
    }
    sub_B5D69C(operationSortInfo, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickCancel(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E9933 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9933 = 1;
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
    ServantBonusFilterSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickClear(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E9934 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9934 = 1;
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
      sub_B5D69C(operationSortInfo, v5);
    }
    ListViewSort__SetFilter(operationSortInfo, 19, 0, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickDecide(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantBonusFilterSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v19; // x2
  float value; // s0
  struct System_Int32_array *eventIdList; // x21
  __int64 v22; // x8
  System_String_o *v23; // x20
  unsigned __int64 v24; // x22
  int v25; // w26
  Il2CppObject *v26; // x0
  ListViewSort_o *v27; // x20
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_42E9932 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2893/*"BonusFilterEventId"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_707/*","*/, v11, v12, v13);
    this = (ServantBonusFilterSelectMenu_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E9932 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    scrollView = v4->fields.scrollView;
    if ( !scrollView )
      goto LABEL_27;
    this = *(ServantBonusFilterSelectMenu_o **)&scrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_27;
    operationSortInfo = v4->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_27;
    operationSortInfo->fields.scrollBarValue = value;
    ServantBonusFilterSelectMenu__SetButtonEnable(v4, 0, v19);
    v4->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    eventIdList = v4->fields.eventIdList;
    if ( eventIdList )
    {
      v22 = *(_QWORD *)&eventIdList->max_length;
      v23 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)v22 >= 1 )
      {
        v24 = 0LL;
        while ( 1 )
        {
          if ( v24 >= (unsigned int)v22 )
          {
            v29 = sub_B5D6C8(this);
            sub_B5D668(v29, 0LL);
          }
          if ( !v23 )
            break;
          v25 = eventIdList->m_Items[v24 + 1];
          if ( v23->fields.m_stringLength >= 1 )
            v23 = System_String__Concat_44577788(v23, (System_String_o *)StringLiteral_707/*","*/, 0LL);
          v30 = v25;
          v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
          this = (ServantBonusFilterSelectMenu_o *)System_String__Concat((Il2CppObject *)v23, v26, 0LL);
          LODWORD(v22) = eventIdList->max_length;
          ++v24;
          v23 = (System_String_o *)this;
          if ( (__int64)v24 >= (int)v22 )
            goto LABEL_18;
        }
LABEL_27:
        sub_B5D69C(this, method);
      }
LABEL_18:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2893/*"BonusFilterEventId"*/, v23, 0LL);
    }
    if ( v4->fields.isServantEquipBonusFilterEnable )
    {
      this = (ServantBonusFilterSelectMenu_o *)v4->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_27;
      v27 = v4->fields.operationSortInfo;
      this = (ServantBonusFilterSelectMenu_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                                 (ServantBonusFilterEquipComponent_o *)this,
                                                 method);
      if ( !v27 )
        goto LABEL_27;
      ListViewSort__SetFilter(v27, 41, ((unsigned __int8)this & 1) == 0, 0LL);
      this = (ServantBonusFilterSelectMenu_o *)v4->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_27;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)this, method);
    }
    this = (ServantBonusFilterSelectMenu_o *)v4->fields.baseSortInfo;
    if ( !this )
      goto LABEL_27;
    ListViewSort__Set((ListViewSort_o *)this, v4->fields.operationSortInfo, 0LL);
    ServantBonusFilterSelectMenu__Callback(v4, 1, v28);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickFilter1(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E9936 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9936 = 1;
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
      sub_B5D69C(0LL, v5);
    ListViewSort__SwitchFilter(operationSortInfo, 18, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickFilter2(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E9937 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9937 = 1;
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
      sub_B5D69C(0LL, v5);
    ListViewSort__SwitchFilter(operationSortInfo, 19, 0LL);
    ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickInitialize(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_42E9935 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9935 = 1;
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
      ServantBonusFilterSelectMenu__SetButtonSelect(this, v5);
      return;
    }
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__SetFilter(operationSortInfo, 19, 1, 0LL);
      goto LABEL_13;
    }
LABEL_15:
    sub_B5D69C(operationSortInfo, v5);
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickMaxOnlyDisplay(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E9939 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9939 = 1;
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
        ServantBonusFilterSelectMenu__SetButtonSelect(this, v7);
        return;
      }
LABEL_12:
      sub_B5D69C(operationSortInfo, v5);
    }
  }
}


void __fastcall ServantBonusFilterSelectMenu__OnClickResetIndividual(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0

  if ( (byte_42E993A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E993A = 1;
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
      sub_B5D69C(0LL, v5);
    ServantBonusFilterEquipComponent__ResetIndividualFilter(servantBonusFilterEquipComponent, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  ServantBonusFilterSelectMenu_c *v88; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v90; // x1
  const MethodInfo *v91; // x1
  ListViewSort_o *baseSortInfo; // x0
  ListViewSort_o *v93; // x22
  ListViewSort_o *v94; // x23
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *filter1Label; // x22
  UILabel_o *filter2Label; // x22
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
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
  const MethodInfo *v122; // x2
  int v123; // w21
  UnityEngine_GameObject_o *gameObject; // x22
  ServantBonusFilterEquipComponent_c *v125; // x8
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *initializeLabel; // x21
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v131; // x2
  struct UIScrollView_o *v132; // x9
  System_Action_o *v133; // x20

  if ( (byte_42E992F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, isServantBonusFilterEnable, isServantEquipBonusFilterEnable);
    sub_B5D5C4(&ListViewSort_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantBonusFilterEquipComponent_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_ServantBonusFilterSelectMenu_EndOpen__, v27, v28, v29);
    sub_B5D5C4(&ServantBonusFilterSelectMenu_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12089/*"SERVANT_SORT_RESET"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_11947/*"SERVANT_SORT_EXPLANATION4"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12093/*"SERVANT_SORT_TITLE4"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_11948/*"SERVANT_SORT_EXPLANATION5"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_12092/*"SERVANT_SORT_TITLE3"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_11927/*"SERVANT_SORT_ALL_DISPLAY"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_12088/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_11946/*"SERVANT_SORT_EXPLANATION3"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_11984/*"SERVANT_SORT_FILTER_KIND_20"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_12095/*"SERVANT_SORT_TITLE6"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_11982/*"SERVANT_SORT_FILTER_KIND_19"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_12094/*"SERVANT_SORT_TITLE5"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_12058/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/, v78, v79, v80);
    byte_42E992F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.isServantBonusFilterEnable = isServantBonusFilterEnable;
    this->fields.isServantEquipBonusFilterEnable = isServantEquipBonusFilterEnable;
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)isServantBonusFilterEnable,
      (System_String_array **)isServantEquipBonusFilterEnable,
      (System_Boolean_array **)equipBonusFilterEventIds,
      (System_Int32_array **)sort,
      (System_Int32_array *)callback,
      (System_Int32_array *)method);
    if ( sort )
    {
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
    }
    else
    {
      v88 = ServantBonusFilterSelectMenu_TypeInfo;
      if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
        v88 = ServantBonusFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v88->static_fields->commonServantSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      v90 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)v90,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_59;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    v93 = this->fields.baseSortInfo;
    v94 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
    ListViewSort___ctor_34029496(v94, v93, 0LL);
    this->fields.operationSortInfo = v94;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v94,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
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
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
        cancelLabel = this->fields.cancelLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
          filter1Label = this->fields.filter1Label;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11982/*"SERVANT_SORT_FILTER_KIND_19"*/, 0LL);
          if ( filter1Label )
          {
            UILabel__set_text(filter1Label, (System_String_o *)baseSortInfo, 0LL);
            filter2Label = this->fields.filter2Label;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11984/*"SERVANT_SORT_FILTER_KIND_20"*/, 0LL);
            if ( filter2Label )
            {
              UILabel__set_text(filter2Label, (System_String_o *)baseSortInfo, 0LL);
              this->fields.eventIdList = equipBonusFilterEventIds;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.eventIdList,
                (System_Int32_array **)equipBonusFilterEventIds,
                v105,
                v106,
                v107,
                v108,
                v109,
                v110);
              if ( this->fields.isServantEquipBonusFilterEnable )
              {
                allFilterTitleLabel = this->fields.allFilterTitleLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12093/*"SERVANT_SORT_TITLE4"*/, 0LL);
                if ( !allFilterTitleLabel )
                  goto LABEL_59;
                UILabel__set_text(allFilterTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                allFilterExplanationLabel = this->fields.allFilterExplanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11946/*"SERVANT_SORT_EXPLANATION3"*/, 0LL);
                if ( !allFilterExplanationLabel )
                  goto LABEL_59;
                UILabel__set_text(allFilterExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                allFilterClearLabel = this->fields.allFilterClearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( !allFilterClearLabel )
                  goto LABEL_59;
                UILabel__set_text(allFilterClearLabel, (System_String_o *)baseSortInfo, 0LL);
                allFilterInitializeLabel = this->fields.allFilterInitializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SERVANT_SORT_RESET"*/, 0LL);
                if ( !allFilterInitializeLabel )
                  goto LABEL_59;
                UILabel__set_text(allFilterInitializeLabel, (System_String_o *)baseSortInfo, 0LL);
                maxFilterTitleLabel = this->fields.maxFilterTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12094/*"SERVANT_SORT_TITLE5"*/, 0LL);
                if ( !maxFilterTitleLabel )
                  goto LABEL_59;
                UILabel__set_text(maxFilterTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                maxFilterExplanationLabel = this->fields.maxFilterExplanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_SORT_EXPLANATION4"*/, 0LL);
                if ( !maxFilterExplanationLabel )
                  goto LABEL_59;
                UILabel__set_text(maxFilterExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                maxFilterClearLabel = this->fields.maxFilterClearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11927/*"SERVANT_SORT_ALL_DISPLAY"*/, 0LL);
                if ( !maxFilterClearLabel )
                  goto LABEL_59;
                UILabel__set_text(maxFilterClearLabel, (System_String_o *)baseSortInfo, 0LL);
                maxFilterInitializeLabel = this->fields.maxFilterInitializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SERVANT_SORT_MAX_ONLY_DISPLAY"*/, 0LL);
                if ( !maxFilterInitializeLabel )
                  goto LABEL_59;
                UILabel__set_text(maxFilterInitializeLabel, (System_String_o *)baseSortInfo, 0LL);
                individualFilterTitleLabel = this->fields.individualFilterTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12095/*"SERVANT_SORT_TITLE6"*/, 0LL);
                if ( !individualFilterTitleLabel )
                  goto LABEL_59;
                UILabel__set_text(individualFilterTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                individualFilterExplanationLabel = this->fields.individualFilterExplanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_SORT_EXPLANATION5"*/, 0LL);
                if ( !individualFilterExplanationLabel )
                  goto LABEL_59;
                UILabel__set_text(individualFilterExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                individualFilterInitializeLabel = this->fields.individualFilterInitializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12058/*"SERVANT_SORT_INDIVIDUAL_CLEAR"*/, 0LL);
                if ( !individualFilterInitializeLabel )
                  goto LABEL_59;
                UILabel__set_text(individualFilterInitializeLabel, (System_String_o *)baseSortInfo, 0LL);
                baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                if ( !baseSortInfo )
                  goto LABEL_59;
                baseSortInfo = (ListViewSort_o *)ServantBonusFilterEquipComponent__CreateList(
                                                   (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                   this->fields.eventIdList,
                                                   v122);
                if ( !this->fields.individualFilterInitializeButton )
                  goto LABEL_59;
                v123 = (int)baseSortInfo;
                gameObject = UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)this->fields.individualFilterInitializeButton,
                               0LL);
                v125 = ServantBonusFilterEquipComponent_TypeInfo;
                if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
                  v125 = ServantBonusFilterEquipComponent_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(
                  gameObject,
                  14.0 - (float)(v125->static_fields->POS_Y_INTERVAL * (float)(v123 - 1)),
                  0LL);
                baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                if ( !baseSortInfo )
                  goto LABEL_59;
                ServantBonusFilterEquipComponent__SetInitButtonSelect(
                  (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                  v91);
              }
              else
              {
                titleLabel = this->fields.titleLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SERVANT_SORT_TITLE3"*/, 0LL);
                if ( !titleLabel )
                  goto LABEL_59;
                UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
                explanationLabel = this->fields.explanationLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11946/*"SERVANT_SORT_EXPLANATION3"*/, 0LL);
                if ( !explanationLabel )
                  goto LABEL_59;
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( !clearLabel )
                  goto LABEL_59;
                UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                initializeLabel = this->fields.initializeLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SERVANT_SORT_RESET"*/, 0LL);
                if ( !initializeLabel )
                  goto LABEL_59;
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
                  goto LABEL_59;
                ((void (__fastcall *)(ListViewSort_o *, __int64, Il2CppClass *))baseSortInfo->klass[1]._1.castClass)(
                  baseSortInfo,
                  1LL,
                  baseSortInfo->klass[1]._1.declaringType);
              }
              ServantBonusFilterSelectMenu__SetButtonSelect(this, v91);
              ServantBonusFilterSelectMenu__SetButtonEnable(this, 1, v131);
              v132 = this->fields.scrollView;
              if ( v132 )
              {
                if ( *p_baseSortInfo )
                {
                  baseSortInfo = *(ListViewSort_o **)&v132->fields.showScrollBars;
                  if ( baseSortInfo )
                  {
                    UIProgressBar__set_value(
                      (UIProgressBar_o *)baseSortInfo,
                      (*p_baseSortInfo)->fields.scrollBarValue,
                      0LL);
                    this->fields.state = 1;
                    v133 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                    System_Action___ctor(v133, (Il2CppObject *)this, Method_ServantBonusFilterSelectMenu_EndOpen__, 0LL);
                    BaseDialog__Open((BaseDialog_o *)this, v133, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_B5D69C(baseSortInfo, v91);
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
    sub_B5D69C(decideButton, isEnable);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *filter1Button; // x0
  UISprite_o *v12; // x20
  System_String_o **v13; // x8
  UISprite_o *v14; // x20
  __int64 *v15; // x8
  UISprite_o *v16; // x20
  System_String_o **v17; // x8
  ListViewSort_o *operationSortInfo; // x8
  UISprite_o *v19; // x19
  __int64 *v20; // x8

  if ( (byte_42E9931 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v8, v9, v10);
    byte_42E9931 = 1;
  }
  filter1Button = (UnityEngine_Component_o *)this->fields.filter1Button;
  if ( !filter1Button )
    goto LABEL_30;
  filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               filter1Button,
                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v12 = (UISprite_o *)filter1Button;
  filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 18, 0LL);
  if ( !v12 )
    goto LABEL_30;
  v13 = (System_String_o **)(((unsigned __int8)filter1Button & 1) != 0 ? &StringLiteral_17165/*"btn_bg_03"*/ : &StringLiteral_17166/*"btn_bg_04"*/);
  UISprite__set_spriteName(v12, *v13, 0LL);
  filter1Button = (UnityEngine_Component_o *)this->fields.filter2Button;
  if ( !filter1Button )
    goto LABEL_30;
  filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                               filter1Button,
                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !this->fields.operationSortInfo )
    goto LABEL_30;
  v14 = (UISprite_o *)filter1Button;
  filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 19, 0LL);
  if ( !v14 )
    goto LABEL_30;
  if ( ((unsigned __int8)filter1Button & 1) != 0 )
    v15 = &StringLiteral_17165/*"btn_bg_03"*/;
  else
    v15 = &StringLiteral_17166/*"btn_bg_04"*/;
  UISprite__set_spriteName(v14, (System_String_o *)*v15, 0LL);
  if ( this->fields.isServantEquipBonusFilterEnable )
  {
    filter1Button = (UnityEngine_Component_o *)this->fields.maxFilterClearButton;
    if ( filter1Button )
    {
      filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   filter1Button,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( this->fields.operationSortInfo )
      {
        v16 = (UISprite_o *)filter1Button;
        filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(this->fields.operationSortInfo, 40, 0LL);
        if ( v16 )
        {
          v17 = (System_String_o **)(((unsigned __int8)filter1Button & 1) != 0
                                   ? &StringLiteral_17165/*"btn_bg_03"*/
                                   : &StringLiteral_17166/*"btn_bg_04"*/);
          UISprite__set_spriteName(v16, *v17, 0LL);
          filter1Button = (UnityEngine_Component_o *)this->fields.maxFilterInitializeButton;
          if ( filter1Button )
          {
            filter1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         filter1Button,
                                                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            operationSortInfo = this->fields.operationSortInfo;
            if ( operationSortInfo )
            {
              v19 = (UISprite_o *)filter1Button;
              filter1Button = (UnityEngine_Component_o *)ListViewSort__GetFilter(operationSortInfo, 40, 0LL);
              if ( v19 )
              {
                if ( ((unsigned __int8)filter1Button & 1) != 0 )
                  v20 = &StringLiteral_17166/*"btn_bg_04"*/;
                else
                  v20 = &StringLiteral_17165/*"btn_bg_03"*/;
                UISprite__set_spriteName(v19, (System_String_o *)*v20, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_B5D69C(filter1Button, method);
  }
}


void __fastcall ServantBonusFilterSelectMenu__add_callbackFunc(
        ServantBonusFilterSelectMenu_o *this,
        ServantBonusFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantBonusFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantBonusFilterSelectMenu_o *v11; // x0
  ServantBonusFilterSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E992A & 1) == 0 )
  {
    sub_B5D5C4(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E992A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantBonusFilterSelectMenu_CallbackFunc_c *)v8->klass != ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantBonusFilterSelectMenu_o *)sub_B5D990(v8);
  ServantBonusFilterSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantBonusFilterSelectMenu__get_closeBtnPath(
        ServantBonusFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E993B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42E993B = 1;
  }
  return (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/;
}


void __fastcall ServantBonusFilterSelectMenu__remove_callbackFunc(
        ServantBonusFilterSelectMenu_o *this,
        ServantBonusFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantBonusFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42E992B & 1) == 0 )
  {
    sub_B5D5C4(&ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E992B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantBonusFilterSelectMenu_CallbackFunc_c *)v8->klass != ServantBonusFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_B5D990(v8);
  ServantBonusFilterSelectMenu__InitLoad(v11);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5D37 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5D37 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ServantBonusFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantBonusFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  ServantBonusFilterSelectMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ServantBonusFilterSelectMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}